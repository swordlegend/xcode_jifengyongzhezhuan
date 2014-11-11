// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: errcode.proto

#ifndef PROTOBUF_errcode_2eproto__INCLUDED
#define PROTOBUF_errcode_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2004000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2004001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_message_reflection.h>
// @@protoc_insertion_point(includes)

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_errcode_2eproto();
void protobuf_AssignDesc_errcode_2eproto();
void protobuf_ShutdownFile_errcode_2eproto();


enum ol_errcode_t {
  olerr_decode = 100001,
  olerr_invalid_req = 100002,
  olerr_invalid_dbrsp = 100003,
  olerr_msg_param = 100004,
  olerr_invalid_msg = 100005,
  olerr_system_busy = 100006,
  olerr_server_not_exist = 100007,
  olerr_multi_login = 110001,
  olerr_role_creating = 110002,
  olerr_no_such_role = 110003,
  olerr_can_transfer_next = 110004,
  olerr_not_enough_level = 110005,
  olerr_not_enough_diamond = 110006,
  olerr_not_enough_coin = 110007,
  olerr_not_enough_exploit = 110008,
  olerr_not_enough_stamina = 110009,
  olerr_buy_times_logic_err = 110010,
  olerr_not_enough_explore_times = 110011,
  olerr_nofound_explore_id = 110012,
  olerr_ppve_times_limit = 110013,
  olerr_not_enough_vip_lv = 110014,
  olerr_not_enough_lv_world_talk = 110015,
  olerr_be_kick_off = 110100,
  olerr_token_id = 110101,
  olerr_need_complete_login_proc = 110102,
  olerr_assert = 110103,
  olerr_invalid_move_item_pos = 120009,
  olerr_nofound_item_id = 120010,
  olerr_exist_item_id = 120011,
  olerr_not_enough_item = 120012,
  olerr_invalid_pos = 120013,
  olerr_exist_pos = 120014,
  olerr_invalid_item_id = 120015,
  olerr_invalid_hole = 120016,
  olerr_not_enough_reset_gam_times = 120017,
  olerr_open_hole_seq_err = 120018,
  olerr_not_enough_pos = 120019,
  olerr_not_fairy_in_pos = 120020,
  olerr_warm_sport_lv_max = 120020,
  olerr_manor_opt_error = 120021,
  olerr_not_clear_manor_cd = 120022,
  olerr_enter_manor_times_max = 120023,
  olerr_old_shop_items_list = 120030,
  olerr_invalid_buy_item_index = 120031,
  olerr_has_buy_item_index = 120032,
  olerr_invalid_sell_item = 120033,
  olerr_not_enough_item_shop = 120034,
  olerr_has_same_attr_in_item = 120040,
  olerr_not_found_reward = 120041,
  olerr_item_cannot_del = 120042,
  olerr_item_cannot_sell = 120043,
  olerr_monster_exist = 120044,
  olerr_not_enough_bag_pos = 120050,
  olerr_not_enough_ss_pos = 120051,
  olerr_not_enough_card_pos = 120052,
  olerr_not_enough_gem_pos = 120053,
  olerr_not_enough_honour = 120060,
  olerr_not_enough_potential_drug = 120061,
  olerr_not_enough_treasure_box = 120062,
  olerr_not_enough_key = 120063,
  olerr_bag_have_not_enough_item = 120064,
  olerr_equpment_not_enough = 120065,
  olerr_not_enough_pvai_times = 121000,
  olerr_not_clear_pvai_cd = 121001,
  olerr_not_enough_pvp_times = 121002,
  olerr_cannot_pvai_self = 121003,
  olerr_not_enough_cdef_times = 121004,
  olerr_cdef_timeout = 121005,
  olerr_start_battle_timeout = 121006,
  olerr_wboss_timeout = 121007,
  olerr_wboss_not_clear_revival_cd = 121008,
  olerr_wboss_this_turn_over = 121009,
  olerr_not_unlock_pve = 121010,
  olerr_wboss_double_limit = 121011,
  olerr_wboss_times_limit = 121012,
  olerr_nofound_spec_map_index = 122000,
  olerr_enter_spec_map_num_max = 122001,
  olerr_instance_not_enough_star = 122002,
  olerr_cpt_all_instance_can_enter = 122003,
  olerr_instance_id_not_found = 122004,
  olerr_btl_times_not_enough = 122005,
  olerr_daily_task_accept = 123000,
  olerr_daily_task_not_accept = 123001,
  olerr_accept_daily_task_timeout = 123002,
  olerr_accept_daily_task_max_star = 123003,
  olerr_finish_daily_task_times_limit = 123004,
  olerr_daily_task_id_invalid = 123005,
  olerr_daily_task_not_finish = 123006,
  olerr_daily_task_finish = 123007,
  olerr_not_enough_active = 123008,
  olerr_no_daily_goal_reward = 123009,
  olerr_daily_task_all_max_star = 123010,
  olerr_today_reward_has_been = 123100,
  olerr_login_reward_not_enough = 123101,
  olerr_get_daily_rewary_time = 123102,
  olerr_get_daily_rewary_limit = 123103,
  olerr_activity_not_finish = 124000,
  olerr_activity_not_found = 124001,
  olerr_activity_reward_revc = 124002,
  olerr_activity_not_start = 124003,
  olerr_lottery_opt_logic_err = 124010,
  olerr_lottery_times_limit = 124011,
  olerr_mail_not_found = 124020,
  olerr_mail_not_found_attach = 124021,
  olerr_player_offline = 125000,
  olerr_incorrect_topup_award_id = 126000,
  olerr_outdated_topup_award_id = 126001,
  olerr_not_topup = 126002,
  olerr_already_got_topup_award = 126003,
  olerr_magic_card_invalid = 127000,
  olerr_magic_card_used = 127001,
  olerr_magic_card_ceiling = 127002,
  olerr_magic_card_only_once = 127003,
  olerr_not_clear_kakao_cd = 128001,
  olerr_get_power_reward_limit = 128002,
  olerr_kakao_friend_offline = 128003,
  olerr_kakao_friend_exist = 128003,
  olerr_kakao_friend_not_exist = 128004,
  olerr_kakao_friend_record_not_find = 128005,
  olerr_kakao_friend_add_limit = 128006,
  olerr_kakao_friend_del_limit = 128007,
  olerr_already_got_award = 126008,
  olerr_kakao_cd_type_not_exist = 126009,
  olerr_duel_times_limit = 129000,
  olerr_dueled_times_limit = 129001,
  olerr_dueled_timeout = 129002,
  olerr_dueled_player_logout = 129003,
  olerr_dueled_player_busy = 129004,
  olerr_dueled_player_on_battle = 129005,
  olerr_duel_level_limit = 129006,
  olerr_dueled_level_limit = 129007,
  olerr_duel_map_limit = 129008,
  olerr_dueled_player_protecting = 129009,
  olerr_mandatory_duel_level_limit = 129010,
  olerr_mandatory_dueled_level_limit = 129011,
  olerr_duel_player_busy = 129012,
  olerr_invalid_raid_id = 130000,
  olerr_cant_get_star_reward = 130001,
  olerr_refresh_times_limit = 130002,
  olerr_fairy_invalid_pos = 131000,
  olerr_fairy_move_pos_invalid = 131001,
  olerr_fairy_quality = 131002,
  olerr_fairy_max_grade = 131003,
  olerr_not_enough_min_grade_fairy = 131004,
  olerr_fairy_bag_full = 131005,
  olerr_fairy_cannot_rebrith = 131006,
  olerr_spec_fairy_id_multi = 131007,
  olerr_fairy_grade_not_enough = 131008,
  olerr_fairy_pos_have_no_fairy = 131009,
  olerr_fairy_lv_not_exceed_user_lv = 131010,
  olerr_fairy_grade_1_not_exceed_lv = 131021,
  olerr_fairy_grade_2_not_exceed_lv = 131022,
  olerr_fairy_grade_3_not_exceed_lv = 131023,
  olerr_fairy_grade_4_not_exceed_lv = 131024,
  olerr_fairy_grade_5_not_exceed_lv = 131025,
  olerr_fairy_grade_6_not_exceed_lv = 131026,
  olerr_fairy_grade_7_not_exceed_lv = 131027,
  olerr_draw_not_enough_diamod = 132000,
  olerr_draw_config_error = 132001,
  olerr_babel_level_exceed = 133000,
  olerr_babel_ticket_not_enough = 133001,
  olerr_shopping_times_exceed = 134000,
  olerr_star_not_enough = 134100,
  olerr_learn_not_attach = 134101,
  olerr_lock_not_attach = 134102,
  olerr_dower_full = 134103,
  olerr_not_uc_vip = 140001,
  olerr_no_uc_topus = 140002,
  olerr_have_got_uc_topus = 140003,
  olerr_max_map = 140004,
  olerr_explore_refresh_times_exceed = 140005,
  olerr_explore_lv_not_enough = 140006,
  olerr_no_facebook_share = 150001,
  olerr_has_join_guild = 160000,
  olerr_join_guild_in_cold = 160001,
  olerr_guild_member_full = 160002,
  olerr_guild_fightcondition_not_meet = 160003,
  olerr_invalid_guild_id = 160004,
  olerr_owner_cannot_quit_guild = 160005,
  olerr_guild_elite_num_limit = 160006,
  olerr_guild_vice_num_limit = 160007,
  olerr_guild_power_not_enough = 160008,
  olerr_guild_is_full = 160009,
  olerr_player_has_enter_otherguild = 160010,
  olerr_player_contribute_not_enough = 160011,
  olerr_guild_no_apply = 160012,
  olerr_guild_set_self = 160013,
  olerr_goddess_times_limit = 160014,
  olerr_wait_accept = 160015,
  olerr_guild_name_repeated = 160016,
  olerr_not_enough_recharge_diamond = 160017,
  olerr_not_enough_times_to_send = 160018,
  olerr_not_enough_guild_member = 160019,
  olerr_not_enough_part_red_packet = 160020,
  olerr_player_not_in_guild = 160021,
  olerr_invalid_activity_time = 160022,
  olerr_invalid_red_packet = 160023,
  olerr_ss_has_top_level = 160024,
  olerr_pvai3_time_limit = 160025
};
bool ol_errcode_t_IsValid(int value);
const ol_errcode_t ol_errcode_t_MIN = olerr_decode;
const ol_errcode_t ol_errcode_t_MAX = olerr_pvai3_time_limit;
const int ol_errcode_t_ARRAYSIZE = ol_errcode_t_MAX + 1;

const ::google::protobuf::EnumDescriptor* ol_errcode_t_descriptor();
inline const ::std::string& ol_errcode_t_Name(ol_errcode_t value) {
  return ::google::protobuf::internal::NameOfEnum(
    ol_errcode_t_descriptor(), value);
}
inline bool ol_errcode_t_Parse(
    const ::std::string& name, ol_errcode_t* value) {
  return ::google::protobuf::internal::ParseNamedEnum<ol_errcode_t>(
    ol_errcode_t_descriptor(), name, value);
}
enum db_errcode_t {
  dberr_succ = 0,
  dberr_dbmem = 201001,
  dberr_dbsys = 201002,
  dberr_dbnet = 201003,
  dberr_no_cmd = 201004,
  dberr_protolen = 201005,
  dberr_range = 201006,
  dberr_setflag = 201007,
  dberr_data = 201008,
  dberr_enum = 201009,
  dberr_sendprotolen = 201010,
  dberr_dbdata = 201011,
  dberr_netsend = 201012,
  dberr_netrecv = 201013,
  dberr_keyexists = 201014,
  dberr_keynotfound = 201015,
  dberr_noupdate = 201016,
  dberr_net_timeout = 201017,
  dberr_flowcontrol = 201018,
  dberr_md5 = 201021,
  dberr_password = 201103,
  dberr_uidexists = 201104,
  dberr_uidnofound = 201105,
  dberr_role_notfound = 210001,
  dberr_role_exists = 210002,
  dberr_crtrole_time_limit = 210003,
  dberr_duplicated_nickname = 210004
};
bool db_errcode_t_IsValid(int value);
const db_errcode_t db_errcode_t_MIN = dberr_succ;
const db_errcode_t db_errcode_t_MAX = dberr_duplicated_nickname;
const int db_errcode_t_ARRAYSIZE = db_errcode_t_MAX + 1;

const ::google::protobuf::EnumDescriptor* db_errcode_t_descriptor();
inline const ::std::string& db_errcode_t_Name(db_errcode_t value) {
  return ::google::protobuf::internal::NameOfEnum(
    db_errcode_t_descriptor(), value);
}
inline bool db_errcode_t_Parse(
    const ::std::string& name, db_errcode_t* value) {
  return ::google::protobuf::internal::ParseNamedEnum<db_errcode_t>(
    db_errcode_t_descriptor(), name, value);
}
enum sw_errcode_t {
  swerr_decode = 300001,
  swerr_invalid_req = 300003,
  swerr_not_enough_res = 300002
};
bool sw_errcode_t_IsValid(int value);
const sw_errcode_t sw_errcode_t_MIN = swerr_decode;
const sw_errcode_t sw_errcode_t_MAX = swerr_invalid_req;
const int sw_errcode_t_ARRAYSIZE = sw_errcode_t_MAX + 1;

const ::google::protobuf::EnumDescriptor* sw_errcode_t_descriptor();
inline const ::std::string& sw_errcode_t_Name(sw_errcode_t value) {
  return ::google::protobuf::internal::NameOfEnum(
    sw_errcode_t_descriptor(), value);
}
inline bool sw_errcode_t_Parse(
    const ::std::string& name, sw_errcode_t* value) {
  return ::google::protobuf::internal::ParseNamedEnum<sw_errcode_t>(
    sw_errcode_t_descriptor(), name, value);
}
enum lg_errcode_t {
  lgerr_decode = 400001,
  lgerr_invalid_req = 400002,
  lgerr_invalid_dbrsp = 400003,
  lgerr_msg_param = 400004,
  lgerr_multi_check_session = 401001,
  lgerr_session_unchecked = 401002,
  lgerr_qurey_role_list_uncomplete = 401003,
  lgerr_player_role_num_limit = 401004,
  lgerr_no_such_role = 401005,
  lgerr_name_has_dirty_word = 401006
};
bool lg_errcode_t_IsValid(int value);
const lg_errcode_t lg_errcode_t_MIN = lgerr_decode;
const lg_errcode_t lg_errcode_t_MAX = lgerr_name_has_dirty_word;
const int lg_errcode_t_ARRAYSIZE = lg_errcode_t_MAX + 1;

const ::google::protobuf::EnumDescriptor* lg_errcode_t_descriptor();
inline const ::std::string& lg_errcode_t_Name(lg_errcode_t value) {
  return ::google::protobuf::internal::NameOfEnum(
    lg_errcode_t_descriptor(), value);
}
inline bool lg_errcode_t_Parse(
    const ::std::string& name, lg_errcode_t* value) {
  return ::google::protobuf::internal::ParseNamedEnum<lg_errcode_t>(
    lg_errcode_t_descriptor(), name, value);
}
enum acc_errcode_t {
  acc_err_base = 500000,
  acc_err_curl_init = 500002,
  acc_err_curl_write_err = 500023,
  acc_err_curl_read_err = 500026,
  acc_err_auth_timeout = 500028,
  acc_err_wrong_json = 500101,
  acc_err_system_err = 501001,
  acc_err_invalid_params = 501002,
  acc_err_invalid_action = 501003,
  acc_err_system_busy = 501004,
  acc_err_invalid_sign = 501006,
  acc_err_req_timeout = 501007,
  acc_err_much_wrong = 501010,
  acc_err_passwd_already_set = 501011,
  acc_err_wrong_old_passwd = 501012,
  acc_err_udid_not_reg = 501013,
  acc_err_check_verify_code_failed = 501014,
  acc_err_check_uid_err = 501015,
  acc_err_check_user_email_failed = 501016,
  acc_err_check_email = 501017,
  acc_err_sys_err = 501018,
  acc_err_email_existed = 501019,
  acc_err_email_bind_err = 501020,
  acc_err_send_err = 501021,
  acc_err_pwd_err = 501103,
  acc_err_not_existed = 501105,
  acc_err_add_openid_err = 501106,
  acc_err_login_err = 501108,
  acc_err_bind_err = 501109,
  acc_err_getthird_err = 501110,
  acc_err_getbind_err = 501111,
  acc_err_verify_err = 501112,
  acc_err_udid_err = 501113,
  acc_err_session_illegal = 504331,
  acc_err_max = 599999
};
bool acc_errcode_t_IsValid(int value);
const acc_errcode_t acc_errcode_t_MIN = acc_err_base;
const acc_errcode_t acc_errcode_t_MAX = acc_err_max;
const int acc_errcode_t_ARRAYSIZE = acc_errcode_t_MAX + 1;

const ::google::protobuf::EnumDescriptor* acc_errcode_t_descriptor();
inline const ::std::string& acc_errcode_t_Name(acc_errcode_t value) {
  return ::google::protobuf::internal::NameOfEnum(
    acc_errcode_t_descriptor(), value);
}
inline bool acc_errcode_t_Parse(
    const ::std::string& name, acc_errcode_t* value) {
  return ::google::protobuf::internal::ParseNamedEnum<acc_errcode_t>(
    acc_errcode_t_descriptor(), name, value);
}
// ===================================================================


// ===================================================================


// ===================================================================


// @@protoc_insertion_point(namespace_scope)

#ifndef SWIG
namespace google {
namespace protobuf {

template <>
inline const EnumDescriptor* GetEnumDescriptor< ol_errcode_t>() {
  return ol_errcode_t_descriptor();
}
template <>
inline const EnumDescriptor* GetEnumDescriptor< db_errcode_t>() {
  return db_errcode_t_descriptor();
}
template <>
inline const EnumDescriptor* GetEnumDescriptor< sw_errcode_t>() {
  return sw_errcode_t_descriptor();
}
template <>
inline const EnumDescriptor* GetEnumDescriptor< lg_errcode_t>() {
  return lg_errcode_t_descriptor();
}
template <>
inline const EnumDescriptor* GetEnumDescriptor< acc_errcode_t>() {
  return acc_errcode_t_descriptor();
}

}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_errcode_2eproto__INCLUDED