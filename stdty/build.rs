use std::env;
use std::path::Path;

fn main() {
    #[rustfmt::skip]
    cc::Build::new()
        .file("src/cxx.cc")
        .cpp(true)
        .define("__STDTY_MAP_BOOL",
            if cfg!(feature = "map_bool") { Some("1") } else { None }
        )
        .define("__STDTY_MAP_U8",
            if cfg!(feature = "map_u8") { Some("1") } else { None }
        )
        .define("__STDTY_MAP_U16",
            if cfg!(feature = "map_u16") { Some("1") } else { None }
        )
        .define("__STDTY_MAP_U32",
            if cfg!(feature = "map_u32") { Some("1") } else { None }
        )
        .define("__STDTY_MAP_U64",
            if cfg!(feature = "map_u64") { Some("1") } else { None }
        )
        .define("__STDTY_MAP_I8",
            if cfg!(feature = "map_i8") { Some("1") } else { None }
        )
        .define("__STDTY_MAP_I16",
            if cfg!(feature = "map_i16") { Some("1") } else { None }
        )
        .define("__STDTY_MAP_I32",
            if cfg!(feature = "map_i32") { Some("1") } else { None }
        )
        .define("__STDTY_MAP_I64",
            if cfg!(feature = "map_i64") { Some("1") } else { None }
        )
        .define("__STDTY_MAP_USIZE",
            if cfg!(feature = "map_usize") { Some("1") } else { None }
        )
        .define("__STDTY_MAP_ISIZE",
            if cfg!(feature = "map_isize") { Some("1") } else { None }
        )
        .define("__STDTY_MAP_STRING",
            if cfg!(feature = "map_string") { Some("1") } else { None }
        )
        .define("__STDTY_MAP_F32",
            if cfg!(feature = "map_f32") { Some("1") } else { None }
        )
        .define("__STDTY_MAP_F64",
            if cfg!(feature = "map_f64") { Some("1") } else { None }
        )
        .cpp_link_stdlib(None)
        .flag_if_supported(cxxbridge_flags::STD)
        .warnings_into_errors(cfg!(deny_warnings))
        .compile("stdtybridge");

    println!("cargo:rerun-if-changed=src/cxx.cc");
    println!("cargo:rerun-if-changed=include/cxx.h");
    println!("cargo:rustc-cfg=built_with_cargo");

    if let Some(manifest_dir) = env::var_os("CARGO_MANIFEST_DIR") {
        let cxx_h = Path::new(&manifest_dir).join("include").join("cxx.h");
        println!("cargo:HEADER={}", cxx_h.to_string_lossy());
    }

    ///////////////////
    ///
    cc::Build::new()
        .file("test.cc")
        .cpp(true)
        .cpp_link_stdlib(None)
        .flag_if_supported(cxxbridge_flags::STD)
        .compile("test");
}
