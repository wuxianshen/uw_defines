/**************************************************************************

           Copyright(C), 2016-2026, tao.jing All rights reserved

 **************************************************************************
   File   : uw_telemetry_defines.h
   Author : tao.jing
   Date   : 2020/6/12
   Brief  : Telemetry frame from AUV to Deck
**************************************************************************/

#ifndef CCOM_SDK_UW_TELEMETRY_DEFINES_H
#define CCOM_SDK_UW_TELEMETRY_DEFINES_H

#pragma pack(1)

//**********************/
//**     Timestamp    **/
//**********************/
typedef struct uw_timestamp_s_t
{
    uint32_t host_utc_time;     // UTC time in IMX6, unit: s
    uint32_t ins_utc_time;      // UTC time in INS module, unit: s
    uint32_t internal_sec_time; // Internal time, INS module start time, unit: s
}uw_timestamp_t;

//**********************/
//**    Relay State   **/
//**********************/
typedef struct uw_telemetry_relay_state_s_t
{
    uint16_t relay00 : 1;
    uint16_t relay01 : 1;
    uint16_t relay02 : 1;
    uint16_t relay03 : 1;
    uint16_t relay04 : 1;
    uint16_t relay05 : 1;
    uint16_t relay06 : 1;
    uint16_t relay07 : 1;
    uint16_t relay08 : 1;
    uint16_t relay09 : 1;
    uint16_t relay10 : 1;
    uint16_t relay11 : 1;
    uint16_t relay12 : 1;
    uint16_t relay13 : 1;
    uint16_t relay14 : 1;
    uint16_t relay15 : 1;
}uw_telemetry_relay_state_t;

//**********************/
//**  Battery State   **/
//**********************/
typedef struct uw_telemetry_battery_state_s_t
{
    int16_t voltage; // Unit: 0.1V
    int16_t current; // Unit: 0.1A
    int16_t state_of_charge; // Unit: 1%
}uw_telemetry_battery_state_t;

//******************/
//**  INS State   **/
//******************/
typedef struct uw_telemetry_ins_state_s_t
{
    //0-null; 1-in init; 2-finish init; 3-in calibrationA; 4-finish calibrationA;
    //5-in calibrationB; 6-finish calibrationB; 7-navigation working;
    uint8_t ins_state;
    uint8_t ins_error_info;     //100-no error;
    uint8_t imu_state;          //10-imu start; 11-imu normal; 12-imu error
    uint8_t imu_error_info;     //100-no error; 101-data loss; 102-output overflow; 103-no output;
    uint8_t navigation_state;   //100-normal
    uint8_t dvl_state;          //0-invalid; 1-valid;
    uint8_t gps_state;          //0-invalid; 1-valid;
}uw_telemetry_ins_state_t;

//******************/
//**  GPS State   **/
//******************/
typedef struct uw_telemetry_gps_s_t
{
    int32_t longitude;  // Unit: 1E-6 Degree, +:East,  -:West;
    int32_t latitude;   // Unit: 1E-6 Degree, +:North, -:South;
    int32_t height;     // Unit: 0.1m
}uw_telemetry_gps_t;

//******************/
//**  Pose State  **/
//******************/
typedef struct uw_telemetry_pose_s_t
{
    int16_t roll;    // Unit: 0.1 Degree
    int16_t pitch;   // Unit: 0.1 Degree
    int16_t yaw;     // Unit: 0.1 Degree
}uw_telemetry_pose_t;

//*******************/
//**   Vel State   **/
//*******************/
typedef struct uw_telemetry_vel_s_t
{
    int16_t east_vel;    // Unit: 0.1 m/s
    int16_t north_vel;   // Unit: 0.1 m/s
    int16_t up_vel;      // Unit: 0.1 m/s
}uw_telemetry_vel_t;

//*******************/
//**   Vel State   **/
//*******************/
typedef struct uw_telemetry_ang_vel_s_t
{
    int16_t x_ang_vel;    //Unit: 0.1 degree / s
    int16_t y_ang_vel;    //Unit: 0.1 degree / s
    int16_t z_ang_vel;    //Unit: 0.1 degree / s
}uw_telemetry_ang_vel_t;

//******************/
//**   Heaving    **/
//******************/
typedef struct uw_telemetry_heave_s_t
{
    int16_t surging;    // Unit: 0.1 m
    int16_t swaying;   // Unit: 0.1 m
    int16_t heaving;      // Unit: 0.1 m
}uw_telemetry_heave_t;

//************************************************/
//**              Telemetry Frame               **/
//************************************************/
typedef struct uw_telemetry_frame_s_t
{
    uw_timestamp_t               timestamp;
    uw_telemetry_relay_state_t   relay_state;
    uw_telemetry_battery_state_t battery_state;
    uw_telemetry_ins_state_t     ins_state;
    uw_telemetry_gps_t  gps_state;
    uw_telemetry_pose_t pose_state;
    uw_telemetry_vel_t  vel_state;
    uw_telemetry_ang_vel_t ang_vel_state;
}uw_telemetry_frame_t;

#pragma pack()


#endif //CCOM_SDK_UW_TELEMETRY_DEFINES_H
