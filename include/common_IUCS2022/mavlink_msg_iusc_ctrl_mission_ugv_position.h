#pragma once
// MESSAGE IUSC_CTRL_MISSION_UGV_POSITION PACKING

#define MAVLINK_MSG_ID_IUSC_CTRL_MISSION_UGV_POSITION 13011


typedef struct __mavlink_iusc_ctrl_mission_ugv_position_t {
 uint64_t time_usec; /*<  时间戳*/
 float UGV0_pos_x; /*<  位置x*/
 float UGV0_pos_y; /*<  位置y*/
 float UGV1_pos_x; /*<  位置x*/
 float UGV1_pos_y; /*<  位置y*/
 float UGV2_pos_x; /*<  位置x*/
 float UGV2_pos_y; /*<  位置y*/
 float UGV3_pos_x; /*<  位置x*/
 float UGV3_pos_y; /*<  位置y*/
 float UGV4_pos_x; /*<  位置x*/
 float UGV4_pos_y; /*<  位置y*/
 float UGV5_pos_x; /*<  位置x*/
 float UGV5_pos_y; /*<  位置y*/
 float UGV6_pos_x; /*<  位置x*/
 float UGV6_pos_y; /*<  位置y*/
 float UGV7_pos_x; /*<  位置x*/
 float UGV7_pos_y; /*<  位置y*/
 float UGV8_pos_x; /*<  位置x*/
 float UGV8_pos_y; /*<  位置y*/
 float UGV9_pos_x; /*<  位置x*/
 float UGV9_pos_y; /*<  位置y*/
} mavlink_iusc_ctrl_mission_ugv_position_t;

#define MAVLINK_MSG_ID_IUSC_CTRL_MISSION_UGV_POSITION_LEN 88
#define MAVLINK_MSG_ID_IUSC_CTRL_MISSION_UGV_POSITION_MIN_LEN 88
#define MAVLINK_MSG_ID_13011_LEN 88
#define MAVLINK_MSG_ID_13011_MIN_LEN 88

#define MAVLINK_MSG_ID_IUSC_CTRL_MISSION_UGV_POSITION_CRC 61
#define MAVLINK_MSG_ID_13011_CRC 61



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_IUSC_CTRL_MISSION_UGV_POSITION { \
    13011, \
    "IUSC_CTRL_MISSION_UGV_POSITION", \
    21, \
    {  { "time_usec", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_iusc_ctrl_mission_ugv_position_t, time_usec) }, \
         { "UGV0_pos_x", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_iusc_ctrl_mission_ugv_position_t, UGV0_pos_x) }, \
         { "UGV0_pos_y", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_iusc_ctrl_mission_ugv_position_t, UGV0_pos_y) }, \
         { "UGV1_pos_x", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_iusc_ctrl_mission_ugv_position_t, UGV1_pos_x) }, \
         { "UGV1_pos_y", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_iusc_ctrl_mission_ugv_position_t, UGV1_pos_y) }, \
         { "UGV2_pos_x", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_iusc_ctrl_mission_ugv_position_t, UGV2_pos_x) }, \
         { "UGV2_pos_y", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_iusc_ctrl_mission_ugv_position_t, UGV2_pos_y) }, \
         { "UGV3_pos_x", NULL, MAVLINK_TYPE_FLOAT, 0, 32, offsetof(mavlink_iusc_ctrl_mission_ugv_position_t, UGV3_pos_x) }, \
         { "UGV3_pos_y", NULL, MAVLINK_TYPE_FLOAT, 0, 36, offsetof(mavlink_iusc_ctrl_mission_ugv_position_t, UGV3_pos_y) }, \
         { "UGV4_pos_x", NULL, MAVLINK_TYPE_FLOAT, 0, 40, offsetof(mavlink_iusc_ctrl_mission_ugv_position_t, UGV4_pos_x) }, \
         { "UGV4_pos_y", NULL, MAVLINK_TYPE_FLOAT, 0, 44, offsetof(mavlink_iusc_ctrl_mission_ugv_position_t, UGV4_pos_y) }, \
         { "UGV5_pos_x", NULL, MAVLINK_TYPE_FLOAT, 0, 48, offsetof(mavlink_iusc_ctrl_mission_ugv_position_t, UGV5_pos_x) }, \
         { "UGV5_pos_y", NULL, MAVLINK_TYPE_FLOAT, 0, 52, offsetof(mavlink_iusc_ctrl_mission_ugv_position_t, UGV5_pos_y) }, \
         { "UGV6_pos_x", NULL, MAVLINK_TYPE_FLOAT, 0, 56, offsetof(mavlink_iusc_ctrl_mission_ugv_position_t, UGV6_pos_x) }, \
         { "UGV6_pos_y", NULL, MAVLINK_TYPE_FLOAT, 0, 60, offsetof(mavlink_iusc_ctrl_mission_ugv_position_t, UGV6_pos_y) }, \
         { "UGV7_pos_x", NULL, MAVLINK_TYPE_FLOAT, 0, 64, offsetof(mavlink_iusc_ctrl_mission_ugv_position_t, UGV7_pos_x) }, \
         { "UGV7_pos_y", NULL, MAVLINK_TYPE_FLOAT, 0, 68, offsetof(mavlink_iusc_ctrl_mission_ugv_position_t, UGV7_pos_y) }, \
         { "UGV8_pos_x", NULL, MAVLINK_TYPE_FLOAT, 0, 72, offsetof(mavlink_iusc_ctrl_mission_ugv_position_t, UGV8_pos_x) }, \
         { "UGV8_pos_y", NULL, MAVLINK_TYPE_FLOAT, 0, 76, offsetof(mavlink_iusc_ctrl_mission_ugv_position_t, UGV8_pos_y) }, \
         { "UGV9_pos_x", NULL, MAVLINK_TYPE_FLOAT, 0, 80, offsetof(mavlink_iusc_ctrl_mission_ugv_position_t, UGV9_pos_x) }, \
         { "UGV9_pos_y", NULL, MAVLINK_TYPE_FLOAT, 0, 84, offsetof(mavlink_iusc_ctrl_mission_ugv_position_t, UGV9_pos_y) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_IUSC_CTRL_MISSION_UGV_POSITION { \
    "IUSC_CTRL_MISSION_UGV_POSITION", \
    21, \
    {  { "time_usec", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_iusc_ctrl_mission_ugv_position_t, time_usec) }, \
         { "UGV0_pos_x", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_iusc_ctrl_mission_ugv_position_t, UGV0_pos_x) }, \
         { "UGV0_pos_y", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_iusc_ctrl_mission_ugv_position_t, UGV0_pos_y) }, \
         { "UGV1_pos_x", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_iusc_ctrl_mission_ugv_position_t, UGV1_pos_x) }, \
         { "UGV1_pos_y", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_iusc_ctrl_mission_ugv_position_t, UGV1_pos_y) }, \
         { "UGV2_pos_x", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_iusc_ctrl_mission_ugv_position_t, UGV2_pos_x) }, \
         { "UGV2_pos_y", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_iusc_ctrl_mission_ugv_position_t, UGV2_pos_y) }, \
         { "UGV3_pos_x", NULL, MAVLINK_TYPE_FLOAT, 0, 32, offsetof(mavlink_iusc_ctrl_mission_ugv_position_t, UGV3_pos_x) }, \
         { "UGV3_pos_y", NULL, MAVLINK_TYPE_FLOAT, 0, 36, offsetof(mavlink_iusc_ctrl_mission_ugv_position_t, UGV3_pos_y) }, \
         { "UGV4_pos_x", NULL, MAVLINK_TYPE_FLOAT, 0, 40, offsetof(mavlink_iusc_ctrl_mission_ugv_position_t, UGV4_pos_x) }, \
         { "UGV4_pos_y", NULL, MAVLINK_TYPE_FLOAT, 0, 44, offsetof(mavlink_iusc_ctrl_mission_ugv_position_t, UGV4_pos_y) }, \
         { "UGV5_pos_x", NULL, MAVLINK_TYPE_FLOAT, 0, 48, offsetof(mavlink_iusc_ctrl_mission_ugv_position_t, UGV5_pos_x) }, \
         { "UGV5_pos_y", NULL, MAVLINK_TYPE_FLOAT, 0, 52, offsetof(mavlink_iusc_ctrl_mission_ugv_position_t, UGV5_pos_y) }, \
         { "UGV6_pos_x", NULL, MAVLINK_TYPE_FLOAT, 0, 56, offsetof(mavlink_iusc_ctrl_mission_ugv_position_t, UGV6_pos_x) }, \
         { "UGV6_pos_y", NULL, MAVLINK_TYPE_FLOAT, 0, 60, offsetof(mavlink_iusc_ctrl_mission_ugv_position_t, UGV6_pos_y) }, \
         { "UGV7_pos_x", NULL, MAVLINK_TYPE_FLOAT, 0, 64, offsetof(mavlink_iusc_ctrl_mission_ugv_position_t, UGV7_pos_x) }, \
         { "UGV7_pos_y", NULL, MAVLINK_TYPE_FLOAT, 0, 68, offsetof(mavlink_iusc_ctrl_mission_ugv_position_t, UGV7_pos_y) }, \
         { "UGV8_pos_x", NULL, MAVLINK_TYPE_FLOAT, 0, 72, offsetof(mavlink_iusc_ctrl_mission_ugv_position_t, UGV8_pos_x) }, \
         { "UGV8_pos_y", NULL, MAVLINK_TYPE_FLOAT, 0, 76, offsetof(mavlink_iusc_ctrl_mission_ugv_position_t, UGV8_pos_y) }, \
         { "UGV9_pos_x", NULL, MAVLINK_TYPE_FLOAT, 0, 80, offsetof(mavlink_iusc_ctrl_mission_ugv_position_t, UGV9_pos_x) }, \
         { "UGV9_pos_y", NULL, MAVLINK_TYPE_FLOAT, 0, 84, offsetof(mavlink_iusc_ctrl_mission_ugv_position_t, UGV9_pos_y) }, \
         } \
}
#endif

/**
 * @brief Pack a iusc_ctrl_mission_ugv_position message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_usec  时间戳
 * @param UGV0_pos_x  位置x
 * @param UGV0_pos_y  位置y
 * @param UGV1_pos_x  位置x
 * @param UGV1_pos_y  位置y
 * @param UGV2_pos_x  位置x
 * @param UGV2_pos_y  位置y
 * @param UGV3_pos_x  位置x
 * @param UGV3_pos_y  位置y
 * @param UGV4_pos_x  位置x
 * @param UGV4_pos_y  位置y
 * @param UGV5_pos_x  位置x
 * @param UGV5_pos_y  位置y
 * @param UGV6_pos_x  位置x
 * @param UGV6_pos_y  位置y
 * @param UGV7_pos_x  位置x
 * @param UGV7_pos_y  位置y
 * @param UGV8_pos_x  位置x
 * @param UGV8_pos_y  位置y
 * @param UGV9_pos_x  位置x
 * @param UGV9_pos_y  位置y
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_iusc_ctrl_mission_ugv_position_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint64_t time_usec, float UGV0_pos_x, float UGV0_pos_y, float UGV1_pos_x, float UGV1_pos_y, float UGV2_pos_x, float UGV2_pos_y, float UGV3_pos_x, float UGV3_pos_y, float UGV4_pos_x, float UGV4_pos_y, float UGV5_pos_x, float UGV5_pos_y, float UGV6_pos_x, float UGV6_pos_y, float UGV7_pos_x, float UGV7_pos_y, float UGV8_pos_x, float UGV8_pos_y, float UGV9_pos_x, float UGV9_pos_y)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_IUSC_CTRL_MISSION_UGV_POSITION_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_float(buf, 8, UGV0_pos_x);
    _mav_put_float(buf, 12, UGV0_pos_y);
    _mav_put_float(buf, 16, UGV1_pos_x);
    _mav_put_float(buf, 20, UGV1_pos_y);
    _mav_put_float(buf, 24, UGV2_pos_x);
    _mav_put_float(buf, 28, UGV2_pos_y);
    _mav_put_float(buf, 32, UGV3_pos_x);
    _mav_put_float(buf, 36, UGV3_pos_y);
    _mav_put_float(buf, 40, UGV4_pos_x);
    _mav_put_float(buf, 44, UGV4_pos_y);
    _mav_put_float(buf, 48, UGV5_pos_x);
    _mav_put_float(buf, 52, UGV5_pos_y);
    _mav_put_float(buf, 56, UGV6_pos_x);
    _mav_put_float(buf, 60, UGV6_pos_y);
    _mav_put_float(buf, 64, UGV7_pos_x);
    _mav_put_float(buf, 68, UGV7_pos_y);
    _mav_put_float(buf, 72, UGV8_pos_x);
    _mav_put_float(buf, 76, UGV8_pos_y);
    _mav_put_float(buf, 80, UGV9_pos_x);
    _mav_put_float(buf, 84, UGV9_pos_y);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_UGV_POSITION_LEN);
#else
    mavlink_iusc_ctrl_mission_ugv_position_t packet;
    packet.time_usec = time_usec;
    packet.UGV0_pos_x = UGV0_pos_x;
    packet.UGV0_pos_y = UGV0_pos_y;
    packet.UGV1_pos_x = UGV1_pos_x;
    packet.UGV1_pos_y = UGV1_pos_y;
    packet.UGV2_pos_x = UGV2_pos_x;
    packet.UGV2_pos_y = UGV2_pos_y;
    packet.UGV3_pos_x = UGV3_pos_x;
    packet.UGV3_pos_y = UGV3_pos_y;
    packet.UGV4_pos_x = UGV4_pos_x;
    packet.UGV4_pos_y = UGV4_pos_y;
    packet.UGV5_pos_x = UGV5_pos_x;
    packet.UGV5_pos_y = UGV5_pos_y;
    packet.UGV6_pos_x = UGV6_pos_x;
    packet.UGV6_pos_y = UGV6_pos_y;
    packet.UGV7_pos_x = UGV7_pos_x;
    packet.UGV7_pos_y = UGV7_pos_y;
    packet.UGV8_pos_x = UGV8_pos_x;
    packet.UGV8_pos_y = UGV8_pos_y;
    packet.UGV9_pos_x = UGV9_pos_x;
    packet.UGV9_pos_y = UGV9_pos_y;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_UGV_POSITION_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_IUSC_CTRL_MISSION_UGV_POSITION;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_UGV_POSITION_MIN_LEN, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_UGV_POSITION_LEN, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_UGV_POSITION_CRC);
}

/**
 * @brief Pack a iusc_ctrl_mission_ugv_position message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param time_usec  时间戳
 * @param UGV0_pos_x  位置x
 * @param UGV0_pos_y  位置y
 * @param UGV1_pos_x  位置x
 * @param UGV1_pos_y  位置y
 * @param UGV2_pos_x  位置x
 * @param UGV2_pos_y  位置y
 * @param UGV3_pos_x  位置x
 * @param UGV3_pos_y  位置y
 * @param UGV4_pos_x  位置x
 * @param UGV4_pos_y  位置y
 * @param UGV5_pos_x  位置x
 * @param UGV5_pos_y  位置y
 * @param UGV6_pos_x  位置x
 * @param UGV6_pos_y  位置y
 * @param UGV7_pos_x  位置x
 * @param UGV7_pos_y  位置y
 * @param UGV8_pos_x  位置x
 * @param UGV8_pos_y  位置y
 * @param UGV9_pos_x  位置x
 * @param UGV9_pos_y  位置y
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_iusc_ctrl_mission_ugv_position_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint64_t time_usec,float UGV0_pos_x,float UGV0_pos_y,float UGV1_pos_x,float UGV1_pos_y,float UGV2_pos_x,float UGV2_pos_y,float UGV3_pos_x,float UGV3_pos_y,float UGV4_pos_x,float UGV4_pos_y,float UGV5_pos_x,float UGV5_pos_y,float UGV6_pos_x,float UGV6_pos_y,float UGV7_pos_x,float UGV7_pos_y,float UGV8_pos_x,float UGV8_pos_y,float UGV9_pos_x,float UGV9_pos_y)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_IUSC_CTRL_MISSION_UGV_POSITION_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_float(buf, 8, UGV0_pos_x);
    _mav_put_float(buf, 12, UGV0_pos_y);
    _mav_put_float(buf, 16, UGV1_pos_x);
    _mav_put_float(buf, 20, UGV1_pos_y);
    _mav_put_float(buf, 24, UGV2_pos_x);
    _mav_put_float(buf, 28, UGV2_pos_y);
    _mav_put_float(buf, 32, UGV3_pos_x);
    _mav_put_float(buf, 36, UGV3_pos_y);
    _mav_put_float(buf, 40, UGV4_pos_x);
    _mav_put_float(buf, 44, UGV4_pos_y);
    _mav_put_float(buf, 48, UGV5_pos_x);
    _mav_put_float(buf, 52, UGV5_pos_y);
    _mav_put_float(buf, 56, UGV6_pos_x);
    _mav_put_float(buf, 60, UGV6_pos_y);
    _mav_put_float(buf, 64, UGV7_pos_x);
    _mav_put_float(buf, 68, UGV7_pos_y);
    _mav_put_float(buf, 72, UGV8_pos_x);
    _mav_put_float(buf, 76, UGV8_pos_y);
    _mav_put_float(buf, 80, UGV9_pos_x);
    _mav_put_float(buf, 84, UGV9_pos_y);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_UGV_POSITION_LEN);
#else
    mavlink_iusc_ctrl_mission_ugv_position_t packet;
    packet.time_usec = time_usec;
    packet.UGV0_pos_x = UGV0_pos_x;
    packet.UGV0_pos_y = UGV0_pos_y;
    packet.UGV1_pos_x = UGV1_pos_x;
    packet.UGV1_pos_y = UGV1_pos_y;
    packet.UGV2_pos_x = UGV2_pos_x;
    packet.UGV2_pos_y = UGV2_pos_y;
    packet.UGV3_pos_x = UGV3_pos_x;
    packet.UGV3_pos_y = UGV3_pos_y;
    packet.UGV4_pos_x = UGV4_pos_x;
    packet.UGV4_pos_y = UGV4_pos_y;
    packet.UGV5_pos_x = UGV5_pos_x;
    packet.UGV5_pos_y = UGV5_pos_y;
    packet.UGV6_pos_x = UGV6_pos_x;
    packet.UGV6_pos_y = UGV6_pos_y;
    packet.UGV7_pos_x = UGV7_pos_x;
    packet.UGV7_pos_y = UGV7_pos_y;
    packet.UGV8_pos_x = UGV8_pos_x;
    packet.UGV8_pos_y = UGV8_pos_y;
    packet.UGV9_pos_x = UGV9_pos_x;
    packet.UGV9_pos_y = UGV9_pos_y;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_UGV_POSITION_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_IUSC_CTRL_MISSION_UGV_POSITION;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_UGV_POSITION_MIN_LEN, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_UGV_POSITION_LEN, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_UGV_POSITION_CRC);
}

/**
 * @brief Encode a iusc_ctrl_mission_ugv_position struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param iusc_ctrl_mission_ugv_position C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_iusc_ctrl_mission_ugv_position_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_iusc_ctrl_mission_ugv_position_t* iusc_ctrl_mission_ugv_position)
{
    return mavlink_msg_iusc_ctrl_mission_ugv_position_pack(system_id, component_id, msg, iusc_ctrl_mission_ugv_position->time_usec, iusc_ctrl_mission_ugv_position->UGV0_pos_x, iusc_ctrl_mission_ugv_position->UGV0_pos_y, iusc_ctrl_mission_ugv_position->UGV1_pos_x, iusc_ctrl_mission_ugv_position->UGV1_pos_y, iusc_ctrl_mission_ugv_position->UGV2_pos_x, iusc_ctrl_mission_ugv_position->UGV2_pos_y, iusc_ctrl_mission_ugv_position->UGV3_pos_x, iusc_ctrl_mission_ugv_position->UGV3_pos_y, iusc_ctrl_mission_ugv_position->UGV4_pos_x, iusc_ctrl_mission_ugv_position->UGV4_pos_y, iusc_ctrl_mission_ugv_position->UGV5_pos_x, iusc_ctrl_mission_ugv_position->UGV5_pos_y, iusc_ctrl_mission_ugv_position->UGV6_pos_x, iusc_ctrl_mission_ugv_position->UGV6_pos_y, iusc_ctrl_mission_ugv_position->UGV7_pos_x, iusc_ctrl_mission_ugv_position->UGV7_pos_y, iusc_ctrl_mission_ugv_position->UGV8_pos_x, iusc_ctrl_mission_ugv_position->UGV8_pos_y, iusc_ctrl_mission_ugv_position->UGV9_pos_x, iusc_ctrl_mission_ugv_position->UGV9_pos_y);
}

/**
 * @brief Encode a iusc_ctrl_mission_ugv_position struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param iusc_ctrl_mission_ugv_position C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_iusc_ctrl_mission_ugv_position_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_iusc_ctrl_mission_ugv_position_t* iusc_ctrl_mission_ugv_position)
{
    return mavlink_msg_iusc_ctrl_mission_ugv_position_pack_chan(system_id, component_id, chan, msg, iusc_ctrl_mission_ugv_position->time_usec, iusc_ctrl_mission_ugv_position->UGV0_pos_x, iusc_ctrl_mission_ugv_position->UGV0_pos_y, iusc_ctrl_mission_ugv_position->UGV1_pos_x, iusc_ctrl_mission_ugv_position->UGV1_pos_y, iusc_ctrl_mission_ugv_position->UGV2_pos_x, iusc_ctrl_mission_ugv_position->UGV2_pos_y, iusc_ctrl_mission_ugv_position->UGV3_pos_x, iusc_ctrl_mission_ugv_position->UGV3_pos_y, iusc_ctrl_mission_ugv_position->UGV4_pos_x, iusc_ctrl_mission_ugv_position->UGV4_pos_y, iusc_ctrl_mission_ugv_position->UGV5_pos_x, iusc_ctrl_mission_ugv_position->UGV5_pos_y, iusc_ctrl_mission_ugv_position->UGV6_pos_x, iusc_ctrl_mission_ugv_position->UGV6_pos_y, iusc_ctrl_mission_ugv_position->UGV7_pos_x, iusc_ctrl_mission_ugv_position->UGV7_pos_y, iusc_ctrl_mission_ugv_position->UGV8_pos_x, iusc_ctrl_mission_ugv_position->UGV8_pos_y, iusc_ctrl_mission_ugv_position->UGV9_pos_x, iusc_ctrl_mission_ugv_position->UGV9_pos_y);
}

/**
 * @brief Send a iusc_ctrl_mission_ugv_position message
 * @param chan MAVLink channel to send the message
 *
 * @param time_usec  时间戳
 * @param UGV0_pos_x  位置x
 * @param UGV0_pos_y  位置y
 * @param UGV1_pos_x  位置x
 * @param UGV1_pos_y  位置y
 * @param UGV2_pos_x  位置x
 * @param UGV2_pos_y  位置y
 * @param UGV3_pos_x  位置x
 * @param UGV3_pos_y  位置y
 * @param UGV4_pos_x  位置x
 * @param UGV4_pos_y  位置y
 * @param UGV5_pos_x  位置x
 * @param UGV5_pos_y  位置y
 * @param UGV6_pos_x  位置x
 * @param UGV6_pos_y  位置y
 * @param UGV7_pos_x  位置x
 * @param UGV7_pos_y  位置y
 * @param UGV8_pos_x  位置x
 * @param UGV8_pos_y  位置y
 * @param UGV9_pos_x  位置x
 * @param UGV9_pos_y  位置y
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_iusc_ctrl_mission_ugv_position_send(mavlink_channel_t chan, uint64_t time_usec, float UGV0_pos_x, float UGV0_pos_y, float UGV1_pos_x, float UGV1_pos_y, float UGV2_pos_x, float UGV2_pos_y, float UGV3_pos_x, float UGV3_pos_y, float UGV4_pos_x, float UGV4_pos_y, float UGV5_pos_x, float UGV5_pos_y, float UGV6_pos_x, float UGV6_pos_y, float UGV7_pos_x, float UGV7_pos_y, float UGV8_pos_x, float UGV8_pos_y, float UGV9_pos_x, float UGV9_pos_y)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_IUSC_CTRL_MISSION_UGV_POSITION_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_float(buf, 8, UGV0_pos_x);
    _mav_put_float(buf, 12, UGV0_pos_y);
    _mav_put_float(buf, 16, UGV1_pos_x);
    _mav_put_float(buf, 20, UGV1_pos_y);
    _mav_put_float(buf, 24, UGV2_pos_x);
    _mav_put_float(buf, 28, UGV2_pos_y);
    _mav_put_float(buf, 32, UGV3_pos_x);
    _mav_put_float(buf, 36, UGV3_pos_y);
    _mav_put_float(buf, 40, UGV4_pos_x);
    _mav_put_float(buf, 44, UGV4_pos_y);
    _mav_put_float(buf, 48, UGV5_pos_x);
    _mav_put_float(buf, 52, UGV5_pos_y);
    _mav_put_float(buf, 56, UGV6_pos_x);
    _mav_put_float(buf, 60, UGV6_pos_y);
    _mav_put_float(buf, 64, UGV7_pos_x);
    _mav_put_float(buf, 68, UGV7_pos_y);
    _mav_put_float(buf, 72, UGV8_pos_x);
    _mav_put_float(buf, 76, UGV8_pos_y);
    _mav_put_float(buf, 80, UGV9_pos_x);
    _mav_put_float(buf, 84, UGV9_pos_y);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_UGV_POSITION, buf, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_UGV_POSITION_MIN_LEN, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_UGV_POSITION_LEN, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_UGV_POSITION_CRC);
#else
    mavlink_iusc_ctrl_mission_ugv_position_t packet;
    packet.time_usec = time_usec;
    packet.UGV0_pos_x = UGV0_pos_x;
    packet.UGV0_pos_y = UGV0_pos_y;
    packet.UGV1_pos_x = UGV1_pos_x;
    packet.UGV1_pos_y = UGV1_pos_y;
    packet.UGV2_pos_x = UGV2_pos_x;
    packet.UGV2_pos_y = UGV2_pos_y;
    packet.UGV3_pos_x = UGV3_pos_x;
    packet.UGV3_pos_y = UGV3_pos_y;
    packet.UGV4_pos_x = UGV4_pos_x;
    packet.UGV4_pos_y = UGV4_pos_y;
    packet.UGV5_pos_x = UGV5_pos_x;
    packet.UGV5_pos_y = UGV5_pos_y;
    packet.UGV6_pos_x = UGV6_pos_x;
    packet.UGV6_pos_y = UGV6_pos_y;
    packet.UGV7_pos_x = UGV7_pos_x;
    packet.UGV7_pos_y = UGV7_pos_y;
    packet.UGV8_pos_x = UGV8_pos_x;
    packet.UGV8_pos_y = UGV8_pos_y;
    packet.UGV9_pos_x = UGV9_pos_x;
    packet.UGV9_pos_y = UGV9_pos_y;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_UGV_POSITION, (const char *)&packet, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_UGV_POSITION_MIN_LEN, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_UGV_POSITION_LEN, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_UGV_POSITION_CRC);
#endif
}

/**
 * @brief Send a iusc_ctrl_mission_ugv_position message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_iusc_ctrl_mission_ugv_position_send_struct(mavlink_channel_t chan, const mavlink_iusc_ctrl_mission_ugv_position_t* iusc_ctrl_mission_ugv_position)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_iusc_ctrl_mission_ugv_position_send(chan, iusc_ctrl_mission_ugv_position->time_usec, iusc_ctrl_mission_ugv_position->UGV0_pos_x, iusc_ctrl_mission_ugv_position->UGV0_pos_y, iusc_ctrl_mission_ugv_position->UGV1_pos_x, iusc_ctrl_mission_ugv_position->UGV1_pos_y, iusc_ctrl_mission_ugv_position->UGV2_pos_x, iusc_ctrl_mission_ugv_position->UGV2_pos_y, iusc_ctrl_mission_ugv_position->UGV3_pos_x, iusc_ctrl_mission_ugv_position->UGV3_pos_y, iusc_ctrl_mission_ugv_position->UGV4_pos_x, iusc_ctrl_mission_ugv_position->UGV4_pos_y, iusc_ctrl_mission_ugv_position->UGV5_pos_x, iusc_ctrl_mission_ugv_position->UGV5_pos_y, iusc_ctrl_mission_ugv_position->UGV6_pos_x, iusc_ctrl_mission_ugv_position->UGV6_pos_y, iusc_ctrl_mission_ugv_position->UGV7_pos_x, iusc_ctrl_mission_ugv_position->UGV7_pos_y, iusc_ctrl_mission_ugv_position->UGV8_pos_x, iusc_ctrl_mission_ugv_position->UGV8_pos_y, iusc_ctrl_mission_ugv_position->UGV9_pos_x, iusc_ctrl_mission_ugv_position->UGV9_pos_y);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_UGV_POSITION, (const char *)iusc_ctrl_mission_ugv_position, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_UGV_POSITION_MIN_LEN, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_UGV_POSITION_LEN, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_UGV_POSITION_CRC);
#endif
}

#if MAVLINK_MSG_ID_IUSC_CTRL_MISSION_UGV_POSITION_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_iusc_ctrl_mission_ugv_position_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t time_usec, float UGV0_pos_x, float UGV0_pos_y, float UGV1_pos_x, float UGV1_pos_y, float UGV2_pos_x, float UGV2_pos_y, float UGV3_pos_x, float UGV3_pos_y, float UGV4_pos_x, float UGV4_pos_y, float UGV5_pos_x, float UGV5_pos_y, float UGV6_pos_x, float UGV6_pos_y, float UGV7_pos_x, float UGV7_pos_y, float UGV8_pos_x, float UGV8_pos_y, float UGV9_pos_x, float UGV9_pos_y)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_float(buf, 8, UGV0_pos_x);
    _mav_put_float(buf, 12, UGV0_pos_y);
    _mav_put_float(buf, 16, UGV1_pos_x);
    _mav_put_float(buf, 20, UGV1_pos_y);
    _mav_put_float(buf, 24, UGV2_pos_x);
    _mav_put_float(buf, 28, UGV2_pos_y);
    _mav_put_float(buf, 32, UGV3_pos_x);
    _mav_put_float(buf, 36, UGV3_pos_y);
    _mav_put_float(buf, 40, UGV4_pos_x);
    _mav_put_float(buf, 44, UGV4_pos_y);
    _mav_put_float(buf, 48, UGV5_pos_x);
    _mav_put_float(buf, 52, UGV5_pos_y);
    _mav_put_float(buf, 56, UGV6_pos_x);
    _mav_put_float(buf, 60, UGV6_pos_y);
    _mav_put_float(buf, 64, UGV7_pos_x);
    _mav_put_float(buf, 68, UGV7_pos_y);
    _mav_put_float(buf, 72, UGV8_pos_x);
    _mav_put_float(buf, 76, UGV8_pos_y);
    _mav_put_float(buf, 80, UGV9_pos_x);
    _mav_put_float(buf, 84, UGV9_pos_y);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_UGV_POSITION, buf, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_UGV_POSITION_MIN_LEN, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_UGV_POSITION_LEN, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_UGV_POSITION_CRC);
#else
    mavlink_iusc_ctrl_mission_ugv_position_t *packet = (mavlink_iusc_ctrl_mission_ugv_position_t *)msgbuf;
    packet->time_usec = time_usec;
    packet->UGV0_pos_x = UGV0_pos_x;
    packet->UGV0_pos_y = UGV0_pos_y;
    packet->UGV1_pos_x = UGV1_pos_x;
    packet->UGV1_pos_y = UGV1_pos_y;
    packet->UGV2_pos_x = UGV2_pos_x;
    packet->UGV2_pos_y = UGV2_pos_y;
    packet->UGV3_pos_x = UGV3_pos_x;
    packet->UGV3_pos_y = UGV3_pos_y;
    packet->UGV4_pos_x = UGV4_pos_x;
    packet->UGV4_pos_y = UGV4_pos_y;
    packet->UGV5_pos_x = UGV5_pos_x;
    packet->UGV5_pos_y = UGV5_pos_y;
    packet->UGV6_pos_x = UGV6_pos_x;
    packet->UGV6_pos_y = UGV6_pos_y;
    packet->UGV7_pos_x = UGV7_pos_x;
    packet->UGV7_pos_y = UGV7_pos_y;
    packet->UGV8_pos_x = UGV8_pos_x;
    packet->UGV8_pos_y = UGV8_pos_y;
    packet->UGV9_pos_x = UGV9_pos_x;
    packet->UGV9_pos_y = UGV9_pos_y;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_UGV_POSITION, (const char *)packet, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_UGV_POSITION_MIN_LEN, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_UGV_POSITION_LEN, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_UGV_POSITION_CRC);
#endif
}
#endif

#endif

// MESSAGE IUSC_CTRL_MISSION_UGV_POSITION UNPACKING


/**
 * @brief Get field time_usec from iusc_ctrl_mission_ugv_position message
 *
 * @return  时间戳
 */
static inline uint64_t mavlink_msg_iusc_ctrl_mission_ugv_position_get_time_usec(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field UGV0_pos_x from iusc_ctrl_mission_ugv_position message
 *
 * @return  位置x
 */
static inline float mavlink_msg_iusc_ctrl_mission_ugv_position_get_UGV0_pos_x(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field UGV0_pos_y from iusc_ctrl_mission_ugv_position message
 *
 * @return  位置y
 */
static inline float mavlink_msg_iusc_ctrl_mission_ugv_position_get_UGV0_pos_y(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Get field UGV1_pos_x from iusc_ctrl_mission_ugv_position message
 *
 * @return  位置x
 */
static inline float mavlink_msg_iusc_ctrl_mission_ugv_position_get_UGV1_pos_x(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  16);
}

/**
 * @brief Get field UGV1_pos_y from iusc_ctrl_mission_ugv_position message
 *
 * @return  位置y
 */
static inline float mavlink_msg_iusc_ctrl_mission_ugv_position_get_UGV1_pos_y(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  20);
}

/**
 * @brief Get field UGV2_pos_x from iusc_ctrl_mission_ugv_position message
 *
 * @return  位置x
 */
static inline float mavlink_msg_iusc_ctrl_mission_ugv_position_get_UGV2_pos_x(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  24);
}

/**
 * @brief Get field UGV2_pos_y from iusc_ctrl_mission_ugv_position message
 *
 * @return  位置y
 */
static inline float mavlink_msg_iusc_ctrl_mission_ugv_position_get_UGV2_pos_y(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  28);
}

/**
 * @brief Get field UGV3_pos_x from iusc_ctrl_mission_ugv_position message
 *
 * @return  位置x
 */
static inline float mavlink_msg_iusc_ctrl_mission_ugv_position_get_UGV3_pos_x(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  32);
}

/**
 * @brief Get field UGV3_pos_y from iusc_ctrl_mission_ugv_position message
 *
 * @return  位置y
 */
static inline float mavlink_msg_iusc_ctrl_mission_ugv_position_get_UGV3_pos_y(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  36);
}

/**
 * @brief Get field UGV4_pos_x from iusc_ctrl_mission_ugv_position message
 *
 * @return  位置x
 */
static inline float mavlink_msg_iusc_ctrl_mission_ugv_position_get_UGV4_pos_x(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  40);
}

/**
 * @brief Get field UGV4_pos_y from iusc_ctrl_mission_ugv_position message
 *
 * @return  位置y
 */
static inline float mavlink_msg_iusc_ctrl_mission_ugv_position_get_UGV4_pos_y(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  44);
}

/**
 * @brief Get field UGV5_pos_x from iusc_ctrl_mission_ugv_position message
 *
 * @return  位置x
 */
static inline float mavlink_msg_iusc_ctrl_mission_ugv_position_get_UGV5_pos_x(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  48);
}

/**
 * @brief Get field UGV5_pos_y from iusc_ctrl_mission_ugv_position message
 *
 * @return  位置y
 */
static inline float mavlink_msg_iusc_ctrl_mission_ugv_position_get_UGV5_pos_y(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  52);
}

/**
 * @brief Get field UGV6_pos_x from iusc_ctrl_mission_ugv_position message
 *
 * @return  位置x
 */
static inline float mavlink_msg_iusc_ctrl_mission_ugv_position_get_UGV6_pos_x(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  56);
}

/**
 * @brief Get field UGV6_pos_y from iusc_ctrl_mission_ugv_position message
 *
 * @return  位置y
 */
static inline float mavlink_msg_iusc_ctrl_mission_ugv_position_get_UGV6_pos_y(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  60);
}

/**
 * @brief Get field UGV7_pos_x from iusc_ctrl_mission_ugv_position message
 *
 * @return  位置x
 */
static inline float mavlink_msg_iusc_ctrl_mission_ugv_position_get_UGV7_pos_x(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  64);
}

/**
 * @brief Get field UGV7_pos_y from iusc_ctrl_mission_ugv_position message
 *
 * @return  位置y
 */
static inline float mavlink_msg_iusc_ctrl_mission_ugv_position_get_UGV7_pos_y(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  68);
}

/**
 * @brief Get field UGV8_pos_x from iusc_ctrl_mission_ugv_position message
 *
 * @return  位置x
 */
static inline float mavlink_msg_iusc_ctrl_mission_ugv_position_get_UGV8_pos_x(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  72);
}

/**
 * @brief Get field UGV8_pos_y from iusc_ctrl_mission_ugv_position message
 *
 * @return  位置y
 */
static inline float mavlink_msg_iusc_ctrl_mission_ugv_position_get_UGV8_pos_y(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  76);
}

/**
 * @brief Get field UGV9_pos_x from iusc_ctrl_mission_ugv_position message
 *
 * @return  位置x
 */
static inline float mavlink_msg_iusc_ctrl_mission_ugv_position_get_UGV9_pos_x(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  80);
}

/**
 * @brief Get field UGV9_pos_y from iusc_ctrl_mission_ugv_position message
 *
 * @return  位置y
 */
static inline float mavlink_msg_iusc_ctrl_mission_ugv_position_get_UGV9_pos_y(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  84);
}

/**
 * @brief Decode a iusc_ctrl_mission_ugv_position message into a struct
 *
 * @param msg The message to decode
 * @param iusc_ctrl_mission_ugv_position C-struct to decode the message contents into
 */
static inline void mavlink_msg_iusc_ctrl_mission_ugv_position_decode(const mavlink_message_t* msg, mavlink_iusc_ctrl_mission_ugv_position_t* iusc_ctrl_mission_ugv_position)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    iusc_ctrl_mission_ugv_position->time_usec = mavlink_msg_iusc_ctrl_mission_ugv_position_get_time_usec(msg);
    iusc_ctrl_mission_ugv_position->UGV0_pos_x = mavlink_msg_iusc_ctrl_mission_ugv_position_get_UGV0_pos_x(msg);
    iusc_ctrl_mission_ugv_position->UGV0_pos_y = mavlink_msg_iusc_ctrl_mission_ugv_position_get_UGV0_pos_y(msg);
    iusc_ctrl_mission_ugv_position->UGV1_pos_x = mavlink_msg_iusc_ctrl_mission_ugv_position_get_UGV1_pos_x(msg);
    iusc_ctrl_mission_ugv_position->UGV1_pos_y = mavlink_msg_iusc_ctrl_mission_ugv_position_get_UGV1_pos_y(msg);
    iusc_ctrl_mission_ugv_position->UGV2_pos_x = mavlink_msg_iusc_ctrl_mission_ugv_position_get_UGV2_pos_x(msg);
    iusc_ctrl_mission_ugv_position->UGV2_pos_y = mavlink_msg_iusc_ctrl_mission_ugv_position_get_UGV2_pos_y(msg);
    iusc_ctrl_mission_ugv_position->UGV3_pos_x = mavlink_msg_iusc_ctrl_mission_ugv_position_get_UGV3_pos_x(msg);
    iusc_ctrl_mission_ugv_position->UGV3_pos_y = mavlink_msg_iusc_ctrl_mission_ugv_position_get_UGV3_pos_y(msg);
    iusc_ctrl_mission_ugv_position->UGV4_pos_x = mavlink_msg_iusc_ctrl_mission_ugv_position_get_UGV4_pos_x(msg);
    iusc_ctrl_mission_ugv_position->UGV4_pos_y = mavlink_msg_iusc_ctrl_mission_ugv_position_get_UGV4_pos_y(msg);
    iusc_ctrl_mission_ugv_position->UGV5_pos_x = mavlink_msg_iusc_ctrl_mission_ugv_position_get_UGV5_pos_x(msg);
    iusc_ctrl_mission_ugv_position->UGV5_pos_y = mavlink_msg_iusc_ctrl_mission_ugv_position_get_UGV5_pos_y(msg);
    iusc_ctrl_mission_ugv_position->UGV6_pos_x = mavlink_msg_iusc_ctrl_mission_ugv_position_get_UGV6_pos_x(msg);
    iusc_ctrl_mission_ugv_position->UGV6_pos_y = mavlink_msg_iusc_ctrl_mission_ugv_position_get_UGV6_pos_y(msg);
    iusc_ctrl_mission_ugv_position->UGV7_pos_x = mavlink_msg_iusc_ctrl_mission_ugv_position_get_UGV7_pos_x(msg);
    iusc_ctrl_mission_ugv_position->UGV7_pos_y = mavlink_msg_iusc_ctrl_mission_ugv_position_get_UGV7_pos_y(msg);
    iusc_ctrl_mission_ugv_position->UGV8_pos_x = mavlink_msg_iusc_ctrl_mission_ugv_position_get_UGV8_pos_x(msg);
    iusc_ctrl_mission_ugv_position->UGV8_pos_y = mavlink_msg_iusc_ctrl_mission_ugv_position_get_UGV8_pos_y(msg);
    iusc_ctrl_mission_ugv_position->UGV9_pos_x = mavlink_msg_iusc_ctrl_mission_ugv_position_get_UGV9_pos_x(msg);
    iusc_ctrl_mission_ugv_position->UGV9_pos_y = mavlink_msg_iusc_ctrl_mission_ugv_position_get_UGV9_pos_y(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_IUSC_CTRL_MISSION_UGV_POSITION_LEN? msg->len : MAVLINK_MSG_ID_IUSC_CTRL_MISSION_UGV_POSITION_LEN;
        memset(iusc_ctrl_mission_ugv_position, 0, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_UGV_POSITION_LEN);
    memcpy(iusc_ctrl_mission_ugv_position, _MAV_PAYLOAD(msg), len);
#endif
}
