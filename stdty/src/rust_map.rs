use core::ffi::c_void;
use core::marker::PhantomData;
use core::mem::{self, MaybeUninit};
use core::ptr;
use std::collections::btree_map::Iter;
use std::collections::BTreeMap;

#[repr(C, packed)]
struct Entry<K, V> {
    key: K,
    value: V,
}

#[repr(C)]
struct RustMap<K, V> {
    repr:
        [MaybeUninit<usize>; mem::size_of::<BTreeMap<c_void, c_void>>() / mem::size_of::<usize>()],
    // raw_iter: Option<*mut Iter<K, V>>,
    // repr: [u32; 1],
    marker: PhantomData<BTreeMap<K, V>>,
}

impl<K, V> RustMap<K, V> {
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

impl<K, V> RustMap<K, V>
where
    K: std::cmp::Ord,
{
    pub fn pop_first(&mut self) -> Entry<K, V> {
        let v = self.as_mut_btreemap().pop_first().unwrap();
        Entry {
            key: v.0,
            value: v.1,
        }
    }
}

impl<K, V> Drop for RustMap<K, V> {
    fn drop(&mut self) {
        unsafe { ptr::drop_in_place(self.as_mut_btreemap()) }
    }
}

macro_rules! map_shim {
    ($kattr:meta, $vattr:meta, $kel:ident, $ksegment:expr, $vel:ident, $vsegment:expr) => {
        #[$kattr]
        #[$vattr]
        cxx::const_assert_eq!(mem::size_of::<[usize; 3]>(), mem::size_of::<RustMap<$kel, $vel>>());
        #[$kattr]
        #[$vattr]
        cxx::const_assert_eq!(mem::size_of::<BTreeMap<$kel, $vel>>(), mem::size_of::<RustMap<$kel, $vel>>());
        #[$kattr]
        #[$vattr]
        cxx::const_assert_eq!(mem::align_of::<BTreeMap<$kel, $vel>>(), mem::align_of::<RustMap<$kel, $vel>>());

        #[$kattr]
        #[$vattr]
        const _: () = {
            cxx::attr! {
                #[export_name = concat!("stdtybridge$rust_map", "$k$", $ksegment, "$v$", $vsegment, "$drop")]
                unsafe extern "C" fn __drop(this: *mut RustMap<$kel, $vel>) {
                    unsafe { ptr::drop_in_place(this) }
                }
            }
            cxx::attr! {
                #[export_name = concat!("stdtybridge$rust_map", "$k$", $ksegment, "$v$", $vsegment, "$pop_first")]
                unsafe extern "C" fn __pop_first<'a>(this: *mut RustMap<$kel, $vel>) -> Entry<$kel, $vel> {
                    unsafe { &mut *this }.pop_first()
                }
            }
            cxx::attr! {
                #[export_name = concat!("stdtybridge$rust_map", "$k$", $ksegment, "$v$", $vsegment, "$len")]
                unsafe extern "C" fn __len(this: *const RustMap<$kel, $vel>) -> usize {
                    unsafe { &*this }.len()
                }
            }
        };
    };
}

macro_rules! map_shim_combinations {
    (
        $(
            #[$attrs:meta]
            $tys:ident
        ),*
    ) => {
        map_shim_combinations!(@gen $($attrs),* ~ $($attrs)* ~ $($tys),* # $($tys)*);
    };

    (@gen $curr_attr:meta, $($rest_attrs:meta),* ~ $($all_attrs:meta)* ~ $curr:ident, $($rest:ident),* # $($all:ident)*) => {
        $(
            map_shim!($curr_attr, $all_attrs, $curr, stringify!($curr), $all, stringify!($all));
        )*

        map_shim_combinations!(@gen $($rest_attrs),* ~ $($all_attrs)* ~ $($rest),* # $($all)*);
    };

    (@gen $final_attr:meta ~ $($all_attrs:meta)* ~ $final:ident # $($all:ident)*) => {
        $(
            map_shim!($final_attr, $all_attrs, $final, stringify!($final), $all, stringify!($all));
        )*
    }
}

map_shim_combinations! {
    // #[cfg(feature = "map_bool")]
    // bool,
    #[cfg(feature = "map_u8")]
    u8,
    #[cfg(feature = "map_u16")]
    u16,
    #[cfg(feature = "map_u32")]
    u32
    // #[cfg(feature = "map_u64")]
    // u64,
    // #[cfg(feature = "map_i8")]
    // i8,
    // #[cfg(feature = "map_i16")]
    // i16,
    // #[cfg(feature = "map_i32")]
    // i32,
    // #[cfg(feature = "map_i64")]
    // i64,
    // #[cfg(feature = "map_usize")]
    // usize,
    // #[cfg(feature = "map_isize")]
    // isize,
    // #[cfg(feature = "map_string")]
    // string,
    // #[cfg(feature = "map_f32")]
    // f32,
    // #[cfg(feature = "map_f64")]
    // f64
}
