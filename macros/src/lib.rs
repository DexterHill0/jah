mod replace_types;

use proc_macro::TokenStream;
use replace_types::replace_types;
use syn::{parse_macro_input, ItemMod};

#[proc_macro]
pub fn __replace_types(tokens: TokenStream) -> TokenStream {
    let mut items = parse_macro_input!(tokens as ItemMod);

    let toks: proc_macro2::TokenStream = replace_types(&mut items).into();
    let attrs = items.attrs;
    let name = items.ident;

    quote::quote! {
       #(#attrs)*
       pub mod #name {
            #toks
       }
    }
    .into()
}
