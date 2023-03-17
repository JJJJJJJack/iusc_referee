#pragma once
// MESSAGE IUSC_CTRL_MISSION_UAV_LASER_CTRL PACKING

#define MAVLINK_MSG_ID_IUSC_CTRL_MISSION_UAV_LASER_CTRL 13020


typedef struct __mavlink_iusc_ctrl_mission_uav_laser_ctrl_t {
 uint64_t time_usec; /*<  时间戳*/
 uint8_t laser_ctrl; /*<  激光指令*/
 uint8_t backup; /*<  备用*/
} mavlink_iusc_ctrl_mission_uav_laser_ctrl_t;

#define MAVLINK_MSG_ID_IUSC_CTRL_MISSION_UAV_LASER_CTRL_LEN 10
#define MAVLINK_MSG_ID_IUSC_CTRL_MISSION_UAV_LASER_CTRL_MIN_LEN 10
#define MAVLINK_MSG_ID_13020_LEN 10
#define MAVLINK_MSG_ID_13020_MIN_LEN 10

#define MAVLINK_MSG_ID_IUSC_CTRL_MISSION_UAV_LASER_CTRL_CRC 12
#define MAVLINK_MSG_ID_13020_CRC 12



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_IUSC_CTRL_MISSION_UAV_LASER_CTRL { \
    13020, \
    "IUSC_CTRL_MISSION_UAV_LASER_CTRL", \
    3, \
    {  { "time_usec", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_iusc_ctrl_mission_uav_laser_ctrl_t, time_usec) }, \
         { "laser_ctrl", NULL, MAVLINK_TYPE_UINT8_T, 0, 8, offsetof(mavlink_iusc_ctrl_mission_uav_laser_ctrl_t, laser_ctrl) }, \
         { "backup", NULL, MAVLINK_TYPE_UINT8_T, 0, 9, offsetof(mavlink_iusc_ctrl_mission_uav_laser_ctrl_t, backup) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_IUSC_CTRL_MISSION_UAV_LASER_CTRL { \
    "IUSC_CTRL_MISSION_UAV_LASER_CTRL", \
    3, \
    {  { "time_usec", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_iusc_ctrl_mission_uav_laser_ctrl_t, time_usec) }, \
         { "laser_ctrl", NULL, MAVLINK_TYPE_UINT8_T, 0, 8, offsetof(mavlink_iusc_ctrl_mission_uav_laser_ctrl_t, laser_ctrl) }, \
         { "backup", NULL, MAVLINK_TYPE_UINT8_T, 0, 9, offsetof(mavlink_iusc_ctrl_mission_uav_laser_ctrl_t, backup) }, \
         } \
}
#endif

/**
 * @brief Pack a iusc_ctrl_mission_uav_laser_ctrl message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_usec  时间戳
 * @param laser_ctrl  激光指令
 * @param backup  备用
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_iusc_ctrl_mission_uav_laser_ctrl_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint64_t time_usec, uint8_t laser_ctrl, uint8_t backup)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_IUSC_CTRL_MISSION_UAV_LASER_CTRL_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_uint8_t(buf, 8, laser_ctrl);
    _mav_put_uint8_t(buf, 9, backup);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_UAV_LASER_CTRL_LEN);
#else
    mavlink_iusc_ctrl_mission_uav_laser_ctrl_t packet;
    packet.time_usec = time_usec;
    packet.laser_ctrl = laser_ctrl;
    packet.backup = backup;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_UAV_LASER_CTRL_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_IUSC_CTRL_MISSION_UAV_LASER_CTRL;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_UAV_LASER_CTRL_MIN_LEN, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_UAV_LASER_CTRL_LEN, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_UAV_LASER_CTRL_CRC);
}

/**
 * @brief Pack a iusc_ctrl_mission_uav_laser_ctrl message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param time_usec  时间戳
 * @param laser_ctrl  激光指令
 * @param backup  备用
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_iusc_ctrl_mission_uav_laser_ctrl_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint64_t time_usec,uint8_t laser_ctrl,uint8_t backup)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_IUSC_CTRL_MISSION_UAV_LASER_CTRL_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_uint8_t(buf, 8, laser_ctrl);
    _mav_put_uint8_t(buf, 9, backup);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_UAV_LASER_CTRL_LEN);
#else
    mavlink_iusc_ctrl_mission_uav_laser_ctrl_t packet;
    packet.time_usec = time_usec;
    packet.laser_ctrl = laser_ctrl;
    packet.backup = backup;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_UAV_LASER_CTRL_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_IUSC_CTRL_MISSION_UAV_LASER_CTRL;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_UAV_LASER_CTRL_MIN_LEN, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_UAV_LASER_CTRL_LEN, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_UAV_LASER_CTRL_CRC);
}

/**
 * @brief Encode a iusc_ctrl_mission_uav_laser_ctrl struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param iusc_ctrl_mission_uav_laser_ctrl C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_iusc_ctrl_mission_uav_laser_ctrl_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_iusc_ctrl_mission_uav_laser_ctrl_t* iusc_ctrl_mission_uav_laser_ctrl)
{
    return mavlink_msg_iusc_ctrl_mission_uav_laser_ctrl_pack(system_id, component_id, msg, iusc_ctrl_mission_uav_laser_ctrl->time_usec, iusc_ctrl_mission_uav_laser_ctrl->laser_ctrl, iusc_ctrl_mission_uav_laser_ctrl->backup);
}

/**
 * @brief Encode a iusc_ctrl_mission_uav_laser_ctrl struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param iusc_ctrl_mission_uav_laser_ctrl C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_iusc_ctrl_mission_uav_laser_ctrl_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_iusc_ctrl_mission_uav_laser_ctrl_t* iusc_ctrl_mission_uav_laser_ctrl)
{
    return mavlink_msg_iusc_ctrl_mission_uav_laser_ctrl_pack_chan(system_id, component_id, chan, msg, iusc_ctrl_mission_uav_laser_ctrl->time_usec, iusc_ctrl_mission_uav_laser_ctrl->laser_ctrl, iusc_ctrl_mission_uav_laser_ctrl->backup);
}

/**
 * @brief Send a iusc_ctrl_mission_uav_laser_ctrl message
 * @param chan MAVLink channel to send the message
 *
 * @param time_usec  时间戳
 * @param laser_ctrl  激光指令
 * @param backup  备用
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_iusc_ctrl_mission_uav_laser_ctrl_send(mavlink_channel_t chan, uint64_t time_usec, uint8_t laser_ctrl, uint8_t backup)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_IUSC_CTRL_MISSION_UAV_LASER_CTRL_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_uint8_t(buf, 8, laser_ctrl);
    _mav_put_uint8_t(buf, 9, backup);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_UAV_LASER_CTRL, buf, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_UAV_LASER_CTRL_MIN_LEN, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_UAV_LASER_CTRL_LEN, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_UAV_LASER_CTRL_CRC);
#else
    mavlink_iusc_ctrl_mission_uav_laser_ctrl_t packet;
    packet.time_usec = time_usec;
    packet.laser_ctrl = laser_ctrl;
    packet.backup = backup;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_UAV_LASER_CTRL, (const char *)&packet, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_UAV_LASER_CTRL_MIN_LEN, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_UAV_LASER_CTRL_LEN, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_UAV_LASER_CTRL_CRC);
#endif
}

/**
 * @brief Send a iusc_ctrl_mission_uav_laser_ctrl message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_iusc_ctrl_mission_uav_laser_ctrl_send_struct(mavlink_channel_t chan, const mavlink_iusc_ctrl_mission_uav_laser_ctrl_t* iusc_ctrl_mission_uav_laser_ctrl)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_iusc_ctrl_mission_uav_laser_ctrl_send(chan, iusc_ctrl_mission_uav_laser_ctrl->time_usec, iusc_ctrl_mission_uav_laser_ctrl->laser_ctrl, iusc_ctrl_mission_uav_laser_ctrl->backup);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_UAV_LASER_CTRL, (const char *)iusc_ctrl_mission_uav_laser_ctrl, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_UAV_LASER_CTRL_MIN_LEN, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_UAV_LASER_CTRL_LEN, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_UAV_LASER_CTRL_CRC);
#endif
}

#if MAVLINK_MSG_ID_IUSC_CTRL_MISSION_UAV_LASER_CTRL_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_iusc_ctrl_mission_uav_laser_ctrl_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t time_usec, uint8_t laser_ctrl, uint8_t backup)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_uint8_t(buf, 8, laser_ctrl);
    _mav_put_uint8_t(buf, 9, backup);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_UAV_LASER_CTRL, buf, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_UAV_LASER_CTRL_MIN_LEN, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_UAV_LASER_CTRL_LEN, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_UAV_LASER_CTRL_CRC);
#else
    mavlink_iusc_ctrl_mission_uav_laser_ctrl_t *packet = (mavlink_iusc_ctrl_mission_uav_laser_ctrl_t *)msgbuf;
    packet->time_usec = time_usec;
    packet->laser_ctrl = laser_ctrl;
    packet->backup = backup;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_UAV_LASER_CTRL, (const char *)packet, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_UAV_LASER_CTRL_MIN_LEN, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_UAV_LASER_CTRL_LEN, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_UAV_LASER_CTRL_CRC);
#endif
}
#endif

#endif

// MESSAGE IUSC_CTRL_MISSION_UAV_LASER_CTRL UNPACKING


/**
 * @brief Get field time_usec from iusc_ctrl_mission_uav_laser_ctrl message
 *
 * @return  时间戳
 */
static inline uint64_t mavlink_msg_iusc_ctrl_mission_uav_laser_ctrl_get_time_usec(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field laser_ctrl from iusc_ctrl_mission_uav_laser_ctrl message
 *
 * @return  激光指令
 */
static inline uint8_t mavlink_msg_iusc_ctrl_mission_uav_laser_ctrl_get_laser_ctrl(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  8);
}

/**
 * @brief Get field backup from iusc_ctrl_mission_uav_laser_ctrl message
 *
 * @return  备用
 */
static inline uint8_t mavlink_msg_iusc_ctrl_mission_uav_laser_ctrl_get_backup(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  9);
}

/**
 * @brief Decode a iusc_ctrl_mission_uav_laser_ctrl message into a struct
 *
 * @param msg The message to decode
 * @param iusc_ctrl_mission_uav_laser_ctrl C-struct to decode the message contents into
 */
static inline void mavlink_msg_iusc_ctrl_mission_uav_laser_ctrl_decode(const mavlink_message_t* msg, mavlink_iusc_ctrl_mission_uav_laser_ctrl_t* iusc_ctrl_mission_uav_laser_ctrl)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    iusc_ctrl_mission_uav_laser_ctrl->time_usec = mavlink_msg_iusc_ctrl_mission_uav_laser_ctrl_get_time_usec(msg);
    iusc_ctrl_mission_uav_laser_ctrl->laser_ctrl = mavlink_msg_iusc_ctrl_mission_uav_laser_ctrl_get_laser_ctrl(msg);
    iusc_ctrl_mission_uav_laser_ctrl->backup = mavlink_msg_iusc_ctrl_mission_uav_laser_ctrl_get_backup(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_IUSC_CTRL_MISSION_UAV_LASER_CTRL_LEN? msg->len : MAVLINK_MSG_ID_IUSC_CTRL_MISSION_UAV_LASER_CTRL_LEN;
        memset(iusc_ctrl_mission_uav_laser_ctrl, 0, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_UAV_LASER_CTRL_LEN);
    memcpy(iusc_ctrl_mission_uav_laser_ctrl, _MAV_PAYLOAD(msg), len);
#endif
}
