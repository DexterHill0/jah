mod cxx_map;
use std::{
    collections::BTreeMap,
    ffi::c_void,
    fs::File,
    io::Write,
    mem::{self, MaybeUninit},
    ops::{Deref, DerefMut},
    pin::Pin,
};

use cxx::{let_cxx_string, private::RustVec, CxxString, CxxVector, UniquePtr};
use cxx_map::CxxMap;

mod rust_map;

/// C++ `std::vector` -> Rust
pub type Vector<T> = CxxVector<T>;

/// Used in rust representations of C++ structs. It needs to function like `CxxVector`, but as `CxxVector` is a ZST
/// that would cause the struct to be misaligned. Although `RustVec` is the right size, it only aligns with `rust::Vec`,
/// and not `std::vector` therefore it won't suffice.
/// Instead, this struct holds its own `CxxVector` to keep the functionality, but is padded to allow it to be used where aligment matters.
#[repr(C)]
pub struct PaddedVector<T: cxx::vector::VectorElement> {
    v: cxx::CxxVector<T>,
    _pad: [MaybeUninit<usize>; mem::size_of::<Vec<c_void>>() / mem::size_of::<usize>()],
}

impl<T: cxx::vector::VectorElement> Deref for PaddedVector<T> {
    type Target = cxx::CxxVector<T>;
    fn deref(&self) -> &Self::Target {
        &self.v
    }
}

impl<T: cxx::vector::VectorElement> DerefMut for PaddedVector<T> {
    fn deref_mut(&mut self) -> &mut Self::Target {
        &mut self.v
    }
}

/// C++ `std::string` -> Rust
pub type String = CxxString;

/// Used in rust representations of C++ structs. It needs to function like `CxxString`, but as `CxxString` is a ZST
/// that would cause the struct to be misaligned. Although `RustString` is the right size, it only aligns with `rust::String`,
/// and not `std::string` therefore it won't suffice.
/// Instead, this struct holds its own `CxxString` to keep the functionality, but is padded to allow it to be used where aligment matters.
#[repr(C)]
pub struct PaddedString {
    v: cxx::CxxString,
    _pad: [MaybeUninit<usize>; mem::size_of::<String>() / mem::size_of::<usize>()],
}

impl Deref for PaddedString {
    type Target = cxx::CxxString;
    fn deref(&self) -> &Self::Target {
        &self.v
    }
}

impl DerefMut for PaddedString {
    fn deref_mut(&mut self) -> &mut Self::Target {
        &mut self.v
    }
}

/// C++ `std::map` -> Rust
pub type Map<K, V> = CxxMap<K, V>;

/// Used in rust representations of C++ structs. It needs to function like `CxxMap`, but as `CxxMap` is a ZST
/// that would cause the struct to be misaligned. Although `RustString` is the right size, it only aligns with `rust::Map`,
/// and not `std::map` therefore it won't suffice.
/// Instead, this struct holds its own `CxxMap` to keep the functionality, but is padded to allow it to be used where aligment matters.
#[repr(C)]
pub struct PaddedMap<K: cxx_map::MapElement, V: cxx_map::MapElement> {
    v: CxxMap<K, V>,
    _pad:
        [MaybeUninit<usize>; mem::size_of::<BTreeMap<c_void, c_void>>() / mem::size_of::<usize>()],
}

impl<K: cxx_map::MapElement, V: cxx_map::MapElement> Deref for PaddedMap<K, V> {
    type Target = CxxMap<K, V>;
    fn deref(&self) -> &Self::Target {
        &self.v
    }
}

impl<K: cxx_map::MapElement, V: cxx_map::MapElement> DerefMut for PaddedMap<K, V> {
    fn deref_mut(&mut self) -> &mut Self::Target {
        &mut self.v
    }
}

// empty bridge not sure if it's necessary
#[cxx::bridge]
mod ffi {}

#[macro_export]
macro_rules! s {
    ($ident:ident) => {
        ::cxx::let_cxx_string!($ident = $ident)
    };
    ($var:ident = $ident:expr) => {
        ::cxx::let_cxx_string!($var = $ident)
    };
}

///////////////////////////////

// fn get<'a>() -> UniquePtr<CxxMap<i16, i16>> {
//     extern "C" {
//         #[link_name = "?get@@YAPEAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_JU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_J@std@@@2@@std@@XZ"]
//         fn get<'a>() -> *mut CxxMap<i16, i16>;

//     }
//     unsafe { UniquePtr::from_raw(get()) }
// }

extern "C" {
    #[link_name = "?pass@@YAXAEAV?$Map@VString@cxxbridge1@rust@@EU__KstringVboolMapEntry@entries@@@stdtybridge@rust@@@Z"]
    fn pass<'a>(map: &BTreeMap<std::string::String, bool>);
}

fn get<'a>() -> UniquePtr<CxxVector<u8>> {
    extern "C" {
        #[link_name = "?get@@YA?AV?$vector@EV?$allocator@E@std@@@std@@XZ"]
        fn get<'a>() -> *mut CxxVector<u8>;

    }
    unsafe { UniquePtr::from_raw(get()) }
}

////

#[repr(C)]
#[derive(Debug)]
struct Test {
    pub b: bool,
    pub x: *mut PaddedVector<u8>,
    pub y: u8,
}

extern "C" {
    #[link_name = "?get_test@@YAPEAVTest@@XZ"]
    fn get_test<'a>() -> *mut Test;

}

#[test]
fn test() {
    // unsafe {
    //     let a = get();
    //     dbg!(a.len());
    // }

    unsafe {
        let a = get_test();
        dbg!(a);
        let v = a.as_ref().unwrap();
        let vec = v.x.as_ref().unwrap();
        dbg!(vec.get(0));
        dbg!(vec.get(1));
        dbg!(vec.get(2));
        dbg!(vec.get(3));
    }
}
