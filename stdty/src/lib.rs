mod cxx_map;
use std::{collections::BTreeMap, fs::File, io::Write, pin::Pin};

use cxx::{let_cxx_string, CxxString, CxxVector, UniquePtr};
use cxx_map::CxxMap;

mod rust_map;
use rust_map::RustMap;

pub type Map<K, V> = UniquePtr<CxxMap<K, V>>;
pub type Vector<T> = UniquePtr<CxxVector<T>>;
pub type String = UniquePtr<CxxString>;

#[test]
fn generate() {}

// fuck c++ macros all my homies hate c++ macros
#[test]
#[rustfmt::skip]
fn generate_cxx() {
    const TYPES: &[(&str, &str)] = &[
        ("std::uint8_t", "u8"),
        ("std::uint16_t", "u16"),
        ("std::uint32_t", "u32"),
        ("std::uint64_t", "u64"),
        ("std::int8_t", "i8"),
        ("std::int16_t", "i16"),
        ("std::int32_t", "i32"),
        ("std::int64_t", "i64"),
        ("std::size_t", "usize"),
        ("rust::isize", "isize"),
        ("bool", "bool"),
        ("std::string", "string"),
    ];

    let mut code = std::string::String::from("");

    for (key_cpp, key_rust) in TYPES {
        for (value_cpp, value_rust) in TYPES {
            let k_rust_up = key_rust.to_uppercase();
            let v_rust_up = value_rust.to_uppercase();
            code += &format!(
                r#"
#if __STDTY_MAP_{k_rust_up} && __STDTY_MAP_{v_rust_up}

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
#endif"#
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
    {code}
}}

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

// fn get<'a>() -> UniquePtr<CxxMap<CxxString, CxxString>> {
//     extern "C" {
//         #[link_name = "?get@@YAPEAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_JU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_J@std@@@2@@std@@XZ"]
//         fn get<'a>() -> *mut CxxMap<CxxString, CxxString>;

//     }
//     unsafe { UniquePtr::from_raw(get()) }
// }

// #[test]
// fn test() {
//     let m = get();

//     let key = "b";
//     s!(key);
//     dbg!(m.get(&key));
//     let key = "a";
//     s!(key);
//     dbg!(m.get(&key));

//     let key = "e";
//     s!(key);
//     dbg!(m.get(&key));

//     let key = "c";
//     s!(key);
//     dbg!(m.get(&key));

//     let key = "d";
//     s!(key);
//     dbg!(m.get(&key));
// }
