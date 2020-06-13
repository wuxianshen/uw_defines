/**************************************************************************

           Copyright(C), 2016-2026, tao.jing All rights reserved

 **************************************************************************
   File   : auv_deck_protocol.h
   Author : tao.jing
   Date   : 2020/6/11
   Brief  : 
**************************************************************************/

#ifndef UW_ALL_IN_ONE_AUV_DECK_PROTOCOL_H
#define UW_ALL_IN_ONE_AUV_DECK_PROTOCOL_H

enum packet_type_e
{
    e_general_packet   = 0,
    e_deck_packet      = 1,
    //actuators
    e_propeller_packet = 2,
    e_can_motor_packet = 3,
    e_ejection_packet  = 4,
    //sensors
    e_dam_packet       = 5,
    e_imu_packet       = 6,
    e_gps_packet       = 7,
    e_dvl_packet       = 8,
    e_depthomoter_packet   = 9,
    e_humidometer_packet   = 10,
    //communication device packet
    e_radio_station_packet = 11,
    e_iridium_comm_packet  = 12,
    e_acoustic_comm_packet = 13,
    //battery
    e_battery_packet       = 14,
    //auv model
    e_auv_model_packet      = 15,
    e_auv_model_init_packet = 16,
    e_auv_model_deck_packet = 17,
    e_auv_model_surf_packet = 18,
    e_auv_model_sail_packet = 19,
    e_auv_model_dive_packet = 20,
    //motion param
    e_motion_param_packet   = 21,
    //telemetry param
    e_telemetry_packet      = 22,
    //relay param
    e_relay_packet = 23,
    e_packet_type_num,
};

//e_general_packet
enum general_packet_event_e
{
    e_general_print = 0,
    e_general_exit  = 1,
    e_general_packet_event_num,
};

//e_deck_packet
enum deck_packet_event_e
{
    e_deck_print = 0,
    e_deck_echo  = 1,
    e_deck_packet_event_num,
};

//e_propeller_packet
enum propeller_event_e
{
    e_propeller_power_off = 0,
    e_propeller_power_on  = 1,
    e_propeller_power_query = 2,
    e_propeller_rpm_set   = 3,
    e_propeller_rpm_query = 4,
    e_propeller_packet_event_num,
};

//e_can_motor_packet
enum can_motor_event_e
{
    e_can_motor_power_off = 0,
    e_can_motor_power_on  = 1,
    e_can_motor_init      = 2,
    e_can_motor_halt      = 3,
    e_can_motor_set_ppm   = 4,
    e_can_motor_set_pvm   = 5,
    e_can_motor_set_hmm   = 6,
    e_can_motor_pvm_test  = 7,
    e_can_motor_joint_move = 8,
    //e_can_motor_power_query = 8,
    //e_can_motor_angle_set   = 9,
    //e_can_motor_angle_query = 10,
    e_can_motor_find_positive_limit = 11,
    e_can_motor_find_negative_limit = 12,
    e_can_motor_config_homing = 13,
    e_can_motor_start_homing_positive = 14,
    e_can_motor_start_homing_negative = 15,
    e_can_motor_reciprocating_pn      = 16, //reciprocating between positive and negative (positive first)
    e_can_motor_reset_fault = 17,   //recovery fault by control word
    e_can_motor_digital_output = 18,

    e_can_motor_packet_event_num,
};

//e_ejection_packet
enum ejection_event_e
{
    e_ejection_power_off = 0,
    e_ejection_power_on  = 1,
    e_ejection_power_query = 2,
    e_ejection_packet_event_num,
};

//e_dam_packet
enum dam_event_e
{
    e_dam_power_off = 0,
    e_dam_power_on  = 1,
    e_dam_power_query = 2,
    e_dam_gps_iridium_power_control = 3,
    e_dam_packet_event_num,
};

//e_imu_packet
enum imu_event_e
{
    e_imu_power_off = 0,
    e_imu_power_on  = 1,
    e_imu_power_query = 2,
    e_imu_ins_task_start = 3,
    e_imu_packet_event_num,
};

//e_gps_packet
enum gps_event_e
{
    e_gps_power_off = 0,
    e_gps_power_on  = 1,
    e_gps_power_query = 2,
    e_gps_packet_event_num,
};

//e_dvl_packet
enum dvl_event_e
{
    e_dvl_power_off = 0,
    e_dvl_power_on  = 1,
    e_dvl_power_query = 2,
    e_dvl_packet_event_num,
};

//e_depthomoter_packet
enum depthomoter_event_e
{
    e_depthomoter_power_off = 0,
    e_depthomoter_power_on  = 1,
    e_depthomoter_power_query = 2,
    e_depthomoter_packet_event_num,
};

//e_humidometer_packet
enum humidometer_event_e
{
    e_humidometer_power_off = 0,
    e_humidometer_power_on  = 1,
    e_humidometer_power_query = 2,
    e_humidometer_packet_event_num,
};

//e_radio_station_packet
enum radio_station_event_e
{
    e_radio_station_power_off = 0,
    e_radio_station_power_on  = 1,
    e_radio_comm_power_query = 2,
    e_radio_station_packet_event_num,
};

//e_iridium_comm_packet
enum iridium_comm_event_e
{
    e_iridium_comm_power_off = 0,
    e_iridium_comm_power_on  = 1,
    e_iridium_comm_power_query = 2,
    e_iridium_comm_packet_event_num,
};

//e_acoustic_comm_packet
enum acoustic_comm_event_e
{
    e_acoustic_comm_power_off = 0,
    e_acoustic_comm_power_on  = 1,
    e_acoustic_comm_power_query = 2,
    e_acoustic_comm_packet_event_num,
};

//e_battery_packet
enum battery_event_e
{
    e_battery_remain_query = 0,
    e_propeller_power_module_ctrl = 1,
    e_motor_power_module_ctrl = 2,
    e_battery_event_num,
};

//e_auv_model_packet
enum auv_model_event_e
{
    e_auv_model_switch = 0,
    e_auv_model_query  = 1,
    e_auv_model_event_num,
};

//e_auv_model_init_packet
enum auv_model_deck_event_e
{
    e_auv_model_deck_default = 0,
    e_auv_model_deck_event_num,
};

//e_auv_model_init_packet
enum auv_model_init_event_e
{
    e_auv_model_reinit     = 0,
    e_auv_model_init_query = 1,
    e_auv_model_init_event_num,
};

//e_auv_model_surf_packet
enum auv_model_surf_event_e
{
    e_auv_model_surf_left_turn  = 0,
    e_auv_model_surf_right_turn = 1,
    e_auv_model_surf_event_num,
};

//e_auv_model_sail_packet
enum auv_model_sail_event_e
{
    e_auv_model_sail_null  = 0,
    e_auv_model_sail_event_num,
};

//e_auv_model_dive_packet
enum auv_model_dive_event_e
{
    e_auv_model_dive_null  = 0,
    e_auv_model_dive_event_num,
};

//e_motion_param_packet
enum motion_param_event_e
{
    e_motion_gps_position  = 0,
    e_motion_vel = 1,
    e_motion_acc = 2,
    e_motion_rpy_vel = 3,
    e_motion_rpy = 4,
    e_motion_param_event_num,
};

//e_telemetry_packet
enum telemetry_param_event_e
{
    e_telemetry_start = 0,
    e_telemetry_stop  = 1,
    e_telemetry_data  = 2,
    e_telemetry_relay = 3,
    e_telemetry_param_event_num,
};

//e_relay_packet
enum relay_param_event_e
{
    e_relay_on   = 0,
    e_relay_off  = 1,
    e_relay_param_event_num,
};

#endif //UW_ALL_IN_ONE_AUV_DECK_PROTOCOL_H
