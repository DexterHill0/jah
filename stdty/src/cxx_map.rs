use cxx::kind::{Opaque, Trivial};
use cxx::ExternType;

use core::ffi::c_void;
use core::fmt::{self, Debug};
use core::iter::FusedIterator;
use core::marker::{PhantomData, PhantomPinned};
use core::mem::{self, ManuallyDrop, MaybeUninit};
use core::pin::Pin;
use core::slice;

#[repr(C, packed)]
pub struct CxxMap<K, V>
where
    K: MapElement,
    V: MapElement,
{
    _void: [c_void; 0],
    _pairs: PhantomData<[(K, V)]>,
    _pinned: PhantomData<PhantomPinned>,
}

// impl<K, V> CxxMap<K, V>
// where
//     K: MapKey<V>,
// {
//     pub fn insert(self: Pin<&mut Self>, key: K, value: V)
//     where
//         K: ExternType<Kind = Trivial>,
//         V: ExternType<Kind = Trivial>,
//     {
//         let mut key = ManuallyDrop::new(key);
//         let mut value = ManuallyDrop::new(value);
//         unsafe { K::__insert(self, &mut key, &mut value) }
//     }

//     pub fn get(&self, key: &K) -> Option<&V> {
//         if self.contains_key(key) {
//             Some(unsafe { self.get_unchecked(key) })
//         } else {
//             None
//         }
//     }

//     pub fn contains_key(&self, key: &K) -> bool {
//         unsafe { K::__contains_key(self, key) }
//     }

//     pub unsafe fn get_unchecked(&self, key: &K) -> &V {
//         unsafe {
//             let ptr = K::__get_unchecked(self, key) as *const V;
//             &*ptr
//         }
//     }
// }

// #[allow(clippy::missing_safety_doc)]
// pub unsafe trait MapKey<V>: Sized {
//     #[doc(hidden)]
//     unsafe fn __insert(
//         m: Pin<&mut CxxMap<Self, V>>,
//         key: &mut ManuallyDrop<Self>,
//         value: &mut ManuallyDrop<V>,
//     ) {
//         let _ = m;
//         let _ = key;
//         let _ = value;
//         unreachable!()
//     }

//     #[doc(hidden)]
//     unsafe fn __get_unchecked(m: &CxxMap<Self, V>, key: &Self) -> *mut Self;

//     #[doc(hidden)]
//     unsafe fn __contains_key(m: &CxxMap<Self, V>, key: &Self) -> bool;
// }

// macro_rules! impl_map_element {
//     ($kel:ident, $ksegment:expr, $vel:ident, $vsegment:expr) => {
//         unsafe impl MapKey<$vel> for $kel {
//             unsafe fn __insert(
//                 m: Pin<&mut CxxMap<Self, $vel>>,
//                 key: &mut ManuallyDrop<Self>,
//                 value: &mut ManuallyDrop<$vel>,
//             ) {
//                 extern "C" {
//                     cxx::attr! {
//                         #[link_name = concat!("stdtybridge$std$map$k$", $ksegment, "$v$", $vsegment, "$insert")]
//                         fn __insert(_: Pin<&mut CxxMap<$kel, $vel>>, _: &mut ManuallyDrop<$kel>, _: &mut ManuallyDrop<$vel>);
//                     }
//                 }
//                 unsafe { __insert(m, key, value) }
//             }

//             unsafe fn __get_unchecked(m: &CxxMap<Self, $vel>, key: &Self) -> *mut Self {
//                 extern "C" {
//                     cxx::attr! {
//                         #[link_name = concat!("stdtybridge$std$map$k$", $ksegment, "$v$", $vsegment, "$get_unchecked")]
//                         fn __insert(m: &CxxMap<$kel, $vel>, key: &$kel) -> *mut $kel;
//                     }
//                 }
//                 unsafe { __insert(m, key) }
//             }

//             unsafe fn __contains_key(m: &CxxMap<Self, $vel>, key: &Self) -> bool {
//                 extern "C" {
//                     cxx::attr! {
//                         #[link_name = concat!("stdtybridge$std$map$k$", $ksegment, "$v$", $vsegment, "$contains_key")]
//                         fn __contains_key(m: &CxxMap<$kel, $vel>, key: &$kel) -> bool;
//                     }
//                 }
//                 unsafe { __contains_key(m, key) }
//             }
//         }

//         unsafe impl cxx::memory::UniquePtrTarget for CxxMap<$kel, $vel> {
//             fn __typename(f: &mut fmt::Formatter) -> fmt::Result {
//                 f.write_str($ksegment)?;
//                 f.write_str(",")?;
//                 f.write_str($vsegment)
//             }

//             fn __null() -> MaybeUninit<*mut c_void> {
//                 extern "C" {
//                     cxx::attr! {
//                         #[link_name = concat!("stdtybridge$unique_ptr$std$map$k$", $ksegment, "$v$", $vsegment, "$null")]
//                         fn __null(this: *mut MaybeUninit<*mut c_void>);
//                     }
//                 }
//                 let mut repr = MaybeUninit::uninit();
//                 unsafe { __null(&mut repr) }
//                 repr
//             }

//             unsafe fn __raw(raw: *mut Self) -> MaybeUninit<*mut c_void> {
//                 extern "C" {
//                     cxx::attr! {
//                         #[link_name = concat!("stdtybridge$unique_ptr$std$map$k$", $ksegment, "$v$", $vsegment, "$raw")]
//                         fn __raw(this: *mut MaybeUninit<*mut c_void>, raw: *mut CxxMap<$kel, $vel>);
//                     }
//                 }
//                 let mut repr = MaybeUninit::uninit();
//                 unsafe { __raw(&mut repr, raw) }
//                 repr
//             }

//             unsafe fn __get(repr: MaybeUninit<*mut c_void>) -> *const Self {
//                 extern "C" {
//                     cxx::attr! {
//                         #[link_name = concat!("stdtybridge$unique_ptr$std$map$k$", $ksegment, "$v$", $vsegment, "$get")]
//                         fn __get(this: *const MaybeUninit<*mut c_void>) -> *const CxxMap<$kel, $vel>;
//                     }
//                 }
//                 unsafe { __get(&repr) }
//             }

//             unsafe fn __release(mut repr: MaybeUninit<*mut c_void>) -> *mut Self {
//                 extern "C" {
//                     cxx::attr! {
//                         #[link_name = concat!("stdtybridge$unique_ptr$std$map$k$", $ksegment, "$v$", $vsegment, "$release")]
//                         fn __release(this: *mut MaybeUninit<*mut c_void>) -> *mut CxxMap<$kel, $vel>;
//                     }
//                 }
//                 unsafe { __release(&mut repr) }
//             }

//             unsafe fn __drop(mut repr: MaybeUninit<*mut c_void>) {
//                 extern "C" {
//                     cxx::attr! {
//                         #[link_name = concat!("stdtybridge$unique_ptr$std$map$k$", $ksegment, "$v$", $vsegment, "$drop")]
//                         fn __drop(this: *mut MaybeUninit<*mut c_void>);
//                     }
//                 }
//                 unsafe { __drop(&mut repr) }
//             }
//         }
//     };
// }

// macro_rules! impl_map_combinations_for_primitive {
//     (
//         $($tys:ident),*
//     ) => {
//         impl_map_combinations_for_primitive!(@gen $($tys),* # $($tys)*);
//     };

//     (@gen $curr:ident, $($rest:ident),* # $($all:ident)*) => {
//         $(
//             impl_map_element!($curr, stringify!($curr), $all, stringify!($all));
//         )*

//         impl_map_combinations_for_primitive!(@gen $($rest),* # $($all)*);
//     };

//     (@gen $final:ident # $($all:ident)*) => {
//         $(
//             impl_map_element!($final, stringify!($final), $all, stringify!($all));
//         )*
//     }
// }

// impl_map_combinations_for_primitive! {
//     u8//, u16, u32, u64, i8, i16, i32, i64, f32, f64, usize, isize
// }

#[allow(clippy::missing_safety_doc)]
pub unsafe trait MapElement: Sized {}

macro_rules! impl_map_element {
    ($kel:ident, $ksegment:expr, $vel:ident, $vsegment:expr) => {

        impl CxxMap<$kel, $vel>
        {
            pub fn insert(self: Pin<&mut Self>, key: $kel, value: $vel)
            {
                let mut key = ManuallyDrop::new(key);
                let mut value = ManuallyDrop::new(value);

                extern "C" {
                    cxx::attr! {
                        #[link_name = concat!("stdtybridge$std$map$k$", $ksegment, "$v$", $vsegment, "$insert")]
                        fn __insert(_: Pin<&mut CxxMap<$kel, $vel>>, _: &mut ManuallyDrop<$kel>, _: &mut ManuallyDrop<$vel>);
                    }
                }
                unsafe { __insert(self, &mut key, &mut value) }
            }

            pub fn get(&self, key: &$kel) -> Option<&$vel> {
                if self.contains_key(key) {
                    Some(unsafe { self.get_unchecked(key) })
                } else {
                    None
                }
            }

            pub fn contains_key(&self, key: &$kel) -> bool {
                extern "C" {
                    cxx::attr! {
                        #[link_name = concat!("stdtybridge$std$map$k$", $ksegment, "$v$", $vsegment, "$contains_key")]
                        fn __contains_key(m: &CxxMap<$kel, $vel>, key: &$kel) -> bool;
                    }
                }
                unsafe { __contains_key(self, key) }
            }

            pub unsafe fn get_unchecked(&self, key: &$kel) -> &$vel {
                extern "C" {
                    cxx::attr! {
                        #[link_name = concat!("stdtybridge$std$map$k$", $ksegment, "$v$", $vsegment, "$get_unchecked")]
                        fn __insert(m: &CxxMap<$kel, $vel>, key: &$kel) -> *mut $kel;
                    }
                }
                let ptr = unsafe { __insert(self, key) } as *const $vel;
                &*ptr
            }
        }

        unsafe impl cxx::memory::UniquePtrTarget for CxxMap<$kel, $vel> {
            fn __typename(f: &mut fmt::Formatter) -> fmt::Result {
                f.write_str($ksegment)?;
                f.write_str(",")?;
                f.write_str($vsegment)
            }

            fn __null() -> MaybeUninit<*mut c_void> {
                extern "C" {
                    cxx::attr! {
                        #[link_name = concat!("stdtybridge$unique_ptr$std$map$k$", $ksegment, "$v$", $vsegment, "$null")]
                        fn __null(this: *mut MaybeUninit<*mut c_void>);
                    }
                }
                let mut repr = MaybeUninit::uninit();
                unsafe { __null(&mut repr) }
                repr
            }

            unsafe fn __raw(raw: *mut Self) -> MaybeUninit<*mut c_void> {
                extern "C" {
                    cxx::attr! {
                        #[link_name = concat!("stdtybridge$unique_ptr$std$map$k$", $ksegment, "$v$", $vsegment, "$raw")]
                        fn __raw(this: *mut MaybeUninit<*mut c_void>, raw: *mut CxxMap<$kel, $vel>);
                    }
                }
                let mut repr = MaybeUninit::uninit();
                unsafe { __raw(&mut repr, raw) }
                repr
            }

            unsafe fn __get(repr: MaybeUninit<*mut c_void>) -> *const Self {
                extern "C" {
                    cxx::attr! {
                        #[link_name = concat!("stdtybridge$unique_ptr$std$map$k$", $ksegment, "$v$", $vsegment, "$get")]
                        fn __get(this: *const MaybeUninit<*mut c_void>) -> *const CxxMap<$kel, $vel>;
                    }
                }
                unsafe { __get(&repr) }
            }

            unsafe fn __release(mut repr: MaybeUninit<*mut c_void>) -> *mut Self {
                extern "C" {
                    cxx::attr! {
                        #[link_name = concat!("stdtybridge$unique_ptr$std$map$k$", $ksegment, "$v$", $vsegment, "$release")]
                        fn __release(this: *mut MaybeUninit<*mut c_void>) -> *mut CxxMap<$kel, $vel>;
                    }
                }
                unsafe { __release(&mut repr) }
            }

            unsafe fn __drop(mut repr: MaybeUninit<*mut c_void>) {
                extern "C" {
                    cxx::attr! {
                        #[link_name = concat!("stdtybridge$unique_ptr$std$map$k$", $ksegment, "$v$", $vsegment, "$drop")]
                        fn __drop(this: *mut MaybeUninit<*mut c_void>);
                    }
                }
                unsafe { __drop(&mut repr) }
            }
        }
    };
}

macro_rules! impl_map_combinations_for_primitive {
    (
        $($tys:ident),*
    ) => {
        $(
            unsafe impl MapElement for $tys {}
        )*

        impl_map_combinations_for_primitive!(@gen $($tys),* # $($tys)*);
    };

    (@gen $curr:ident, $($rest:ident),* # $($all:ident)*) => {
        $(
            impl_map_element!($curr, stringify!($curr), $all, stringify!($all));
        )*

        impl_map_combinations_for_primitive!(@gen $($rest),* # $($all)*);
    };

    (@gen $final:ident # $($all:ident)*) => {
        $(
            impl_map_element!($final, stringify!($final), $all, stringify!($all));
        )*
    }
}

impl_map_combinations_for_primitive! {
    u8//, u16, u32, u64, i8, i16, i32, i64, f32, f64, usize, isize
}
