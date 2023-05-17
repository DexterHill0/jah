mod cxx_map;
use std::{collections::BTreeMap, fs::File, io::Write, pin::Pin};

use cxx::{let_cxx_string, CxxString, CxxVector, UniquePtr};
use cxx_map::CxxMap;

mod rust_map;
// use rust_map::RustMap;

pub type Map<K, V> = UniquePtr<CxxMap<K, V>>;
pub type Vector<T> = UniquePtr<CxxVector<T>>;
pub type String = UniquePtr<CxxString>;

// empty bridge not sure if it's necessary
#[cxx::bridge]
mod ffi {}

// fuck c++ macros all my homies hate c++ macros
#[test]
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

#include "rust/cxx.h"

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

#[macro_export]
macro_rules! s {
    ($ident:ident) => {
        ::cxx::let_cxx_string!($ident = $ident)
    };
    ($var:ident = $ident:expr) => {
        ::cxx::let_cxx_string!($var = $ident)
    };
}

// fn get<'a>() -> UniquePtr<CxxMap<i16, i16>> {
//     extern "C" {
//         #[link_name = "?get@@YAPEAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_JU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_J@std@@@2@@std@@XZ"]
//         fn get<'a>() -> *mut CxxMap<i16, i16>;

//     }
//     unsafe { UniquePtr::from_raw(get()) }
// }

// extern "C" {
//     #[link_name = "?pass@@YAXAEAV?$Map@VString@cxxbridge1@rust@@EU__KstringVboolMapEntry@entries@@@stdtybridge@rust@@@Z"]
//     fn pass<'a>(map: &BTreeMap<std::string::String, bool>);
// }

#[test]
fn test() {
    // let mut map: BTreeMap<std::string::String, bool> = BTreeMap::new();
    // map.insert("aaa".into(), false);
    // map.insert("bbb".into(), true);

    // unsafe { pass(&map) };
}
