use std::collections::HashMap;

use bruma::{BaseType, BromaData, Class, Member, RefType, SpecialType, Type};
use convert_case::{Case, Casing};

use super::get_address;

#[derive(Debug)]
struct StructDef<'a> {
    modules: Vec<&'a str>,
    name: &'a str,
}

fn get_struct_def(name: &str) -> StructDef {
    let mut split = name.split("::").collect::<Vec<_>>();
    let last = split.pop().expect("missing class name");

    StructDef {
        modules: split,
        name: last,
    }
}

fn get_acronym(name: &str) -> String {
    name.chars()
        .filter(|c| c.is_uppercase())
        .collect::<String>()
}

fn format_type(typ: &Type) -> String {
    let base = match &typ.base {
        BaseType::Raw(s) => s.replace("::", "_"),
        BaseType::Special(s) => match s {
            SpecialType::STDArray { typ, size } => format!("[{}; {}]", format_type(typ), size),
            SpecialType::Vector(typ) => format!("cxx::CxxVector<{}>", format_type(typ)),
            SpecialType::GDMap { key, value } => {
                format!("todo!({}, {})", format_type(key), format_type(value))
            }
            SpecialType::GDString => "cxx::CxxString".into(),
        },
    };

    let mut base = match (base.as_str(), typ.unsigned) {
        ("int", false) => "i32",
        ("int", true) => "u32",
        ("short", false) => "i16",
        ("short", true) => "u16",
        ("long", false) => "i64",
        ("long", true) => "u64",
        ("char", false) => "i8",
        ("char", true) => "u8",
        ("float", _) => "f32",
        ("double", _) => "f64",
        ("void", _) => "core::ffi::c_void",
        (t, _) => t,
    }
    .to_string();

    let mut iter = typ.ref_types.iter();
    if let Some(first) = iter.next() {
        base = match (first, typ.is_const) {
            (RefType::Ref, false) => format!("&mut {base}"),
            (RefType::Ref, true) => format!("&{base}"),
            (RefType::Pointer, false) => format!("*mut {base}"),
            (RefType::Pointer, true) => format!("*const {base}"),
        };

        for typ in iter {
            base = match typ {
                RefType::Ref => format!("&{base}"),
                RefType::Pointer => format!("*const {base}"),
            }
        }
    }

    base
}

#[derive(Clone, Debug)]
enum IMember<'m> {
    Raw(&'m Member),
    Unk { name: String, typ: String },
}

fn get_members<'m>(class: &'m Class, data: &'m BromaData) -> Vec<IMember<'m>> {
    let mut members = vec![];

    for ext in &class.extends {
        match data.get(ext) {
            Some(v) => members.extend_from_slice(&get_members(v, data)),
            None => {
                members.push(IMember::Unk {
                    name: format!("{}{}", get_acronym(ext), members.len()),
                    typ: ext.clone(),
                });
            }
        }
    }

    for m in &class.members {
        members.push(IMember::Raw(m));
    }

    members
}

fn format_members(members: &[IMember]) -> String {
    let mut fmtd = vec![];
    let mut is_deprecated = false;

    for (i, m) in members.iter().enumerate() {
        let mut formatted = if is_deprecated {
            r#"#[deprecated(note = "this member is misaligned on this os (do not use)")]"#
                .to_string()
                + "\n    "
        } else {
            "".into()
        };

        formatted += &match m {
            IMember::Raw(m) => match m {
                Member::Member { typ, name } => {
                    format!("pub {}: {}", name.to_case(Case::Snake), format_type(typ))
                }
                Member::Padding(by) => match get_address(by) {
                    Some(addr) => format!("_pad{i}: [bool; 0x{addr:X}]",),
                    None => {
                        is_deprecated = true;
                        format!("_unk_pad{i}: ()")
                    }
                },
            },
            IMember::Unk { name, typ } => format!("pub {}: {typ}", name.to_case(Case::Snake)),
        };

        fmtd.push(formatted)
    }

    fmtd.join(",\n    ")
}

pub fn gen_structs(classes: &BromaData, modules: &mut HashMap<String, String>) -> String {
    let mut out = String::new();

    for (k, v) in classes.iter() {
        let def = get_struct_def(k);
        let members = get_members(v, classes);

        out += &format!(
            r#"#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct {name} {{
    {members}
}}
"#,
            name = def.name,
            members = format_members(&members)
        );
        out += "\n";
    }

    out
}
