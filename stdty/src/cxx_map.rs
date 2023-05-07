use std::collections::BTreeMap;

use cxx::kind::{Opaque, Trivial};
use cxx::ExternType;

use core::ffi::c_void;
use core::fmt::{self, Debug};
use core::iter::FusedIterator;
use core::marker::{PhantomData, PhantomPinned};
use core::mem::{self, ManuallyDrop, MaybeUninit};
use core::pin::Pin;
use core::slice;
use std::collections::btree_map::Iter;

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

impl<K, V> CxxMap<K, V>
where
    K: MapElement,
    V: MapElement,
{
    pub fn keys(&self) -> Keys<K, V> {
        Keys {
            index: 0,
            _phantom: PhantomData,
            map: self,
        }
    }

    pub fn values(&self) -> Values<K, V> {
        Values {
            index: 0,
            _phantom: PhantomData,
            map: self,
        }
    }

    pub fn entries(&self) -> Entries<K, V> {
        Entries {
            index: 0,
            _phantom: PhantomData,
            map: self,
        }
    }
}

pub struct Keys<'a, K, V>
where
    K: MapElement,
    V: MapElement,
{
    map: &'a CxxMap<K, V>,
    index: usize,
    _phantom: PhantomData<(K, V)>,
}

pub struct Values<'a, K, V>
where
    K: MapElement,
    V: MapElement,
{
    map: &'a CxxMap<K, V>,
    index: usize,
    _phantom: PhantomData<(K, V)>,
}

pub struct Entries<'a, K, V>
where
    K: MapElement,
    V: MapElement,
{
    map: &'a CxxMap<K, V>,
    index: usize,
    _phantom: PhantomData<(K, V)>,
}

#[repr(C, packed)]
pub struct Pair<T1, T2> {
    pub left: T1,
    pub right: T2,
}

#[allow(clippy::missing_safety_doc)]
pub unsafe trait MapElement: Sized {}

macro_rules! impl_map_element {
    ($kel:ident, $ksegment:expr, $vel:ident, $vsegment:expr) => {

        impl<'m> Iterator for Keys<'m, $kel, $vel>
        {
            type Item = &'m $kel;

            fn next(&mut self) -> Option<Self::Item> {
                let next = unsafe { self.map.key_by_index(self.index) };
                self.index += 1;
                if self.index > self.map.len() {
                    return None;
                }
                Some(next)
            }

            fn size_hint(&self) -> (usize, Option<usize>) {
                let len = self.len();
                (len, Some(len))
            }
        }

        impl<'m> ExactSizeIterator for Keys<'m, $kel, $vel>
        {
            fn len(&self) -> usize {
                self.map.len() - self.index
            }
        }

        ///
        impl<'m> Iterator for Values<'m, $kel, $vel>
        {
            type Item = &'m $kel;

            fn next(&mut self) -> Option<Self::Item> {
                let next = unsafe { self.map.value_by_index(self.index) };
                self.index += 1;
                if self.index > self.map.len() {
                    return None;
                }
                Some(next)
            }

            fn size_hint(&self) -> (usize, Option<usize>) {
                let len = self.len();
                (len, Some(len))
            }
        }

        impl<'m> ExactSizeIterator for Values<'m, $kel, $vel>
        {
            fn len(&self) -> usize {
                self.map.len() - self.index
            }
        }

        ///
        impl<'m> Iterator for Entries<'m, $kel, $vel>
        {
            type Item = (&'m $kel, &'m $vel);

            fn next(&mut self) -> Option<Self::Item> {
                let next_key = unsafe { self.map.key_by_index(self.index) };
                let next_value = unsafe { self.map.value_by_index(self.index) };
                self.index += 1;
                if self.index > self.map.len() {
                    return None;
                }
                Some((next_key, next_value))
            }

            fn size_hint(&self) -> (usize, Option<usize>) {
                let len = self.len();
                (len, Some(len))
            }
        }

        impl<'m> ExactSizeIterator for Entries<'m, $kel, $vel>
        {
            fn len(&self) -> usize {
                self.map.len() - self.index
            }
        }

        impl CxxMap<$kel, $vel>
        {
            pub fn to_btreemap(&self) -> BTreeMap<$kel, $vel> {
                let mut map = BTreeMap::new();
                for (k, v) in self.entries() {
                    map.insert(*k, *v);
                }
                return map;
            }

            pub fn to_rust_map(&self) -> crate::RustMap<$kel, $vel> {
                crate::RustMap::from(self.to_btreemap())
            }

            pub(crate) unsafe fn value_by_index(&self, index: usize) -> &$kel {
                extern "C" {
                    cxx::attr! {
                        #[link_name = concat!("stdtybridge$std$map$k$", $ksegment, "$v$", $vsegment, "$value_by_index")]
                        fn __value_by_index(m: &CxxMap<$kel, $vel>, index: usize) -> &$kel;
                    }
                }
                unsafe { __value_by_index(self, index) }
            }

            pub(crate) unsafe fn key_by_index(&self, index: usize) -> &$kel {
                extern "C" {
                    cxx::attr! {
                        #[link_name = concat!("stdtybridge$std$map$k$", $ksegment, "$v$", $vsegment, "$key_by_index")]
                        fn __key_by_index(m: &CxxMap<$kel, $vel>, index: usize) -> &$kel;
                    }
                }
                unsafe { __key_by_index(self, index) }
            }

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

            pub fn len(&self) -> usize {
                extern "C" {
                    cxx::attr! {
                        #[link_name = concat!("stdtybridge$std$map$k$", $ksegment, "$v$", $vsegment, "$len")]
                        fn __len(m: &CxxMap<$kel, $vel>) -> usize;
                    }
                }
                unsafe { __len(self) }
            }

            pub fn clear(self: Pin<&mut Self>) {
                extern "C" {
                    cxx::attr! {
                        #[link_name = concat!("stdtybridge$std$map$k$", $ksegment, "$v$", $vsegment, "$clear")]
                        fn __clear(m: Pin<&mut CxxMap<$kel, $vel>>);
                    }
                }
                unsafe { __clear(self) }
            }

            pub fn get(&self, key: &$kel) -> Option<&$vel> {
                if self.contains_key(key) {
                    Some(unsafe { self.get_unchecked(key) })
                } else {
                    None
                }
            }

            pub fn get_val_mut(self: Pin<&mut Self>, key: &$kel) -> Option<Pin<&mut $vel>> {
                if self.contains_key(key) {
                    Some(unsafe { CxxMap::get_unchecked_mut(self, key) })
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
                        fn __get_unchecked(m: &CxxMap<$kel, $vel>, key: &$kel) -> *mut $kel;
                    }
                }
                let ptr = unsafe { __get_unchecked(self, key) } as *const $vel;
                &*ptr
            }

            pub unsafe fn get_unchecked_mut(self: Pin<&mut Self>, key: &$kel) -> Pin<&mut $vel> {
                extern "C" {
                    cxx::attr! {
                        #[link_name = concat!("stdtybridge$std$map$k$", $ksegment, "$v$", $vsegment, "$get_unchecked_mut")]
                        fn __get_unchecked_mut(m: *mut CxxMap<$kel, $vel>, key: &$kel) -> *mut $kel;
                    }
                }
                let ptr = unsafe { __get_unchecked_mut(Pin::get_unchecked_mut(self), key) };
                Pin::new_unchecked(&mut *ptr)
            }
        }

        unsafe impl cxx::memory::UniquePtrTarget for CxxMap<$kel, $vel> {
            fn __typename(f: &mut fmt::Formatter) -> fmt::Result {
                f.write_str(&format!("CxxMap<{}, {}>", $ksegment, $vsegment))
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
