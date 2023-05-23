#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct GameRateDelegate {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct BoomListView {
    pub m_table_view: *mut TableView,
    pub m_entries: *mut cocos2d_CCArray,
    pub m_type: BoomListType,
    pub m_height: f32,
    pub m_width: f32,
    pub m_item_separation: f32,
    pub m_current_page: i32,
}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct LevelManagerDelegate {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct LoadingLayer {
    pub m_unknown: bool,
    pub m_unknown_2: bool,
    pub m_load_step: i32,
    pub m_caption: *mut cocos2d_CCLabelBMFont,
    pub m_text_area: *mut TextArea,
    pub m_slider_bar: *mut cocos2d_CCSprite,
    pub m_slider_groove_x_pos: f32,
    pub m_slider_groove_height: f32,
    pub m_from_refresh: bool,
}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct CCEGLViewProtocol {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct SimplePlayer {
    pub m_first_layer: *mut cocos2d_CCSprite,
    pub m_second_layer: *mut cocos2d_CCSprite,
    pub m_bird_dome: *mut cocos2d_CCSprite,
    pub m_outline_sprite: *mut cocos2d_CCSprite,
    pub m_detail_sprite: *mut cocos2d_CCSprite,
    pub m_robot_sprite: *mut GJRobotSprite,
    pub m_spider_sprite: *mut GJSpiderSprite,
    _pad7: [bool; 0x4],
    pub m_has_glow_outline: bool,
}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct ColorSelectDelegate {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct GameSoundManager {
    pub m_dictionary_1: *mut cocos2d_CCDictionary,
    pub m_dictionary_2: *mut cocos2d_CCDictionary,
    _pad2: [bool; 0xC],
    pub m_preloaded: bool,
    _pad4: [bool; 0x4],
    pub m_file_path: stdty::String,
}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct PauseLayer {
    pub m_unknown: bool,
    pub m_unknown_2: bool,
    pub m_unknown: bool,
    pub m_unknown_2: bool,
}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct CCFadeTo {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct CCEaseIn {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct CCScene {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct CCScale9Sprite {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct SliderTouchLogic {
    pub m_unknown_unused: f32,
    pub m_length: f32,
    pub m_thumb: *mut SliderThumb,
    pub m_slider: *mut Slider,
    pub m_activate_thumb: bool,
    pub m_position: cocos2d_CCPoint,
    pub m_rotated: bool,
}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct GManager {
    pub m_file_name: stdty::String,
    pub m_setup: bool,
    pub m_saved: bool,
    pub m_quick_save: bool,
}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct CCControl {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct MessageListDelegate {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct OBB2D {
    pub m_p_1_1: cocos2d_CCPoint,
    pub m_p_1_2: cocos2d_CCPoint,
    pub m_p_1_3: cocos2d_CCPoint,
    pub m_p_1_4: cocos2d_CCPoint,
    pub m_p_2_1: cocos2d_CCPoint,
    pub m_p_2_2: cocos2d_CCPoint,
    pub m_p_2_3: cocos2d_CCPoint,
    pub m_p_2_4: cocos2d_CCPoint,
    pub m_p_3_1: cocos2d_CCPoint,
    pub m_p_3_2: cocos2d_CCPoint,
    pub m_p_3_3: cocos2d_CCPoint,
    pub m_p_3_4: cocos2d_CCPoint,
    pub m_rot_1: f64,
    pub m_rot_2: f64,
    pub m_center: cocos2d_CCPoint,
}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct CCImage {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct LevelEditorLayer {
    pub m_bounding_box: *mut OBB2D,
    pub m_effect_manager: *mut GJEffectManager,
    pub m_object_layer: *mut cocos2d_CCLayer,
    pub m_batch_node_add_top_4: *mut cocos2d_CCSpriteBatchNode,
    pub m_effect_batch_node_add_top_4: *mut cocos2d_CCSpriteBatchNode,
    pub m_batch_node_top_3: *mut cocos2d_CCSpriteBatchNode,
    pub m_batch_node_add_top_3: *mut cocos2d_CCSpriteBatchNode,
    pub m_batch_node_add_glow_top_3: *mut cocos2d_CCSpriteBatchNode,
    pub m_batch_node_top_3_container: *mut CCNodeContainer,
    pub m_batch_node_text_top_3: *mut cocos2d_CCSpriteBatchNode,
    pub m_batch_node_add_text_top_3: *mut cocos2d_CCSpriteBatchNode,
    pub m_effect_batch_node_top_3: *mut cocos2d_CCSpriteBatchNode,
    pub m_effect_batch_node_add_top_3: *mut cocos2d_CCSpriteBatchNode,
    pub m_batch_node_top_2: *mut cocos2d_CCSpriteBatchNode,
    pub m_batch_node_add_top_2: *mut cocos2d_CCSpriteBatchNode,
    pub m_batch_node_add_glow_top_2: *mut cocos2d_CCSpriteBatchNode,
    pub m_batch_node_top_2_container: *mut CCNodeContainer,
    pub m_batch_node_text_top_2: *mut cocos2d_CCSpriteBatchNode,
    pub m_batch_node_add_text_top_2: *mut cocos2d_CCSpriteBatchNode,
    pub m_effect_batch_node_top_2: *mut cocos2d_CCSpriteBatchNode,
    pub m_effect_batch_node_add_top_2: *mut cocos2d_CCSpriteBatchNode,
    pub m_batch_node: *mut cocos2d_CCSpriteBatchNode,
    pub m_batch_node_add: *mut cocos2d_CCSpriteBatchNode,
    pub m_batch_node_add_glow: *mut cocos2d_CCSpriteBatchNode,
    pub m_batch_node_top_1_container: *mut CCNodeContainer,
    pub m_batch_node_text_top_1: *mut cocos2d_CCSpriteBatchNode,
    pub m_batch_node_add_text_top_1: *mut cocos2d_CCSpriteBatchNode,
    pub m_effect_batch_node_top_1: *mut cocos2d_CCSpriteBatchNode,
    pub m_effect_batch_node_add_top_1: *mut cocos2d_CCSpriteBatchNode,
    pub m_batch_node_player: *mut cocos2d_CCSpriteBatchNode,
    pub m_batch_node_add_player: *mut cocos2d_CCSpriteBatchNode,
    pub m_batch_node_player_glow: *mut cocos2d_CCSpriteBatchNode,
    pub m_batch_node_add_mid: *mut cocos2d_CCSpriteBatchNode,
    pub m_batch_node_bottom: *mut cocos2d_CCSpriteBatchNode,
    pub m_batch_node_add_bottom: *mut cocos2d_CCSpriteBatchNode,
    pub m_batch_node_add_bottom_glow: *mut cocos2d_CCSpriteBatchNode,
    pub m_batch_node_bot_1_container: *mut CCNodeContainer,
    pub m_batch_node_text: *mut cocos2d_CCSpriteBatchNode,
    pub m_batch_node_add_text: *mut cocos2d_CCSpriteBatchNode,
    pub m_effect_batch_node: *mut cocos2d_CCSpriteBatchNode,
    pub m_effect_batch_node_add: *mut cocos2d_CCSpriteBatchNode,
    pub m_batch_node_bottom_2: *mut cocos2d_CCSpriteBatchNode,
    pub m_batch_node_add_bottom_2: *mut cocos2d_CCSpriteBatchNode,
    pub m_batch_node_add_bottom_2_glow: *mut cocos2d_CCSpriteBatchNode,
    pub m_batch_node_bot_2_container: *mut CCNodeContainer,
    pub m_batch_node_text_bot_2: *mut cocos2d_CCSpriteBatchNode,
    pub m_batch_node_add_text_bot_2: *mut cocos2d_CCSpriteBatchNode,
    pub m_effect_batch_node_bot_2: *mut cocos2d_CCSpriteBatchNode,
    pub m_effect_batch_node_add_bot_2: *mut cocos2d_CCSpriteBatchNode,
    pub m_batch_node_bottom_3: *mut cocos2d_CCSpriteBatchNode,
    pub m_batch_node_add_bottom_3: *mut cocos2d_CCSpriteBatchNode,
    pub m_batch_node_add_bottom_3_glow: *mut cocos2d_CCSpriteBatchNode,
    pub m_batch_node_bot_3_container: *mut CCNodeContainer,
    pub m_batch_node_text_bot_3: *mut cocos2d_CCSpriteBatchNode,
    pub m_batch_node_add_text_bot_3: *mut cocos2d_CCSpriteBatchNode,
    pub m_effect_batch_node_bot_3: *mut cocos2d_CCSpriteBatchNode,
    pub m_effect_batch_node_add_bot_3: *mut cocos2d_CCSpriteBatchNode,
    pub m_batch_node_bottom_4: *mut cocos2d_CCSpriteBatchNode,
    pub m_batch_node_add_bottom_4: *mut cocos2d_CCSpriteBatchNode,
    pub m_batch_node_add_bottom_4_glow: *mut cocos2d_CCSpriteBatchNode,
    pub m_batch_node_bot_4_container: *mut CCNodeContainer,
    pub m_batch_node_text_bot_4: *mut cocos2d_CCSpriteBatchNode,
    pub m_batch_node_add_text_bot_4: *mut cocos2d_CCSpriteBatchNode,
    pub m_effect_batch_node_bot_4: *mut cocos2d_CCSpriteBatchNode,
    pub m_effect_batch_node_add_bot_4: *mut cocos2d_CCSpriteBatchNode,
    pub m_player_1: *mut PlayerObject,
    pub m_player_2: *mut PlayerObject,
    pub m_level_settings: *mut LevelSettingsObject,
    pub m_disabled_groups_dict: *mut cocos2d_CCDictionary,
    pub m_objects: *mut cocos2d_CCArray,
    pub m_section_objects: *mut cocos2d_CCArray,
    pub m_sections: *mut cocos2d_CCArray,
    pub m_collision_blocks: *mut cocos2d_CCArray,
    pub m_spawn_objects: *mut cocos2d_CCArray,
    pub m_spawn_objects_2: *mut cocos2d_CCArray,
    pub m_group_nodes: *mut cocos2d_CCNode,
    pub m_objects_vec: stdty::Vector<*mut GameObject>,
    pub m_disabled_objects: stdty::Vector<*mut GameObject>,
    pub m_group_dict: *mut cocos2d_CCDictionary,
    pub m_static_group_dict: *mut cocos2d_CCDictionary,
    pub m_optimized_group_dict: *mut cocos2d_CCDictionary,
    pub m_groups: stdty::Vector<*mut cocos2d_CCArray>,
    pub m_static_groups: stdty::Vector<*mut cocos2d_CCArray>,
    pub m_optimized_groups: stdty::Vector<*mut cocos2d_CCArray>,
    pub m_batch_nodes: *mut cocos2d_CCArray,
    pub m_processed_groups: *mut cocos2d_CCArray,
    pub m_counter_dict: *mut cocos2d_CCDictionary,
    pub m_spawned_groups: *mut cocos2d_CCDictionary,
    pub m_did_update_normal_capacity: bool,
    pub m_is_dual_mode: bool,
    pub m_active_enter_effect: i32,
    pub m_active_dual_touch: bool,
    pub m_attempt_click_count: i32,
    pub m_last_visible_section: i32,
    pub m_first_visible_section: i32,
    pub m_objects_are_disabled: bool,
    pub m_blending: bool,
    _pad97: [bool; 0x8],
    pub m_ignore_damage: bool,
    pub m_follow_player: bool,
    pub m_draw_trigger_boxes: bool,
    pub m_debug_draw: bool,
    pub m_grid_enabled: bool,
    pub m_hide_grid_on_play: bool,
    pub m_effect_lines: bool,
    pub m_show_ground: bool,
    pub m_duration_lines: bool,
    pub m_more_undo: bool,
    pub m_hide_background: bool,
    pub m_smooth_fix_in_editor: bool,
    pub m_high_detail: bool,
    pub m_touch_triggered_groups: *mut cocos2d_CCArray,
    pub m_triggered_groups: *mut cocos2d_CCArray,
    pub m_sticky_groups: *mut cocos2d_CCDictionary,
    pub m_sticky_group_id: i32,
    pub m_unk_object_arr: *mut cocos2d_CCArray,
    pub m_pulse_triggers: *mut cocos2d_CCArray,
    pub m_colour_objects: *mut cocos2d_CCArray,
    pub m_alpha_triggers: *mut cocos2d_CCArray,
    pub m_spawn_triggers: *mut cocos2d_CCArray,
    pub m_move_triggers: *mut cocos2d_CCArray,
    pub m_unk_dict_5: *mut cocos2d_CCDictionary,
    pub m_enabled_groups: *mut cocos2d_CCArray,
    pub m_copy_state_object: *mut GameObject,
    pub m_unk_dict_6: *mut cocos2d_CCDictionary,
    pub m_unk_array_12: *mut cocos2d_CCArray,
    pub field_14: bool,
    pub field_31_d: bool,
    pub m_coin_count: geode_SeedValueRSV,
    pub m_move_trigger: bool,
    pub m_color_trigger: bool,
    pub m_pulse_trigger: bool,
    pub m_alpha_trigger: bool,
    pub m_spawn_trigger: bool,
    pub m_toggle_triggers_maybe: *mut cocos2d_CCArray,
    pub m_unk_arr_2_obj: bool,
    pub m_delayed_spawn_array_2: *mut cocos2d_CCArray,
    pub m_delay_spawn_node: bool,
    pub m_unk_dict_3: *mut cocos2d_CCDictionary,
    pub m_unk_dict_4: *mut cocos2d_CCDictionary,
    pub m_editor_initialising: bool,
    pub field_34_d: bool,
    pub m_time_mod: f32,
    pub m_current_layer: i32,
    pub m_current_start_pos: *mut StartPosObject,
    pub m_prev_obj_layer_scale: f32,
    pub m_obb_2_d: *mut OBB2D,
    pub m_cross_sprite: *mut cocos2d_CCSprite,
    pub m_unk_point_2: cocos2d_CCPoint,
    pub m_unk_float_1: f32,
    pub m_is_dual_mode: bool,
    pub m_unk_rect_bool: bool,
    pub m_current_portal: *mut GameObject,
    pub m_portal: *mut GameObject,
    pub m_editor_ui: *mut EditorUI,
    pub m_background_layer: *mut cocos2d_CCSprite,
    pub m_undo_objects: *mut cocos2d_CCArray,
    pub m_redo_objects: *mut cocos2d_CCArray,
    pub m_unk_point_1: cocos2d_CCPoint,
    pub m_object_count: geode_SeedValueRSV,
    pub m_draw_grid_layer: *mut DrawGridLayer,
    pub m_level: *mut GJGameLevel,
    pub m_playback_mode: PlaybackMode,
    pub m_ground_top_maybe: cocos2d_CCPoint,
    pub m_time: f32,
    pub m_enabled_groups_dict: *mut cocos2d_CCDictionary,
    pub m_3_d: bool,
    pub m_preview_mode: bool,
    pub m_ground_layer: *mut GJGroundLayer,
    pub m_raw_level_string: std_string,
    pub m_trigger_hitbox: *mut core::ffi::c_void,
    pub m_object_vector: stdty::Vector<*mut GameObject>,
    pub m_group_vector: stdty::Vector<*mut GameObject>,
    pub m_nested_objects: stdty::Vector<*mut cocos2d_CCArray>,
    pub m_trigger_groups_dict: *mut cocos2d_CCDictionary,
    pub m_trigger_groups_vector: stdty::Vector<*mut cocos2d_CCArray>,
    pub m_toggle_groups_maybe: bool,
    pub m_unk_vector_3: stdty::Vector<bool>,
    pub m_disabled_group_vector: stdty::Vector<bool>,
    pub m_blend_objects_vector: stdty::Vector<bool>,
    pub m_blend_color_vector: stdty::Vector<bool>,
    pub m_toggled_groups_vector: stdty::Vector<uint8_t>,
    pub m_preview_groups_vector: stdty::Vector<f32>,
    pub m_unk_double_1: f64,
    pub m_delayed_spawn_array_1: *mut cocos2d_CCArray,
    pub m_removing_objects: bool,
}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct CCScrollView {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct TextInputDelegate {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct LocalLevelManager {
    _pad0: [bool; 0x1C],
    pub m_load_data: *mut cocos2d_CCDictionary,
    pub m_level_data: *mut cocos2d_CCDictionary,
    pub m_local_levels: *mut cocos2d_CCArray,
}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct PulseEffectAction {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct ObjectManager {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct CCFadeOut {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct CCActionInterval {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct SpritePartDelegate {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct cocos2d {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct CCIMEDispatcher {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct SelectFontLayer {
    pub m_button_menu: *mut cocos2d_CCMenu,
    pub m_control_connected: i32,
    pub m_alert_protocol: *mut FLAlertLayerProtocol,
    pub m_scene: *mut cocos2d_CCNode,
    pub m_reverse_key_back: bool,
    pub m_color: cocos2d_ccColor3B,
    pub m_main_layer: *mut cocos2d_CCLayer,
    pub m_z_order: i32,
    pub m_no_elasticity: bool,
    pub m_color_2: cocos2d_ccColor3B,
    pub m_button_1: *mut ButtonSprite,
    pub m_button_2: *mut ButtonSprite,
    pub m_scrolling_layer: *mut cocos2d_CCLayerColor,
    pub m_joystick_connected: i32,
    pub m_contains_border: bool,
    pub m_no_action: bool,
    pub m_selected_font: i32,
    pub m_editor_layer: *mut LevelEditorLayer,
    pub m_font_label: *mut cocos2d_CCLabelBMFont,
}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct CCFileUtils {
    pub ti_0: cocos2d::TypeInfo,
}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct CCParticleSystem {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct LevelSelectLayer {
    _pad0: [bool; 0x10],
    pub m_scroll_layer: *mut BoomScrollLayer,
}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct GJListLayer {
    pub m_list_view: *mut BoomListView,
}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct GJDropDownLayerDelegate {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct CCAnimate {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct CCDictionary {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct AchievementCell {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct CCSequence {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct InfoAlertButton {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct LevelUpdateDelegate {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct CreatorLayer {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct EditorOptionsLayer {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct FMODSound {
    pub m_sound: *mut FMOD_Sound,
}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct CommentCell {
    pub m_unknown: bool,
    pub m_table_view: *mut TableView,
    pub m_index_path: CCIndexPath,
    pub m_unknown_thing: i32,
    pub m_unknown_string: stdty::String,
    pub m_width: f32,
    pub m_height: f32,
    pub m_background_layer: *mut cocos2d_CCLayerColor,
    pub m_main_layer: *mut cocos2d_CCLayer,
    _pad9: [bool; 0x4],
    pub m_icon_sprite: *mut cocos2d_CCSprite,
    pub m_like_label: *mut cocos2d_CCLabelBMFont,
    pub m_comment: *mut GJComment,
    _pad13: [bool; 0x4],
}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct HSVWidgetPopupDelegate {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct SongInfoObject {
    pub m_song_id: i32,
    pub m_song_name: stdty::String,
    pub m_artist_name: stdty::String,
    pub m_youtube_video: stdty::String,
    pub m_youtube_channel: stdty::String,
    pub m_song_url: stdty::String,
    pub m_artist_id: i32,
    pub m_file_size: f32,
    pub m_is_unknown_song: bool,
    pub m_priority: i32,
    pub m_level_settings: *mut LevelSettingsObject,
}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct SetupPulsePopup {
    pub m_button_menu: *mut cocos2d_CCMenu,
    pub m_control_connected: i32,
    pub m_alert_protocol: *mut FLAlertLayerProtocol,
    pub m_scene: *mut cocos2d_CCNode,
    pub m_reverse_key_back: bool,
    pub m_color: cocos2d_ccColor3B,
    pub m_main_layer: *mut cocos2d_CCLayer,
    pub m_z_order: i32,
    pub m_no_elasticity: bool,
    pub m_color_2: cocos2d_ccColor3B,
    pub m_button_1: *mut ButtonSprite,
    pub m_button_2: *mut ButtonSprite,
    pub m_scrolling_layer: *mut cocos2d_CCLayerColor,
    pub m_joystick_connected: i32,
    pub m_contains_border: bool,
    pub m_no_action: bool,
    pub cpd_16: cocos2d::extension::ColorPickerDelegate,
    pub m_color_picker: *mut cocos2d_extension_CCControlColourPicker,
    _pad18: [bool; 0x30],
    pub m_current_color_spr: *mut cocos2d_CCSprite,
    pub m_prev_color_spr: *mut cocos2d_CCSprite,
    _pad21: [bool; 0x64],
    pub m_pulse_mode: i32,
}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct GJScaleControlDelegate {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct SongCell {
    pub m_unknown: bool,
    pub m_table_view: *mut TableView,
    pub m_index_path: CCIndexPath,
    pub m_unknown_thing: i32,
    pub m_unknown_string: stdty::String,
    pub m_width: f32,
    pub m_height: f32,
    pub m_background_layer: *mut cocos2d_CCLayerColor,
    pub m_main_layer: *mut cocos2d_CCLayer,
}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct TextArea {
    pub m_disable_color: bool,
    pub m_label: *mut MultilineBitmapFont,
    pub m_width: f32,
    pub m_unknown: i32,
    pub m_font_file: stdty::String,
    pub m_height: f32,
}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct ColorActionSprite {
    pub m_opacity: f32,
    pub m_f_0124: cocos2d__ccColor3B,
    pub m_active_color: cocos2d__ccColor3B,
}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct GameStatsManager {
    _pad0: [bool; 0x28],
    pub m_daily_chests: *mut cocos2d_CCDictionary,
    pub m_world_advert_chests: *mut cocos2d_CCDictionary,
    pub m_active_challenges: *mut cocos2d_CCDictionary,
    pub m_upcoming_challenges: *mut cocos2d_CCDictionary,
    _pad5: [bool; 0xC],
    pub m_player_stats: *mut cocos2d_CCDictionary,
    _pad7: [bool; 0x10],
    pub m_completed_levels: *mut cocos2d_CCDictionary,
    pub m_verified_user_coins: *mut cocos2d_CCDictionary,
    pub m_pending_user_coins: *mut cocos2d_CCDictionary,
    pub m_purchased_items: *mut cocos2d_CCDictionary,
    pub m_online_currency_scores: *mut cocos2d_CCDictionary,
    pub m_main_currency_scores: *mut cocos2d_CCDictionary,
    pub m_gauntlet_currency_scores: *mut cocos2d_CCDictionary,
    pub m_timely_currency_scores: *mut cocos2d_CCDictionary,
    pub m_online_stars: *mut cocos2d_CCDictionary,
    pub m_timely_stars: *mut cocos2d_CCDictionary,
    pub m_gauntlet_diamond_scores: *mut cocos2d_CCDictionary,
    pub m_timely_diamond_scores: *mut cocos2d_CCDictionary,
    pub m_unused_currency_award_dict: *mut cocos2d_CCDictionary,
    pub m_challenge_diamonds: *mut cocos2d_CCDictionary,
    pub m_completed_mappacks: *mut cocos2d_CCDictionary,
    pub m_weekly_chest: *mut cocos2d_CCDictionary,
    pub m_treasure_room_chests: *mut cocos2d_CCDictionary,
    pub m_bonus_key: geode_SeedValueSRV,
    pub m_misc_chests: *mut cocos2d_CCDictionary,
}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct HSVWidgetPopup {
    pub m_button_menu: *mut cocos2d_CCMenu,
    pub m_control_connected: i32,
    pub m_alert_protocol: *mut FLAlertLayerProtocol,
    pub m_scene: *mut cocos2d_CCNode,
    pub m_reverse_key_back: bool,
    pub m_color: cocos2d_ccColor3B,
    pub m_main_layer: *mut cocos2d_CCLayer,
    pub m_z_order: i32,
    pub m_no_elasticity: bool,
    pub m_color_2: cocos2d_ccColor3B,
    pub m_button_1: *mut ButtonSprite,
    pub m_button_2: *mut ButtonSprite,
    pub m_scrolling_layer: *mut cocos2d_CCLayerColor,
    pub m_joystick_connected: i32,
    pub m_contains_border: bool,
    pub m_no_action: bool,
    pub m_configure_widget: *mut ConfigureHSVWidget,
    pub m_delegate: *mut HSVWidgetPopupDelegate,
}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct CCKeypadHandler {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct CCMenuItemLabel {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct CCRepeatForever {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct GJScaleControl {
    pub m_slider: *mut Slider,
    pub m_touch_id: u32,
    pub m_value: f32,
    _pad3: [bool; 0x4],
    pub m_label: *mut cocos2d_CCLabelBMFont,
    pub m_delegate: *mut GJScaleControlDelegate,
}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct CCSpriteFrame {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct ArtistCell {
    pub m_unknown: bool,
    pub m_table_view: *mut TableView,
    pub m_index_path: CCIndexPath,
    pub m_unknown_thing: i32,
    pub m_unknown_string: stdty::String,
    pub m_width: f32,
    pub m_height: f32,
    pub m_background_layer: *mut cocos2d_CCLayerColor,
    pub m_main_layer: *mut cocos2d_CCLayer,
    pub m_idk: *mut core::ffi::c_void,
}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct CCIndexPath {
    pub m_unknown_1: i32,
    pub m_unknown_2: i32,
}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct MoreVideoOptionsLayer {
    pub m_button_menu: *mut cocos2d_CCMenu,
    pub m_control_connected: i32,
    pub m_alert_protocol: *mut FLAlertLayerProtocol,
    pub m_scene: *mut cocos2d_CCNode,
    pub m_reverse_key_back: bool,
    pub m_color: cocos2d_ccColor3B,
    pub m_main_layer: *mut cocos2d_CCLayer,
    pub m_z_order: i32,
    pub m_no_elasticity: bool,
    pub m_color_2: cocos2d_ccColor3B,
    pub m_button_1: *mut ButtonSprite,
    pub m_button_2: *mut ButtonSprite,
    pub m_scrolling_layer: *mut cocos2d_CCLayerColor,
    pub m_joystick_connected: i32,
    pub m_contains_border: bool,
    pub m_no_action: bool,
}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct UILayer {
    _pad0: [bool; 0x8],
    pub m_check_point_menu: *mut cocos2d_CCMenu,
}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct NumberInputLayer {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct SpeedObject {
    pub m_unknown: f32,
    pub m_something_to_compare: f32,
    pub m_idk_3: f32,
    pub m_idk_4: f32,
}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct CustomSongLayer {
    pub m_button_menu: *mut cocos2d_CCMenu,
    pub m_control_connected: i32,
    pub m_alert_protocol: *mut FLAlertLayerProtocol,
    pub m_scene: *mut cocos2d_CCNode,
    pub m_reverse_key_back: bool,
    pub m_color: cocos2d_ccColor3B,
    pub m_main_layer: *mut cocos2d_CCLayer,
    pub m_z_order: i32,
    pub m_no_elasticity: bool,
    pub m_color_2: cocos2d_ccColor3B,
    pub m_button_1: *mut ButtonSprite,
    pub m_button_2: *mut ButtonSprite,
    pub m_scrolling_layer: *mut cocos2d_CCLayerColor,
    pub m_joystick_connected: i32,
    pub m_contains_border: bool,
    pub m_no_action: bool,
    pub m_level_settings: *mut LevelSettingsObject,
    pub m_song_id_input: *mut CCTextInputNode,
    pub m_song_widget: *mut CustomSongWidget,
    pub m_level_settings_layer: *mut LevelSettingsLayer,
}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct CCRepeat {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct EndLevelLayer {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct OpacityEffectAction {
    pub m_time: f32,
    pub m_begin_opacity: f32,
    pub m_end_opacity: f32,
    pub m_finished: bool,
    pub m_elapsed: f32,
    pub m_group: i32,
    pub m_opacity: f32,
    pub m_uuid: i32,
    pub m_delta: f32,
}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct CCRotateTo {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct CCLayerRGBA {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct GJSearchObject {
    pub m_search_type: SearchType,
    pub m_search_query: stdty::String,
    pub m_difficulty: stdty::String,
    pub m_length: stdty::String,
    pub m_page: i32,
    pub m_star_filter: bool,
    pub m_no_star_filter: bool,
    pub m_unknown_member: i32,
    pub m_uncompleted_filter: bool,
    pub m_completed_filter: bool,
    pub m_featured_filter: bool,
    pub m_original_filter: bool,
    pub m_two_player_filter: bool,
    pub m_coins_filter: bool,
    pub m_epic_filter: bool,
    pub m_demon_filter: GJDifficulty,
    pub m_unk: i32,
    pub m_song_id: i32,
    pub m_custom_song_filter: bool,
    pub m_song_filter: bool,
}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct DialogObject {
    pub m_text: stdty::String,
    pub m_title: stdty::String,
    pub m_dialog_type: i32,
    pub m_colour: cocos2d_ccColor3B,
    pub m_text_width: f32,
    pub m_can_skip: bool,
}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct CommentUploadDelegate {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct UndoObject {
    pub m_object_copy: *mut GameObjectCopy,
    pub m_command: UndoCommand,
    pub m_objects: *mut cocos2d_CCArray,
    pub m_redo: bool,
}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct CCEaseInOut {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct CCNodeRGBA {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct FriendRequestDelegate {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct MenuGameLayer {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct CCSpriteBatchNode {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct ObjectToolbox {
    pub m_frame_to_key_dict: *mut cocos2d_CCDictionary,
    pub m_key_to_frame_dict: *mut cocos2d_CCDictionary,
}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct SetupInteractObjectPopup {
    pub m_button_menu: *mut cocos2d_CCMenu,
    pub m_control_connected: i32,
    pub m_alert_protocol: *mut FLAlertLayerProtocol,
    pub m_scene: *mut cocos2d_CCNode,
    pub m_reverse_key_back: bool,
    pub m_color: cocos2d_ccColor3B,
    pub m_main_layer: *mut cocos2d_CCLayer,
    pub m_z_order: i32,
    pub m_no_elasticity: bool,
    pub m_color_2: cocos2d_ccColor3B,
    pub m_button_1: *mut ButtonSprite,
    pub m_button_2: *mut ButtonSprite,
    pub m_scrolling_layer: *mut cocos2d_CCLayerColor,
    pub m_joystick_connected: i32,
    pub m_contains_border: bool,
    pub m_no_action: bool,
}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct GauntletSelectLayer {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct GJAccountBackupDelegate {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct GJAccountLoginDelegate {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct DownloadMessageDelegate {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct CollisionBlockPopup {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct GJRobotSprite {
    pub m_unknown_1: stdty::String,
    pub m_unknown_2: stdty::String,
    _pad2: [bool; 0x14],
    pub m_unknown_3: stdty::String,
    _pad4: [bool; 0x4],
    pub m_unk_244: *mut cocos2d_CCArray,
    pub m_unk_248: bool,
    pub m_main_color: cocos2d_ccColor3B,
    pub m_secondary_color: cocos2d_ccColor3B,
    pub m_unk_250: *mut cocos2d_CCArray,
    pub m_glow_sprite: *mut cocos2d_CCSprite,
    pub m_unk_258: *mut cocos2d_CCSprite,
    _pad12: [bool; 0x4],
    pub m_flame_sprite: *mut cocos2d_CCSprite,
    pub m_head_sprite_part: *mut CCSpritePart,
}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct CCEaseOut {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct CCLabelTTF {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct LevelLeaderboard {
    pub m_button_menu: *mut cocos2d_CCMenu,
    pub m_control_connected: i32,
    pub m_alert_protocol: *mut FLAlertLayerProtocol,
    pub m_scene: *mut cocos2d_CCNode,
    pub m_reverse_key_back: bool,
    pub m_color: cocos2d_ccColor3B,
    pub m_main_layer: *mut cocos2d_CCLayer,
    pub m_z_order: i32,
    pub m_no_elasticity: bool,
    pub m_color_2: cocos2d_ccColor3B,
    pub m_button_1: *mut ButtonSprite,
    pub m_button_2: *mut ButtonSprite,
    pub m_scrolling_layer: *mut cocos2d_CCLayerColor,
    pub m_joystick_connected: i32,
    pub m_contains_border: bool,
    pub m_no_action: bool,
}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct SetIDPopup {
    pub m_button_menu: *mut cocos2d_CCMenu,
    pub m_control_connected: i32,
    pub m_alert_protocol: *mut FLAlertLayerProtocol,
    pub m_scene: *mut cocos2d_CCNode,
    pub m_reverse_key_back: bool,
    pub m_color: cocos2d_ccColor3B,
    pub m_main_layer: *mut cocos2d_CCLayer,
    pub m_z_order: i32,
    pub m_no_elasticity: bool,
    pub m_color_2: cocos2d_ccColor3B,
    pub m_button_1: *mut ButtonSprite,
    pub m_button_2: *mut ButtonSprite,
    pub m_scrolling_layer: *mut cocos2d_CCLayerColor,
    pub m_joystick_connected: i32,
    pub m_contains_border: bool,
    pub m_no_action: bool,
}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct CCLayer {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct SetTargetIDLayer {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct TouchToggleAction {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct CCSprite {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct PlayerCheckpoint {
    pub m_position: cocos2d_CCPoint,
    pub m_y_velocity: f32,
    pub m_is_upside_down: bool,
    pub m_is_ship: bool,
    pub m_is_ball: bool,
    pub m_is_ufo: bool,
    pub m_is_wave: bool,
    pub m_is_robot: bool,
    pub m_is_spider: bool,
    pub m_is_on_ground: bool,
    pub m_has_ghost_trail: i32,
    pub m_small: bool,
    pub m_speed: f32,
    pub m_hidden: bool,
}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct CCControlColourPicker {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct BoomScrollLayer {
    pub m_dots: *mut cocos2d_CCArray,
    _pad1: [bool; 0x40],
    pub m_layer: *mut ExtendedLayer,
    _pad3: [bool; 0x48],
    pub m_page: i32,
}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct LevelBrowserLayer {
    _pad0: [bool; 0x18],
    pub m_list: *mut GJListLayer,
    pub m_left_arrow: *mut CCMenuItemSpriteExtra,
    pub m_right_arrow: *mut CCMenuItemSpriteExtra,
    _pad4: [bool; 0x10],
    pub m_search_object: *mut GJSearchObject,
    _pad6: [bool; 0x14],
    pub m_item_count: i32,
    pub m_page_start_idx: i32,
    pub m_page_end_idx: i32,
}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct CCString {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct CCParticleSystemQuad {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct OnlineListDelegate {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct CCScrollLayerExtDelegate {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct KeybindingsLayer {
    pub m_button_menu: *mut cocos2d_CCMenu,
    pub m_control_connected: i32,
    pub m_alert_protocol: *mut FLAlertLayerProtocol,
    pub m_scene: *mut cocos2d_CCNode,
    pub m_reverse_key_back: bool,
    pub m_color: cocos2d_ccColor3B,
    pub m_main_layer: *mut cocos2d_CCLayer,
    pub m_z_order: i32,
    pub m_no_elasticity: bool,
    pub m_color_2: cocos2d_ccColor3B,
    pub m_button_1: *mut ButtonSprite,
    pub m_button_2: *mut ButtonSprite,
    pub m_scrolling_layer: *mut cocos2d_CCLayerColor,
    pub m_joystick_connected: i32,
    pub m_contains_border: bool,
    pub m_no_action: bool,
    pub m_current_page: i32,
    pub m_item_count: i32,
    pub m_page_count: i32,
    pub m_pages: *mut cocos2d_CCDictionary,
    pub m_unused: *mut cocos2d_CCDictionary,
    pub m_left_arrow: *mut cocos2d_CCNode,
    pub m_right_arrow: *mut cocos2d_CCNode,
}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct SelectArtLayer {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct GJColorSetupLayer {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct GJMessageCell {
    pub m_unknown: bool,
    pub m_table_view: *mut TableView,
    pub m_index_path: CCIndexPath,
    pub m_unknown_thing: i32,
    pub m_unknown_string: stdty::String,
    pub m_width: f32,
    pub m_height: f32,
    pub m_background_layer: *mut cocos2d_CCLayerColor,
    pub m_main_layer: *mut cocos2d_CCLayer,
}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct ProfilePage {
    pub m_button_menu: *mut cocos2d_CCMenu,
    pub m_control_connected: i32,
    pub m_alert_protocol: *mut FLAlertLayerProtocol,
    pub m_scene: *mut cocos2d_CCNode,
    pub m_reverse_key_back: bool,
    pub m_color: cocos2d_ccColor3B,
    pub m_main_layer: *mut cocos2d_CCLayer,
    pub m_z_order: i32,
    pub m_no_elasticity: bool,
    pub m_color_2: cocos2d_ccColor3B,
    pub m_button_1: *mut ButtonSprite,
    pub m_button_2: *mut ButtonSprite,
    pub m_scrolling_layer: *mut cocos2d_CCLayerColor,
    pub m_joystick_connected: i32,
    pub m_contains_border: bool,
    pub m_no_action: bool,
    pub m_score: *mut GJUserScore,
    pub m_account_id: i32,
    _pad18: [bool; 0x38],
    pub m_buttons: *mut cocos2d_CCArray,
}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct CreateGuidelinesLayer {
    pub m_button_menu: *mut cocos2d_CCMenu,
    pub m_control_connected: i32,
    pub m_alert_protocol: *mut FLAlertLayerProtocol,
    pub m_scene: *mut cocos2d_CCNode,
    pub m_reverse_key_back: bool,
    pub m_color: cocos2d_ccColor3B,
    pub m_main_layer: *mut cocos2d_CCLayer,
    pub m_z_order: i32,
    pub m_no_elasticity: bool,
    pub m_color_2: cocos2d_ccColor3B,
    pub m_button_1: *mut ButtonSprite,
    pub m_button_2: *mut ButtonSprite,
    pub m_scrolling_layer: *mut cocos2d_CCLayerColor,
    pub m_joystick_connected: i32,
    pub m_contains_border: bool,
    pub m_no_action: bool,
    _pad16: [bool; 0x24],
    pub m_guideline_string: stdty::String,
}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct AnimatedSpriteDelegate {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct TableViewDataSource {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct EffectGameObject {
    pub m_followers: *mut cocos2d_CCArray,
    pub m_following_sprite: *mut CCSpritePlus,
    pub m_has_follower: bool,
    pub m_propagate_scale_changes: bool,
    pub m_propagate_flip_changes: bool,
    pub m_unk_3: bool,
    pub m_is_blue_maybe: bool,
    pub m_unk_2: f32,
    pub m_unk: f32,
    pub m_unk_3_f: f32,
    pub m_unk_4: f32,
    pub m_unkidk: bool,
    pub m_anim_speed_2: f32,
    pub m_is_effect_object: bool,
    pub m_randomised_anim_start: bool,
    pub m_anim_speed: f32,
    pub m_is_black_object: bool,
    pub m_is_black_object_with_outline: bool,
    pub m_black_child_opacity: f32,
    pub field_21_c: bool,
    pub m_editor: bool,
    pub m_group_disabled: bool,
    pub m_colour_on_top: bool,
    pub m_base_color_id: i32,
    pub m_detail_color_id: i32,
    pub m_base_color_hsv_modified: bool,
    pub m_detail_color_hsv_modified: bool,
    pub m_start_pos_offset: cocos2d_CCPoint,
    pub m_rotate_offset: f32,
    pub m_tint_trigger: bool,
    pub m_is_flipped_x: bool,
    pub m_is_flipped_y: bool,
    pub m_box_offset: cocos2d_CCPoint,
    pub m_is_oriented: bool,
    pub m_box_offset_2: cocos2d_CCPoint,
    pub m_object_obb_2_d: *mut OBB2D,
    pub m_oriented: bool,
    pub m_glow_sprite: *mut cocos2d_CCSprite,
    pub m_not_editor: bool,
    pub m_my_action: *mut cocos2d_CCAction,
    pub m_unk_1: bool,
    pub m_run_action_with_tag: bool,
    pub m_object_powered_on: bool,
    pub m_object_size: cocos2d_CCSize,
    pub m_modifier: bool,
    pub m_active: bool,
    pub m_animation_finished: bool,
    pub m_particle_system: *mut cocos2d_CCParticleSystemQuad,
    pub m_effect_plist_name: stdty::String,
    pub m_particle_added: bool,
    pub m_has_particles: bool,
    pub m_unk_custom_ring: bool,
    pub m_portal_position: cocos2d_CCPoint,
    pub m_unk_particle_system: bool,
    pub m_object_texture_rect: cocos2d_CCRect,
    pub m_texture_rect_dirty: bool,
    pub m_rect_x_center_maybe: f32,
    pub m_object_rect_2: cocos2d_CCRect,
    pub m_is_object_rect_dirty: bool,
    pub m_is_oriented_rect_dirty: bool,
    pub m_has_been_activated: bool,
    pub m_has_been_activated_p_2: bool,
    pub m_has_detail_color: bool,
    pub m_is_pulse_stick: bool,
    pub m_linked_group: i32,
    pub m_is_saw: bool,
    pub m_custom_rotate_speed: i32,
    pub m_saw_is_disabled: bool,
    pub m_unknown_visibility_345: bool,
    pub m_unknown_346: bool,
    pub m_unknown_visibility_347: bool,
    pub m_base_sprite: *mut cocos2d_CCSprite,
    pub m_detail_sprite: *mut cocos2d_CCSprite,
    _pad73: [bool; 0x4],
    pub m_object_radius: f32,
    pub m_is_rotated_side: bool,
    pub m_unk_2_f_4: f32,
    pub m_unk_2_f_8: f32,
    pub m_unique_id: i32,
    pub m_object_type: GameObjectType,
    pub m_section: i32,
    pub m_touch_triggered: bool,
    pub m_spawn_triggered: bool,
    pub m_start_position: cocos2d_CCPoint,
    pub m_texture_name: stdty::String,
    pub m_use_audio_scale: bool,
    pub m_sleeping: bool,
    pub m_rotation: f32,
    pub m_ob_start_scale: cocos2d_CCSize,
    pub m_start_flip_x: bool,
    pub m_start_flip_y: bool,
    pub m_should_hide: bool,
    pub m_spawn_x_position: f32,
    pub m_invisible: bool,
    pub m_enter_angle: f32,
    pub m_active_enter_effect: i32,
    pub m_parent_mode: i32,
    pub m_is_glow_disabled: bool,
    pub m_target_color_id: i32,
    pub m_scale: f32,
    pub m_object_id: i32,
    pub m_unknown_3_c_8: i32,
    pub m_unk_368: bool,
    pub m_unk_369: bool,
    pub m_unk_36_a: bool,
    pub m_is_dont_enter: bool,
    pub m_is_dont_fade: bool,
    pub m_unk_36_d: bool,
    pub m_default_z_order: i32,
    pub m_use_second_sheet: bool,
    pub m_is_portal: bool,
    pub m_lock_colour_as_child: bool,
    pub m_custom_audio_scale: bool,
    pub m_min_audio_scale: i32,
    pub m_max_audio_scale: i32,
    pub m_unk_particle_system_2: bool,
    pub m_secret_coin_id: i32,
    pub m_unk_unused_save_string_key_53: i32,
    pub m_invisible_mode: bool,
    pub m_glow_user_background_colour: bool,
    pub m_use_special_light: bool,
    pub m_orb_or_pad: bool,
    pub m_glow_opacity_mod: f32,
    pub m_up_slope: bool,
    pub m_slope_type: i32,
    pub m_slope_angle: f32,
    pub m_hazardous_slope: bool,
    pub m_real_opacity: f32,
    pub m_base_color: *mut GJSpriteColor,
    pub m_detail_color: *mut GJSpriteColor,
    pub m_unknown_420: i32,
    pub m_default_z_layer: ZLayer,
    pub m_z_layer: ZLayer,
    pub m_game_z_order: i32,
    pub m_text_object_string: stdty::String,
    pub m_show_gamemode_borders: bool,
    pub m_unk_3_d_9: bool,
    pub m_is_selected: bool,
    pub m_global_click_counter: i32,
    _pad139: [bool; 0x8],
    pub m_should_update_color_sprite: bool,
    pub m_multi_scale_multiplier: f32,
    pub m_is_group_parent: bool,
    pub m_groups: *mut [i16; 10],
    pub m_group_count: i16,
    pub m_pulse_groups: *mut [i16; 10],
    pub m_pulse_group_count: i16,
    pub m_alpha_groups: *mut [i16; 10],
    pub m_alpha_group_count: i16,
    pub m_editor_layer: i32,
    pub m_editor_layer_2: i32,
    pub m_unk_414: i32,
    _pad152: [bool; 0xC],
    pub m_first_position: cocos2d_CCPoint,
    _pad154: [bool; 0x15],
    pub m_is_triggerable: bool,
    _pad156: [bool; 0x6],
    pub m_high_detail: bool,
    pub m_color_action_sprite_base: *mut ColorActionSprite,
    pub m_color_action_sprite_detail: *mut ColorActionSprite,
    pub m_effect_manager: *mut GJEffectManager,
    _pad161: [bool; 0xC],
    pub m_orb_multi_activate: bool,
    pub m_col_color: cocos2d_ccColor3B,
    pub m_duration: f32,
    pub m_opacity: f32,
    pub m_target_group_id: i32,
    pub m_center_group_id: i32,
    pub m_shake_strength: f32,
    pub m_shake_interval: f32,
    pub m_tint_ground: bool,
    pub m_player_color_1: bool,
    pub m_player_color_2: bool,
    pub m_blending: bool,
    pub m_move: cocos2d_CCPoint,
    pub m_easing_type: EasingType,
    pub m_easing_rate: f32,
    pub m_lock_to_player_x: bool,
    pub m_lock_to_player_y: bool,
    pub m_use_target: bool,
    pub m_move_target_type: MoveTargetType,
    pub m_rotate_degrees: i32,
    pub m_times_360: i32,
    pub m_lock_object_rotation: bool,
    pub m_follow_mod: cocos2d_CCPoint,
    pub undocuemented_level_property_74: bool,
    pub m_follow_y_speed: f32,
    pub m_follow_y_delay: f32,
    pub m_follow_y_offset: i32,
    pub m_follow_y_max_speed: f32,
    pub m_fade_in_time: f32,
    pub m_hold_time: f32,
    pub m_fade_out_time: f32,
    pub m_pulse_hsv_mode: i32,
    pub m_pulse_group_mode: i32,
    pub m_hsv_value: cocos2d_ccHSVValue,
    pub m_copy_color_id: i32,
    pub m_copy_opacity: bool,
    pub m_pulse_main_only: bool,
    pub m_pulse_detail_only: bool,
    pub m_pulse_exclusive: bool,
    pub m_activate_group: bool,
    pub m_touch_hold_mode: bool,
    pub m_touch_toggle_mode: TouchToggleMode,
    pub m_touch_dual_mode: bool,
    pub m_animation_id: i32,
    pub m_spawn_delay: f32,
    pub m_spawn_position: cocos2d_CCPoint,
    pub m_multi_trigger: bool,
    pub m_editor_disabled: bool,
    pub m_target_count: i32,
    pub m_subtract_count: bool,
    pub m_comparison_type: ComparisonType,
    pub m_multi_activate: bool,
    pub m_trigger_on_exit: bool,
    pub m_block_bid: i32,
    pub m_dynamic_block: bool,
    pub m_item_block_aid: i32,
    pub m_pickup_mode: i32,
    _pad219: [bool; 0x24],
}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct GhostTrailEffect {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct LeaderboardsLayer {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct CCCallFunc {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct KeysLayer {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct CCAction {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct DailyLevelPage {
    pub m_button_menu: *mut cocos2d_CCMenu,
    pub m_control_connected: i32,
    pub m_alert_protocol: *mut FLAlertLayerProtocol,
    pub m_scene: *mut cocos2d_CCNode,
    pub m_reverse_key_back: bool,
    pub m_color: cocos2d_ccColor3B,
    pub m_main_layer: *mut cocos2d_CCLayer,
    pub m_z_order: i32,
    pub m_no_elasticity: bool,
    pub m_color_2: cocos2d_ccColor3B,
    pub m_button_1: *mut ButtonSprite,
    pub m_button_2: *mut ButtonSprite,
    pub m_scrolling_layer: *mut cocos2d_CCLayerColor,
    pub m_joystick_connected: i32,
    pub m_contains_border: bool,
    pub m_no_action: bool,
    _pad16: [bool; 0x21],
    pub m_weekly: bool,
}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct GJGarageLayer {
    _pad0: [bool; 0x8],
    pub m_name_input: *mut CCTextInputNode,
    pub m_player_preview: *mut SimplePlayer,
    _pad3: [bool; 0x8],
    pub m_color_selector_1: *mut cocos2d_CCSprite,
    pub m_color_selector_2: *mut cocos2d_CCSprite,
    pub m_unk_button_0_x_148: *mut CCMenuItemSpriteExtra,
    pub m_unk_button_0_x_14_c: *mut CCMenuItemSpriteExtra,
    _pad8: [bool; 0x8],
    pub m_pages_array: *mut cocos2d_CCArray,
    _pad10: [bool; 0x8],
    pub m_tab_toggle_cube: *mut CCMenuItemToggler,
    pub m_tab_toggle_ship: *mut CCMenuItemToggler,
    pub m_tab_toggle_ball: *mut CCMenuItemToggler,
    pub m_tab_toggle_ufo: *mut CCMenuItemToggler,
    pub m_tab_toggle_wave: *mut CCMenuItemToggler,
    pub m_tab_toggle_robot: *mut CCMenuItemToggler,
    pub m_tab_toggle_spider: *mut CCMenuItemToggler,
    pub m_tab_toggle_special: *mut CCMenuItemToggler,
    pub m_tab_toggle_death_effect: *mut CCMenuItemToggler,
    _pad20: [bool; 0x4],
    pub m_update_selector: bool,
}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct CCScaleTo {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct CCHide {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct AnimatedShopKeeper {
    pub m_unknown_1: stdty::String,
    pub m_unknown_2: stdty::String,
    _pad2: [bool; 0x14],
    pub m_unknown_3: stdty::String,
    _pad4: [bool; 0x4],
    pub m_unknown_1: f32,
    pub m_unknown_2: f32,
    pub m_unknown: bool,
}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct CCTargetedTouchHandler {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct HardStreak {
    pub m_points_arr: *mut cocos2d_CCArray,
    pub m_current_point: cocos2d_CCPoint,
    pub m_wave_size: f32,
    pub m_pulse_size: f32,
    pub m_is_solid: bool,
}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct SetupOpacityPopup {
    pub m_button_menu: *mut cocos2d_CCMenu,
    pub m_control_connected: i32,
    pub m_alert_protocol: *mut FLAlertLayerProtocol,
    pub m_scene: *mut cocos2d_CCNode,
    pub m_reverse_key_back: bool,
    pub m_color: cocos2d_ccColor3B,
    pub m_main_layer: *mut cocos2d_CCLayer,
    pub m_z_order: i32,
    pub m_no_elasticity: bool,
    pub m_color_2: cocos2d_ccColor3B,
    pub m_button_1: *mut ButtonSprite,
    pub m_button_2: *mut ButtonSprite,
    pub m_scrolling_layer: *mut cocos2d_CCLayerColor,
    pub m_joystick_connected: i32,
    pub m_contains_border: bool,
    pub m_no_action: bool,
}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct LeaderboardManagerDelegate {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct CCMoveTo {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct LevelSettingsLayer {
    pub m_button_menu: *mut cocos2d_CCMenu,
    pub m_control_connected: i32,
    pub m_alert_protocol: *mut FLAlertLayerProtocol,
    pub m_scene: *mut cocos2d_CCNode,
    pub m_reverse_key_back: bool,
    pub m_color: cocos2d_ccColor3B,
    pub m_main_layer: *mut cocos2d_CCLayer,
    pub m_z_order: i32,
    pub m_no_elasticity: bool,
    pub m_color_2: cocos2d_ccColor3B,
    pub m_button_1: *mut ButtonSprite,
    pub m_button_2: *mut ButtonSprite,
    pub m_scrolling_layer: *mut cocos2d_CCLayerColor,
    pub m_joystick_connected: i32,
    pub m_contains_border: bool,
    pub m_no_action: bool,
    pub m_song_index: i32,
    pub m_speed: Speed,
    pub m_background_channel_sprite: *mut ColorChannelSprite,
    pub m_ground_1_channel_sprite: *mut ColorChannelSprite,
    pub m_ground_2_channel_sprite: *mut ColorChannelSprite,
    pub m_line_channel_sprite: *mut ColorChannelSprite,
    pub m_object_channel_sprite: *mut ColorChannelSprite,
    pub m_3_d_channel_sprite: *mut ColorChannelSprite,
    pub m_colour_btn_sprite: *mut cocos2d_CCSprite,
    pub m_background_sprite: *mut cocos2d_CCSprite,
    pub m_ground_sprite: *mut cocos2d_CCSprite,
    pub m_settings_object: *mut LevelSettingsObject,
    pub m_main_song_label: *mut cocos2d_CCLabelBMFont,
    pub m_game_mode_array: *mut cocos2d_CCArray,
    pub m_speed_array: *mut cocos2d_CCArray,
    pub m_level_settings_delegate: *mut LevelSettingsDelegate,
    pub m_editor_layer: *mut LevelEditorLayer,
    pub m_main_song_array: *mut cocos2d_CCArray,
    pub m_btn_array: *mut cocos2d_CCArray,
    pub m_main_song_btn: *mut CCMenuItemSpriteExtra,
    pub m_custom_song_btn: *mut CCMenuItemSpriteExtra,
    pub m_select_custom_song_btn: *mut CCMenuItemSpriteExtra,
    pub m_change_song_btn: *mut CCMenuItemSpriteExtra,
    pub m_custom_song_widget: *mut CustomSongWidget,
}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct CCMouseDispatcher {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct DrawGridLayer {
    pub m_common_lines: *mut [cocos2d_CCPoint; 400],
    pub m_yellow_guidelines: *mut [cocos2d_CCPoint; 200],
    pub m_green_guidelines: *mut [cocos2d_CCPoint; 200],
    pub m_song_offset_1: f32,
    pub m_song_offset_2: f32,
    pub m_last_music_x_position: f32,
    pub m_effect_sort_dirty: bool,
    pub m_editor: *mut LevelEditorLayer,
    pub m_guideline_string: stdty::String,
    pub m_grid: *mut cocos2d_CCNode,
    pub m_guidelines: *mut cocos2d_CCArray,
    pub m_effects: *mut cocos2d_CCArray,
    pub m_guides: *mut cocos2d_CCArray,
    pub m_speed_objects_1: *mut cocos2d_CCArray,
    pub m_speed_objects_2: *mut cocos2d_CCArray,
    pub m_player_node_points: *mut cocos2d_CCArray,
    pub m_player_2_node_points: *mut cocos2d_CCArray,
    pub m_unk_double: f64,
    pub m_guideline_spacing: f32,
    pub m_slow_guideline_spacing: f32,
    pub m_normal_guideline_spacing: f32,
    pub m_fast_guideline_spacing: f32,
    pub m_faster_guideline_spacing: f32,
    pub m_fastest_guideline_spacing: f32,
    pub m_updating_time_markers: bool,
    pub m_time_needs_update: bool,
    pub m_active_grid_node_size: f32,
    pub m_grid_size: f32,
}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct FMODAudioEngine {
    pub m_dictionary: *mut cocos2d_CCDictionary,
    pub m_file_path: std_string,
    pub m_background_music_volume: f32,
    pub m_effects_volume: f32,
    pub m_pulse_1: f32,
    pub m_pulse_2: f32,
    pub m_pulse_3: f32,
    pub m_pulse_counter: i32,
    pub m_metering: bool,
    pub m_fading: bool,
    pub m_fade_in: bool,
    pub m_fade_in_duration: f32,
    pub m_system: *mut FMOD_System,
    pub m_sound: *mut FMOD_Sound,
    pub m_current_sound_channel: *mut FMOD_Channel,
    pub m_global_channel: *mut FMOD_Channel,
    pub m_dsp: *mut FMOD_DSP,
    pub m_last_result: FMOD_RESULT,
    pub m_version: i32,
    pub m_extra_driver_data: *mut core::ffi::c_void,
    pub m_music_offset: i32,
}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct CountTriggerAction {
    pub m_previous_count: i32,
    pub m_target_count: i32,
    pub m_target_id: i32,
    pub m_activate_group: bool,
    pub m_multi_activate: bool,
}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct LikeItemDelegate {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct MusicDownloadManager {
    pub m_unknown_dict: *mut cocos2d_CCDictionary,
    pub m_handlers: *mut cocos2d_CCArray,
    pub m_songs_dict: *mut cocos2d_CCDictionary,
    pub m_priority: i32,
}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct LabelGameObject {
    pub m_followers: *mut cocos2d_CCArray,
    pub m_following_sprite: *mut CCSpritePlus,
    pub m_has_follower: bool,
    pub m_propagate_scale_changes: bool,
    pub m_propagate_flip_changes: bool,
    pub m_unk_3: bool,
    pub m_is_blue_maybe: bool,
    pub m_unk_2: f32,
    pub m_unk: f32,
    pub m_unk_3_f: f32,
    pub m_unk_4: f32,
    pub m_unkidk: bool,
    pub m_anim_speed_2: f32,
    pub m_is_effect_object: bool,
    pub m_randomised_anim_start: bool,
    pub m_anim_speed: f32,
    pub m_is_black_object: bool,
    pub m_is_black_object_with_outline: bool,
    pub m_black_child_opacity: f32,
    pub field_21_c: bool,
    pub m_editor: bool,
    pub m_group_disabled: bool,
    pub m_colour_on_top: bool,
    pub m_base_color_id: i32,
    pub m_detail_color_id: i32,
    pub m_base_color_hsv_modified: bool,
    pub m_detail_color_hsv_modified: bool,
    pub m_start_pos_offset: cocos2d_CCPoint,
    pub m_rotate_offset: f32,
    pub m_tint_trigger: bool,
    pub m_is_flipped_x: bool,
    pub m_is_flipped_y: bool,
    pub m_box_offset: cocos2d_CCPoint,
    pub m_is_oriented: bool,
    pub m_box_offset_2: cocos2d_CCPoint,
    pub m_object_obb_2_d: *mut OBB2D,
    pub m_oriented: bool,
    pub m_glow_sprite: *mut cocos2d_CCSprite,
    pub m_not_editor: bool,
    pub m_my_action: *mut cocos2d_CCAction,
    pub m_unk_1: bool,
    pub m_run_action_with_tag: bool,
    pub m_object_powered_on: bool,
    pub m_object_size: cocos2d_CCSize,
    pub m_modifier: bool,
    pub m_active: bool,
    pub m_animation_finished: bool,
    pub m_particle_system: *mut cocos2d_CCParticleSystemQuad,
    pub m_effect_plist_name: stdty::String,
    pub m_particle_added: bool,
    pub m_has_particles: bool,
    pub m_unk_custom_ring: bool,
    pub m_portal_position: cocos2d_CCPoint,
    pub m_unk_particle_system: bool,
    pub m_object_texture_rect: cocos2d_CCRect,
    pub m_texture_rect_dirty: bool,
    pub m_rect_x_center_maybe: f32,
    pub m_object_rect_2: cocos2d_CCRect,
    pub m_is_object_rect_dirty: bool,
    pub m_is_oriented_rect_dirty: bool,
    pub m_has_been_activated: bool,
    pub m_has_been_activated_p_2: bool,
    pub m_has_detail_color: bool,
    pub m_is_pulse_stick: bool,
    pub m_linked_group: i32,
    pub m_is_saw: bool,
    pub m_custom_rotate_speed: i32,
    pub m_saw_is_disabled: bool,
    pub m_unknown_visibility_345: bool,
    pub m_unknown_346: bool,
    pub m_unknown_visibility_347: bool,
    pub m_base_sprite: *mut cocos2d_CCSprite,
    pub m_detail_sprite: *mut cocos2d_CCSprite,
    _pad73: [bool; 0x4],
    pub m_object_radius: f32,
    pub m_is_rotated_side: bool,
    pub m_unk_2_f_4: f32,
    pub m_unk_2_f_8: f32,
    pub m_unique_id: i32,
    pub m_object_type: GameObjectType,
    pub m_section: i32,
    pub m_touch_triggered: bool,
    pub m_spawn_triggered: bool,
    pub m_start_position: cocos2d_CCPoint,
    pub m_texture_name: stdty::String,
    pub m_use_audio_scale: bool,
    pub m_sleeping: bool,
    pub m_rotation: f32,
    pub m_ob_start_scale: cocos2d_CCSize,
    pub m_start_flip_x: bool,
    pub m_start_flip_y: bool,
    pub m_should_hide: bool,
    pub m_spawn_x_position: f32,
    pub m_invisible: bool,
    pub m_enter_angle: f32,
    pub m_active_enter_effect: i32,
    pub m_parent_mode: i32,
    pub m_is_glow_disabled: bool,
    pub m_target_color_id: i32,
    pub m_scale: f32,
    pub m_object_id: i32,
    pub m_unknown_3_c_8: i32,
    pub m_unk_368: bool,
    pub m_unk_369: bool,
    pub m_unk_36_a: bool,
    pub m_is_dont_enter: bool,
    pub m_is_dont_fade: bool,
    pub m_unk_36_d: bool,
    pub m_default_z_order: i32,
    pub m_use_second_sheet: bool,
    pub m_is_portal: bool,
    pub m_lock_colour_as_child: bool,
    pub m_custom_audio_scale: bool,
    pub m_min_audio_scale: i32,
    pub m_max_audio_scale: i32,
    pub m_unk_particle_system_2: bool,
    pub m_secret_coin_id: i32,
    pub m_unk_unused_save_string_key_53: i32,
    pub m_invisible_mode: bool,
    pub m_glow_user_background_colour: bool,
    pub m_use_special_light: bool,
    pub m_orb_or_pad: bool,
    pub m_glow_opacity_mod: f32,
    pub m_up_slope: bool,
    pub m_slope_type: i32,
    pub m_slope_angle: f32,
    pub m_hazardous_slope: bool,
    pub m_real_opacity: f32,
    pub m_base_color: *mut GJSpriteColor,
    pub m_detail_color: *mut GJSpriteColor,
    pub m_unknown_420: i32,
    pub m_default_z_layer: ZLayer,
    pub m_z_layer: ZLayer,
    pub m_game_z_order: i32,
    pub m_text_object_string: stdty::String,
    pub m_show_gamemode_borders: bool,
    pub m_unk_3_d_9: bool,
    pub m_is_selected: bool,
    pub m_global_click_counter: i32,
    _pad139: [bool; 0x8],
    pub m_should_update_color_sprite: bool,
    pub m_multi_scale_multiplier: f32,
    pub m_is_group_parent: bool,
    pub m_groups: *mut [i16; 10],
    pub m_group_count: i16,
    pub m_pulse_groups: *mut [i16; 10],
    pub m_pulse_group_count: i16,
    pub m_alpha_groups: *mut [i16; 10],
    pub m_alpha_group_count: i16,
    pub m_editor_layer: i32,
    pub m_editor_layer_2: i32,
    pub m_unk_414: i32,
    _pad152: [bool; 0xC],
    pub m_first_position: cocos2d_CCPoint,
    _pad154: [bool; 0x15],
    pub m_is_triggerable: bool,
    _pad156: [bool; 0x6],
    pub m_high_detail: bool,
    pub m_color_action_sprite_base: *mut ColorActionSprite,
    pub m_color_action_sprite_detail: *mut ColorActionSprite,
    pub m_effect_manager: *mut GJEffectManager,
    _pad161: [bool; 0xC],
    pub m_orb_multi_activate: bool,
}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct GJEffectManager {
    pub m_effect_delegate: *mut TriggerEffectDelegate,
    pub m_color_actions: *mut cocos2d_CCDictionary,
    pub m_color_sprites: *mut cocos2d_CCDictionary,
    pub m_pulse_actions_for_group: *mut cocos2d_CCDictionary,
    pub m_color_cache: *mut cocos2d_CCDictionary,
    pub m_opacity_actions_for_group: *mut cocos2d_CCDictionary,
    pub m_f_0150: *mut cocos2d_CCDictionary,
    pub m_opacity_actions: *mut cocos2d_CCArray,
    pub m_touch_actions: *mut cocos2d_CCArray,
    pub m_count_actions: *mut cocos2d_CCDictionary,
    pub m_on_death_actions: *mut cocos2d_CCArray,
    pub m_collision_actions: *mut cocos2d_CCArray,
    pub m_f_0180: *mut cocos2d_CCDictionary,
    pub m_f_0188: *mut cocos2d_CCDictionary,
    pub m_inheritance_nodes_for_color: stdty::Vector<*mut InheritanceNode>,
    pub m_f_01_a_8: *mut cocos2d_CCDictionary,
    pub m_collision_actions_for_group_1: *mut cocos2d_CCDictionary,
    pub m_collision_actions_for_group_2: *mut cocos2d_CCDictionary,
    pub m_color_actions_for_color: stdty::Vector<*mut ColorAction>,
    pub m_color_sprites_for_color: stdty::Vector<*mut ColorActionSprite>,
    pub m_pulse_exists_for_group: [bool; 1100],
    pub m_f_063_c: bool,
    pub m_opactiy_exists_for_group: [bool; 1100],
    pub m_item_values: [i32; 1100],
    pub m_unusued: i32,
    pub m_unused_2: *mut i32,
    pub m_f_1_bc_8: *mut cocos2d_CCArray,
    pub m_inheritance_chain: *mut cocos2d_CCArray,
    pub m_f_1_bd_8: *mut cocos2d_CCDictionary,
    pub m_group_toggled: stdty::Vector<bool>,
    pub m_triggered_i_ds: *mut cocos2d_CCDictionary,
    pub m_follow_actions: *mut cocos2d_CCDictionary,
    pub m_spawn_actions: *mut cocos2d_CCArray,
    pub m_move_actions: *mut cocos2d_CCArray,
    pub m_f_1_c_28: *mut cocos2d_CCArray,
    pub m_f_1_c_30: *mut cocos2d_CCNode,
    pub m_f_1_c_38: *mut cocos2d_CCDictionary,
    pub m_f_1_c_40: *mut cocos2d_CCDictionary,
    pub m_f_1_c_48: *mut cocos2d_CCDictionary,
    pub m_f_1_c_50: *mut cocos2d_CCDictionary,
    pub m_time: f32,
    pub m_velocity: f32,
    pub m_acceleration: f32,
    pub m_move_optimization_enabled: bool,
}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct RateStarsLayer {
    pub m_button_menu: *mut cocos2d_CCMenu,
    pub m_control_connected: i32,
    pub m_alert_protocol: *mut FLAlertLayerProtocol,
    pub m_scene: *mut cocos2d_CCNode,
    pub m_reverse_key_back: bool,
    pub m_color: cocos2d_ccColor3B,
    pub m_main_layer: *mut cocos2d_CCLayer,
    pub m_z_order: i32,
    pub m_no_elasticity: bool,
    pub m_color_2: cocos2d_ccColor3B,
    pub m_button_1: *mut ButtonSprite,
    pub m_button_2: *mut ButtonSprite,
    pub m_scrolling_layer: *mut cocos2d_CCLayerColor,
    pub m_joystick_connected: i32,
    pub m_contains_border: bool,
    pub m_no_action: bool,
    pub m_upload_finished: bool,
    pub m_is_mod_suggest: bool,
    pub m_selected_feature: bool,
    pub m_confirm_btn: *mut CCMenuItemSpriteExtra,
    pub m_star_btns: *mut cocos2d_CCArray,
    pub m_difficulty_sprite: *mut cocos2d_CCSprite,
    pub m_level_id: i32,
    pub m_selected_rating: i32,
    pub m_selected_coin: bool,
    pub m_feature_sprite: *mut cocos2d_CCSprite,
    pub m_rate_action: *mut UploadActionPopup,
    pub m_rate_delegate: *mut RateLevelDelegate,
}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct CCDrawNode {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct ColorChannelSprite {
    pub m_copy_label: *mut cocos2d_CCLabelBMFont,
    pub m_opacity_label: *mut cocos2d_CCLabelBMFont,
    pub m_blending_dot: *mut cocos2d_CCLabelBMFont,
}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct CCSpritePart {
    pub m_followers: *mut cocos2d_CCArray,
    pub m_following_sprite: *mut CCSpritePlus,
    pub m_has_follower: bool,
    pub m_propagate_scale_changes: bool,
    pub m_propagate_flip_changes: bool,
}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct CustomSongCell {
    pub m_unknown: bool,
    pub m_table_view: *mut TableView,
    pub m_index_path: CCIndexPath,
    pub m_unknown_thing: i32,
    pub m_unknown_string: stdty::String,
    pub m_width: f32,
    pub m_height: f32,
    pub m_background_layer: *mut cocos2d_CCLayerColor,
    pub m_main_layer: *mut cocos2d_CCLayer,
}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct CustomSongLayerDelegate {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct SetupTouchTogglePopup {
    pub m_button_menu: *mut cocos2d_CCMenu,
    pub m_control_connected: i32,
    pub m_alert_protocol: *mut FLAlertLayerProtocol,
    pub m_scene: *mut cocos2d_CCNode,
    pub m_reverse_key_back: bool,
    pub m_color: cocos2d_ccColor3B,
    pub m_main_layer: *mut cocos2d_CCLayer,
    pub m_z_order: i32,
    pub m_no_elasticity: bool,
    pub m_color_2: cocos2d_ccColor3B,
    pub m_button_1: *mut ButtonSprite,
    pub m_button_2: *mut ButtonSprite,
    pub m_scrolling_layer: *mut cocos2d_CCLayerColor,
    pub m_joystick_connected: i32,
    pub m_contains_border: bool,
    pub m_no_action: bool,
}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct UploadActionPopup {
    pub m_button_menu: *mut cocos2d_CCMenu,
    pub m_control_connected: i32,
    pub m_alert_protocol: *mut FLAlertLayerProtocol,
    pub m_scene: *mut cocos2d_CCNode,
    pub m_reverse_key_back: bool,
    pub m_color: cocos2d_ccColor3B,
    pub m_main_layer: *mut cocos2d_CCLayer,
    pub m_z_order: i32,
    pub m_no_elasticity: bool,
    pub m_color_2: cocos2d_ccColor3B,
    pub m_button_1: *mut ButtonSprite,
    pub m_button_2: *mut ButtonSprite,
    pub m_scrolling_layer: *mut cocos2d_CCLayerColor,
    pub m_joystick_connected: i32,
    pub m_contains_border: bool,
    pub m_no_action: bool,
    pub m_popup_delegate: *mut UploadPopupDelegate,
    pub m_message_area: *mut TextArea,
    pub m_loading_circle: *mut LoadingCircle,
    pub m_close_btn: *mut CCMenuItemSpriteExtra,
}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct EditorUI {
    pub m_is_playing_music: bool,
    pub m_button_bar: *mut EditButtonBar,
    _pad2: [bool; 0x4],
    pub m_hideable_ui_element_array: *mut cocos2d_CCArray,
    pub m_grid_size: f32,
    _pad5: [bool; 0x14],
    pub m_move_modifier: bool,
    pub m_swipe_modifier: bool,
    pub m_rotation_touch_id: i32,
    pub m_scale_touch_id: i32,
    pub m_touch_id: i32,
    pub m_object_info_label: *mut cocos2d_CCLabelBMFont,
    pub m_rotation_control: *mut GJRotationControl,
    pub m_scale_pos: cocos2d_CCPoint,
    pub m_touch_down: bool,
    pub m_scale_control: *mut GJScaleControl,
    pub m_edit_button_dict: *mut cocos2d_CCDictionary,
    pub m_create_button_bar: *mut EditButtonBar,
    pub m_edit_button_bar: *mut EditButtonBar,
    pub m_position_slider: *mut Slider,
    pub m_unknown_0: f32,
    pub m_min_y_limit: f32,
    pub m_unknown_2: f32,
    pub m_swipe_enabled: bool,
    pub m_swiping: bool,
    _pad25: [bool; 0x2],
    pub m_free_move_enabled: bool,
    pub m_unk_swipe_related: bool,
    _pad28: [bool; 0xA],
    pub m_update_time_markers: bool,
    pub m_unknown_array_2: *mut cocos2d_CCArray,
    _pad31: [bool; 0x8],
    pub m_selected_objects: *mut cocos2d_CCArray,
    pub m_delete_menu: *mut cocos2d_CCMenu,
    pub m_unknown_array_4: *mut cocos2d_CCArray,
    pub m_delete_mode_btn: *mut CCMenuItemSpriteExtra,
    pub m_build_mode_btn: *mut CCMenuItemSpriteExtra,
    pub m_edit_mode_btn: *mut CCMenuItemSpriteExtra,
    pub m_swipe_btn: *mut CCMenuItemSpriteExtra,
    pub m_free_move_btn: *mut CCMenuItemSpriteExtra,
    pub m_deselect_btn: *mut CCMenuItemSpriteExtra,
    pub m_snap_btn: *mut CCMenuItemSpriteExtra,
    pub m_rotate_btn: *mut CCMenuItemSpriteExtra,
    pub m_playback_btn: *mut CCMenuItemSpriteExtra,
    pub m_playtest_btn: *mut CCMenuItemSpriteExtra,
    pub m_playtest_stop_btn: *mut CCMenuItemSpriteExtra,
    pub m_trash_btn: *mut CCMenuItemSpriteExtra,
    pub m_link_btn: *mut CCMenuItemSpriteExtra,
    pub m_unlink_btn: *mut CCMenuItemSpriteExtra,
    pub m_undo_btn: *mut CCMenuItemSpriteExtra,
    pub m_redo_btn: *mut CCMenuItemSpriteExtra,
    pub m_edit_object_btn: *mut CCMenuItemSpriteExtra,
    pub m_edit_group_btn: *mut CCMenuItemSpriteExtra,
    pub m_edit_hsv_btn: *mut CCMenuItemSpriteExtra,
    pub m_edit_special_btn: *mut CCMenuItemSpriteExtra,
    pub m_copy_paste_btn: *mut CCMenuItemSpriteExtra,
    pub m_copy_btn: *mut CCMenuItemSpriteExtra,
    pub m_paste_btn: *mut CCMenuItemSpriteExtra,
    pub m_copy_values_btn: *mut CCMenuItemSpriteExtra,
    pub m_paste_state_btn: *mut CCMenuItemSpriteExtra,
    pub m_paste_color_btn: *mut CCMenuItemSpriteExtra,
    pub m_go_to_layer_btn: *mut CCMenuItemSpriteExtra,
    pub m_guide_toggle: *mut CCMenuItemToggler,
    pub m_create_button_bars: *mut cocos2d_CCArray,
    pub m_tabs_menu: *mut cocos2d_CCMenu,
    pub m_tabs_array: *mut cocos2d_CCArray,
    pub m_idk_sprite_0: *mut cocos2d_CCSprite,
    pub m_idk_sprite_1: *mut cocos2d_CCSprite,
    pub m_button_27: *mut CCMenuItemSpriteExtra,
    pub m_button_28: *mut CCMenuItemSpriteExtra,
    pub m_delete_filter_none: *mut CCMenuItemSpriteExtra,
    pub m_delete_filter_static: *mut CCMenuItemSpriteExtra,
    pub m_delete_filter_details: *mut CCMenuItemSpriteExtra,
    pub m_delete_filter_custom: *mut CCMenuItemSpriteExtra,
    pub m_current_layer_label: *mut cocos2d_CCLabelBMFont,
    pub m_layer_next_btn: *mut CCMenuItemSpriteExtra,
    pub m_layer_prev_btn: *mut CCMenuItemSpriteExtra,
    pub m_go_to_base_btn: *mut CCMenuItemSpriteExtra,
    _pad78: [bool; 0x8],
    pub m_selected_create_object_id: i32,
    pub m_create_button_array: *mut cocos2d_CCArray,
    pub m_custom_object_button_array: *mut cocos2d_CCArray,
    pub m_unknown_array_9: *mut cocos2d_CCArray,
    pub m_selected_mode: i32,
    pub m_editor_layer: *mut LevelEditorLayer,
    pub m_swipe_start: cocos2d_CCPoint,
    pub m_swipe_end: cocos2d_CCPoint,
    _pad87: [bool; 0x8],
    pub m_last_touch_point: cocos2d_CCPoint,
    pub m_camera_test: cocos2d_CCPoint,
    _pad90: [bool; 0x8],
    pub m_selected_object: *mut GameObject,
    _pad92: [bool; 0x4],
    pub m_unk_2_cc: bool,
    pub m_free_moving_object: bool,
    pub m_clipboard: stdty::String,
    _pad96: [bool; 0x8],
    pub m_selected_tab: i32,
    pub m_times_selected: i32,
    _pad99: [bool; 0x20],
    pub m_space_key_pressed: bool,
}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct CCLightFlash {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct GJSpecialColorSelectDelegate {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct NumberInputDelegate {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct ButtonSprite {
    _pad0: [bool; 0x18],
    pub m_label: *mut cocos2d_CCLabelBMFont,
    pub m_sub_sprite: *mut cocos2d_CCSprite,
    pub m_sub_bg_sprite: *mut cocos2d_CCSprite,
    pub m_bg_sprite: *mut cocos2d_extension_CCScale9Sprite,
    _pad5: [bool; 0x8],
    pub m_sprite_position: cocos2d_CCPoint,
}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct GJUserScore {
    pub m_user_name: stdty::String,
    pub m_user_udid: stdty::String,
    pub m_score_type: i32,
    pub m_user_id: i32,
    pub m_account_id: i32,
    pub m_stars: i32,
    pub m_diamonds: i32,
    pub m_demons: i32,
    pub m_player_rank: i32,
    pub m_creator_points: i32,
    pub m_secret_coins: i32,
    pub m_user_coins: i32,
    pub m_icon_id: i32,
    pub m_color_1: i32,
    pub m_color_2: i32,
    pub m_special: i32,
    pub m_icon_type: IconType,
    pub m_message_state: i32,
    pub m_friend_status: i32,
    pub m_comment_history_status: i32,
    pub m_youtube_url: stdty::String,
    pub m_twitter_url: stdty::String,
    pub m_twitch_url: stdty::String,
    pub m_player_cube: i32,
    pub m_player_ship: i32,
    pub m_player_ball: i32,
    pub m_player_ufo: i32,
    pub m_player_wave: i32,
    pub m_player_robot: i32,
    pub m_player_spider: i32,
    pub m_player_streak: i32,
    pub m_glow_enabled: bool,
    pub m_player_explosion: i32,
    pub m_mod_badge: i32,
    pub m_global_rank: i32,
    pub m_friend_req_status: i32,
    pub m_new_msg_count: i32,
    pub m_friend_req_count: i32,
    pub m_is_blocked: bool,
    pub m_last_score_age: stdty::String,
}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct TableView {
    pub m_touch: *mut cocos2d_CCTouch,
    pub m_touch_position: cocos2d_CCPoint,
    pub m_touch_start_position: cocos2d_CCPoint,
    pub m_time_value: cocos2d_cc_timeval,
    pub m_touch_down: bool,
    pub m_not_at_end_of_scroll: bool,
    pub m_vertical_scrollbar: *mut cocos2d_CCLayerColor,
    pub m_horizontal_scrollbar: *mut cocos2d_CCLayerColor,
    pub m_delegate: *mut CCScrollLayerExtDelegate,
    pub m_content_layer: *mut CCContentLayer,
    pub m_cut_content: bool,
    pub m_v_scrollbar_visible: bool,
    pub m_h_scrollbar_visible: bool,
    pub m_disable_horizontal: bool,
    pub m_disable_vertical: bool,
    pub m_disable_movement: bool,
    pub m_scroll_limit_top: f32,
    pub m_scroll_limit_bottom: f32,
    pub m_peek_limit_top: f32,
    pub m_peek_limit_bottom: f32,
    pub m_touch_out_of_boundary: bool,
    pub m_touch_start: *mut cocos2d_CCTouch,
    pub m_touch_start_position_2: cocos2d_CCPoint,
    pub m_unknown_2: cocos2d_CCPoint,
    pub m_touch_position_2: cocos2d_CCPoint,
    pub m_idk: *mut core::ffi::c_void,
    pub m_touch_moved: bool,
    pub m_cell_array: *mut cocos2d_CCArray,
    pub m_array_2: *mut cocos2d_CCArray,
    pub m_array_3: *mut cocos2d_CCArray,
    pub m_table_delegate: *mut TableViewDelegate,
    pub m_data_source: *mut TableViewDataSource,
    pub m_unused_1: i32,
    pub m_unused_2: i32,
    pub m_unused_3: *mut core::ffi::c_void,
    pub m_unused_4: i32,
    pub m_touch_last_y: f32,
    pub m_cancelling_touches: bool,
}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct MenuLayer {
    pub m_google_play_sprite: *mut cocos2d_CCSprite,
    pub m_view_profile_info_text: *mut cocos2d_CCSprite,
    pub m_player_name_label: *mut cocos2d_CCLabelBMFont,
    pub m_profile_btn: *mut CCMenuItemSpriteExtra,
}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct CCDirector {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct RingObject {
    pub m_followers: *mut cocos2d_CCArray,
    pub m_following_sprite: *mut CCSpritePlus,
    pub m_has_follower: bool,
    pub m_propagate_scale_changes: bool,
    pub m_propagate_flip_changes: bool,
    pub m_unk_3: bool,
    pub m_is_blue_maybe: bool,
    pub m_unk_2: f32,
    pub m_unk: f32,
    pub m_unk_3_f: f32,
    pub m_unk_4: f32,
    pub m_unkidk: bool,
    pub m_anim_speed_2: f32,
    pub m_is_effect_object: bool,
    pub m_randomised_anim_start: bool,
    pub m_anim_speed: f32,
    pub m_is_black_object: bool,
    pub m_is_black_object_with_outline: bool,
    pub m_black_child_opacity: f32,
    pub field_21_c: bool,
    pub m_editor: bool,
    pub m_group_disabled: bool,
    pub m_colour_on_top: bool,
    pub m_base_color_id: i32,
    pub m_detail_color_id: i32,
    pub m_base_color_hsv_modified: bool,
    pub m_detail_color_hsv_modified: bool,
    pub m_start_pos_offset: cocos2d_CCPoint,
    pub m_rotate_offset: f32,
    pub m_tint_trigger: bool,
    pub m_is_flipped_x: bool,
    pub m_is_flipped_y: bool,
    pub m_box_offset: cocos2d_CCPoint,
    pub m_is_oriented: bool,
    pub m_box_offset_2: cocos2d_CCPoint,
    pub m_object_obb_2_d: *mut OBB2D,
    pub m_oriented: bool,
    pub m_glow_sprite: *mut cocos2d_CCSprite,
    pub m_not_editor: bool,
    pub m_my_action: *mut cocos2d_CCAction,
    pub m_unk_1: bool,
    pub m_run_action_with_tag: bool,
    pub m_object_powered_on: bool,
    pub m_object_size: cocos2d_CCSize,
    pub m_modifier: bool,
    pub m_active: bool,
    pub m_animation_finished: bool,
    pub m_particle_system: *mut cocos2d_CCParticleSystemQuad,
    pub m_effect_plist_name: stdty::String,
    pub m_particle_added: bool,
    pub m_has_particles: bool,
    pub m_unk_custom_ring: bool,
    pub m_portal_position: cocos2d_CCPoint,
    pub m_unk_particle_system: bool,
    pub m_object_texture_rect: cocos2d_CCRect,
    pub m_texture_rect_dirty: bool,
    pub m_rect_x_center_maybe: f32,
    pub m_object_rect_2: cocos2d_CCRect,
    pub m_is_object_rect_dirty: bool,
    pub m_is_oriented_rect_dirty: bool,
    pub m_has_been_activated: bool,
    pub m_has_been_activated_p_2: bool,
    pub m_has_detail_color: bool,
    pub m_is_pulse_stick: bool,
    pub m_linked_group: i32,
    pub m_is_saw: bool,
    pub m_custom_rotate_speed: i32,
    pub m_saw_is_disabled: bool,
    pub m_unknown_visibility_345: bool,
    pub m_unknown_346: bool,
    pub m_unknown_visibility_347: bool,
    pub m_base_sprite: *mut cocos2d_CCSprite,
    pub m_detail_sprite: *mut cocos2d_CCSprite,
    _pad73: [bool; 0x4],
    pub m_object_radius: f32,
    pub m_is_rotated_side: bool,
    pub m_unk_2_f_4: f32,
    pub m_unk_2_f_8: f32,
    pub m_unique_id: i32,
    pub m_object_type: GameObjectType,
    pub m_section: i32,
    pub m_touch_triggered: bool,
    pub m_spawn_triggered: bool,
    pub m_start_position: cocos2d_CCPoint,
    pub m_texture_name: stdty::String,
    pub m_use_audio_scale: bool,
    pub m_sleeping: bool,
    pub m_rotation: f32,
    pub m_ob_start_scale: cocos2d_CCSize,
    pub m_start_flip_x: bool,
    pub m_start_flip_y: bool,
    pub m_should_hide: bool,
    pub m_spawn_x_position: f32,
    pub m_invisible: bool,
    pub m_enter_angle: f32,
    pub m_active_enter_effect: i32,
    pub m_parent_mode: i32,
    pub m_is_glow_disabled: bool,
    pub m_target_color_id: i32,
    pub m_scale: f32,
    pub m_object_id: i32,
    pub m_unknown_3_c_8: i32,
    pub m_unk_368: bool,
    pub m_unk_369: bool,
    pub m_unk_36_a: bool,
    pub m_is_dont_enter: bool,
    pub m_is_dont_fade: bool,
    pub m_unk_36_d: bool,
    pub m_default_z_order: i32,
    pub m_use_second_sheet: bool,
    pub m_is_portal: bool,
    pub m_lock_colour_as_child: bool,
    pub m_custom_audio_scale: bool,
    pub m_min_audio_scale: i32,
    pub m_max_audio_scale: i32,
    pub m_unk_particle_system_2: bool,
    pub m_secret_coin_id: i32,
    pub m_unk_unused_save_string_key_53: i32,
    pub m_invisible_mode: bool,
    pub m_glow_user_background_colour: bool,
    pub m_use_special_light: bool,
    pub m_orb_or_pad: bool,
    pub m_glow_opacity_mod: f32,
    pub m_up_slope: bool,
    pub m_slope_type: i32,
    pub m_slope_angle: f32,
    pub m_hazardous_slope: bool,
    pub m_real_opacity: f32,
    pub m_base_color: *mut GJSpriteColor,
    pub m_detail_color: *mut GJSpriteColor,
    pub m_unknown_420: i32,
    pub m_default_z_layer: ZLayer,
    pub m_z_layer: ZLayer,
    pub m_game_z_order: i32,
    pub m_text_object_string: stdty::String,
    pub m_show_gamemode_borders: bool,
    pub m_unk_3_d_9: bool,
    pub m_is_selected: bool,
    pub m_global_click_counter: i32,
    _pad139: [bool; 0x8],
    pub m_should_update_color_sprite: bool,
    pub m_multi_scale_multiplier: f32,
    pub m_is_group_parent: bool,
    pub m_groups: *mut [i16; 10],
    pub m_group_count: i16,
    pub m_pulse_groups: *mut [i16; 10],
    pub m_pulse_group_count: i16,
    pub m_alpha_groups: *mut [i16; 10],
    pub m_alpha_group_count: i16,
    pub m_editor_layer: i32,
    pub m_editor_layer_2: i32,
    pub m_unk_414: i32,
    _pad152: [bool; 0xC],
    pub m_first_position: cocos2d_CCPoint,
    _pad154: [bool; 0x15],
    pub m_is_triggerable: bool,
    _pad156: [bool; 0x6],
    pub m_high_detail: bool,
    pub m_color_action_sprite_base: *mut ColorActionSprite,
    pub m_color_action_sprite_detail: *mut ColorActionSprite,
    pub m_effect_manager: *mut GJEffectManager,
    _pad161: [bool; 0xC],
    pub m_orb_multi_activate: bool,
    pub m_col_color: cocos2d_ccColor3B,
    pub m_duration: f32,
    pub m_opacity: f32,
    pub m_target_group_id: i32,
    pub m_center_group_id: i32,
    pub m_shake_strength: f32,
    pub m_shake_interval: f32,
    pub m_tint_ground: bool,
    pub m_player_color_1: bool,
    pub m_player_color_2: bool,
    pub m_blending: bool,
    pub m_move: cocos2d_CCPoint,
    pub m_easing_type: EasingType,
    pub m_easing_rate: f32,
    pub m_lock_to_player_x: bool,
    pub m_lock_to_player_y: bool,
    pub m_use_target: bool,
    pub m_move_target_type: MoveTargetType,
    pub m_rotate_degrees: i32,
    pub m_times_360: i32,
    pub m_lock_object_rotation: bool,
    pub m_follow_mod: cocos2d_CCPoint,
    pub undocuemented_level_property_74: bool,
    pub m_follow_y_speed: f32,
    pub m_follow_y_delay: f32,
    pub m_follow_y_offset: i32,
    pub m_follow_y_max_speed: f32,
    pub m_fade_in_time: f32,
    pub m_hold_time: f32,
    pub m_fade_out_time: f32,
    pub m_pulse_hsv_mode: i32,
    pub m_pulse_group_mode: i32,
    pub m_hsv_value: cocos2d_ccHSVValue,
    pub m_copy_color_id: i32,
    pub m_copy_opacity: bool,
    pub m_pulse_main_only: bool,
    pub m_pulse_detail_only: bool,
    pub m_pulse_exclusive: bool,
    pub m_activate_group: bool,
    pub m_touch_hold_mode: bool,
    pub m_touch_toggle_mode: TouchToggleMode,
    pub m_touch_dual_mode: bool,
    pub m_animation_id: i32,
    pub m_spawn_delay: f32,
    pub m_spawn_position: cocos2d_CCPoint,
    pub m_multi_trigger: bool,
    pub m_editor_disabled: bool,
    pub m_target_count: i32,
    pub m_subtract_count: bool,
    pub m_comparison_type: ComparisonType,
    pub m_multi_activate: bool,
    pub m_trigger_on_exit: bool,
    pub m_block_bid: i32,
    pub m_dynamic_block: bool,
    pub m_item_block_aid: i32,
    pub m_pickup_mode: i32,
    _pad219: [bool; 0x24],
}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct CCEaseElasticOut {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct GJScoreCell {
    pub m_unknown: bool,
    pub m_table_view: *mut TableView,
    pub m_index_path: CCIndexPath,
    pub m_unknown_thing: i32,
    pub m_unknown_string: stdty::String,
    pub m_width: f32,
    pub m_height: f32,
    pub m_background_layer: *mut cocos2d_CCLayerColor,
    pub m_main_layer: *mut cocos2d_CCLayer,
}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct CCTextureCache {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct DS_Dictionary {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct CCTextFieldTTF {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct CCControlUtils {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct GJAccountManager {
    _pad0: [bool; 0x4],
    pub m_password: stdty::String,
    pub m_username: stdty::String,
    pub m_account_id: i32,
}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct CCPoolManager {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct SliderThumb {
    pub m_length: f32,
    pub m_vertical: bool,
}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct SetupShakePopup {
    pub m_button_menu: *mut cocos2d_CCMenu,
    pub m_control_connected: i32,
    pub m_alert_protocol: *mut FLAlertLayerProtocol,
    pub m_scene: *mut cocos2d_CCNode,
    pub m_reverse_key_back: bool,
    pub m_color: cocos2d_ccColor3B,
    pub m_main_layer: *mut cocos2d_CCLayer,
    pub m_z_order: i32,
    pub m_no_elasticity: bool,
    pub m_color_2: cocos2d_ccColor3B,
    pub m_button_1: *mut ButtonSprite,
    pub m_button_2: *mut ButtonSprite,
    pub m_scrolling_layer: *mut cocos2d_CCLayerColor,
    pub m_joystick_connected: i32,
    pub m_contains_border: bool,
    pub m_no_action: bool,
}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct CCCallFuncO {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct LevelUploadDelegate {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct LikeItemLayer {
    pub m_button_menu: *mut cocos2d_CCMenu,
    pub m_control_connected: i32,
    pub m_alert_protocol: *mut FLAlertLayerProtocol,
    pub m_scene: *mut cocos2d_CCNode,
    pub m_reverse_key_back: bool,
    pub m_color: cocos2d_ccColor3B,
    pub m_main_layer: *mut cocos2d_CCLayer,
    pub m_z_order: i32,
    pub m_no_elasticity: bool,
    pub m_color_2: cocos2d_ccColor3B,
    pub m_button_1: *mut ButtonSprite,
    pub m_button_2: *mut ButtonSprite,
    pub m_scrolling_layer: *mut cocos2d_CCLayerColor,
    pub m_joystick_connected: i32,
    pub m_contains_border: bool,
    pub m_no_action: bool,
    pub m_item_type: LikeItemType,
    pub m_item_id: i32,
    pub m_comment_source_id: i32,
    pub m_like_delegate: *mut LikeItemDelegate,
}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct SetupPickupTriggerPopup {
    pub m_button_menu: *mut cocos2d_CCMenu,
    pub m_control_connected: i32,
    pub m_alert_protocol: *mut FLAlertLayerProtocol,
    pub m_scene: *mut cocos2d_CCNode,
    pub m_reverse_key_back: bool,
    pub m_color: cocos2d_ccColor3B,
    pub m_main_layer: *mut cocos2d_CCLayer,
    pub m_z_order: i32,
    pub m_no_elasticity: bool,
    pub m_color_2: cocos2d_ccColor3B,
    pub m_button_1: *mut ButtonSprite,
    pub m_button_2: *mut ButtonSprite,
    pub m_scrolling_layer: *mut cocos2d_CCLayerColor,
    pub m_joystick_connected: i32,
    pub m_contains_border: bool,
    pub m_no_action: bool,
    _pad16: [bool; 0xC],
    pub m_count_input: *mut CCTextInputNode,
}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct CCTexture2D {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct CCDelayTime {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct CCApplication {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct CCBezierTo {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct CCTextInputNode {
    pub cctfd_0: cocos2d::CCTextFieldDelegate,
    pub m_number_input: bool,
    pub m_caption: stdty::String,
    pub m_unknown_1: i32,
    pub m_selected: bool,
    pub m_unknown_2: bool,
    pub m_allowed_chars: stdty::String,
    pub m_max_label_width: f32,
    pub m_max_label_scale: f32,
    pub m_placeholder_scale: f32,
    pub m_placeholder_color: cocos2d_ccColor3B,
    pub m_text_color: cocos2d_ccColor3B,
    pub m_cursor: *mut cocos2d_CCLabelBMFont,
    pub m_text_field: *mut cocos2d_CCTextFieldTTF,
    pub m_delegate: *mut TextInputDelegate,
    pub m_max_label_length: i32,
    pub m_placeholder_label: *mut cocos2d_CCLabelBMFont,
    pub m_unknown_3: bool,
    pub m_use_password_char: bool,
    pub m_force_offset: bool,
}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct ZipUtils {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct GJGroundLayer {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct MusicDownloadDelegate {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct GooglePlayDelegate {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct GJAccountSyncDelegate {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct CCTouchHandler {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct LevelCommentDelegate {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct GJDropDownLayer {
    pub m_end_position: cocos2d_CCPoint,
    pub m_start_position: cocos2d_CCPoint,
    pub m_button_menu: *mut cocos2d_CCMenu,
    pub m_list_layer: *mut GJListLayer,
    pub m_controller_enabled: bool,
    pub m_main_layer: *mut cocos2d_CCLayer,
    pub m_hidden: bool,
    pub m_delegate: *mut GJDropDownLayerDelegate,
}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct xml_document {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct GJChallengeItem {
    pub m_challenge_type: GJChallengeType,
    pub m_count: geode_SeedValueSRV,
    pub m_reward: geode_SeedValueSRV,
    pub m_goal: geode_SeedValueSRV,
    pub m_time_left: i32,
    pub m_can_claim: bool,
    pub m_position: i32,
    pub m_name: stdty::String,
}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct SetGroupIDLayer {
    pub m_button_menu: *mut cocos2d_CCMenu,
    pub m_control_connected: i32,
    pub m_alert_protocol: *mut FLAlertLayerProtocol,
    pub m_scene: *mut cocos2d_CCNode,
    pub m_reverse_key_back: bool,
    pub m_color: cocos2d_ccColor3B,
    pub m_main_layer: *mut cocos2d_CCLayer,
    pub m_z_order: i32,
    pub m_no_elasticity: bool,
    pub m_color_2: cocos2d_ccColor3B,
    pub m_button_1: *mut ButtonSprite,
    pub m_button_2: *mut ButtonSprite,
    pub m_scrolling_layer: *mut cocos2d_CCLayerColor,
    pub m_joystick_connected: i32,
    pub m_contains_border: bool,
    pub m_no_action: bool,
    pub m_target_object: *mut GameObject,
    pub m_target_objects: *mut cocos2d_CCArray,
    pub m_array_0: *mut cocos2d_CCArray,
    pub m_array_1: *mut cocos2d_CCArray,
    pub m_editor_layer_text: *mut cocos2d_CCLabelBMFont,
    pub m_editor_layer_2_text: *mut cocos2d_CCLabelBMFont,
    pub m_z_order_text: *mut cocos2d_CCLabelBMFont,
    pub m_group_id_input: *mut CCTextInputNode,
    pub m_group_id_value: i32,
    pub m_editor_layer_value: i32,
    pub m_editor_layer_2_value: i32,
    pub m_z_order_value: i32,
    pub m_z_layer_value: ZLayer,
    pub m_unk_204: bool,
    pub m_unk_205: bool,
    pub m_high_detail: bool,
    pub m_dont_fade: bool,
    pub m_dont_enter: bool,
    pub m_some_pointer_prolly: *mut core::ffi::c_void,
    pub m_group_parent: bool,
    pub m_has_edited_groups: bool,
    pub m_unknown: i32,
}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct OptionsLayer {
    pub m_end_position: cocos2d_CCPoint,
    pub m_start_position: cocos2d_CCPoint,
    pub m_button_menu: *mut cocos2d_CCMenu,
    pub m_list_layer: *mut GJListLayer,
    pub m_controller_enabled: bool,
    pub m_main_layer: *mut cocos2d_CCLayer,
    pub m_hidden: bool,
    pub m_delegate: *mut GJDropDownLayerDelegate,
    pub m_options_menu: *mut cocos2d_CCMenu,
}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct CCTime {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct CCCircleWaveDelegate {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct UploadActionDelegate {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct EditLevelLayer {
    pub m_button_menu: *mut cocos2d_CCMenu,
    pub m_level: *mut GJGameLevel,
    pub m_description_input: *mut TextArea,
    pub m_some_array: *mut cocos2d_CCArray,
    pub m_some_font: *mut cocos2d_CCLabelBMFont,
}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct GooglePlayManager {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct CCAnimatedSprite {
    pub m_unknown_1: stdty::String,
    pub m_unknown_2: stdty::String,
    _pad2: [bool; 0x14],
    pub m_unknown_3: stdty::String,
    _pad4: [bool; 0x4],
}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct GameManager {
    pub m_file_name: stdty::String,
    pub m_setup: bool,
    pub m_saved: bool,
    pub m_quick_save: bool,
    pub m_switch_modes: bool,
    pub m_to_fullscreen: bool,
    pub m_reloading: bool,
    pub m_unknown_0: bool,
    _pad8: [bool; 0x4],
    pub m_value_keeper: *mut cocos2d_CCDictionary,
    pub m_unlock_value_keeper: *mut cocos2d_CCDictionary,
    pub m_custom_object_dict: *mut cocos2d_CCDictionary,
    pub m_ad_timer: f64,
    pub m_ad_cache: f64,
    _pad14: [bool; 0x8],
    pub m_unknown_double: f64,
    _pad16: [bool; 0x8],
    pub m_loaded: bool,
    pub m_unknown_string: stdty::String,
    pub m_play_layer: *mut PlayLayer,
    pub m_level_editor_layer: *mut LevelEditorLayer,
    pub m_unknown_1: i32,
    pub m_menu_layer: *mut MenuLayer,
    pub m_in_menu_layer: bool,
    pub m_unknown_variable: *mut core::ffi::c_void,
    pub m_unknown_bool_3: bool,
    pub m_unknown_play_layer_bool: bool,
    pub m_unknown_bool_4: bool,
    pub m_unknown_bool_5: bool,
    pub m_player_udid: stdty::String,
    pub m_player_name: stdty::String,
    pub m_comments_enabled: bool,
    pub m_player_user_id: geode_SeedValueRSV,
    pub m_background_music_volume: f32,
    pub m_effects_volume: f32,
    pub m_time_offset: f32,
    pub m_rated_game: bool,
    pub m_liked_facebook: bool,
    pub m_followed_twitter: bool,
    pub m_subbed_youtube: bool,
    pub m_socials_duration: f64,
    pub m_showed_ad: bool,
    pub m_unknown_bool: bool,
    pub m_editor_enabled: bool,
    pub m_scene_enum: i32,
    pub m_search_object_type: i32,
    pub m_unknown_bool_6: bool,
    pub m_player_frame: geode_SeedValueRSV,
    pub m_player_ship: geode_SeedValueRSV,
    pub m_player_ball: geode_SeedValueRSV,
    pub m_player_bird: geode_SeedValueRSV,
    pub m_player_dart: geode_SeedValueRSV,
    pub m_player_robot: geode_SeedValueRSV,
    pub m_player_spider: geode_SeedValueRSV,
    pub m_player_color: geode_SeedValueRSV,
    pub m_player_color_2: geode_SeedValueRSV,
    pub m_player_streak: geode_SeedValueRSV,
    pub m_player_death_effect: geode_SeedValueRSV,
    pub m_chk: geode_SeedValueSR,
    pub m_secret_number: geode_SeedValueSR,
    pub m_player_glow: bool,
    pub m_player_icon_type: IconType,
    pub m_every_play_setup: bool,
    pub m_show_song_markers: bool,
    pub m_show_bpm_markers: bool,
    pub m_record_gameplay: bool,
    pub m_show_progress_bar: bool,
    pub m_performance_mode: bool,
    pub m_clicked_garage: bool,
    pub m_clicked_editor: bool,
    pub m_clicked_name: bool,
    pub m_clicked_practice: bool,
    pub m_showed_editor_guide: bool,
    pub m_showed_rate_diff_dialog: bool,
    pub m_showed_rate_star_dialog: bool,
    pub m_showed_low_detail_dialog: bool,
    _pad76: [bool; 0x30],
    pub m_bootups: i32,
    pub m_has_rated_game: bool,
    pub m_unk_0: bool,
    pub m_unk_1: bool,
    pub m_unk_2: bool,
    pub m_game_center_enabled: bool,
    pub m_smooth_fix: bool,
    pub m_rate_power: geode_SeedValueSRV,
    pub m_can_get_level_save_data: bool,
    pub m_resolution: i32,
    pub m_quality: cocos2d_TextureQuality,
}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct CCActionManager {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct LevelSettingsObject {
    pub m_effect_manager: *mut GJEffectManager,
    pub m_start_mode: i32,
    pub m_start_speed: Speed,
    pub m_start_mini: bool,
    pub m_start_dual: bool,
    pub m_two_player_mode: bool,
    pub m_song_offset: f32,
    pub m_fade_in: bool,
    pub m_fade_out: bool,
    pub m_background_index: i32,
    pub m_ground_index: i32,
    pub m_font_index: i32,
    pub m_starts_with_start_pos: bool,
    pub m_is_flipped: bool,
    pub m_level: *mut GJGameLevel,
    pub m_guideline_string: stdty::String,
    pub m_unknown: i32,
    pub m_color_page: i32,
    pub m_ground_line_index: i32,
}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct CCRotateBy {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct StatsLayer {
    pub m_end_position: cocos2d_CCPoint,
    pub m_start_position: cocos2d_CCPoint,
    pub m_button_menu: *mut cocos2d_CCMenu,
    pub m_list_layer: *mut GJListLayer,
    pub m_controller_enabled: bool,
    pub m_main_layer: *mut cocos2d_CCLayer,
    pub m_hidden: bool,
    pub m_delegate: *mut GJDropDownLayerDelegate,
}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct SpawnTriggerAction {
    pub m_timer_ended: bool,
    pub m_delay: f32,
    pub m_timer: f32,
    pub m_group: i32,
    pub m_uuid: i32,
}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct LevelDownloadDelegate {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct CCContentLayer {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct GJOptionsLayer {
    pub m_button_menu: *mut cocos2d_CCMenu,
    pub m_control_connected: i32,
    pub m_alert_protocol: *mut FLAlertLayerProtocol,
    pub m_scene: *mut cocos2d_CCNode,
    pub m_reverse_key_back: bool,
    pub m_color: cocos2d_ccColor3B,
    pub m_main_layer: *mut cocos2d_CCLayer,
    pub m_z_order: i32,
    pub m_no_elasticity: bool,
    pub m_color_2: cocos2d_ccColor3B,
    pub m_button_1: *mut ButtonSprite,
    pub m_button_2: *mut ButtonSprite,
    pub m_scrolling_layer: *mut cocos2d_CCLayerColor,
    pub m_joystick_connected: i32,
    pub m_contains_border: bool,
    pub m_no_action: bool,
}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct PointNode {
    pub m_point: cocos2d_CCPoint,
}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct Slider {
    pub m_touch_logic: *mut SliderTouchLogic,
    pub m_slider_bar: *mut cocos2d_CCSprite,
    pub m_groove: *mut cocos2d_CCSprite,
    pub m_unknown: f32,
    pub m_height: f32,
}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct CCMenuItemImage {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct CustomListView {
    pub m_table_view: *mut TableView,
    pub m_entries: *mut cocos2d_CCArray,
    pub m_type: BoomListType,
    pub m_height: f32,
    pub m_width: f32,
    pub m_item_separation: f32,
    pub m_current_page: i32,
}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct ExtendedLayer {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct CCEGLView {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct CCRemoveSelf {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct CCCircleWave {
    pub m_child: *mut cocos2d_CCNode,
    _pad1: [bool; 0x4],
    pub m_current_radius: f32,
    pub m_current_opacity: f32,
    pub m_color: cocos2d_ccColor3B,
    pub m_circle_center: cocos2d_CCPoint,
    pub m_filled: i32,
    pub m_line_width: i32,
    pub m_opacity_multiplier: f32,
    pub m_blend_func_dirty: bool,
}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct ChallengesPage {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct FLAlertLayer {
    pub m_button_menu: *mut cocos2d_CCMenu,
    pub m_control_connected: i32,
    pub m_alert_protocol: *mut FLAlertLayerProtocol,
    pub m_scene: *mut cocos2d_CCNode,
    pub m_reverse_key_back: bool,
    pub m_color: cocos2d_ccColor3B,
    pub m_main_layer: *mut cocos2d_CCLayer,
    pub m_z_order: i32,
    pub m_no_elasticity: bool,
    pub m_color_2: cocos2d_ccColor3B,
    pub m_button_1: *mut ButtonSprite,
    pub m_button_2: *mut ButtonSprite,
    pub m_scrolling_layer: *mut cocos2d_CCLayerColor,
    pub m_joystick_connected: i32,
    pub m_contains_border: bool,
    pub m_no_action: bool,
}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct SetupAnimationPopup {
    pub m_button_menu: *mut cocos2d_CCMenu,
    pub m_control_connected: i32,
    pub m_alert_protocol: *mut FLAlertLayerProtocol,
    pub m_scene: *mut cocos2d_CCNode,
    pub m_reverse_key_back: bool,
    pub m_color: cocos2d_ccColor3B,
    pub m_main_layer: *mut cocos2d_CCLayer,
    pub m_z_order: i32,
    pub m_no_elasticity: bool,
    pub m_color_2: cocos2d_ccColor3B,
    pub m_button_1: *mut ButtonSprite,
    pub m_button_2: *mut ButtonSprite,
    pub m_scrolling_layer: *mut cocos2d_CCLayerColor,
    pub m_joystick_connected: i32,
    pub m_contains_border: bool,
    pub m_no_action: bool,
}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct TriggerEffectDelegate {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct UploadPopupDelegate {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct CCMenu {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct SetIDLayer {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct CCMotionStreak {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct FLAlertLayerProtocol {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct CCMenuItemSpriteExtra {
    pub m_scale_multiplier: f32,
    pub m_base_scale: f32,
    pub m_animation_enabled: bool,
    pub m_color_enabled: bool,
    pub m_unknown: f32,
    pub m_unknown_2: stdty::String,
    pub m_unknown_3: stdty::String,
    pub m_color_dip: f32,
    pub m_dest_position: cocos2d_CCPoint,
    pub m_offset: cocos2d_CCPoint,
    pub m_animation_type: MenuAnimationType,
    pub m_start_position: cocos2d_CCPoint,
}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct EndPortalObject {
    pub m_followers: *mut cocos2d_CCArray,
    pub m_following_sprite: *mut CCSpritePlus,
    pub m_has_follower: bool,
    pub m_propagate_scale_changes: bool,
    pub m_propagate_flip_changes: bool,
    pub m_unk_3: bool,
    pub m_is_blue_maybe: bool,
    pub m_unk_2: f32,
    pub m_unk: f32,
    pub m_unk_3_f: f32,
    pub m_unk_4: f32,
    pub m_unkidk: bool,
    pub m_anim_speed_2: f32,
    pub m_is_effect_object: bool,
    pub m_randomised_anim_start: bool,
    pub m_anim_speed: f32,
    pub m_is_black_object: bool,
    pub m_is_black_object_with_outline: bool,
    pub m_black_child_opacity: f32,
    pub field_21_c: bool,
    pub m_editor: bool,
    pub m_group_disabled: bool,
    pub m_colour_on_top: bool,
    pub m_base_color_id: i32,
    pub m_detail_color_id: i32,
    pub m_base_color_hsv_modified: bool,
    pub m_detail_color_hsv_modified: bool,
    pub m_start_pos_offset: cocos2d_CCPoint,
    pub m_rotate_offset: f32,
    pub m_tint_trigger: bool,
    pub m_is_flipped_x: bool,
    pub m_is_flipped_y: bool,
    pub m_box_offset: cocos2d_CCPoint,
    pub m_is_oriented: bool,
    pub m_box_offset_2: cocos2d_CCPoint,
    pub m_object_obb_2_d: *mut OBB2D,
    pub m_oriented: bool,
    pub m_glow_sprite: *mut cocos2d_CCSprite,
    pub m_not_editor: bool,
    pub m_my_action: *mut cocos2d_CCAction,
    pub m_unk_1: bool,
    pub m_run_action_with_tag: bool,
    pub m_object_powered_on: bool,
    pub m_object_size: cocos2d_CCSize,
    pub m_modifier: bool,
    pub m_active: bool,
    pub m_animation_finished: bool,
    pub m_particle_system: *mut cocos2d_CCParticleSystemQuad,
    pub m_effect_plist_name: stdty::String,
    pub m_particle_added: bool,
    pub m_has_particles: bool,
    pub m_unk_custom_ring: bool,
    pub m_portal_position: cocos2d_CCPoint,
    pub m_unk_particle_system: bool,
    pub m_object_texture_rect: cocos2d_CCRect,
    pub m_texture_rect_dirty: bool,
    pub m_rect_x_center_maybe: f32,
    pub m_object_rect_2: cocos2d_CCRect,
    pub m_is_object_rect_dirty: bool,
    pub m_is_oriented_rect_dirty: bool,
    pub m_has_been_activated: bool,
    pub m_has_been_activated_p_2: bool,
    pub m_has_detail_color: bool,
    pub m_is_pulse_stick: bool,
    pub m_linked_group: i32,
    pub m_is_saw: bool,
    pub m_custom_rotate_speed: i32,
    pub m_saw_is_disabled: bool,
    pub m_unknown_visibility_345: bool,
    pub m_unknown_346: bool,
    pub m_unknown_visibility_347: bool,
    pub m_base_sprite: *mut cocos2d_CCSprite,
    pub m_detail_sprite: *mut cocos2d_CCSprite,
    _pad73: [bool; 0x4],
    pub m_object_radius: f32,
    pub m_is_rotated_side: bool,
    pub m_unk_2_f_4: f32,
    pub m_unk_2_f_8: f32,
    pub m_unique_id: i32,
    pub m_object_type: GameObjectType,
    pub m_section: i32,
    pub m_touch_triggered: bool,
    pub m_spawn_triggered: bool,
    pub m_start_position: cocos2d_CCPoint,
    pub m_texture_name: stdty::String,
    pub m_use_audio_scale: bool,
    pub m_sleeping: bool,
    pub m_rotation: f32,
    pub m_ob_start_scale: cocos2d_CCSize,
    pub m_start_flip_x: bool,
    pub m_start_flip_y: bool,
    pub m_should_hide: bool,
    pub m_spawn_x_position: f32,
    pub m_invisible: bool,
    pub m_enter_angle: f32,
    pub m_active_enter_effect: i32,
    pub m_parent_mode: i32,
    pub m_is_glow_disabled: bool,
    pub m_target_color_id: i32,
    pub m_scale: f32,
    pub m_object_id: i32,
    pub m_unknown_3_c_8: i32,
    pub m_unk_368: bool,
    pub m_unk_369: bool,
    pub m_unk_36_a: bool,
    pub m_is_dont_enter: bool,
    pub m_is_dont_fade: bool,
    pub m_unk_36_d: bool,
    pub m_default_z_order: i32,
    pub m_use_second_sheet: bool,
    pub m_is_portal: bool,
    pub m_lock_colour_as_child: bool,
    pub m_custom_audio_scale: bool,
    pub m_min_audio_scale: i32,
    pub m_max_audio_scale: i32,
    pub m_unk_particle_system_2: bool,
    pub m_secret_coin_id: i32,
    pub m_unk_unused_save_string_key_53: i32,
    pub m_invisible_mode: bool,
    pub m_glow_user_background_colour: bool,
    pub m_use_special_light: bool,
    pub m_orb_or_pad: bool,
    pub m_glow_opacity_mod: f32,
    pub m_up_slope: bool,
    pub m_slope_type: i32,
    pub m_slope_angle: f32,
    pub m_hazardous_slope: bool,
    pub m_real_opacity: f32,
    pub m_base_color: *mut GJSpriteColor,
    pub m_detail_color: *mut GJSpriteColor,
    pub m_unknown_420: i32,
    pub m_default_z_layer: ZLayer,
    pub m_z_layer: ZLayer,
    pub m_game_z_order: i32,
    pub m_text_object_string: stdty::String,
    pub m_show_gamemode_borders: bool,
    pub m_unk_3_d_9: bool,
    pub m_is_selected: bool,
    pub m_global_click_counter: i32,
    _pad139: [bool; 0x8],
    pub m_should_update_color_sprite: bool,
    pub m_multi_scale_multiplier: f32,
    pub m_is_group_parent: bool,
    pub m_groups: *mut [i16; 10],
    pub m_group_count: i16,
    pub m_pulse_groups: *mut [i16; 10],
    pub m_pulse_group_count: i16,
    pub m_alpha_groups: *mut [i16; 10],
    pub m_alpha_group_count: i16,
    pub m_editor_layer: i32,
    pub m_editor_layer_2: i32,
    pub m_unk_414: i32,
    _pad152: [bool; 0xC],
    pub m_first_position: cocos2d_CCPoint,
    _pad154: [bool; 0x15],
    pub m_is_triggerable: bool,
    _pad156: [bool; 0x6],
    pub m_high_detail: bool,
    pub m_color_action_sprite_base: *mut ColorActionSprite,
    pub m_color_action_sprite_detail: *mut ColorActionSprite,
    pub m_effect_manager: *mut GJEffectManager,
    _pad161: [bool; 0xC],
    pub m_orb_multi_activate: bool,
}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct GJAccountDelegate {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct PlayLayer {
    pub m_bounding_box: *mut OBB2D,
    pub m_effect_manager: *mut GJEffectManager,
    pub m_object_layer: *mut cocos2d_CCLayer,
    pub m_batch_node_add_top_4: *mut cocos2d_CCSpriteBatchNode,
    pub m_effect_batch_node_add_top_4: *mut cocos2d_CCSpriteBatchNode,
    pub m_batch_node_top_3: *mut cocos2d_CCSpriteBatchNode,
    pub m_batch_node_add_top_3: *mut cocos2d_CCSpriteBatchNode,
    pub m_batch_node_add_glow_top_3: *mut cocos2d_CCSpriteBatchNode,
    pub m_batch_node_top_3_container: *mut CCNodeContainer,
    pub m_batch_node_text_top_3: *mut cocos2d_CCSpriteBatchNode,
    pub m_batch_node_add_text_top_3: *mut cocos2d_CCSpriteBatchNode,
    pub m_effect_batch_node_top_3: *mut cocos2d_CCSpriteBatchNode,
    pub m_effect_batch_node_add_top_3: *mut cocos2d_CCSpriteBatchNode,
    pub m_batch_node_top_2: *mut cocos2d_CCSpriteBatchNode,
    pub m_batch_node_add_top_2: *mut cocos2d_CCSpriteBatchNode,
    pub m_batch_node_add_glow_top_2: *mut cocos2d_CCSpriteBatchNode,
    pub m_batch_node_top_2_container: *mut CCNodeContainer,
    pub m_batch_node_text_top_2: *mut cocos2d_CCSpriteBatchNode,
    pub m_batch_node_add_text_top_2: *mut cocos2d_CCSpriteBatchNode,
    pub m_effect_batch_node_top_2: *mut cocos2d_CCSpriteBatchNode,
    pub m_effect_batch_node_add_top_2: *mut cocos2d_CCSpriteBatchNode,
    pub m_batch_node: *mut cocos2d_CCSpriteBatchNode,
    pub m_batch_node_add: *mut cocos2d_CCSpriteBatchNode,
    pub m_batch_node_add_glow: *mut cocos2d_CCSpriteBatchNode,
    pub m_batch_node_top_1_container: *mut CCNodeContainer,
    pub m_batch_node_text_top_1: *mut cocos2d_CCSpriteBatchNode,
    pub m_batch_node_add_text_top_1: *mut cocos2d_CCSpriteBatchNode,
    pub m_effect_batch_node_top_1: *mut cocos2d_CCSpriteBatchNode,
    pub m_effect_batch_node_add_top_1: *mut cocos2d_CCSpriteBatchNode,
    pub m_batch_node_player: *mut cocos2d_CCSpriteBatchNode,
    pub m_batch_node_add_player: *mut cocos2d_CCSpriteBatchNode,
    pub m_batch_node_player_glow: *mut cocos2d_CCSpriteBatchNode,
    pub m_batch_node_add_mid: *mut cocos2d_CCSpriteBatchNode,
    pub m_batch_node_bottom: *mut cocos2d_CCSpriteBatchNode,
    pub m_batch_node_add_bottom: *mut cocos2d_CCSpriteBatchNode,
    pub m_batch_node_add_bottom_glow: *mut cocos2d_CCSpriteBatchNode,
    pub m_batch_node_bot_1_container: *mut CCNodeContainer,
    pub m_batch_node_text: *mut cocos2d_CCSpriteBatchNode,
    pub m_batch_node_add_text: *mut cocos2d_CCSpriteBatchNode,
    pub m_effect_batch_node: *mut cocos2d_CCSpriteBatchNode,
    pub m_effect_batch_node_add: *mut cocos2d_CCSpriteBatchNode,
    pub m_batch_node_bottom_2: *mut cocos2d_CCSpriteBatchNode,
    pub m_batch_node_add_bottom_2: *mut cocos2d_CCSpriteBatchNode,
    pub m_batch_node_add_bottom_2_glow: *mut cocos2d_CCSpriteBatchNode,
    pub m_batch_node_bot_2_container: *mut CCNodeContainer,
    pub m_batch_node_text_bot_2: *mut cocos2d_CCSpriteBatchNode,
    pub m_batch_node_add_text_bot_2: *mut cocos2d_CCSpriteBatchNode,
    pub m_effect_batch_node_bot_2: *mut cocos2d_CCSpriteBatchNode,
    pub m_effect_batch_node_add_bot_2: *mut cocos2d_CCSpriteBatchNode,
    pub m_batch_node_bottom_3: *mut cocos2d_CCSpriteBatchNode,
    pub m_batch_node_add_bottom_3: *mut cocos2d_CCSpriteBatchNode,
    pub m_batch_node_add_bottom_3_glow: *mut cocos2d_CCSpriteBatchNode,
    pub m_batch_node_bot_3_container: *mut CCNodeContainer,
    pub m_batch_node_text_bot_3: *mut cocos2d_CCSpriteBatchNode,
    pub m_batch_node_add_text_bot_3: *mut cocos2d_CCSpriteBatchNode,
    pub m_effect_batch_node_bot_3: *mut cocos2d_CCSpriteBatchNode,
    pub m_effect_batch_node_add_bot_3: *mut cocos2d_CCSpriteBatchNode,
    pub m_batch_node_bottom_4: *mut cocos2d_CCSpriteBatchNode,
    pub m_batch_node_add_bottom_4: *mut cocos2d_CCSpriteBatchNode,
    pub m_batch_node_add_bottom_4_glow: *mut cocos2d_CCSpriteBatchNode,
    pub m_batch_node_bot_4_container: *mut CCNodeContainer,
    pub m_batch_node_text_bot_4: *mut cocos2d_CCSpriteBatchNode,
    pub m_batch_node_add_text_bot_4: *mut cocos2d_CCSpriteBatchNode,
    pub m_effect_batch_node_bot_4: *mut cocos2d_CCSpriteBatchNode,
    pub m_effect_batch_node_add_bot_4: *mut cocos2d_CCSpriteBatchNode,
    pub m_player_1: *mut PlayerObject,
    pub m_player_2: *mut PlayerObject,
    pub m_level_settings: *mut LevelSettingsObject,
    pub m_disabled_groups_dict: *mut cocos2d_CCDictionary,
    pub m_objects: *mut cocos2d_CCArray,
    pub m_section_objects: *mut cocos2d_CCArray,
    pub m_sections: *mut cocos2d_CCArray,
    pub m_collision_blocks: *mut cocos2d_CCArray,
    pub m_spawn_objects: *mut cocos2d_CCArray,
    pub m_spawn_objects_2: *mut cocos2d_CCArray,
    pub m_group_nodes: *mut cocos2d_CCNode,
    pub m_objects_vec: stdty::Vector<*mut GameObject>,
    pub m_disabled_objects: stdty::Vector<*mut GameObject>,
    pub m_group_dict: *mut cocos2d_CCDictionary,
    pub m_static_group_dict: *mut cocos2d_CCDictionary,
    pub m_optimized_group_dict: *mut cocos2d_CCDictionary,
    pub m_groups: stdty::Vector<*mut cocos2d_CCArray>,
    pub m_static_groups: stdty::Vector<*mut cocos2d_CCArray>,
    pub m_optimized_groups: stdty::Vector<*mut cocos2d_CCArray>,
    pub m_batch_nodes: *mut cocos2d_CCArray,
    pub m_processed_groups: *mut cocos2d_CCArray,
    pub m_counter_dict: *mut cocos2d_CCDictionary,
    pub m_spawned_groups: *mut cocos2d_CCDictionary,
    pub m_did_update_normal_capacity: bool,
    pub m_is_dual_mode: bool,
    pub m_active_enter_effect: i32,
    pub m_active_dual_touch: bool,
    pub m_attempt_click_count: i32,
    pub m_last_visible_section: i32,
    pub m_first_visible_section: i32,
    pub m_objects_are_disabled: bool,
    pub m_blending: bool,
    _pad97: [bool; 0x8],
    pub unused_4_c_8: f32,
    pub unused_4_cc: bool,
    pub m_has_cheated: bool,
    pub m_dont_save: geode_SeedValueRS,
    pub unknown_4_d_8: i32,
    pub m_debug_pause_off: bool,
    pub m_should_smooth_camera: bool,
    pub unused_4_e_0: f32,
    _pad106: [bool; 0x4],
    pub unknown_4_e_8: *mut cocos2d_CCDrawNode,
    pub m_camera_4_f_0: f32,
    pub unused_4_f_4: i32,
    pub m_somegroup_4_f_8: f32,
    pub m_ground_restriction: f32,
    pub m_ceil_restriction: f32,
    pub m_full_reset: bool,
    pub unknown_505: bool,
    pub unknown_508: f32,
    pub unknown_50_c: f32,
    pub unknown_510: f32,
    pub unknown_514: f32,
    pub unknown_518: f32,
    _pad120: [bool; 0x4],
    pub m_start_pos: *mut StartPosObject,
    pub m_start_pos_checkpoint: *mut CheckpointObject,
    pub m_end_portal: *mut EndPortalObject,
    pub m_checkpoints: *mut cocos2d_CCArray,
    pub m_speed_objects: *mut cocos2d_CCArray,
    pub unk_340: *mut cocos2d_CCArray,
    pub unk_344: *mut cocos2d_CCArray,
    pub unk_348: *mut cocos2d_CCSprite,
    pub m_background_repeat: f32,
    pub unk_350: bool,
    pub unk_354: *mut cocos2d_CCArray,
    pub unk_358: *mut cocos2d_CCArray,
    pub unk_35_c: *mut cocos2d_CCArray,
    pub unk_360: *mut cocos2d_CCArray,
    pub m_is_mute: bool,
    pub unk_365: bool,
    pub unk_366: bool,
    pub unk_367: bool,
    pub unk_368: bool,
    pub unk_369: bool,
    pub unk_36_a: bool,
    pub unk_36_b: bool,
    pub m_screen_ring_objects: *mut cocos2d_CCArray,
    pub m_particle_system: *mut cocos2d_CCParticleSystemQuad,
    pub m_picked_up_items: *mut cocos2d_CCDictionary,
    pub m_circle_waves: *mut cocos2d_CCArray,
    pub unk_37_c: *mut cocos2d_CCArray,
    pub m_audio_effects_layer: *mut AudioEffectsLayer,
    pub unknown_5_c_0: f32,
    pub unknown_5_c_4: f32,
    pub m_bottom_ground: *mut GJGroundLayer,
    pub m_top_ground: *mut GJGroundLayer,
    _pad153: [bool; 0x8],
    pub m_is_dead: bool,
    pub m_start_camera_at_corner: bool,
    pub m_camera_y_locked: bool,
    pub m_camera_x_locked: bool,
    pub unknown_5_e_4: bool,
    pub m_ball_frame_seed: i32,
    pub unknown_5_ec: f32,
    pub m_lock_ground_to_camera: f32,
    pub unknown_5_f_4: f32,
    pub m_level_length: f32,
    pub m_real_level_length: f32,
    pub m_attempt_label: *mut cocos2d_CCLabelBMFont,
    pub m_percent_label: *mut cocos2d_CCLabelBMFont,
    pub m_is_camera_shaking: bool,
    pub m_current_shake_strength: f32,
    pub m_current_shake_interval: f32,
    pub m_last_shake_time: f64,
    pub m_camera_shake_offset: cocos2d_CCPoint,
    pub unk_3_e_0: bool,
    pub m_background_scroll_offset: f32,
    pub m_camera_flip: f32,
    pub unk_3_ec: bool,
    pub unk_3_f_0: i32,
    pub m_particle_systems_plist: *mut cocos2d_CCDictionary,
    pub unk_3_f_8: *mut cocos2d_CCDictionary,
    pub m_particle_systems: *mut cocos2d_CCArray,
    pub unk_400: *mut cocos2d_CCNode,
    pub m_slider_groove_sprite: *mut cocos2d_CCSprite,
    pub m_slider_bar_sprite: *mut cocos2d_CCSprite,
    pub m_slider_size: cocos2d_CCSize,
    pub unknown_680: i32,
    pub m_active_gravity_effects: i32,
    pub m_gravity_effect_status: i32,
    _pad187: [bool; 0x4],
    pub m_gravity_sprites: *mut cocos2d_CCArray,
    pub unk_428: bool,
    pub m_should_record_actions: bool,
    pub unk_42_a: bool,
    pub m_is_paused: bool,
    pub unk_42_c: bool,
    pub m_is_player_2_frozen: bool,
    pub m_previous_records: stdty::String,
    pub unknown_6_a_8: *mut core::ffi::c_void,
    pub m_time: f64,
    pub unknown_6_b_8: i32,
    pub unknown_6_bc: i32,
    pub unk_460: bool,
    pub m_is_audio_metering_supported: bool,
    pub unk_464: *mut cocos2d_CCDictionary,
    pub unk_468: todo!(i16, bool),
    pub m_collision_disabled: bool,
    pub unknown_701: bool,
    pub m_latest_vehicle: *mut GameObject,
    pub m_dual_object: *mut GameObject,
    pub m_is_flipped: bool,
    pub m_mirror_transition: f32,
    pub m_ui_layer: *mut UILayer,
    pub m_level: *mut GJGameLevel,
    pub m_camera_position: cocos2d_CCPoint,
    pub m_is_test_mode: bool,
    pub m_is_practice_mode: bool,
    pub unk_496: bool,
    pub unk_497: bool,
    pub unk_498: *mut cocos2d_CCArray,
    pub m_unk_49_c: bool,
    pub m_player_start_position: cocos2d_CCPoint,
    pub m_current_attempt: i32,
    pub m_jump_count: i32,
    pub unk_4_b_0: bool,
    pub m_total_time: f32,
    pub m_attempt_jump_count: i32,
    pub unk_4_bc: bool,
    pub m_has_level_complete_menu: bool,
    pub m_has_completed_level: bool,
    pub m_delayed_reset_level: bool,
    pub m_last_death_percent: i32,
    pub unk_4_c_4: bool,
    _pad231: [bool; 0xB],
    pub unk_4_d_0: bool,
    pub unk_4_d_1: bool,
    pub unk_4_d_4: *mut cocos2d_CCArray,
    pub unk_4_d_8: *mut cocos2d_CCDictionary,
    pub m_inline_calculated_kick_time: f64,
    pub m_accumulated_kick_delta_time: f64,
    pub m_unused_kick_double: f64,
    pub m_should_try_to_kick: bool,
    pub m_kick_check_delta_snapshot: f32,
    pub m_accumulated_kick_counter: i32,
    _pad242: [bool; 0x4],
    pub unk_508: f64,
    _pad244: [bool; 0x8],
    pub unk_518: f64,
    pub unk_520: f64,
    _pad247: [bool; 0x4],
    pub m_has_glitter: bool,
    pub m_is_bg_effect_off: bool,
    pub unk_52_f: bool,
    pub m_anti_cheat_object: *mut GameObject,
    pub m_anti_cheat_passed: bool,
    pub unk_535: bool,
    pub m_disable_gravity_effect: bool,
}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct GJChallengeDelegate {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct GJSpriteColor {
    pub m_color_id: i32,
    pub m_default_color_id: i32,
    pub m_unk_0_f_4: f32,
    pub m_hsv: cocos2d_ccHSVValue,
    pub m_uses_hsv: bool,
    pub unk_10_c: f32,
    pub unk_110: bool,
}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct VideoOptionsLayer {
    pub m_button_menu: *mut cocos2d_CCMenu,
    pub m_control_connected: i32,
    pub m_alert_protocol: *mut FLAlertLayerProtocol,
    pub m_scene: *mut cocos2d_CCNode,
    pub m_reverse_key_back: bool,
    pub m_color: cocos2d_ccColor3B,
    pub m_main_layer: *mut cocos2d_CCLayer,
    pub m_z_order: i32,
    pub m_no_elasticity: bool,
    pub m_color_2: cocos2d_ccColor3B,
    pub m_button_1: *mut ButtonSprite,
    pub m_button_2: *mut ButtonSprite,
    pub m_scrolling_layer: *mut cocos2d_CCLayerColor,
    pub m_joystick_connected: i32,
    pub m_contains_border: bool,
    pub m_no_action: bool,
    _pad16: [bool; 0x18],
    pub m_resolutions: *mut cocos2d_CCArray,
    _pad18: [bool; 0x4],
    pub m_current_resolution: i32,
}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct CCIMEDelegate {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct CCShaderCache {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct SetupSpawnPopup {
    pub m_button_menu: *mut cocos2d_CCMenu,
    pub m_control_connected: i32,
    pub m_alert_protocol: *mut FLAlertLayerProtocol,
    pub m_scene: *mut cocos2d_CCNode,
    pub m_reverse_key_back: bool,
    pub m_color: cocos2d_ccColor3B,
    pub m_main_layer: *mut cocos2d_CCLayer,
    pub m_z_order: i32,
    pub m_no_elasticity: bool,
    pub m_color_2: cocos2d_ccColor3B,
    pub m_button_1: *mut ButtonSprite,
    pub m_button_2: *mut ButtonSprite,
    pub m_scrolling_layer: *mut cocos2d_CCLayerColor,
    pub m_joystick_connected: i32,
    pub m_contains_border: bool,
    pub m_no_action: bool,
    pub m_selected_object: *mut EffectGameObject,
    pub m_selected_array: *mut cocos2d_CCArray,
    pub m_delay_text_node: *mut CCTextInputNode,
    pub m_delay_slider: *mut Slider,
    pub m_delay: f32,
    pub m_touch_triggered: bool,
    pub m_spawn_triggered: bool,
    pub m_touch_triggered_toggle: *mut CCMenuItemToggler,
    pub m_spawn_triggered_toggle: *mut CCMenuItemToggler,
    pub m_target_id_text_node: *mut CCTextInputNode,
    pub m_target_id_value: i32,
    pub m_text_update_lock: bool,
    pub m_multi_trigger_toggle: *mut cocos2d_CCArray,
    pub m_multi_trigger: bool,
    pub m_editor_disable: bool,
}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct GameObject {
    pub m_followers: *mut cocos2d_CCArray,
    pub m_following_sprite: *mut CCSpritePlus,
    pub m_has_follower: bool,
    pub m_propagate_scale_changes: bool,
    pub m_propagate_flip_changes: bool,
    pub m_unk_3: bool,
    pub m_is_blue_maybe: bool,
    pub m_unk_2: f32,
    pub m_unk: f32,
    pub m_unk_3_f: f32,
    pub m_unk_4: f32,
    pub m_unkidk: bool,
    pub m_anim_speed_2: f32,
    pub m_is_effect_object: bool,
    pub m_randomised_anim_start: bool,
    pub m_anim_speed: f32,
    pub m_is_black_object: bool,
    pub m_is_black_object_with_outline: bool,
    pub m_black_child_opacity: f32,
    pub field_21_c: bool,
    pub m_editor: bool,
    pub m_group_disabled: bool,
    pub m_colour_on_top: bool,
    pub m_base_color_id: i32,
    pub m_detail_color_id: i32,
    pub m_base_color_hsv_modified: bool,
    pub m_detail_color_hsv_modified: bool,
    pub m_start_pos_offset: cocos2d_CCPoint,
    pub m_rotate_offset: f32,
    pub m_tint_trigger: bool,
    pub m_is_flipped_x: bool,
    pub m_is_flipped_y: bool,
    pub m_box_offset: cocos2d_CCPoint,
    pub m_is_oriented: bool,
    pub m_box_offset_2: cocos2d_CCPoint,
    pub m_object_obb_2_d: *mut OBB2D,
    pub m_oriented: bool,
    pub m_glow_sprite: *mut cocos2d_CCSprite,
    pub m_not_editor: bool,
    pub m_my_action: *mut cocos2d_CCAction,
    pub m_unk_1: bool,
    pub m_run_action_with_tag: bool,
    pub m_object_powered_on: bool,
    pub m_object_size: cocos2d_CCSize,
    pub m_modifier: bool,
    pub m_active: bool,
    pub m_animation_finished: bool,
    pub m_particle_system: *mut cocos2d_CCParticleSystemQuad,
    pub m_effect_plist_name: stdty::String,
    pub m_particle_added: bool,
    pub m_has_particles: bool,
    pub m_unk_custom_ring: bool,
    pub m_portal_position: cocos2d_CCPoint,
    pub m_unk_particle_system: bool,
    pub m_object_texture_rect: cocos2d_CCRect,
    pub m_texture_rect_dirty: bool,
    pub m_rect_x_center_maybe: f32,
    pub m_object_rect_2: cocos2d_CCRect,
    pub m_is_object_rect_dirty: bool,
    pub m_is_oriented_rect_dirty: bool,
    pub m_has_been_activated: bool,
    pub m_has_been_activated_p_2: bool,
    pub m_has_detail_color: bool,
    pub m_is_pulse_stick: bool,
    pub m_linked_group: i32,
    pub m_is_saw: bool,
    pub m_custom_rotate_speed: i32,
    pub m_saw_is_disabled: bool,
    pub m_unknown_visibility_345: bool,
    pub m_unknown_346: bool,
    pub m_unknown_visibility_347: bool,
    pub m_base_sprite: *mut cocos2d_CCSprite,
    pub m_detail_sprite: *mut cocos2d_CCSprite,
    _pad73: [bool; 0x4],
    pub m_object_radius: f32,
    pub m_is_rotated_side: bool,
    pub m_unk_2_f_4: f32,
    pub m_unk_2_f_8: f32,
    pub m_unique_id: i32,
    pub m_object_type: GameObjectType,
    pub m_section: i32,
    pub m_touch_triggered: bool,
    pub m_spawn_triggered: bool,
    pub m_start_position: cocos2d_CCPoint,
    pub m_texture_name: stdty::String,
    pub m_use_audio_scale: bool,
    pub m_sleeping: bool,
    pub m_rotation: f32,
    pub m_ob_start_scale: cocos2d_CCSize,
    pub m_start_flip_x: bool,
    pub m_start_flip_y: bool,
    pub m_should_hide: bool,
    pub m_spawn_x_position: f32,
    pub m_invisible: bool,
    pub m_enter_angle: f32,
    pub m_active_enter_effect: i32,
    pub m_parent_mode: i32,
    pub m_is_glow_disabled: bool,
    pub m_target_color_id: i32,
    pub m_scale: f32,
    pub m_object_id: i32,
    pub m_unknown_3_c_8: i32,
    pub m_unk_368: bool,
    pub m_unk_369: bool,
    pub m_unk_36_a: bool,
    pub m_is_dont_enter: bool,
    pub m_is_dont_fade: bool,
    pub m_unk_36_d: bool,
    pub m_default_z_order: i32,
    pub m_use_second_sheet: bool,
    pub m_is_portal: bool,
    pub m_lock_colour_as_child: bool,
    pub m_custom_audio_scale: bool,
    pub m_min_audio_scale: i32,
    pub m_max_audio_scale: i32,
    pub m_unk_particle_system_2: bool,
    pub m_secret_coin_id: i32,
    pub m_unk_unused_save_string_key_53: i32,
    pub m_invisible_mode: bool,
    pub m_glow_user_background_colour: bool,
    pub m_use_special_light: bool,
    pub m_orb_or_pad: bool,
    pub m_glow_opacity_mod: f32,
    pub m_up_slope: bool,
    pub m_slope_type: i32,
    pub m_slope_angle: f32,
    pub m_hazardous_slope: bool,
    pub m_real_opacity: f32,
    pub m_base_color: *mut GJSpriteColor,
    pub m_detail_color: *mut GJSpriteColor,
    pub m_unknown_420: i32,
    pub m_default_z_layer: ZLayer,
    pub m_z_layer: ZLayer,
    pub m_game_z_order: i32,
    pub m_text_object_string: stdty::String,
    pub m_show_gamemode_borders: bool,
    pub m_unk_3_d_9: bool,
    pub m_is_selected: bool,
    pub m_global_click_counter: i32,
    _pad139: [bool; 0x8],
    pub m_should_update_color_sprite: bool,
    pub m_multi_scale_multiplier: f32,
    pub m_is_group_parent: bool,
    pub m_groups: *mut [i16; 10],
    pub m_group_count: i16,
    pub m_pulse_groups: *mut [i16; 10],
    pub m_pulse_group_count: i16,
    pub m_alpha_groups: *mut [i16; 10],
    pub m_alpha_group_count: i16,
    pub m_editor_layer: i32,
    pub m_editor_layer_2: i32,
    pub m_unk_414: i32,
    _pad152: [bool; 0xC],
    pub m_first_position: cocos2d_CCPoint,
    _pad154: [bool; 0x15],
    pub m_is_triggerable: bool,
    _pad156: [bool; 0x6],
    pub m_high_detail: bool,
    pub m_color_action_sprite_base: *mut ColorActionSprite,
    pub m_color_action_sprite_detail: *mut ColorActionSprite,
    pub m_effect_manager: *mut GJEffectManager,
    _pad161: [bool; 0xC],
    pub m_orb_multi_activate: bool,
}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct GJComment {
    pub m_comment_string: stdty::String,
    pub m_user_name: stdty::String,
    pub m_comment_id: i32,
    pub m_user_id: i32,
    pub m_like_count: i32,
    pub m_level_id: i32,
    pub m_is_spam: bool,
    pub m_account_id: i32,
    pub m_upload_date: stdty::String,
    pub m_comment_deleted: bool,
    pub m_percentage: i32,
    pub m_mod_badge: i32,
    pub m_color: cocos2d_ccColor3B,
    pub m_has_level_id: bool,
    pub m_user_score: *mut GJUserScore,
}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct CollisionTriggerAction {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct EditButtonBar {
    pub m_position: cocos2d_CCPoint,
    pub m_unknown: i32,
    pub m_unknown_bool: bool,
    pub m_button_array: *mut cocos2d_CCArray,
    pub m_scroll_layer: *mut BoomScrollLayer,
    pub m_pages_array: *mut cocos2d_CCArray,
}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct CCScheduler {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct AudioEffectsLayer {
    pub m_unk_198: i32,
    pub m_unk_19_c: *mut cocos2d_CCArray,
    pub m_unk_1_a_0: *mut cocos2d_CCArray,
    pub m_unk_1_a_4: f32,
    pub m_unk_1_a_8: f32,
    pub m_unk_1_ac: bool,
    pub m_unk_1_b_0: f32,
    pub m_unk_1_b_4: bool,
}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct CCKeyboardHandler {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct RetryLevelLayer {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct CCEaseBackIn {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct AnimatedGameObject {
    pub m_followers: *mut cocos2d_CCArray,
    pub m_following_sprite: *mut CCSpritePlus,
    pub m_has_follower: bool,
    pub m_propagate_scale_changes: bool,
    pub m_propagate_flip_changes: bool,
    pub m_unk_3: bool,
    pub m_is_blue_maybe: bool,
    pub m_unk_2: f32,
    pub m_unk: f32,
    pub m_unk_3_f: f32,
    pub m_unk_4: f32,
    pub m_unkidk: bool,
    pub m_anim_speed_2: f32,
    pub m_is_effect_object: bool,
    pub m_randomised_anim_start: bool,
    pub m_anim_speed: f32,
    pub m_is_black_object: bool,
    pub m_is_black_object_with_outline: bool,
    pub m_black_child_opacity: f32,
    pub field_21_c: bool,
    pub m_editor: bool,
    pub m_group_disabled: bool,
    pub m_colour_on_top: bool,
    pub m_base_color_id: i32,
    pub m_detail_color_id: i32,
    pub m_base_color_hsv_modified: bool,
    pub m_detail_color_hsv_modified: bool,
    pub m_start_pos_offset: cocos2d_CCPoint,
    pub m_rotate_offset: f32,
    pub m_tint_trigger: bool,
    pub m_is_flipped_x: bool,
    pub m_is_flipped_y: bool,
    pub m_box_offset: cocos2d_CCPoint,
    pub m_is_oriented: bool,
    pub m_box_offset_2: cocos2d_CCPoint,
    pub m_object_obb_2_d: *mut OBB2D,
    pub m_oriented: bool,
    pub m_glow_sprite: *mut cocos2d_CCSprite,
    pub m_not_editor: bool,
    pub m_my_action: *mut cocos2d_CCAction,
    pub m_unk_1: bool,
    pub m_run_action_with_tag: bool,
    pub m_object_powered_on: bool,
    pub m_object_size: cocos2d_CCSize,
    pub m_modifier: bool,
    pub m_active: bool,
    pub m_animation_finished: bool,
    pub m_particle_system: *mut cocos2d_CCParticleSystemQuad,
    pub m_effect_plist_name: stdty::String,
    pub m_particle_added: bool,
    pub m_has_particles: bool,
    pub m_unk_custom_ring: bool,
    pub m_portal_position: cocos2d_CCPoint,
    pub m_unk_particle_system: bool,
    pub m_object_texture_rect: cocos2d_CCRect,
    pub m_texture_rect_dirty: bool,
    pub m_rect_x_center_maybe: f32,
    pub m_object_rect_2: cocos2d_CCRect,
    pub m_is_object_rect_dirty: bool,
    pub m_is_oriented_rect_dirty: bool,
    pub m_has_been_activated: bool,
    pub m_has_been_activated_p_2: bool,
    pub m_has_detail_color: bool,
    pub m_is_pulse_stick: bool,
    pub m_linked_group: i32,
    pub m_is_saw: bool,
    pub m_custom_rotate_speed: i32,
    pub m_saw_is_disabled: bool,
    pub m_unknown_visibility_345: bool,
    pub m_unknown_346: bool,
    pub m_unknown_visibility_347: bool,
    pub m_base_sprite: *mut cocos2d_CCSprite,
    pub m_detail_sprite: *mut cocos2d_CCSprite,
    _pad73: [bool; 0x4],
    pub m_object_radius: f32,
    pub m_is_rotated_side: bool,
    pub m_unk_2_f_4: f32,
    pub m_unk_2_f_8: f32,
    pub m_unique_id: i32,
    pub m_object_type: GameObjectType,
    pub m_section: i32,
    pub m_touch_triggered: bool,
    pub m_spawn_triggered: bool,
    pub m_start_position: cocos2d_CCPoint,
    pub m_texture_name: stdty::String,
    pub m_use_audio_scale: bool,
    pub m_sleeping: bool,
    pub m_rotation: f32,
    pub m_ob_start_scale: cocos2d_CCSize,
    pub m_start_flip_x: bool,
    pub m_start_flip_y: bool,
    pub m_should_hide: bool,
    pub m_spawn_x_position: f32,
    pub m_invisible: bool,
    pub m_enter_angle: f32,
    pub m_active_enter_effect: i32,
    pub m_parent_mode: i32,
    pub m_is_glow_disabled: bool,
    pub m_target_color_id: i32,
    pub m_scale: f32,
    pub m_object_id: i32,
    pub m_unknown_3_c_8: i32,
    pub m_unk_368: bool,
    pub m_unk_369: bool,
    pub m_unk_36_a: bool,
    pub m_is_dont_enter: bool,
    pub m_is_dont_fade: bool,
    pub m_unk_36_d: bool,
    pub m_default_z_order: i32,
    pub m_use_second_sheet: bool,
    pub m_is_portal: bool,
    pub m_lock_colour_as_child: bool,
    pub m_custom_audio_scale: bool,
    pub m_min_audio_scale: i32,
    pub m_max_audio_scale: i32,
    pub m_unk_particle_system_2: bool,
    pub m_secret_coin_id: i32,
    pub m_unk_unused_save_string_key_53: i32,
    pub m_invisible_mode: bool,
    pub m_glow_user_background_colour: bool,
    pub m_use_special_light: bool,
    pub m_orb_or_pad: bool,
    pub m_glow_opacity_mod: f32,
    pub m_up_slope: bool,
    pub m_slope_type: i32,
    pub m_slope_angle: f32,
    pub m_hazardous_slope: bool,
    pub m_real_opacity: f32,
    pub m_base_color: *mut GJSpriteColor,
    pub m_detail_color: *mut GJSpriteColor,
    pub m_unknown_420: i32,
    pub m_default_z_layer: ZLayer,
    pub m_z_layer: ZLayer,
    pub m_game_z_order: i32,
    pub m_text_object_string: stdty::String,
    pub m_show_gamemode_borders: bool,
    pub m_unk_3_d_9: bool,
    pub m_is_selected: bool,
    pub m_global_click_counter: i32,
    _pad139: [bool; 0x8],
    pub m_should_update_color_sprite: bool,
    pub m_multi_scale_multiplier: f32,
    pub m_is_group_parent: bool,
    pub m_groups: *mut [i16; 10],
    pub m_group_count: i16,
    pub m_pulse_groups: *mut [i16; 10],
    pub m_pulse_group_count: i16,
    pub m_alpha_groups: *mut [i16; 10],
    pub m_alpha_group_count: i16,
    pub m_editor_layer: i32,
    pub m_editor_layer_2: i32,
    pub m_unk_414: i32,
    _pad152: [bool; 0xC],
    pub m_first_position: cocos2d_CCPoint,
    _pad154: [bool; 0x15],
    pub m_is_triggerable: bool,
    _pad156: [bool; 0x6],
    pub m_high_detail: bool,
    pub m_color_action_sprite_base: *mut ColorActionSprite,
    pub m_color_action_sprite_detail: *mut ColorActionSprite,
    pub m_effect_manager: *mut GJEffectManager,
    _pad161: [bool; 0xC],
    pub m_orb_multi_activate: bool,
}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct MoreSearchLayer {
    pub m_button_menu: *mut cocos2d_CCMenu,
    pub m_control_connected: i32,
    pub m_alert_protocol: *mut FLAlertLayerProtocol,
    pub m_scene: *mut cocos2d_CCNode,
    pub m_reverse_key_back: bool,
    pub m_color: cocos2d_ccColor3B,
    pub m_main_layer: *mut cocos2d_CCLayer,
    pub m_z_order: i32,
    pub m_no_elasticity: bool,
    pub m_color_2: cocos2d_ccColor3B,
    pub m_button_1: *mut ButtonSprite,
    pub m_button_2: *mut ButtonSprite,
    pub m_scrolling_layer: *mut cocos2d_CCLayerColor,
    pub m_joystick_connected: i32,
    pub m_contains_border: bool,
    pub m_no_action: bool,
}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct LevelDeleteDelegate {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct CCLabelBMFont {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct TableViewCell {
    pub m_unknown: bool,
    pub m_table_view: *mut TableView,
    pub m_index_path: CCIndexPath,
    pub m_unknown_thing: i32,
    pub m_unknown_string: stdty::String,
    pub m_width: f32,
    pub m_height: f32,
    pub m_background_layer: *mut cocos2d_CCLayerColor,
    pub m_main_layer: *mut cocos2d_CCLayer,
}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct ColorSetupDelegate {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct SetupInstantCountPopup {
    pub m_button_menu: *mut cocos2d_CCMenu,
    pub m_control_connected: i32,
    pub m_alert_protocol: *mut FLAlertLayerProtocol,
    pub m_scene: *mut cocos2d_CCNode,
    pub m_reverse_key_back: bool,
    pub m_color: cocos2d_ccColor3B,
    pub m_main_layer: *mut cocos2d_CCLayer,
    pub m_z_order: i32,
    pub m_no_elasticity: bool,
    pub m_color_2: cocos2d_ccColor3B,
    pub m_button_1: *mut ButtonSprite,
    pub m_button_2: *mut ButtonSprite,
    pub m_scrolling_layer: *mut cocos2d_CCLayerColor,
    pub m_joystick_connected: i32,
    pub m_contains_border: bool,
    pub m_no_action: bool,
}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct ColorSelectLiveOverlay {
    pub m_button_menu: *mut cocos2d_CCMenu,
    pub m_control_connected: i32,
    pub m_alert_protocol: *mut FLAlertLayerProtocol,
    pub m_scene: *mut cocos2d_CCNode,
    pub m_reverse_key_back: bool,
    pub m_color: cocos2d_ccColor3B,
    pub m_main_layer: *mut cocos2d_CCLayer,
    pub m_z_order: i32,
    pub m_no_elasticity: bool,
    pub m_color_2: cocos2d_ccColor3B,
    pub m_button_1: *mut ButtonSprite,
    pub m_button_2: *mut ButtonSprite,
    pub m_scrolling_layer: *mut cocos2d_CCLayerColor,
    pub m_joystick_connected: i32,
    pub m_contains_border: bool,
    pub m_no_action: bool,
    pub m_effect_game_object: *mut EffectGameObject,
    pub m_bar_sprites: *mut cocos2d_CCArray,
    pub m_12_buttons: *mut cocos2d_CCArray,
    pub m_base_color_action: *mut ColorAction,
    pub m_detail_color_action: *mut ColorAction,
    _pad21: [bool; 0x64],
    pub m_detail_mode: bool,
}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct GJRewardDelegate {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct GJSpecialColorSelect {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct CurrencyRewardDelegate {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct ColorAction {
    pub m_step_finished: bool,
    pub m_from_color: cocos2d_ccColor3B,
    pub m_current_opacity: f32,
    pub m_delta_time: f32,
    pub m_color: cocos2d_ccColor3B,
    pub m_target_color: cocos2d_ccColor3B,
    pub m_duration: f32,
    pub m_blending: bool,
    pub m_player_color: i32,
    pub m_color_id: i32,
    pub m_opacity: f32,
    pub m_target_opacity: f32,
    pub m_copy_hsv: cocos2d_ccHSVValue,
    pub m_copy_id: i32,
    _unk_pad14: (),
    #[deprecated(note = "this member is misaligned on this os (do not use)")]
    pub m_copy_opacity: bool,
    #[deprecated(note = "this member is misaligned on this os (do not use)")]
    pub m_color_sprite: *mut ColorActionSprite,
    #[deprecated(note = "this member is misaligned on this os (do not use)")]
    _unk_pad17: (),
}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct ListButtonBar {
    pub m_scroll_layer: *mut BoomScrollLayer,
}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct SetupCollisionTriggerPopup {
    pub m_button_menu: *mut cocos2d_CCMenu,
    pub m_control_connected: i32,
    pub m_alert_protocol: *mut FLAlertLayerProtocol,
    pub m_scene: *mut cocos2d_CCNode,
    pub m_reverse_key_back: bool,
    pub m_color: cocos2d_ccColor3B,
    pub m_main_layer: *mut cocos2d_CCLayer,
    pub m_z_order: i32,
    pub m_no_elasticity: bool,
    pub m_color_2: cocos2d_ccColor3B,
    pub m_button_1: *mut ButtonSprite,
    pub m_button_2: *mut ButtonSprite,
    pub m_scrolling_layer: *mut cocos2d_CCLayerColor,
    pub m_joystick_connected: i32,
    pub m_contains_border: bool,
    pub m_no_action: bool,
}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct CCActionTween {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct LoadingCircle {
    pub m_sprite: *mut cocos2d_CCSprite,
    pub m_parent_layer: *mut cocos2d_CCLayer,
    pub m_fade: bool,
}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct PlayerObject {
    pub m_followers: *mut cocos2d_CCArray,
    pub m_following_sprite: *mut CCSpritePlus,
    pub m_has_follower: bool,
    pub m_propagate_scale_changes: bool,
    pub m_propagate_flip_changes: bool,
    pub m_unk_3: bool,
    pub m_is_blue_maybe: bool,
    pub m_unk_2: f32,
    pub m_unk: f32,
    pub m_unk_3_f: f32,
    pub m_unk_4: f32,
    pub m_unkidk: bool,
    pub m_anim_speed_2: f32,
    pub m_is_effect_object: bool,
    pub m_randomised_anim_start: bool,
    pub m_anim_speed: f32,
    pub m_is_black_object: bool,
    pub m_is_black_object_with_outline: bool,
    pub m_black_child_opacity: f32,
    pub field_21_c: bool,
    pub m_editor: bool,
    pub m_group_disabled: bool,
    pub m_colour_on_top: bool,
    pub m_base_color_id: i32,
    pub m_detail_color_id: i32,
    pub m_base_color_hsv_modified: bool,
    pub m_detail_color_hsv_modified: bool,
    pub m_start_pos_offset: cocos2d_CCPoint,
    pub m_rotate_offset: f32,
    pub m_tint_trigger: bool,
    pub m_is_flipped_x: bool,
    pub m_is_flipped_y: bool,
    pub m_box_offset: cocos2d_CCPoint,
    pub m_is_oriented: bool,
    pub m_box_offset_2: cocos2d_CCPoint,
    pub m_object_obb_2_d: *mut OBB2D,
    pub m_oriented: bool,
    pub m_glow_sprite: *mut cocos2d_CCSprite,
    pub m_not_editor: bool,
    pub m_my_action: *mut cocos2d_CCAction,
    pub m_unk_1: bool,
    pub m_run_action_with_tag: bool,
    pub m_object_powered_on: bool,
    pub m_object_size: cocos2d_CCSize,
    pub m_modifier: bool,
    pub m_active: bool,
    pub m_animation_finished: bool,
    pub m_particle_system: *mut cocos2d_CCParticleSystemQuad,
    pub m_effect_plist_name: stdty::String,
    pub m_particle_added: bool,
    pub m_has_particles: bool,
    pub m_unk_custom_ring: bool,
    pub m_portal_position: cocos2d_CCPoint,
    pub m_unk_particle_system: bool,
    pub m_object_texture_rect: cocos2d_CCRect,
    pub m_texture_rect_dirty: bool,
    pub m_rect_x_center_maybe: f32,
    pub m_object_rect_2: cocos2d_CCRect,
    pub m_is_object_rect_dirty: bool,
    pub m_is_oriented_rect_dirty: bool,
    pub m_has_been_activated: bool,
    pub m_has_been_activated_p_2: bool,
    pub m_has_detail_color: bool,
    pub m_is_pulse_stick: bool,
    pub m_linked_group: i32,
    pub m_is_saw: bool,
    pub m_custom_rotate_speed: i32,
    pub m_saw_is_disabled: bool,
    pub m_unknown_visibility_345: bool,
    pub m_unknown_346: bool,
    pub m_unknown_visibility_347: bool,
    pub m_base_sprite: *mut cocos2d_CCSprite,
    pub m_detail_sprite: *mut cocos2d_CCSprite,
    _pad73: [bool; 0x4],
    pub m_object_radius: f32,
    pub m_is_rotated_side: bool,
    pub m_unk_2_f_4: f32,
    pub m_unk_2_f_8: f32,
    pub m_unique_id: i32,
    pub m_object_type: GameObjectType,
    pub m_section: i32,
    pub m_touch_triggered: bool,
    pub m_spawn_triggered: bool,
    pub m_start_position: cocos2d_CCPoint,
    pub m_texture_name: stdty::String,
    pub m_use_audio_scale: bool,
    pub m_sleeping: bool,
    pub m_rotation: f32,
    pub m_ob_start_scale: cocos2d_CCSize,
    pub m_start_flip_x: bool,
    pub m_start_flip_y: bool,
    pub m_should_hide: bool,
    pub m_spawn_x_position: f32,
    pub m_invisible: bool,
    pub m_enter_angle: f32,
    pub m_active_enter_effect: i32,
    pub m_parent_mode: i32,
    pub m_is_glow_disabled: bool,
    pub m_target_color_id: i32,
    pub m_scale: f32,
    pub m_object_id: i32,
    pub m_unknown_3_c_8: i32,
    pub m_unk_368: bool,
    pub m_unk_369: bool,
    pub m_unk_36_a: bool,
    pub m_is_dont_enter: bool,
    pub m_is_dont_fade: bool,
    pub m_unk_36_d: bool,
    pub m_default_z_order: i32,
    pub m_use_second_sheet: bool,
    pub m_is_portal: bool,
    pub m_lock_colour_as_child: bool,
    pub m_custom_audio_scale: bool,
    pub m_min_audio_scale: i32,
    pub m_max_audio_scale: i32,
    pub m_unk_particle_system_2: bool,
    pub m_secret_coin_id: i32,
    pub m_unk_unused_save_string_key_53: i32,
    pub m_invisible_mode: bool,
    pub m_glow_user_background_colour: bool,
    pub m_use_special_light: bool,
    pub m_orb_or_pad: bool,
    pub m_glow_opacity_mod: f32,
    pub m_up_slope: bool,
    pub m_slope_type: i32,
    pub m_slope_angle: f32,
    pub m_hazardous_slope: bool,
    pub m_real_opacity: f32,
    pub m_base_color: *mut GJSpriteColor,
    pub m_detail_color: *mut GJSpriteColor,
    pub m_unknown_420: i32,
    pub m_default_z_layer: ZLayer,
    pub m_z_layer: ZLayer,
    pub m_game_z_order: i32,
    pub m_text_object_string: stdty::String,
    pub m_show_gamemode_borders: bool,
    pub m_unk_3_d_9: bool,
    pub m_is_selected: bool,
    pub m_global_click_counter: i32,
    _pad139: [bool; 0x8],
    pub m_should_update_color_sprite: bool,
    pub m_multi_scale_multiplier: f32,
    pub m_is_group_parent: bool,
    pub m_groups: *mut [i16; 10],
    pub m_group_count: i16,
    pub m_pulse_groups: *mut [i16; 10],
    pub m_pulse_group_count: i16,
    pub m_alpha_groups: *mut [i16; 10],
    pub m_alpha_group_count: i16,
    pub m_editor_layer: i32,
    pub m_editor_layer_2: i32,
    pub m_unk_414: i32,
    _pad152: [bool; 0xC],
    pub m_first_position: cocos2d_CCPoint,
    _pad154: [bool; 0x15],
    pub m_is_triggerable: bool,
    _pad156: [bool; 0x6],
    pub m_high_detail: bool,
    pub m_color_action_sprite_base: *mut ColorActionSprite,
    pub m_color_action_sprite_detail: *mut ColorActionSprite,
    pub m_effect_manager: *mut GJEffectManager,
    _pad161: [bool; 0xC],
    pub m_orb_multi_activate: bool,
    _pad163: [bool; 0x14],
    pub m_unk_480: bool,
    pub m_unk_484: *mut cocos2d_CCNode,
    pub m_collision_log: *mut cocos2d_CCDictionary,
    pub m_collision_log_1: *mut cocos2d_CCDictionary,
    pub m_collided_slope: *mut GameObject,
    _pad169: [bool; 0x1C],
    pub m_unk_4_b_0: bool,
    pub m_unk_4_b_4: *mut cocos2d_CCSprite,
    pub m_unk_4_b_8: i32,
    pub m_unk_4_bc: i32,
    _pad174: [bool; 0x14],
    pub m_unk_4_d_4: bool,
    pub m_particle_systems: *mut cocos2d_CCArray,
    pub m_unk_4_dc: bool,
    pub m_is_hidden: bool,
    pub m_has_ghost_trail: i32,
    pub m_ghost_trail: *mut GhostTrailEffect,
    pub m_unknown_sprite: *mut cocos2d_CCSprite,
    pub m_icon_sprite: *mut cocos2d_CCSprite,
    pub m_icon_sprite_secondary: *mut cocos2d_CCSprite,
    pub m_icon_sprite_whitener: *mut cocos2d_CCSprite,
    pub m_icon_glow: *mut cocos2d_CCSprite,
    pub m_vehicle_sprite: *mut cocos2d_CCSprite,
    pub m_vehicle_sprite_secondary: *mut cocos2d_CCSprite,
    pub m_unk_500: *mut cocos2d_CCSprite,
    pub m_vehicle_sprite_whitener: *mut cocos2d_CCSprite,
    pub m_vehicle_glow: *mut cocos2d_CCSprite,
    pub m_regular_trail: *mut cocos2d_CCMotionStreak,
    pub m_wave_trail: *mut HardStreak,
    pub m_x_velocity: f64,
    pub m_jump_accel: f64,
    pub m_gravity: f64,
    pub m_unknown_20: f64,
    pub m_unk_538: bool,
    pub m_unk_539: bool,
    pub m_unk_53_a: bool,
    pub m_unk_53_b: bool,
    pub m_is_in_play_layer: bool,
    pub m_unk_53_d: bool,
    pub m_unk_53_e: bool,
    pub m_unk_53_f: bool,
    pub m_is_checkpoint_queued: bool,
    _pad206: [bool; 0xF],
    pub m_last_jump_time: f64,
    pub m_unk_558: f64,
    pub m_unk_560: f64,
    _pad210: [bool; 0x1C],
    pub m_deceleration_rate: f32,
    _pad212: [bool; 0x13],
    pub m_has_hit_ring: bool,
    pub m_object_snapped_to: *mut GameObject,
    pub m_checkpoint: *mut CheckpointObject,
    pub m_unknown_6_a_0: i32,
    pub m_robot_sprite: *mut GJRobotSprite,
    pub m_spider_sprite: *mut GJSpiderSprite,
    pub m_unk_5_b_0: bool,
    pub m_player_ground_particles: *mut cocos2d_CCParticleSystemQuad,
    pub m_unk_5_b_8: *mut cocos2d_CCParticleSystemQuad,
    pub m_ship_boost_particles: *mut cocos2d_CCParticleSystemQuad,
    pub m_vehicle_ground_particles: *mut cocos2d_CCParticleSystemQuad,
    pub m_unk_5_c_4: *mut cocos2d_CCParticleSystemQuad,
    pub m_robot_jump_particles: *mut cocos2d_CCParticleSystemQuad,
    pub m_unk_5_cc: *mut cocos2d_CCParticleSystemQuad,
    pub m_unk_5_d_0: *mut core::ffi::c_void,
    pub m_unk_5_d_4: *mut cocos2d_CCParticleSystemQuad,
    pub m_unk_5_d_8: *mut cocos2d_CCParticleSystemQuad,
    _pad230: [bool; 0x20],
    pub m_unk_5_fc: bool,
    pub m_unk_5_fd: bool,
    pub m_has_hit_portal: bool,
    _pad234: [bool; 0xB],
    pub m_unknown_73_d: bool,
    pub m_unknown_73_e: cocos2d__ccColor3B,
    pub m_unknown_741: cocos2d__ccColor3B,
    pub m_is_holding: bool,
    pub m_has_just_held: bool,
    pub m_is_holding_2: bool,
    pub m_has_just_held_2: bool,
    pub m_unk_615: bool,
    pub m_unk_616: bool,
    pub m_unk_618: i32,
    pub m_unk_61_c: f32,
    pub m_unk_620: i32,
    pub m_can_robot_jump: bool,
    pub m_y_velocity: f64,
    pub m_is_on_slope: bool,
    pub m_was_on_slope: bool,
    pub m_unk_634: f32,
    pub m_is_ship: bool,
    pub m_is_bird: bool,
    pub m_is_ball: bool,
    pub m_is_dart: bool,
    pub m_is_robot: bool,
    pub m_is_spider: bool,
    pub m_is_upside_down: bool,
    pub m_unk_63_f: bool,
    pub m_is_on_ground: bool,
    pub m_is_dashing: bool,
    pub m_vehicle_size: f32,
    pub m_player_speed: f32,
    pub m_unk_64_c: cocos2d_CCPoint,
    pub m_last_portal_pos: cocos2d_CCPoint,
    pub m_unk_65_c: *mut cocos2d_CCLayer,
    pub m_is_sliding: bool,
    pub m_is_rising: bool,
    pub m_is_locked: bool,
    pub m_last_grounded_pos: cocos2d_CCPoint,
    pub m_touching_rings: *mut cocos2d_CCArray,
    pub m_last_activated_portal: *mut GameObject,
    pub m_unk_674: bool,
    pub m_unk_675: bool,
    pub m_player_color_1: cocos2d_ccColor3B,
    pub m_player_color_2: cocos2d_ccColor3B,
    pub m_position: cocos2d_CCPoint,
    pub m_unk_684: bool,
    pub m_unk_685: bool,
    pub m_unk_688: f64,
    _pad281: [bool; 0x8],
    pub m_ground_height: f32,
    pub m_unk_69_c: f32,
    _pad284: [bool; 0x4],
    pub m_unk_6_a_4: [f32; 200],
    _pad286: [bool; 0x1C],
}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct GJBaseGameLayer {
    pub m_bounding_box: *mut OBB2D,
    pub m_effect_manager: *mut GJEffectManager,
    pub m_object_layer: *mut cocos2d_CCLayer,
    pub m_batch_node_add_top_4: *mut cocos2d_CCSpriteBatchNode,
    pub m_effect_batch_node_add_top_4: *mut cocos2d_CCSpriteBatchNode,
    pub m_batch_node_top_3: *mut cocos2d_CCSpriteBatchNode,
    pub m_batch_node_add_top_3: *mut cocos2d_CCSpriteBatchNode,
    pub m_batch_node_add_glow_top_3: *mut cocos2d_CCSpriteBatchNode,
    pub m_batch_node_top_3_container: *mut CCNodeContainer,
    pub m_batch_node_text_top_3: *mut cocos2d_CCSpriteBatchNode,
    pub m_batch_node_add_text_top_3: *mut cocos2d_CCSpriteBatchNode,
    pub m_effect_batch_node_top_3: *mut cocos2d_CCSpriteBatchNode,
    pub m_effect_batch_node_add_top_3: *mut cocos2d_CCSpriteBatchNode,
    pub m_batch_node_top_2: *mut cocos2d_CCSpriteBatchNode,
    pub m_batch_node_add_top_2: *mut cocos2d_CCSpriteBatchNode,
    pub m_batch_node_add_glow_top_2: *mut cocos2d_CCSpriteBatchNode,
    pub m_batch_node_top_2_container: *mut CCNodeContainer,
    pub m_batch_node_text_top_2: *mut cocos2d_CCSpriteBatchNode,
    pub m_batch_node_add_text_top_2: *mut cocos2d_CCSpriteBatchNode,
    pub m_effect_batch_node_top_2: *mut cocos2d_CCSpriteBatchNode,
    pub m_effect_batch_node_add_top_2: *mut cocos2d_CCSpriteBatchNode,
    pub m_batch_node: *mut cocos2d_CCSpriteBatchNode,
    pub m_batch_node_add: *mut cocos2d_CCSpriteBatchNode,
    pub m_batch_node_add_glow: *mut cocos2d_CCSpriteBatchNode,
    pub m_batch_node_top_1_container: *mut CCNodeContainer,
    pub m_batch_node_text_top_1: *mut cocos2d_CCSpriteBatchNode,
    pub m_batch_node_add_text_top_1: *mut cocos2d_CCSpriteBatchNode,
    pub m_effect_batch_node_top_1: *mut cocos2d_CCSpriteBatchNode,
    pub m_effect_batch_node_add_top_1: *mut cocos2d_CCSpriteBatchNode,
    pub m_batch_node_player: *mut cocos2d_CCSpriteBatchNode,
    pub m_batch_node_add_player: *mut cocos2d_CCSpriteBatchNode,
    pub m_batch_node_player_glow: *mut cocos2d_CCSpriteBatchNode,
    pub m_batch_node_add_mid: *mut cocos2d_CCSpriteBatchNode,
    pub m_batch_node_bottom: *mut cocos2d_CCSpriteBatchNode,
    pub m_batch_node_add_bottom: *mut cocos2d_CCSpriteBatchNode,
    pub m_batch_node_add_bottom_glow: *mut cocos2d_CCSpriteBatchNode,
    pub m_batch_node_bot_1_container: *mut CCNodeContainer,
    pub m_batch_node_text: *mut cocos2d_CCSpriteBatchNode,
    pub m_batch_node_add_text: *mut cocos2d_CCSpriteBatchNode,
    pub m_effect_batch_node: *mut cocos2d_CCSpriteBatchNode,
    pub m_effect_batch_node_add: *mut cocos2d_CCSpriteBatchNode,
    pub m_batch_node_bottom_2: *mut cocos2d_CCSpriteBatchNode,
    pub m_batch_node_add_bottom_2: *mut cocos2d_CCSpriteBatchNode,
    pub m_batch_node_add_bottom_2_glow: *mut cocos2d_CCSpriteBatchNode,
    pub m_batch_node_bot_2_container: *mut CCNodeContainer,
    pub m_batch_node_text_bot_2: *mut cocos2d_CCSpriteBatchNode,
    pub m_batch_node_add_text_bot_2: *mut cocos2d_CCSpriteBatchNode,
    pub m_effect_batch_node_bot_2: *mut cocos2d_CCSpriteBatchNode,
    pub m_effect_batch_node_add_bot_2: *mut cocos2d_CCSpriteBatchNode,
    pub m_batch_node_bottom_3: *mut cocos2d_CCSpriteBatchNode,
    pub m_batch_node_add_bottom_3: *mut cocos2d_CCSpriteBatchNode,
    pub m_batch_node_add_bottom_3_glow: *mut cocos2d_CCSpriteBatchNode,
    pub m_batch_node_bot_3_container: *mut CCNodeContainer,
    pub m_batch_node_text_bot_3: *mut cocos2d_CCSpriteBatchNode,
    pub m_batch_node_add_text_bot_3: *mut cocos2d_CCSpriteBatchNode,
    pub m_effect_batch_node_bot_3: *mut cocos2d_CCSpriteBatchNode,
    pub m_effect_batch_node_add_bot_3: *mut cocos2d_CCSpriteBatchNode,
    pub m_batch_node_bottom_4: *mut cocos2d_CCSpriteBatchNode,
    pub m_batch_node_add_bottom_4: *mut cocos2d_CCSpriteBatchNode,
    pub m_batch_node_add_bottom_4_glow: *mut cocos2d_CCSpriteBatchNode,
    pub m_batch_node_bot_4_container: *mut CCNodeContainer,
    pub m_batch_node_text_bot_4: *mut cocos2d_CCSpriteBatchNode,
    pub m_batch_node_add_text_bot_4: *mut cocos2d_CCSpriteBatchNode,
    pub m_effect_batch_node_bot_4: *mut cocos2d_CCSpriteBatchNode,
    pub m_effect_batch_node_add_bot_4: *mut cocos2d_CCSpriteBatchNode,
    pub m_player_1: *mut PlayerObject,
    pub m_player_2: *mut PlayerObject,
    pub m_level_settings: *mut LevelSettingsObject,
    pub m_disabled_groups_dict: *mut cocos2d_CCDictionary,
    pub m_objects: *mut cocos2d_CCArray,
    pub m_section_objects: *mut cocos2d_CCArray,
    pub m_sections: *mut cocos2d_CCArray,
    pub m_collision_blocks: *mut cocos2d_CCArray,
    pub m_spawn_objects: *mut cocos2d_CCArray,
    pub m_spawn_objects_2: *mut cocos2d_CCArray,
    pub m_group_nodes: *mut cocos2d_CCNode,
    pub m_objects_vec: stdty::Vector<*mut GameObject>,
    pub m_disabled_objects: stdty::Vector<*mut GameObject>,
    pub m_group_dict: *mut cocos2d_CCDictionary,
    pub m_static_group_dict: *mut cocos2d_CCDictionary,
    pub m_optimized_group_dict: *mut cocos2d_CCDictionary,
    pub m_groups: stdty::Vector<*mut cocos2d_CCArray>,
    pub m_static_groups: stdty::Vector<*mut cocos2d_CCArray>,
    pub m_optimized_groups: stdty::Vector<*mut cocos2d_CCArray>,
    pub m_batch_nodes: *mut cocos2d_CCArray,
    pub m_processed_groups: *mut cocos2d_CCArray,
    pub m_counter_dict: *mut cocos2d_CCDictionary,
    pub m_spawned_groups: *mut cocos2d_CCDictionary,
    pub m_did_update_normal_capacity: bool,
    pub m_is_dual_mode: bool,
    pub m_active_enter_effect: i32,
    pub m_active_dual_touch: bool,
    pub m_attempt_click_count: i32,
    pub m_last_visible_section: i32,
    pub m_first_visible_section: i32,
    pub m_objects_are_disabled: bool,
    pub m_blending: bool,
    _pad97: [bool; 0x8],
}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct CCClippingNode {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct GJSpiderSprite {
    pub m_unknown_1: stdty::String,
    pub m_unknown_2: stdty::String,
    _pad2: [bool; 0x14],
    pub m_unknown_3: stdty::String,
    _pad4: [bool; 0x4],
    pub m_unk_244: *mut cocos2d_CCArray,
    pub m_unk_248: bool,
    pub m_main_color: cocos2d_ccColor3B,
    pub m_secondary_color: cocos2d_ccColor3B,
    pub m_unk_250: *mut cocos2d_CCArray,
    pub m_glow_sprite: *mut cocos2d_CCSprite,
    pub m_unk_258: *mut cocos2d_CCSprite,
    _pad12: [bool; 0x4],
    pub m_flame_sprite: *mut cocos2d_CCSprite,
    pub m_head_sprite_part: *mut CCSpritePart,
}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct AchievementBar {
    _pad0: [bool; 0x24],
}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct CCSpriteFrameCache {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct LevelPage {
    _pad0: [bool; 0x124],
    pub m_level: *mut GJGameLevel,
}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct SetItemIDLayer {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct CCFiniteTimeAction {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct CCAnimateFrameCache {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct GJRewardObject {
    pub m_special_reward_item: SpecialRewardItem,
    pub m_unlock_type: UnlockType,
    pub m_item_id: i32,
    pub m_total: i32,
}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct InheritanceNode {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct ToggleTriggerAction {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct LevelInfoLayer {
    _pad0: [bool; 0x4],
    pub m_play_btn_menu: *mut cocos2d_CCMenu,
    pub m_level: *mut GJGameLevel,
    pub m_unknown: *mut cocos2d_CCArray,
    pub m_like_btn: *mut CCMenuItemSpriteExtra,
    pub m_star_rate_btn: *mut CCMenuItemSpriteExtra,
    pub m_demon_rate_btn: *mut CCMenuItemSpriteExtra,
    _pad7: [bool; 0x4],
    pub m_toggler: *mut CCMenuItemToggler,
    pub m_label_0: *mut cocos2d_CCLabelBMFont,
    pub m_label_1: *mut cocos2d_CCLabelBMFont,
    pub m_label_2: *mut cocos2d_CCLabelBMFont,
    pub m_label_3: *mut cocos2d_CCLabelBMFont,
    pub m_label_4: *mut cocos2d_CCLabelBMFont,
    pub m_label_5: *mut cocos2d_CCLabelBMFont,
    pub m_clone_btn: *mut CCMenuItemSpriteExtra,
    _pad16: [bool; 0x4],
}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct CCSpritePlus {
    pub m_followers: *mut cocos2d_CCArray,
    pub m_following_sprite: *mut CCSpritePlus,
    pub m_has_follower: bool,
    pub m_propagate_scale_changes: bool,
    pub m_propagate_flip_changes: bool,
}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct CCBMFontConfiguration {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct CCNode {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct CCMenuItemSprite {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct StartPosObject {
    pub m_followers: *mut cocos2d_CCArray,
    pub m_following_sprite: *mut CCSpritePlus,
    pub m_has_follower: bool,
    pub m_propagate_scale_changes: bool,
    pub m_propagate_flip_changes: bool,
    pub m_unk_3: bool,
    pub m_is_blue_maybe: bool,
    pub m_unk_2: f32,
    pub m_unk: f32,
    pub m_unk_3_f: f32,
    pub m_unk_4: f32,
    pub m_unkidk: bool,
    pub m_anim_speed_2: f32,
    pub m_is_effect_object: bool,
    pub m_randomised_anim_start: bool,
    pub m_anim_speed: f32,
    pub m_is_black_object: bool,
    pub m_is_black_object_with_outline: bool,
    pub m_black_child_opacity: f32,
    pub field_21_c: bool,
    pub m_editor: bool,
    pub m_group_disabled: bool,
    pub m_colour_on_top: bool,
    pub m_base_color_id: i32,
    pub m_detail_color_id: i32,
    pub m_base_color_hsv_modified: bool,
    pub m_detail_color_hsv_modified: bool,
    pub m_start_pos_offset: cocos2d_CCPoint,
    pub m_rotate_offset: f32,
    pub m_tint_trigger: bool,
    pub m_is_flipped_x: bool,
    pub m_is_flipped_y: bool,
    pub m_box_offset: cocos2d_CCPoint,
    pub m_is_oriented: bool,
    pub m_box_offset_2: cocos2d_CCPoint,
    pub m_object_obb_2_d: *mut OBB2D,
    pub m_oriented: bool,
    pub m_glow_sprite: *mut cocos2d_CCSprite,
    pub m_not_editor: bool,
    pub m_my_action: *mut cocos2d_CCAction,
    pub m_unk_1: bool,
    pub m_run_action_with_tag: bool,
    pub m_object_powered_on: bool,
    pub m_object_size: cocos2d_CCSize,
    pub m_modifier: bool,
    pub m_active: bool,
    pub m_animation_finished: bool,
    pub m_particle_system: *mut cocos2d_CCParticleSystemQuad,
    pub m_effect_plist_name: stdty::String,
    pub m_particle_added: bool,
    pub m_has_particles: bool,
    pub m_unk_custom_ring: bool,
    pub m_portal_position: cocos2d_CCPoint,
    pub m_unk_particle_system: bool,
    pub m_object_texture_rect: cocos2d_CCRect,
    pub m_texture_rect_dirty: bool,
    pub m_rect_x_center_maybe: f32,
    pub m_object_rect_2: cocos2d_CCRect,
    pub m_is_object_rect_dirty: bool,
    pub m_is_oriented_rect_dirty: bool,
    pub m_has_been_activated: bool,
    pub m_has_been_activated_p_2: bool,
    pub m_has_detail_color: bool,
    pub m_is_pulse_stick: bool,
    pub m_linked_group: i32,
    pub m_is_saw: bool,
    pub m_custom_rotate_speed: i32,
    pub m_saw_is_disabled: bool,
    pub m_unknown_visibility_345: bool,
    pub m_unknown_346: bool,
    pub m_unknown_visibility_347: bool,
    pub m_base_sprite: *mut cocos2d_CCSprite,
    pub m_detail_sprite: *mut cocos2d_CCSprite,
    _pad73: [bool; 0x4],
    pub m_object_radius: f32,
    pub m_is_rotated_side: bool,
    pub m_unk_2_f_4: f32,
    pub m_unk_2_f_8: f32,
    pub m_unique_id: i32,
    pub m_object_type: GameObjectType,
    pub m_section: i32,
    pub m_touch_triggered: bool,
    pub m_spawn_triggered: bool,
    pub m_start_position: cocos2d_CCPoint,
    pub m_texture_name: stdty::String,
    pub m_use_audio_scale: bool,
    pub m_sleeping: bool,
    pub m_rotation: f32,
    pub m_ob_start_scale: cocos2d_CCSize,
    pub m_start_flip_x: bool,
    pub m_start_flip_y: bool,
    pub m_should_hide: bool,
    pub m_spawn_x_position: f32,
    pub m_invisible: bool,
    pub m_enter_angle: f32,
    pub m_active_enter_effect: i32,
    pub m_parent_mode: i32,
    pub m_is_glow_disabled: bool,
    pub m_target_color_id: i32,
    pub m_scale: f32,
    pub m_object_id: i32,
    pub m_unknown_3_c_8: i32,
    pub m_unk_368: bool,
    pub m_unk_369: bool,
    pub m_unk_36_a: bool,
    pub m_is_dont_enter: bool,
    pub m_is_dont_fade: bool,
    pub m_unk_36_d: bool,
    pub m_default_z_order: i32,
    pub m_use_second_sheet: bool,
    pub m_is_portal: bool,
    pub m_lock_colour_as_child: bool,
    pub m_custom_audio_scale: bool,
    pub m_min_audio_scale: i32,
    pub m_max_audio_scale: i32,
    pub m_unk_particle_system_2: bool,
    pub m_secret_coin_id: i32,
    pub m_unk_unused_save_string_key_53: i32,
    pub m_invisible_mode: bool,
    pub m_glow_user_background_colour: bool,
    pub m_use_special_light: bool,
    pub m_orb_or_pad: bool,
    pub m_glow_opacity_mod: f32,
    pub m_up_slope: bool,
    pub m_slope_type: i32,
    pub m_slope_angle: f32,
    pub m_hazardous_slope: bool,
    pub m_real_opacity: f32,
    pub m_base_color: *mut GJSpriteColor,
    pub m_detail_color: *mut GJSpriteColor,
    pub m_unknown_420: i32,
    pub m_default_z_layer: ZLayer,
    pub m_z_layer: ZLayer,
    pub m_game_z_order: i32,
    pub m_text_object_string: stdty::String,
    pub m_show_gamemode_borders: bool,
    pub m_unk_3_d_9: bool,
    pub m_is_selected: bool,
    pub m_global_click_counter: i32,
    _pad139: [bool; 0x8],
    pub m_should_update_color_sprite: bool,
    pub m_multi_scale_multiplier: f32,
    pub m_is_group_parent: bool,
    pub m_groups: *mut [i16; 10],
    pub m_group_count: i16,
    pub m_pulse_groups: *mut [i16; 10],
    pub m_pulse_group_count: i16,
    pub m_alpha_groups: *mut [i16; 10],
    pub m_alpha_group_count: i16,
    pub m_editor_layer: i32,
    pub m_editor_layer_2: i32,
    pub m_unk_414: i32,
    _pad152: [bool; 0xC],
    pub m_first_position: cocos2d_CCPoint,
    _pad154: [bool; 0x15],
    pub m_is_triggerable: bool,
    _pad156: [bool; 0x6],
    pub m_high_detail: bool,
    pub m_color_action_sprite_base: *mut ColorActionSprite,
    pub m_color_action_sprite_detail: *mut ColorActionSprite,
    pub m_effect_manager: *mut GJEffectManager,
    _pad161: [bool; 0xC],
    pub m_orb_multi_activate: bool,
    pub m_col_color: cocos2d_ccColor3B,
    pub m_duration: f32,
    pub m_opacity: f32,
    pub m_target_group_id: i32,
    pub m_center_group_id: i32,
    pub m_shake_strength: f32,
    pub m_shake_interval: f32,
    pub m_tint_ground: bool,
    pub m_player_color_1: bool,
    pub m_player_color_2: bool,
    pub m_blending: bool,
    pub m_move: cocos2d_CCPoint,
    pub m_easing_type: EasingType,
    pub m_easing_rate: f32,
    pub m_lock_to_player_x: bool,
    pub m_lock_to_player_y: bool,
    pub m_use_target: bool,
    pub m_move_target_type: MoveTargetType,
    pub m_rotate_degrees: i32,
    pub m_times_360: i32,
    pub m_lock_object_rotation: bool,
    pub m_follow_mod: cocos2d_CCPoint,
    pub undocuemented_level_property_74: bool,
    pub m_follow_y_speed: f32,
    pub m_follow_y_delay: f32,
    pub m_follow_y_offset: i32,
    pub m_follow_y_max_speed: f32,
    pub m_fade_in_time: f32,
    pub m_hold_time: f32,
    pub m_fade_out_time: f32,
    pub m_pulse_hsv_mode: i32,
    pub m_pulse_group_mode: i32,
    pub m_hsv_value: cocos2d_ccHSVValue,
    pub m_copy_color_id: i32,
    pub m_copy_opacity: bool,
    pub m_pulse_main_only: bool,
    pub m_pulse_detail_only: bool,
    pub m_pulse_exclusive: bool,
    pub m_activate_group: bool,
    pub m_touch_hold_mode: bool,
    pub m_touch_toggle_mode: TouchToggleMode,
    pub m_touch_dual_mode: bool,
    pub m_animation_id: i32,
    pub m_spawn_delay: f32,
    pub m_spawn_position: cocos2d_CCPoint,
    pub m_multi_trigger: bool,
    pub m_editor_disabled: bool,
    pub m_target_count: i32,
    pub m_subtract_count: bool,
    pub m_comparison_type: ComparisonType,
    pub m_multi_activate: bool,
    pub m_trigger_on_exit: bool,
    pub m_block_bid: i32,
    pub m_dynamic_block: bool,
    pub m_item_block_aid: i32,
    pub m_pickup_mode: i32,
    _pad219: [bool; 0x24],
    pub m_level_settings: *mut LevelSettingsObject,
}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct CCTouchDispatcher {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct ConfigureHSVWidget {
    pub m_hue_label: *mut cocos2d_CCLabelBMFont,
    pub m_saturation_label: *mut cocos2d_CCLabelBMFont,
    pub m_brightness_label: *mut cocos2d_CCLabelBMFont,
    pub m_hue_slider: *mut Slider,
    pub m_saturation_slider: *mut Slider,
    pub m_brightness_slider: *mut Slider,
    pub m_value: cocos2d_ccHSVValue,
}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct GJDailyLevelDelegate {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct MapPackCell {
    pub m_unknown: bool,
    pub m_table_view: *mut TableView,
    pub m_index_path: CCIndexPath,
    pub m_unknown_thing: i32,
    pub m_unknown_string: stdty::String,
    pub m_width: f32,
    pub m_height: f32,
    pub m_background_layer: *mut cocos2d_CCLayerColor,
    pub m_main_layer: *mut cocos2d_CCLayer,
}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct CCEaseElasticIn {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct UploadMessageDelegate {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct CustomSongWidget {
    pub m_song_info: *mut SongInfoObject,
    _pad1: [bool; 0x1C],
    pub m_download_btn: *mut CCMenuItemSpriteExtra,
    _pad3: [bool; 0x30],
}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct CreateMenuItem {
    pub m_scale_multiplier: f32,
    pub m_base_scale: f32,
    pub m_animation_enabled: bool,
    pub m_color_enabled: bool,
    pub m_unknown: f32,
    pub m_unknown_2: stdty::String,
    pub m_unknown_3: stdty::String,
    pub m_color_dip: f32,
    pub m_dest_position: cocos2d_CCPoint,
    pub m_offset: cocos2d_CCPoint,
    pub m_animation_type: MenuAnimationType,
    pub m_start_position: cocos2d_CCPoint,
    _pad12: [bool; 0x18],
    pub m_object_id: i32,
    pub m_build_tab_page: i32,
    pub m_build_tab: i32,
}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct EditorPauseLayer {
    pub m_unknown: bool,
    pub m_unknown_2: bool,
    pub m_saved: bool,
    pub m_guidelines_off_button: *mut CCMenuItemSpriteExtra,
    pub m_guidelines_on_button: *mut CCMenuItemSpriteExtra,
    pub m_editor_layer: *mut LevelEditorLayer,
}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct GJRotationControl {
    pub m_unknown_0: f32,
    pub m_unknown_1: f32,
    pub m_slider_position: cocos2d_CCPoint,
    pub m_slider_thumb: *mut cocos2d_CCSprite,
    pub m_obj_angle: f32,
    pub m_angle: f32,
    pub m_touch_id: i32,
}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct GDString {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct SelectArtDelegate {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct CCObject {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct CCStandardTouchHandler {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct GJMapPack {
    pub m_levels: *mut cocos2d_CCArray,
    pub m_pack_id: i32,
    pub m_difficulty: GJDifficulty,
    pub m_stars: i32,
    pub m_coins: i32,
    pub m_pack_name: stdty::String,
    pub m_level_strings: stdty::String,
    pub m_text_colour: cocos2d_ccColor3B,
    pub m_bar_colour: cocos2d_ccColor3B,
    pub m_m_id: i32,
    pub m_is_gauntlet: bool,
}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct DialogDelegate {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct MoreOptionsLayer {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct CCMouseHandler {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct InfoLayer {
    pub m_button_menu: *mut cocos2d_CCMenu,
    pub m_control_connected: i32,
    pub m_alert_protocol: *mut FLAlertLayerProtocol,
    pub m_scene: *mut cocos2d_CCNode,
    pub m_reverse_key_back: bool,
    pub m_color: cocos2d_ccColor3B,
    pub m_main_layer: *mut cocos2d_CCLayer,
    pub m_z_order: i32,
    pub m_no_elasticity: bool,
    pub m_color_2: cocos2d_ccColor3B,
    pub m_button_1: *mut ButtonSprite,
    pub m_button_2: *mut ButtonSprite,
    pub m_scrolling_layer: *mut cocos2d_CCLayerColor,
    pub m_joystick_connected: i32,
    pub m_contains_border: bool,
    pub m_no_action: bool,
    pub m_level: *mut GJGameLevel,
    pub m_score: *mut GJUserScore,
    pub m_comment_key: stdty::String,
    pub m_loading_circle: *mut LoadingCircle,
    pub m_page_label: *mut cocos2d_CCLabelBMFont,
    pub m_comments_gold_label: *mut cocos2d_CCLabelBMFont,
    pub m_list: *mut GJCommentListLayer,
    pub m_left_arrow: *mut CCMenuItemSpriteExtra,
    pub m_right_arrow: *mut CCMenuItemSpriteExtra,
    pub m_like_btn: *mut CCMenuItemSpriteExtra,
    pub m_time_btn: *mut CCMenuItemSpriteExtra,
    pub m_report_btn: *mut CCMenuItemSpriteExtra,
    pub m_comments_btn: *mut CCMenuItemSpriteExtra,
    pub m_refresh_comments_btn: *mut CCMenuItemSpriteExtra,
    pub m_item_count: i32,
    pub m_page_start_idx: i32,
    pub m_page_end_idx: i32,
    pub m_page: i32,
    pub m_can_update_user_score: bool,
    pub m_comment_history: bool,
}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct ScrollingLayer {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct CurrencyRewardLayer {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct GameObjectCopy {
    pub m_object: *mut GameObject,
}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct ListButtonBarDelegate {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct CCAnimation {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct RateLevelDelegate {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct GJLevelScoreCell {
    pub m_unknown: bool,
    pub m_table_view: *mut TableView,
    pub m_index_path: CCIndexPath,
    pub m_unknown_thing: i32,
    pub m_unknown_string: stdty::String,
    pub m_width: f32,
    pub m_height: f32,
    pub m_background_layer: *mut cocos2d_CCLayerColor,
    pub m_main_layer: *mut cocos2d_CCLayer,
}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct GJUserMessage {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct AchievementsLayer {
    pub m_end_position: cocos2d_CCPoint,
    pub m_start_position: cocos2d_CCPoint,
    pub m_button_menu: *mut cocos2d_CCMenu,
    pub m_list_layer: *mut GJListLayer,
    pub m_controller_enabled: bool,
    pub m_main_layer: *mut cocos2d_CCLayer,
    pub m_hidden: bool,
    pub m_delegate: *mut GJDropDownLayerDelegate,
}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct LevelSearchLayer {
    _pad0: [bool; 0xC],
    pub m_search_input: *mut CCTextInputNode,
}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct LevelSettingsDelegate {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct SetIDPopupDelegate {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct PlatformDownloadDelegate {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct AchievementManager {
    _pad0: [bool; 0x10],
    pub m_achievements: *mut cocos2d_CCDictionary,
    _pad2: [bool; 0x4],
}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct AchievementNotifier {
    pub m_current_scene: *mut cocos2d_CCScene,
    pub m_queue: *mut cocos2d_CCArray,
    pub m_current_achievement: *mut AchievementBar,
}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct LevelCell {
    pub m_unknown: bool,
    pub m_table_view: *mut TableView,
    pub m_index_path: CCIndexPath,
    pub m_unknown_thing: i32,
    pub m_unknown_string: stdty::String,
    pub m_width: f32,
    pub m_height: f32,
    pub m_background_layer: *mut cocos2d_CCLayerColor,
    pub m_main_layer: *mut cocos2d_CCLayer,
    pub m_button: *mut CCMenuItemSpriteExtra,
    pub m_level: *mut GJGameLevel,
    pub m_cell_drawn: bool,
}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct SongInfoLayer {
    pub m_button_menu: *mut cocos2d_CCMenu,
    pub m_control_connected: i32,
    pub m_alert_protocol: *mut FLAlertLayerProtocol,
    pub m_scene: *mut cocos2d_CCNode,
    pub m_reverse_key_back: bool,
    pub m_color: cocos2d_ccColor3B,
    pub m_main_layer: *mut cocos2d_CCLayer,
    pub m_z_order: i32,
    pub m_no_elasticity: bool,
    pub m_color_2: cocos2d_ccColor3B,
    pub m_button_1: *mut ButtonSprite,
    pub m_button_2: *mut ButtonSprite,
    pub m_scrolling_layer: *mut cocos2d_CCLayerColor,
    pub m_joystick_connected: i32,
    pub m_contains_border: bool,
    pub m_no_action: bool,
    pub m_download_link: stdty::String,
    pub m_artist_newgrounds: stdty::String,
    pub m_artist_youtube: stdty::String,
    pub m_artist_facebook: stdty::String,
}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct StatsCell {
    pub m_unknown: bool,
    pub m_table_view: *mut TableView,
    pub m_index_path: CCIndexPath,
    pub m_unknown_thing: i32,
    pub m_unknown_string: stdty::String,
    pub m_width: f32,
    pub m_height: f32,
    pub m_background_layer: *mut cocos2d_CCLayerColor,
    pub m_main_layer: *mut cocos2d_CCLayer,
}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct TeleportPortalObject {
    pub m_followers: *mut cocos2d_CCArray,
    pub m_following_sprite: *mut CCSpritePlus,
    pub m_has_follower: bool,
    pub m_propagate_scale_changes: bool,
    pub m_propagate_flip_changes: bool,
    pub m_unk_3: bool,
    pub m_is_blue_maybe: bool,
    pub m_unk_2: f32,
    pub m_unk: f32,
    pub m_unk_3_f: f32,
    pub m_unk_4: f32,
    pub m_unkidk: bool,
    pub m_anim_speed_2: f32,
    pub m_is_effect_object: bool,
    pub m_randomised_anim_start: bool,
    pub m_anim_speed: f32,
    pub m_is_black_object: bool,
    pub m_is_black_object_with_outline: bool,
    pub m_black_child_opacity: f32,
    pub field_21_c: bool,
    pub m_editor: bool,
    pub m_group_disabled: bool,
    pub m_colour_on_top: bool,
    pub m_base_color_id: i32,
    pub m_detail_color_id: i32,
    pub m_base_color_hsv_modified: bool,
    pub m_detail_color_hsv_modified: bool,
    pub m_start_pos_offset: cocos2d_CCPoint,
    pub m_rotate_offset: f32,
    pub m_tint_trigger: bool,
    pub m_is_flipped_x: bool,
    pub m_is_flipped_y: bool,
    pub m_box_offset: cocos2d_CCPoint,
    pub m_is_oriented: bool,
    pub m_box_offset_2: cocos2d_CCPoint,
    pub m_object_obb_2_d: *mut OBB2D,
    pub m_oriented: bool,
    pub m_glow_sprite: *mut cocos2d_CCSprite,
    pub m_not_editor: bool,
    pub m_my_action: *mut cocos2d_CCAction,
    pub m_unk_1: bool,
    pub m_run_action_with_tag: bool,
    pub m_object_powered_on: bool,
    pub m_object_size: cocos2d_CCSize,
    pub m_modifier: bool,
    pub m_active: bool,
    pub m_animation_finished: bool,
    pub m_particle_system: *mut cocos2d_CCParticleSystemQuad,
    pub m_effect_plist_name: stdty::String,
    pub m_particle_added: bool,
    pub m_has_particles: bool,
    pub m_unk_custom_ring: bool,
    pub m_portal_position: cocos2d_CCPoint,
    pub m_unk_particle_system: bool,
    pub m_object_texture_rect: cocos2d_CCRect,
    pub m_texture_rect_dirty: bool,
    pub m_rect_x_center_maybe: f32,
    pub m_object_rect_2: cocos2d_CCRect,
    pub m_is_object_rect_dirty: bool,
    pub m_is_oriented_rect_dirty: bool,
    pub m_has_been_activated: bool,
    pub m_has_been_activated_p_2: bool,
    pub m_has_detail_color: bool,
    pub m_is_pulse_stick: bool,
    pub m_linked_group: i32,
    pub m_is_saw: bool,
    pub m_custom_rotate_speed: i32,
    pub m_saw_is_disabled: bool,
    pub m_unknown_visibility_345: bool,
    pub m_unknown_346: bool,
    pub m_unknown_visibility_347: bool,
    pub m_base_sprite: *mut cocos2d_CCSprite,
    pub m_detail_sprite: *mut cocos2d_CCSprite,
    _pad73: [bool; 0x4],
    pub m_object_radius: f32,
    pub m_is_rotated_side: bool,
    pub m_unk_2_f_4: f32,
    pub m_unk_2_f_8: f32,
    pub m_unique_id: i32,
    pub m_object_type: GameObjectType,
    pub m_section: i32,
    pub m_touch_triggered: bool,
    pub m_spawn_triggered: bool,
    pub m_start_position: cocos2d_CCPoint,
    pub m_texture_name: stdty::String,
    pub m_use_audio_scale: bool,
    pub m_sleeping: bool,
    pub m_rotation: f32,
    pub m_ob_start_scale: cocos2d_CCSize,
    pub m_start_flip_x: bool,
    pub m_start_flip_y: bool,
    pub m_should_hide: bool,
    pub m_spawn_x_position: f32,
    pub m_invisible: bool,
    pub m_enter_angle: f32,
    pub m_active_enter_effect: i32,
    pub m_parent_mode: i32,
    pub m_is_glow_disabled: bool,
    pub m_target_color_id: i32,
    pub m_scale: f32,
    pub m_object_id: i32,
    pub m_unknown_3_c_8: i32,
    pub m_unk_368: bool,
    pub m_unk_369: bool,
    pub m_unk_36_a: bool,
    pub m_is_dont_enter: bool,
    pub m_is_dont_fade: bool,
    pub m_unk_36_d: bool,
    pub m_default_z_order: i32,
    pub m_use_second_sheet: bool,
    pub m_is_portal: bool,
    pub m_lock_colour_as_child: bool,
    pub m_custom_audio_scale: bool,
    pub m_min_audio_scale: i32,
    pub m_max_audio_scale: i32,
    pub m_unk_particle_system_2: bool,
    pub m_secret_coin_id: i32,
    pub m_unk_unused_save_string_key_53: i32,
    pub m_invisible_mode: bool,
    pub m_glow_user_background_colour: bool,
    pub m_use_special_light: bool,
    pub m_orb_or_pad: bool,
    pub m_glow_opacity_mod: f32,
    pub m_up_slope: bool,
    pub m_slope_type: i32,
    pub m_slope_angle: f32,
    pub m_hazardous_slope: bool,
    pub m_real_opacity: f32,
    pub m_base_color: *mut GJSpriteColor,
    pub m_detail_color: *mut GJSpriteColor,
    pub m_unknown_420: i32,
    pub m_default_z_layer: ZLayer,
    pub m_z_layer: ZLayer,
    pub m_game_z_order: i32,
    pub m_text_object_string: stdty::String,
    pub m_show_gamemode_borders: bool,
    pub m_unk_3_d_9: bool,
    pub m_is_selected: bool,
    pub m_global_click_counter: i32,
    _pad139: [bool; 0x8],
    pub m_should_update_color_sprite: bool,
    pub m_multi_scale_multiplier: f32,
    pub m_is_group_parent: bool,
    pub m_groups: *mut [i16; 10],
    pub m_group_count: i16,
    pub m_pulse_groups: *mut [i16; 10],
    pub m_pulse_group_count: i16,
    pub m_alpha_groups: *mut [i16; 10],
    pub m_alpha_group_count: i16,
    pub m_editor_layer: i32,
    pub m_editor_layer_2: i32,
    pub m_unk_414: i32,
    _pad152: [bool; 0xC],
    pub m_first_position: cocos2d_CCPoint,
    _pad154: [bool; 0x15],
    pub m_is_triggerable: bool,
    _pad156: [bool; 0x6],
    pub m_high_detail: bool,
    pub m_color_action_sprite_base: *mut ColorActionSprite,
    pub m_color_action_sprite_detail: *mut ColorActionSprite,
    pub m_effect_manager: *mut GJEffectManager,
    _pad161: [bool; 0xC],
    pub m_orb_multi_activate: bool,
    _pad163: [bool; 0x4],
    pub m_orange_portal: *mut TeleportPortalObject,
    pub m_is_yellow_portal: bool,
    pub m_teleport_y_offset: f32,
    pub m_teleport_ease: bool,
}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct DialogLayer {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct UserInfoDelegate {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct CCGLProgram {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct CCScrollLayerExt {
    pub m_touch: *mut cocos2d_CCTouch,
    pub m_touch_position: cocos2d_CCPoint,
    pub m_touch_start_position: cocos2d_CCPoint,
    pub m_time_value: cocos2d_cc_timeval,
    pub m_touch_down: bool,
    pub m_not_at_end_of_scroll: bool,
    pub m_vertical_scrollbar: *mut cocos2d_CCLayerColor,
    pub m_horizontal_scrollbar: *mut cocos2d_CCLayerColor,
    pub m_delegate: *mut CCScrollLayerExtDelegate,
    pub m_content_layer: *mut CCContentLayer,
    pub m_cut_content: bool,
    pub m_v_scrollbar_visible: bool,
    pub m_h_scrollbar_visible: bool,
    pub m_disable_horizontal: bool,
    pub m_disable_vertical: bool,
    pub m_disable_movement: bool,
    pub m_scroll_limit_top: f32,
    pub m_scroll_limit_bottom: f32,
    pub m_peek_limit_top: f32,
    pub m_peek_limit_bottom: f32,
}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct CCBlockLayer {
    pub m_unknown: bool,
    pub m_unknown_2: bool,
}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct CCKeyboardDispatcher {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct GJRotationControlDelegate {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct CCLayerColor {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct LevelTools {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct CCScaleBy {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct ColorSelectPopup {
    pub m_button_menu: *mut cocos2d_CCMenu,
    pub m_control_connected: i32,
    pub m_alert_protocol: *mut FLAlertLayerProtocol,
    pub m_scene: *mut cocos2d_CCNode,
    pub m_reverse_key_back: bool,
    pub m_color: cocos2d_ccColor3B,
    pub m_main_layer: *mut cocos2d_CCLayer,
    pub m_z_order: i32,
    pub m_no_elasticity: bool,
    pub m_color_2: cocos2d_ccColor3B,
    pub m_button_1: *mut ButtonSprite,
    pub m_button_2: *mut ButtonSprite,
    pub m_scrolling_layer: *mut cocos2d_CCLayerColor,
    pub m_joystick_connected: i32,
    pub m_contains_border: bool,
    pub m_no_action: bool,
    pub cpd_16: cocos2d::extension::ColorPickerDelegate,
    pub m_color_picker: *mut cocos2d_extension_CCControlColourPicker,
    pub m_unk_1_dc: *mut cocos2d_CCLabelBMFont,
    pub m_label: *mut cocos2d_CCLabelBMFont,
    pub m_unk_1_e_4: *mut Slider,
    pub m_slider: *mut Slider,
    pub m_target_object: *mut EffectGameObject,
    pub m_target_objects: *mut cocos2d_CCArray,
    pub m_toggler_1: *mut CCMenuItemToggler,
    pub m_toggler_2: *mut CCMenuItemToggler,
    pub m_rgb_last_color: u32,
    pub m_unk_200: *mut cocos2d_CCSprite,
    pub m_unk_204: *mut cocos2d_CCSprite,
    pub m_selected_color: cocos2d_ccColor3B,
    pub m_color_setup_layer: *mut GJColorSetupLayer,
    pub m_fade_time: f32,
    pub m_player_color: i32,
    pub m_is_blending: bool,
    pub m_opacity: f32,
    pub m_color_action: *mut ColorAction,
    pub m_text_input_1: *mut CCTextInputNode,
    pub m_unk_228: bool,
    pub m_is_touch_trigger: bool,
    pub m_unk_22_a: bool,
    pub m_is_multiple_color_trigger: bool,
    pub m_unk_22_c: bool,
    pub m_is_color_trigger: bool,
    pub m_color_id: i32,
    pub m_unk_234: bool,
    pub m_copy_channel_id: i32,
    pub m_copy_opacity: bool,
    pub m_hsv_widget: *mut ConfigureHSVWidget,
    _pad48: [bool; 0x10],
    pub m_unk_254: *mut cocos2d_CCArray,
    pub m_unk_258: *mut cocos2d_CCArray,
    pub m_text_input_2: *mut CCTextInputNode,
    _pad52: [bool; 0x4],
    pub m_toggler_3: *mut CCMenuItemToggler,
    pub m_toggler_4: *mut CCMenuItemToggler,
    _pad55: [bool; 0x8],
    pub m_unk_274: *mut cocos2d_CCArray,
    pub m_spawn_trigger: bool,
    pub m_multi_trigger: bool,
    pub m_copy_color: bool,
}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct TopArtistsLayer {
    pub m_button_menu: *mut cocos2d_CCMenu,
    pub m_control_connected: i32,
    pub m_alert_protocol: *mut FLAlertLayerProtocol,
    pub m_scene: *mut cocos2d_CCNode,
    pub m_reverse_key_back: bool,
    pub m_color: cocos2d_ccColor3B,
    pub m_main_layer: *mut cocos2d_CCLayer,
    pub m_z_order: i32,
    pub m_no_elasticity: bool,
    pub m_color_2: cocos2d_ccColor3B,
    pub m_button_1: *mut ButtonSprite,
    pub m_button_2: *mut ButtonSprite,
    pub m_scrolling_layer: *mut cocos2d_CCLayerColor,
    pub m_joystick_connected: i32,
    pub m_contains_border: bool,
    pub m_no_action: bool,
}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct CCTintTo {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct CCTouch {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct GameToolbox {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct GJItemIcon {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct GJUserCell {
    pub m_unknown: bool,
    pub m_table_view: *mut TableView,
    pub m_index_path: CCIndexPath,
    pub m_unknown_thing: i32,
    pub m_unknown_string: stdty::String,
    pub m_width: f32,
    pub m_height: f32,
    pub m_background_layer: *mut cocos2d_CCLayerColor,
    pub m_main_layer: *mut cocos2d_CCLayer,
}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct GaragePage {
    pub m_garage: *mut GJGarageLayer,
    pub m_handler: cocos2d_SEL_MenuHandler,
    pub m_select_sprite: *mut cocos2d_CCSprite,
    pub m_unk_node_0_x_12_c: *mut CCMenuItemSpriteExtra,
    pub m_type: IconType,
    pub m_unknown: i32,
    _pad6: [bool; 0x4],
}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct CCMoveBy {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct CCTransitionFade {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct CCNodeContainer {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct CustomizeObjectLayer {
    pub m_button_menu: *mut cocos2d_CCMenu,
    pub m_control_connected: i32,
    pub m_alert_protocol: *mut FLAlertLayerProtocol,
    pub m_scene: *mut cocos2d_CCNode,
    pub m_reverse_key_back: bool,
    pub m_color: cocos2d_ccColor3B,
    pub m_main_layer: *mut cocos2d_CCLayer,
    pub m_z_order: i32,
    pub m_no_elasticity: bool,
    pub m_color_2: cocos2d_ccColor3B,
    pub m_button_1: *mut ButtonSprite,
    pub m_button_2: *mut ButtonSprite,
    pub m_scrolling_layer: *mut cocos2d_CCLayerColor,
    pub m_joystick_connected: i32,
    pub m_contains_border: bool,
    pub m_no_action: bool,
    pub m_target_object: *mut GameObject,
    pub m_target_objects: *mut cocos2d_CCArray,
    pub m_color_buttons: *mut cocos2d_CCArray,
    pub m_color_nodes: *mut cocos2d_CCArray,
    pub m_text_input_nodes: *mut cocos2d_CCArray,
    _pad21: [bool; 0x4],
    pub m_detail_color_buttons: *mut cocos2d_CCArray,
    pub m_selected_mode: i32,
    pub m_custom_color_channel: i32,
    pub m_unk_0_x_200: bool,
    pub m_unk_0_x_201: bool,
    pub m_glow_disabled: bool,
    pub m_base_button: *mut CCMenuItemSpriteExtra,
    pub m_detail_button: *mut CCMenuItemSpriteExtra,
    pub m_text_button: *mut CCMenuItemSpriteExtra,
    pub m_base_color_hsv: *mut CCMenuItemSpriteExtra,
    pub m_detail_color_hsv: *mut CCMenuItemSpriteExtra,
    pub m_title_label: *mut cocos2d_CCLabelBMFont,
    pub m_selected_color_label: *mut cocos2d_CCLabelBMFont,
    pub m_custom_color_input: *mut CCTextInputNode,
    pub m_text_input: *mut CCTextInputNode,
    pub m_custom_color_button_sprite: *mut ButtonSprite,
    pub m_custom_color_button: *mut CCMenuItemSpriteExtra,
    pub m_arrow_down: *mut CCMenuItemSpriteExtra,
    pub m_arrow_up: *mut CCMenuItemSpriteExtra,
    pub m_custom_color_input_bg: *mut cocos2d_extension_CCScale9Sprite,
    pub m_color_sprite: *mut ColorChannelSprite,
    pub m_color_sprite_button: *mut CCMenuItemSpriteExtra,
    pub m_show_text_input: bool,
    pub m_custom_color_selected: bool,
}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct PlatformToolbox {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct GJCommentListLayer {
    pub m_list: *mut BoomListView,
}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct GameLevelManager {
    pub m_main_levels: *mut cocos2d_CCDictionary,
    pub m_search_filters: *mut cocos2d_CCDictionary,
    pub m_online_levels: *mut cocos2d_CCDictionary,
    _pad3: [bool; 0x4],
    pub m_followed_creators: *mut cocos2d_CCDictionary,
    pub m_downloaded_levels: *mut cocos2d_CCDictionary,
    pub m_liked_levels: *mut cocos2d_CCDictionary,
    pub m_rated_levels: *mut cocos2d_CCDictionary,
    pub m_rated_demons: *mut cocos2d_CCDictionary,
    pub m_reported_levels: *mut cocos2d_CCDictionary,
    pub m_online_folders: *mut cocos2d_CCDictionary,
    pub m_local_levels_folders: *mut cocos2d_CCDictionary,
    pub m_daily_levels: *mut cocos2d_CCDictionary,
    pub m_daily_time_left: i32,
    pub m_daily_id: i32,
    pub m_daily_id_unk: i32,
    _pad16: [bool; 0x4],
    pub m_weekly_time_left: i32,
    pub m_weekly_id: i32,
    pub m_weekly_id_unk: i32,
    pub m_gauntlet_levels: *mut cocos2d_CCDictionary,
    pub m_unk_dict_13: *mut cocos2d_CCDictionary,
    _pad22: [bool; 0x4],
    pub m_timer_dict: *mut cocos2d_CCDictionary,
    pub m_known_users: *mut cocos2d_CCDictionary,
    pub m_account_i_dto_user_id_dict: *mut cocos2d_CCDictionary,
    pub m_user_i_dto_account_id_dict: *mut cocos2d_CCDictionary,
    pub m_stored_levels: *mut cocos2d_CCDictionary,
    pub m_page_info: *mut cocos2d_CCDictionary,
    pub m_unk_dict_20: *mut cocos2d_CCDictionary,
    pub m_saved_packs: *mut cocos2d_CCDictionary,
    pub m_saved_gauntlets: *mut cocos2d_CCDictionary,
    pub m_download_objects: *mut cocos2d_CCDictionary,
    pub m_unk_dict_24: *mut cocos2d_CCDictionary,
    pub m_stored_user_info: *mut cocos2d_CCDictionary,
    pub m_friend_requests: *mut cocos2d_CCDictionary,
    pub m_user_messages: *mut cocos2d_CCDictionary,
    pub m_user_replies: *mut cocos2d_CCDictionary,
    pub m_unk_str_1: stdty::String,
    pub m_unk_str_2: stdty::String,
    pub m_leaderboard_state: LeaderboardState,
    pub m_unk_edit_level_layer_on_back: bool,
    pub m_online_list_delegate: *mut OnlineListDelegate,
    pub m_level_download_delegate: *mut LevelDownloadDelegate,
    pub m_level_comment_delegate: *mut LevelCommentDelegate,
    pub m_comment_upload_delegate: *mut CommentUploadDelegate,
    pub m_level_upload_delegate: *mut LevelUploadDelegate,
    pub m_level_update_delegate: *mut LevelUpdateDelegate,
    pub m_leaderboard_manager_delegate: *mut LeaderboardManagerDelegate,
    pub m_level_delete_delegate: *mut LevelDeleteDelegate,
    pub m_user_info_delegate: *mut UserInfoDelegate,
    pub m_level_manager_delegate: *mut LevelManagerDelegate,
    pub m_unk_delegate: *mut core::ffi::c_void,
    pub m_friend_request_delegate: *mut FriendRequestDelegate,
    pub m_message_list_delegate: *mut MessageListDelegate,
    pub m_download_message_delegate: *mut DownloadMessageDelegate,
    pub m_upload_message_delegate: *mut UploadMessageDelegate,
    pub m_gj_reward_delegate: *mut GJRewardDelegate,
    pub m_gj_challenge_delegate: *mut GJChallengeDelegate,
    pub m_gj_daily_level_delegate: *mut GJDailyLevelDelegate,
    pub m_music_download_delegate: *mut MusicDownloadDelegate,
    pub m_unk_download: i32,
    _pad62: [bool; 0x4],
    pub m_unk_str_3: stdty::String,
    pub m_unk_str_4: *mut cocos2d_CCString,
}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct CCRenderTexture {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct TextAlertPopup {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct AppDelegate {
    pub ccsd_0: cocos2d::CCSceneDelegate,
    pub m_running_scene: *mut cocos2d_CCScene,
    pub m_loading_finished: bool,
}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct TableViewDelegate {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct SetupObjectTogglePopup {
    pub m_button_menu: *mut cocos2d_CCMenu,
    pub m_control_connected: i32,
    pub m_alert_protocol: *mut FLAlertLayerProtocol,
    pub m_scene: *mut cocos2d_CCNode,
    pub m_reverse_key_back: bool,
    pub m_color: cocos2d_ccColor3B,
    pub m_main_layer: *mut cocos2d_CCLayer,
    pub m_z_order: i32,
    pub m_no_elasticity: bool,
    pub m_color_2: cocos2d_ccColor3B,
    pub m_button_1: *mut ButtonSprite,
    pub m_button_2: *mut ButtonSprite,
    pub m_scrolling_layer: *mut cocos2d_CCLayerColor,
    pub m_joystick_connected: i32,
    pub m_contains_border: bool,
    pub m_no_action: bool,
}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct CCSet {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct CCMoveCNode {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct GJGameLevel {
    pub m_last_build_save: *mut cocos2d_CCDictionary,
    pub m_level_id: geode_SeedValueRSV,
    pub m_level_name: stdty::String,
    pub m_level_desc: stdty::String,
    pub m_level_string: stdty::String,
    pub m_creator_name: stdty::String,
    pub m_record_string: stdty::String,
    pub m_upload_date: stdty::String,
    pub m_update_date: stdty::String,
    pub m_user_id: geode_SeedValueRSV,
    pub m_account_id: geode_SeedValueRSV,
    pub m_difficulty: GJDifficulty,
    pub m_audio_track: i32,
    pub m_song_id: i32,
    pub m_level_rev: i32,
    pub m_unlisted: bool,
    pub m_object_count: geode_SeedValueRSV,
    pub m_level_index: i32,
    pub m_ratings: i32,
    pub m_ratings_sum: i32,
    pub m_downloads: i32,
    pub m_is_editable: bool,
    pub m_gauntlet_level: bool,
    pub m_gauntlet_level_2: bool,
    pub m_working_time: i32,
    pub m_working_time_2: i32,
    pub m_low_detail_mode: bool,
    pub m_low_detail_mode_toggled: bool,
    pub m_is_verified: geode_SeedValueRS,
    pub m_is_verified_raw: bool,
    pub m_is_uploaded: bool,
    pub m_has_been_modified: bool,
    pub m_level_version: i32,
    pub m_game_version: i32,
    pub m_attempts: geode_SeedValueRSV,
    pub m_jumps: geode_SeedValueRSV,
    pub m_clicks: geode_SeedValueRSV,
    pub m_attempt_time: geode_SeedValueRSV,
    pub m_chk: i32,
    pub m_is_chk_valid: bool,
    pub m_is_completion_legitimate: bool,
    pub m_normal_percent: geode_SeedValueVSR,
    pub m_orb_completion: geode_SeedValueRSV,
    pub m_new_normal_percent_2: geode_SeedValueRSV,
    pub m_practice_percent: i32,
    pub m_likes: i32,
    pub m_dislikes: i32,
    pub m_level_length: i32,
    pub m_featured: i32,
    pub m_is_epic: bool,
    pub m_level_favorited: bool,
    pub m_level_folder: i32,
    pub m_daily_id: geode_SeedValueRSV,
    pub m_demon: geode_SeedValueRSV,
    pub m_demon_difficulty: i32,
    pub m_stars: geode_SeedValueRSV,
    pub m_auto_level: bool,
    pub m_coins: i32,
    pub m_coins_verified: geode_SeedValueRSV,
    pub m_password: geode_SeedValueRS,
    pub m_original_level: geode_SeedValueRSV,
    pub m_two_player_mode: bool,
    pub m_failed_password_attempts: i32,
    pub m_first_coin_verified: geode_SeedValueRSV,
    pub m_second_coin_verified: geode_SeedValueRSV,
    pub m_third_coin_verified: geode_SeedValueRSV,
    pub m_stars_requested: i32,
    pub m_showed_song_warning: bool,
    pub m_star_ratings: i32,
    pub m_star_ratings_sum: i32,
    pub m_max_star_ratings: i32,
    pub m_min_star_ratings: i32,
    pub m_demon_votes: i32,
    pub m_rate_stars: i32,
    pub m_rate_feature: i32,
    pub m_rate_user: stdty::String,
    pub m_dont_save: bool,
    pub m_level_not_downloaded: bool,
    pub m_required_coins: i32,
    pub m_is_unlocked: bool,
    pub m_last_camera_pos: cocos2d_CCPoint,
    pub m_fast_editor_zoom: f32,
    pub m_last_build_tab: i32,
    pub m_last_build_page: i32,
    pub m_last_build_group_id: i32,
    pub m_level_type: GJLevelType,
    pub m_m_id: i32,
    pub m_temp_name: stdty::String,
    pub m_capacity_string: stdty::String,
    pub m_high_objects_enabled: bool,
    pub m_personal_bests: stdty::String,
}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct MultilineBitmapFont {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct CCMenuItem {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct SetupCountTriggerPopup {
    pub m_button_menu: *mut cocos2d_CCMenu,
    pub m_control_connected: i32,
    pub m_alert_protocol: *mut FLAlertLayerProtocol,
    pub m_scene: *mut cocos2d_CCNode,
    pub m_reverse_key_back: bool,
    pub m_color: cocos2d_ccColor3B,
    pub m_main_layer: *mut cocos2d_CCLayer,
    pub m_z_order: i32,
    pub m_no_elasticity: bool,
    pub m_color_2: cocos2d_ccColor3B,
    pub m_button_1: *mut ButtonSprite,
    pub m_button_2: *mut ButtonSprite,
    pub m_scrolling_layer: *mut cocos2d_CCLayerColor,
    pub m_joystick_connected: i32,
    pub m_contains_border: bool,
    pub m_no_action: bool,
}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct CCArray {}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct CCMenuItemToggler {
    pub m_off_button: *mut CCMenuItemSpriteExtra,
    pub m_on_button: *mut CCMenuItemSpriteExtra,
    pub m_toggled: bool,
    pub m_not_clickable: bool,
}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct CheckpointObject {
    pub m_game_object: *mut GameObject,
    pub m_player_1: *mut PlayerCheckpoint,
    pub m_player_2: *mut PlayerCheckpoint,
    pub m_is_dual: bool,
    pub m_is_flipped: bool,
    pub m_camera_pos: cocos2d_CCPoint,
    pub m_unk_104: i32,
    pub m_last_portal: *mut GameObject,
    _pad8: [bool; 0x4],
    pub m_unk_110: f64,
    pub m_current_state_string: stdty::String,
    pub m_objects_state_string: stdty::String,
}

#[repr(C)]
#[derive(Clone, Debug, Hash)]
struct GJRequestCell {
    pub m_unknown: bool,
    pub m_table_view: *mut TableView,
    pub m_index_path: CCIndexPath,
    pub m_unknown_thing: i32,
    pub m_unknown_string: stdty::String,
    pub m_width: f32,
    pub m_height: f32,
    pub m_background_layer: *mut cocos2d_CCLayerColor,
    pub m_main_layer: *mut cocos2d_CCLayer,
}
