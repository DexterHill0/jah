#![feature(abi_thiscall)]

pub mod cocos_bindings;
pub(crate) mod codegen;

// #![feature(abi_thiscall)]

// #[macro_use]
// extern crate retour;

// mod geode_bindings;

// // mod broma;

// use std::ffi::c_void;
// use std::fmt::Debug;
// use std::thread;
// use std::time::Duration;
// use windows::Win32::Foundation::BOOL;
// use windows::Win32::System::LibraryLoader::GetModuleHandleA;
// use windows::Win32::System::{
//     Console::AllocConsole, Threading::CreateThread, Threading::THREAD_CREATION_FLAGS,
// };

// #[no_mangle]
// #[allow(non_snake_case)]
// unsafe extern "system" fn DllMain(
//     _module: *mut c_void,
//     call_reason: u32,
//     _reserved: *mut c_void,
// ) -> BOOL {
//     if call_reason == 1 {
//         CreateThread(
//             None,
//             0,
//             Some(main_thread),
//             None,
//             THREAD_CREATION_FLAGS(0),
//             None,
//         )
//         .unwrap();
//     }
//     BOOL(1)
// }

// unsafe extern "system" fn main_thread(_: *mut c_void) -> u32 {
//     AllocConsole();
//     init_hooks();
//     0
// }

// type GDString = [bool; 24];

// // #[allow(non_snake_case)]
// // #[repr(C)]
// // #[derive(Debug)]
// // struct Testy {
// //     _pad: [bool; 0x11C],
// // }

// // #[allow(non_snake_case)]
// // #[repr(C)]
// // #[derive(Debug)]
// // struct DrawGridLayer {
// //     inherit: Testy,

// //     pub common_lines: *mut [[f32; 2]; 400],
// //     pub yellow_guidelines: *mut [[f32; 2]; 200],
// //     pub green_guidelines: *mut [[f32; 2]; 200],

// //     pub song_offset1: f32,
// //     pub song_offset2: f32,
// //     pub last_music_x_position: f32,
// //     pub effect_sort_dirty: bool,

// //     pub editor: *mut c_void,

// //     pub guideline_string: GDString,

// //     pub grid: *mut c_void,
// //     pub guidelines: *mut c_void,
// //     pub effects: *mut c_void,
// //     pub guides: *mut c_void,
// //     pub speed_objects1: *mut c_void,
// //     pub speed_objects2: *mut c_void,
// //     pub player_node_points: *mut c_void,
// //     pub player2_node_points: *mut c_void,

// //     pub UNK_double: f64,

// //     pub guideline_spacing: f32,
// //     pub slow_guideline_spacing: f32,
// //     pub normal_guideline_spacing: f32,
// //     pub fast_guideline_spacing: f32,
// //     pub faster_guideline_spacing: f32,
// //     pub fastest_guideline_spacing: f32,

// //     pub updating_time_markers: bool,
// //     pub time_needs_update: bool,

// //     pub active_grid_node_size: f32,
// //     // pub grid_size: f32,
// // }

// // lazy_static::lazy_static! {
// //     pub static ref BASE: u32 = GetModuleHandleA(windows::core::PCSTR(0 as _)).unwrap().0 as u32;
// // }

// // pub mod GJBaseGameLayer {
// //     use super::*;

// //     pub const collectItem: u32 = BASE + 0x01FB780;
// // }

// #[allow(non_camel_case_types)]
// type GJBaseGameLayer_collectItem = unsafe extern "thiscall" fn(*mut c_void, i32, i32) -> c_void;

// #[allow(non_camel_case_types)]
// type PlayLayer_pauseGame = unsafe extern "thiscall" fn(*mut c_void, bool) -> c_void;

// static_detour! {
//     pub static D_GJBaseGameLayer_collectItem: unsafe extern "thiscall" fn(*mut c_void, i32, i32) -> c_void;
// }

// pub fn init_hooks() {
//     unsafe {
//         let base = GetModuleHandleA(windows::core::PCSTR(0 as _)).unwrap().0 as u32;

//         D_GJBaseGameLayer_collectItem
//             .initialize(
//                 std::mem::transmute::<u32, GJBaseGameLayer_collectItem>(base + 0x111890),
//                 h_GJBaseGameLayer_collectItem,
//             )
//             .unwrap()
//             .enable()
//             .unwrap();
//     }
// }

// fn pointer<T>(p: u32) -> *mut T {
//     p as *mut T
// }

// #[allow(clippy::mut_from_ref, clippy::crosspointer_transmute)]
// unsafe fn nav<T: Debug>(nav: &[isize], offset: isize) -> &mut T {
//     let base = GetModuleHandleA(windows::core::PCSTR(0 as _)).unwrap().0 as u32;

//     let mut p = pointer::<*mut c_void>(base + nav[0] as u32).read();
//     for &i in nav.iter().skip(1) {
//         p = std::mem::transmute::<_, *mut *mut c_void>(p.offset(i)).read();
//     }

//     let gock = std::mem::transmute::<_, *mut T>(p.offset(offset)).as_mut();

//     gock.unwrap()
// }

// #[allow(non_snake_case)]
// //this function cannot be unsafe bc detours is mean
// fn h_GJBaseGameLayer_collectItem(this: *mut c_void, i1: i32, i2: i32) -> c_void {
//     unsafe {
//         let ball = D_GJBaseGameLayer_collectItem.call(this, i1, i2);

//         let draw_grid_layer = nav::<geode_bindings::root::DrawGridLayer>(&[0x3222D0, 0x168, 0x3a4]);

//         // thread::spawn(|| {
//         //     thread::sleep(Duration::from_secs(1));

//         //     draw_grid_layer.active_grid_node_size = 15.0;
//         // });

//         let speed = nav::<f32>(&[0x3222D0, 0x164, 0x224], 0x648);

//         *speed *= -1.0;

//         ball
//     }
// }

// // #[cxx::bridge]
// // mod ffi {
// //     unsafe extern "C++" {
// //         include!("jah/src/include/false.h");

// //         type BunkleFlok;
// //         unsafe fn new_bunkle<'b>() -> &'b BunkleFlok;

// //         unsafe fn schquiklesparge(&self, b: i32) -> i32;

// //         unsafe fn smerglequash<'b>(p: &'b BunkleFlok);
// //     }
// // }

// // #[test]
// // fn poo() {
// //     unsafe {
// //         let bf = ffi::new_bunkle();
// //         println!("{:?}", &bf as *const _);

// //         bf.schquiklesparge(10);

// //         ffi::smerglequash(bf);
// //     }
// // }

// // class cocos2d::CCLayerColor {
// //     CCLayerColor() = mac 0x274320, ios 0xc8aec, win 0xa1710;
// //     virtual ~CCLayerColor() = mac 0x2743d0, ios 0x2743e0, win 0xa1a20;
// // }

// // class CCContentLayer : cocos2d::CCLayerColor {
// //     inline CCContentLayer() {}
// //     static CCContentLayer* create(cocos2d::ccColor4B const& color, float width, float height) = win 0x172a0;
// //     virtual void setPosition(cocos2d::CCPoint const& pos) = mac 0x464c60, win 0x17400;
// // }

// custom members
// hooked methods

/*
    #include <Geode/Geode.hpp>
    #include <Geode/modify/MenuLayer.hpp>

    using namespace geode::prelude;

    class $modify(MenuLayer) {
        int m_customMember;

        void onMoreGames(CCObject*) {
            CCRotateBy::create
            FLAlertLayer::create("Geode", "Hello from my custom mod!", "OK")->show();
        }
    };
*/

// modify! {
//     MenuLayer {
//         custom_member: i32,
//     }

//     fn on_more_games(&self, unk: &CCObject) {

//     }
// }

// trait Hooks {
//     fn apply_hooks();
// }

// mod idfjiudjfdif {
//     use super::CreateHook;
//     use std::marker::PhantomData;

//     struct CustomField<T, const N: usize>(PhantomData<T>);

//     pub struct ModifyMenuLayer {
//         custom_member: CustomField<i32, 0>,
//         // menu layer fields
//     }

//     impl Hooks for ModifyMenuLayer {
//         fn apply_hooks() {
//             // hook on_more_games
//         }
//     }
// }
// // DLLMain
// ModifyMenuLayer::apply_hooks();

#[test]
fn t() {}
