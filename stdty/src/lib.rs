mod cxx_map;
use std::{collections::BTreeMap, pin::Pin};

use cxx::{CxxString, CxxVector, UniquePtr};
use cxx_map::CxxMap;

mod rust_map;
use rust_map::RustMap;

pub type Map<K, V> = UniquePtr<CxxMap<K, V>>;
pub type Vector<T> = UniquePtr<CxxVector<T>>;
pub type String = UniquePtr<CxxString>;

#[test]
fn generate() {}
fn get<'a>() -> UniquePtr<CxxMap<u8, u8>> {
    extern "C" {
        #[link_name = "?get@@YAPEAV?$map@EEU?$less@E@std@@V?$allocator@U?$pair@$$CBEE@std@@@2@@std@@XZ"]
        fn get<'a>() -> *mut CxxMap<u8, u8>;

    }
    unsafe { UniquePtr::from_raw(get()) }
}

#[test]
fn test() {
    let mut m = get();
    dbg!(m.get(&20));
    m.pin_mut().clear();
    dbg!(m.get(&20));
}
