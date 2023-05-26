use proc_macro::TokenStream;
use proc_macro2::{Span, TokenStream as TokenStream2};
use quote::{format_ident, quote, ToTokens};
use syn::{
    parse_str, FnArg, ForeignItem, ForeignItemFn, ImplItem, ImplItemMethod, Item, ItemFn, ItemMod,
    Path, PathArguments, ReturnType, Signature, Type, TypePath, TypePtr,
};

trait Method {
    fn sig(&self) -> &Signature;
    fn sig_mut(&mut self) -> &mut Signature;
}

impl Method for ItemFn {
    fn sig(&self) -> &Signature {
        &self.sig
    }
    fn sig_mut(&mut self) -> &mut Signature {
        &mut self.sig
    }
}

impl Method for ImplItemMethod {
    fn sig(&self) -> &Signature {
        &self.sig
    }
    fn sig_mut(&mut self) -> &mut Signature {
        &mut self.sig
    }
}

impl Method for ForeignItemFn {
    fn sig(&self) -> &Signature {
        &self.sig
    }
    fn sig_mut(&mut self) -> &mut Signature {
        &mut self.sig
    }
}

#[derive(Copy, Clone)]
enum TypeKind {
    Argument,
    Return,
    Member,
}

enum MethodLoc {
    Impl,
    Extern,
}

fn replace_path(p: &Path, kind: TypeKind) -> Option<Path> {
    let segments = p.segments.iter();
    let mut idents = vec![];
    let mut generics = None;

    for s in segments {
        idents.push(s.ident.to_string());
        match &s.arguments {
            PathArguments::None => (),
            PathArguments::AngleBracketed(b) => {
                generics = Some(b);
                break;
            }
            PathArguments::Parenthesized(_) => (),
        }
    }

    match &idents.join("::")[..] {
        "root::std::vector" => {
            let v = match kind {
                TypeKind::Argument => {
                    format!("::std::vec::Vec<{}>", generics?.args[0].to_token_stream())
                }
                TypeKind::Return => {
                    format!("::stdty::Vector<{}", generics?.args[0].to_token_stream())
                }
                TypeKind::Member => format!(
                    "::stdty::PaddedVector<{}>",
                    generics?.args[0].to_token_stream()
                ),
            };
            parse_str::<Path>(&v).ok()
        }
        "root::std::map" => {
            let v = match kind {
                TypeKind::Argument => {
                    format!(
                        "::std::collections::BTreeMap<{}, {}>",
                        generics?.args[0].to_token_stream(),
                        generics?.args[1].to_token_stream()
                    )
                }
                TypeKind::Return => {
                    format!(
                        "::stdty::Map<{}, {}>",
                        generics?.args[0].to_token_stream(),
                        generics?.args[1].to_token_stream()
                    )
                }
                TypeKind::Member => format!(
                    "::stdty::PaddedMap<{}, {}>",
                    generics?.args[0].to_token_stream(),
                    generics?.args[1].to_token_stream()
                ),
            };
            parse_str::<Path>(&v).ok()
        }
        "root::std::string" => parse_str::<Path>(match kind {
            TypeKind::Argument => "::std::string::String",
            TypeKind::Return => "::stdty::String",
            TypeKind::Member => "::stdty::PaddedString",
        })
        .ok(),
        _ => None,
    }
}

fn replace_type(ty: &Type, kind: TypeKind) -> Option<Type> {
    match ty {
        Type::Path(p) => replace_path(&p.path, kind).map(|np| match kind {
            TypeKind::Argument | TypeKind::Member => Type::Path(TypePath {
                qself: None,
                path: np,
            }),
            TypeKind::Return => Type::Ptr(TypePtr {
                star_token: syn::token::Star {
                    spans: [Span::call_site()],
                },
                const_token: None,
                mutability: Some(syn::token::Mut {
                    span: Span::call_site(),
                }),
                elem: Box::new(Type::Path(TypePath {
                    qself: None,
                    path: np,
                })),
            }),
        }),
        Type::Ptr(p) => replace_type(&p.elem, kind),
        Type::Reference(r) => replace_type(&r.elem, kind),
        _ => None,
    }
}

fn create_wrapper_func(
    _fn: &impl Method,
    raw_fn: proc_macro2::Ident,
    loc: MethodLoc,
) -> TokenStream2 {
    let name = &_fn.sig().ident;
    let args = &_fn.sig().inputs;
    let ret = match &_fn.sig().output {
        ReturnType::Default => quote! { () },
        ReturnType::Type(_, ty) => match &**ty {
            Type::Path(p) => quote! { #p },
            Type::Ptr(p) => {
                let t = &p.elem;
                quote! { #t }
            }
            Type::Reference(r) => {
                let t = &r.elem;
                quote! { #t }
            }
            _ => unreachable!(),
        },
    };

    // let mut is_self = false;

    let arg_names = args.iter().map(|arg| match arg {
        FnArg::Receiver(r) => {
            quote! { #r }
        }
        FnArg::Typed(t) => {
            let name = &t.pat;
            quote! { #name }
        }
    });

    let _self = if matches!(loc, MethodLoc::Impl) {
        quote! {
            Self:: #raw_fn
        }
    } else {
        quote! {
            #raw_fn
        }
    };

    quote! {
        pub unsafe fn #name(#args) -> ::cxx::UniquePtr<#ret> {
            ::cxx::UniquePtr::from_raw(#_self(#(#arg_names),*))
        }
    }
}

fn handle_method(_fn: &mut (impl Method + Clone), loc: MethodLoc) -> proc_macro2::TokenStream {
    let mut out = TokenStream2::new();

    for arg in _fn.sig_mut().inputs.iter_mut() {
        match arg {
            FnArg::Receiver(..) => continue,
            FnArg::Typed(t) => {
                if let Some(rt) = replace_type(&t.ty, TypeKind::Argument) {
                    t.ty = Box::new(rt);
                }
            }
        }
    }

    match &mut _fn.sig_mut().output {
        ReturnType::Default => (),
        ReturnType::Type(_, ty) => {
            if let Some(rt) = replace_type(ty, TypeKind::Return) {
                *ty = Box::new(rt);

                let raw_name = format_ident!("__raw_{}", _fn.sig().ident.clone());
                let wrapper = create_wrapper_func(_fn, raw_name.clone(), loc);
                _fn.sig_mut().ident = raw_name;

                out.extend(wrapper);
            }
        }
    };

    out
}

pub fn replace_types(items: &mut ItemMod) -> TokenStream {
    let mut out = TokenStream2::new();

    if let Some(items) = items.content.as_mut() {
        for item in items.1.iter_mut() {
            match item {
                Item::Fn(_fn) => out.extend(handle_method(_fn, MethodLoc::Extern)),
                Item::Struct(_struct) => {
                    for field in _struct.fields.iter_mut() {
                        if let Some(rt) = replace_type(&field.ty, TypeKind::Member) {
                            field.ty = rt;
                        }
                    }
                    out.extend(_struct.to_token_stream());
                }
                Item::Impl(_impl) => {
                    let mut toks = TokenStream2::new();

                    for item in _impl.items.iter_mut() {
                        match item {
                            ImplItem::Method(_fn) => {
                                toks.extend(handle_method(_fn, MethodLoc::Impl))
                            }
                            _ => continue,
                        }
                    }

                    let attrs = &_impl.attrs;
                    let generics = &_impl.generics;
                    let _unsafe = &_impl.unsafety;
                    let impl_items = &_impl.items;
                    let self_ty = &_impl.self_ty;
                    let path = _impl.trait_.clone().map_or_else(
                        || quote! { #self_ty },
                        |(bang, _trait, _for)| {
                            quote! {
                                #bang #_trait #_for
                            }
                        },
                    );

                    out.extend(quote! {
                        #(#attrs)*
                        #_unsafe impl #generics #path {
                            #toks
                            #(#impl_items)*
                        }
                    });
                }
                Item::ForeignMod(_extern) => {
                    for item in _extern.items.iter_mut() {
                        match item {
                            ForeignItem::Fn(_fn) => {
                                out.extend(handle_method(_fn, MethodLoc::Extern))
                            }
                            _ => continue,
                        }
                    }
                    out.extend(_extern.to_token_stream());
                }
                a => out.extend(a.to_token_stream()),
            }
        }
    }

    out.into()
}
