use core::ffi::c_void;
use core::marker::PhantomData;
use core::mem::{self, MaybeUninit};
use core::ptr;
use std::collections::BTreeMap;

#[repr(C)]
pub struct RustMap<K, V> {
    repr:
        [MaybeUninit<usize>; mem::size_of::<BTreeMap<c_void, c_void>>() / mem::size_of::<usize>()],
    marker: PhantomData<BTreeMap<K, V>>,
}

impl<K, V> Default for RustMap<K, V> {
    fn default() -> Self {
        Self::new()
    }
}

impl<K, V> RustMap<K, V> {
    pub fn new() -> Self {
        Self::from(BTreeMap::new())
    }

    pub fn from(map: BTreeMap<K, V>) -> Self {
        unsafe { mem::transmute::<BTreeMap<K, V>, RustMap<K, V>>(map) }
    }

    pub fn from_ref(map: &BTreeMap<K, V>) -> &Self {
        unsafe { &*(map as *const BTreeMap<K, V> as *const RustMap<K, V>) }
    }

    pub fn from_mut(map: &mut BTreeMap<K, V>) -> &mut Self {
        unsafe { &mut *(map as *mut BTreeMap<K, V> as *mut RustMap<K, V>) }
    }

    pub fn as_btreemap(&self) -> &BTreeMap<K, V> {
        unsafe { &*(self as *const RustMap<K, V> as *const BTreeMap<K, V>) }
    }

    pub fn as_mut_btreemap(&mut self) -> &mut BTreeMap<K, V> {
        unsafe { &mut *(self as *mut RustMap<K, V> as *mut BTreeMap<K, V>) }
    }

    pub fn len(&self) -> usize {
        self.as_btreemap().len()
    }
}

impl<K, V> Drop for RustMap<K, V> {
    fn drop(&mut self) {
        unsafe { ptr::drop_in_place(self.as_mut_btreemap()) }
    }
}

macro_rules! map_shim {
    ($kel:ident, $ksegment:expr, $vel:ident, $vsegment:expr) => {
        cxx::const_assert_eq!(mem::size_of::<[usize; 3]>(), mem::size_of::<RustMap<$kel, $vel>>());
        cxx::const_assert_eq!(mem::size_of::<BTreeMap<$kel, $vel>>(), mem::size_of::<RustMap<$kel, $vel>>());
        cxx::const_assert_eq!(mem::align_of::<BTreeMap<$kel, $vel>>(), mem::align_of::<RustMap<$kel, $vel>>());

        const _: () = {
            cxx::attr! {
                #[export_name = concat!("stdtybridge$rust_map", "$k$", $ksegment, "$v$", $vsegment, "$new")]
                unsafe extern "C" fn __new(this: *mut RustMap<$kel, $vel>) {
                    unsafe { ptr::write(this, RustMap::new()) }
                }
            }
            cxx::attr! {
                #[export_name = concat!("stdtybridge$rust_map", "$k$", $ksegment, "$v$", $vsegment, "$drop")]
                unsafe extern "C" fn __drop(this: *mut RustMap<$kel, $vel>) {
                    unsafe { ptr::drop_in_place(this) }
                }
            }
            cxx::attr! {
                #[export_name = concat!("stdtybridge$rust_map", "$k$", $ksegment, "$v$", $vsegment, "$len")]
                unsafe extern "C" fn __len(this: *const RustMap<$kel, $vel>) -> usize {
                    unsafe { &*this }.len()
                }
            }
            // cxx::attr! {
            //     #[export_name = concat!("stdtybridge$rust_map$", "$k$", $ksegment, "$v$", $vsegment, "$capacity")]
            //     unsafe extern "C" fn __capacity(this: *const RustMap<$kel, $vel>) -> usize {
            //         unsafe { &*this }.capacity()
            //     }
            // }
            // cxx::attr! {
            //     #[export_name = concat!("stdtybridge$rust_map$", "$k$", $ksegment, "$v$", $vsegment, "$data")]
            //     unsafe extern "C" fn __data(this: *const RustMap<$kel, $vel>) -> *const $kel, $vel {
            //         unsafe { &*this }.as_ptr()
            //     }
            // }
            // cxx::attr! {
            //     #[export_name = concat!("stdtybridge$rust_map$", "$k$", $ksegment, "$v$", $vsegment, "$reserve_total")]
            //     unsafe extern "C" fn __reserve_total(this: *mut RustMap<$kel, $vel>, new_cap: usize) {
            //         unsafe { &mut *this }.reserve_total(new_cap);
            //     }
            // }
            // cxx::attr! {
            //     #[export_name = concat!("stdtybridge$rust_map$", "$k$", $ksegment, "$v$", $vsegment, "$set_len")]
            //     unsafe extern "C" fn __set_len(this: *mut RustMap<$kel, $vel>, len: usize) {
            //         unsafe { (*this).set_len(len) }
            //     }
            // }
            // cxx::attr! {
            //     #[export_name = concat!("cxxbridge1$rust_vec$", "$k$", $ksegment, "$v$", $vsegment, "$truncate")]
            //     unsafe extern "C" fn __truncate(this: *mut RustMap<$ty>, len: usize) {
            //         unsafe { (*this).truncate(len) }
            //     }
            // }
        };
    };
}

macro_rules! map_shim_combinations {
    (
        $($tys:ident),*
    ) => {
        map_shim_combinations!(@gen $($tys),* # $($tys)*);
    };

    (@gen $curr:ident, $($rest:ident),* # $($all:ident)*) => {
        $(
            map_shim!($curr, stringify!($curr), $all, stringify!($all));
        )*

        map_shim_combinations!(@gen $($rest),* # $($all)*);
    };

    (@gen $final:ident # $($all:ident)*) => {
        $(
            map_shim!($final, stringify!($final), $all, stringify!($all));
        )*
    }
}

map_shim_combinations! {
    u8//, u16, u32, u64, i8, i16, i32, i64, f32, f64, usize, isize
}
