pub(crate) mod gen_structs;

use std::collections::HashMap;

use bruma::Addresses;
use convert_case::{Case, Casing};

const BINDINGS_OUT: &str = concat!(env!("CARGO_MANIFEST_DIR"), "/bindings");

pub(crate) fn format_name(name: &str) -> String {
    name.to_case(Case::Snake)
}

pub(crate) fn get_address(addr: &Addresses) -> Option<u64> {
    #[cfg(target_os = "windows")]
    {
        addr.win
    }
    #[cfg(target_os = "macos")]
    {
        addr.mac
    }
    #[cfg(target_os = "ios")]
    {
        addr.ios
    }
    #[cfg(target_os = "android")]
    {
        addr.android
    }
}

#[test]
fn codegen() {
    let classes = match bruma::parse_files_concat(&["../GeometryDash.bro", "../Cocos2d.bro"]) {
        Ok(a) => a,
        Err((err, code)) => {
            err.print_error(&code);
            std::process::exit(1);
        }
    };

    let mut modules = HashMap::new();

    let code = gen_structs::gen_structs(&classes, &mut modules);

    let mut file = std::fs::File::create("bindings.rs").unwrap();
    std::io::Write::write_all(&mut file, code.as_bytes()).unwrap();
}
