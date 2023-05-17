use std::{env, path::Path};

fn main() {
    // println!("cargo:rerun-if-changed=src/cxx.cc");
    // println!("cargo:rerun-if-changed=include/cxx.h");
    // println!("cargo:rustc-cfg=built_with_cargo");

    // generates CXX's rust headers
    cxx_build::bridge("src/lib.rs").compile("stdty");

    cc::Build::new()
        .file("src/cxx.cc")
        .cpp(true)
        .cpp_link_stdlib(None)
        .flag_if_supported(cxxbridge_flags::STD)
        .warnings_into_errors(cfg!(deny_warnings))
        .compile("stdtybridge");

    if let Some(manifest_dir) = env::var_os("CARGO_MANIFEST_DIR") {
        let cxx_h = Path::new(&manifest_dir).join("include").join("cxx.h");
        println!("cargo:HEADER={}", cxx_h.to_string_lossy());
    }

    ///////////////////
    cc::Build::new()
        .file("test.cc")
        .cpp(true)
        .cpp_link_stdlib(None)
        .flag_if_supported(cxxbridge_flags::STD)
        .compile("test");
}
