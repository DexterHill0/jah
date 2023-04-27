mod cxx_map;
use cxx::{CxxVector, UniquePtr};
use cxx_map::CxxMap;

pub type Map<K, V> = CxxMap<K, V>;
pub type Vector<T> = cxx::CxxVector<T>;
pub type String = cxx::CxxString;

mod actually_private {
    pub trait Private {}
}

#[test]
fn generate() {}

#[cxx::bridge]
mod ffi {
    unsafe extern "C++" {
        include!("stdty/test.h");

        fn get_vec<'a>() -> UniquePtr<CxxVector<u8>>;
    }
}

// extern "C" {
//     #[link_name = "?get@@YAAEAV?$map@EEU?$less@E@std@@V?$allocator@U?$pair@$$CBEE@std@@@2@@std@@XZ"]
//     fn get<'a>() -> &'a Map<u8, u8>;
// }

// #[test]
// fn test() {
//     unsafe {
//         let map = get();

//         let key = 20;

//         dbg!(map as *const _);
//         //dbg!(std::ptr::read(&key as *const _));

//         dbg!(map.contains_key(&key));
//     };
// }

fn get<'a>() -> UniquePtr<CxxMap<u8, u8>> {
    extern "C" {
        #[link_name = "?get@@YAPEAV?$map@EEU?$less@E@std@@V?$allocator@U?$pair@$$CBEE@std@@@2@@std@@XZ"]
        fn get<'a>() -> *mut CxxMap<u8, u8>;

    }
    unsafe { UniquePtr::from_raw(get()) }
}

#[test]
fn test() {
    unsafe {
        let mut map = get();

        dbg!(map.get(&10));
        map.pin_mut().insert(69, 69);
        dbg!(map.get(&10));
        dbg!(map.get(&69));
    };
}
