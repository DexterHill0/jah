use std::{fs::File, io::Write};

fn main() {
    println!("cargo:rerun-if-changed=src/cxx.cc");
    println!("cargo:rerun-if-changed=include/cxx.h");

    // generates CXX's rust headers
    cxx_build::bridge("src/lib.rs").compile("stdty");

    cc::Build::new()
        .file("src/cxx.cc")
        .cpp(true)
        .cpp_link_stdlib(None)
        .flag_if_supported(cxxbridge_flags::STD)
        .warnings_into_errors(cfg!(deny_warnings))
        .compile("stdtybridge");

    generate_cxx();

    ///////////////////
    cc::Build::new()
        .file("test.cc")
        .cpp(true)
        .cpp_link_stdlib(None)
        .flag_if_supported(cxxbridge_flags::STD)
        .compile("test");
}

// fuck c++ macros all my homies hate c++ macros
fn generate_cxx() {
    const CXX_TO_RUST_TYPES: &[(&str, &str)] = &[
        ("std::int16_t", "i16"),
        ("bool", "bool"),
        ("std::string", "string"),
    ];

    const RUST_TO_CXX_TYPES: &[(&str, &str)] = &[
        ("std::int16_t", "i16"),
        ("bool", "bool"),
        ("rust::string", "string"),
    ];

    let mut extern_c = std::string::String::new();
    let mut rust_namespace = std::string::String::new();
    let mut entries = std::string::String::new();

    for (key_cpp, key_rust) in CXX_TO_RUST_TYPES {
        for (value_cpp, value_rust) in CXX_TO_RUST_TYPES {
            extern_c += &format!(
                r#"
void stdtybridge$std$map$k${key_rust}$v${value_rust}$insert(
    std::map<{key_cpp}, {value_cpp}> *m, {key_cpp} *key, {value_cpp} *value) noexcept {{
    m->insert({{std::move(*key), std::move(*value)}});
    destroy(key);
    destroy(value);
}}

{value_cpp} &stdtybridge$std$map$k${key_rust}$v${value_rust}$get_unchecked(
    std::map<{key_cpp}, {value_cpp}> *m, {key_cpp} *key) noexcept {{
        return m->at(*key);
    }}
    
{value_cpp} &stdtybridge$std$map$k${key_rust}$v${value_rust}$get_unchecked_mut(
    std::map<{key_cpp}, {value_cpp}> *m, {key_cpp} *key) noexcept {{
    return m->at(*key);
}}
    
bool stdtybridge$std$map$k${key_rust}$v${value_rust}$contains_key(
    std::map<{key_cpp}, {value_cpp}> *m, {key_cpp} *key) noexcept {{
        return m->count(*key) > 0;
}}
        
const {key_cpp} &stdtybridge$std$map$k${key_rust}$v${value_rust}$key_by_index(
    std::map<{key_cpp}, {value_cpp}> *m, std::size_t index) noexcept {{
    auto it = m->begin();
    std::advance(it, index);
    return it->first;
}}
            
const {value_cpp} &stdtybridge$std$map$k${key_rust}$v${value_rust}$value_by_index(
    std::map<{key_cpp}, {value_cpp}> *m, std::size_t index) noexcept {{
    auto it = m->begin();
    std::advance(it, index);
    return it->second;
}}
                
std::size_t stdtybridge$std$map$k${key_rust}$v${value_rust}$len(
    std::map<{key_cpp}, {value_cpp}> *m) noexcept {{
    return m->size();
}}

void stdtybridge$std$map$k${key_rust}$v${value_rust}$clear(
    std::map<{key_cpp}, {value_cpp}> *m) noexcept {{
    m->clear();
}}
    
// std::unique_ptr<std::map<..>>
void stdtybridge$unique_ptr$std$map$k${key_rust}$v${value_rust}$null(std::unique_ptr<std::map<{key_cpp}, {value_cpp}>> *ptr) noexcept {{
    new (ptr) std::unique_ptr<std::map<{key_cpp}, {value_cpp}>>();
}}

void stdtybridge$unique_ptr$std$map$k${key_rust}$v${value_rust}$raw(std::unique_ptr<std::map<{key_cpp}, {value_cpp}>> *ptr,
    std::map<{key_cpp}, {value_cpp}> *raw) noexcept {{
    new (ptr) std::unique_ptr<std::map<{key_cpp}, {value_cpp}>>(raw);
}}

const std::map<{key_cpp}, {value_cpp}> *stdtybridge$unique_ptr$std$map$k${key_rust}$v${value_rust}$get(const std::unique_ptr<std::map<{key_cpp}, {value_cpp}>> &ptr) noexcept {{
    return ptr.get();
}}

std::map<{key_cpp}, {value_cpp}> *stdtybridge$unique_ptr$std$map$k${key_rust}$v${value_rust}$release(std::unique_ptr<std::map<{key_cpp}, {value_cpp}>> &ptr) noexcept {{
    return ptr.release();
}}

void stdtybridge$unique_ptr$std$map$k${key_rust}$v${value_rust}$drop(std::unique_ptr<std::map<{key_cpp}, {value_cpp}>> *ptr) noexcept {{
    ptr->~unique_ptr();
}}
"#
            );
        }
    }

    for (key_cpp, key_rust) in RUST_TO_CXX_TYPES {
        for (value_cpp, value_rust) in RUST_TO_CXX_TYPES {
            extern_c += &format!(
                r#"
void stdtybridge$rust_map$k${key_rust}$v${value_rust}$drop(rust::Map<{key_cpp}, {value_cpp}, entries::__K{key_rust}V{value_rust}MapEntry> *ptr) noexcept;

entries::__K{key_rust}V{value_rust}MapEntry stdtybridge$rust_map$k${key_rust}$v${value_rust}$pop_first(const rust::Map<{key_cpp}, {value_cpp}, entries::__K{key_rust}V{value_rust}MapEntry> *ptr) noexcept;
std::size_t stdtybridge$rust_map$k${key_rust}$v${value_rust}$len(const rust::Map<{key_cpp}, {value_cpp}, entries::__K{key_rust}V{value_rust}MapEntry> *ptr) noexcept;
            "#
            );

            rust_namespace += &format!(
                r#"

template <>
void Map<{key_cpp}, {value_cpp}, entries::__K{key_rust}V{value_rust}MapEntry>::drop() noexcept {{
    return stdtybridge$rust_map$k${key_rust}$v${value_rust}$drop(this);
}}

template <>
entries::__K{key_rust}V{value_rust}MapEntry Map<{key_cpp}, {value_cpp}, entries::__K{key_rust}V{value_rust}MapEntry>::pop_first() noexcept {{
    return stdtybridge$rust_map$k${key_rust}$v${value_rust}$pop_first(this);
}}

template <>
std::size_t Map<{key_cpp}, {value_cpp}, entries::__K{key_rust}V{value_rust}MapEntry>::size() const noexcept {{
    return stdtybridge$rust_map$k${key_rust}$v${value_rust}$len(this);
}}
"#
            );
            entries += &format!(
                r#"
struct __K{key_rust}V{value_rust}MapEntry {{
    {key_cpp} key;
    {value_cpp} value;
}};    
            "#
            );
        }
    }

    let mut file = File::create("src/cxx.cc").unwrap();
    file.write_all(
        format!(
            r#"
#include "../include/cxx.h"

template <typename T>
void destroy(T *ptr) {{
    ptr->~T();
}}  

extern "C" {{
    {extern_c}
}}

namespace rust {{
inline namespace stdtybridge {{
{rust_namespace}
}}
}}

    "#
        )
        .as_bytes(),
    )
    .unwrap();

    let mut file = File::create("include/cxx.h").unwrap();
    file.write_all(
        format!(
            r#"
#pragma once
#include <array>
#include <map>
#include <memory>
#include <string>

#include "../target/cxxbridge/rust/cxx.h"

namespace entries {{
{entries}
}}

namespace rust {{
inline namespace stdtybridge {{
#ifndef STDTYBRIDGE_RUST_MAP
template <typename K, typename V, typename Entry>
class Map final {{
public:
    using key_type = K;
    using value_type = V;
    using entry_type = Entry;

    Entry pop_first() noexcept;
    std::size_t size() const noexcept;

    ~Map() noexcept;

    private:
    void drop() noexcept;

    // for size and alignment (verified in rust_map.rs)
    std::array<std::uintptr_t, 3> repr;
}};
#endif

#ifndef STDTYBRIDGE_RUST_MAP
#define STDTYBRIDGE_RUST_MAP

template <typename K, typename V, typename Entry>
Map<K, V, Entry>::~Map() noexcept {{
this->drop();
}}

#endif  // STDTYBRIDGE_RUST_MAP
}}  // namespace stdtybridge
}}  // namespace rust
    "#
        )
        .as_bytes(),
    )
    .unwrap();
}
