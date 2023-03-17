#pragma once
// MESSAGE IUSC_CTRL_UGV_MOTION_STATE PACKING

#define MAVLINK_MSG_ID_IUSC_CTRL_UGV_MOTION_STATE 13031


typedef struct __mavlink_iusc_ctrl_ugv_motion_state_t {
 uint64_t time_usec; /*<  时间戳*/
 uint32_t can_id; /*<  报文id：为固定值0x600*/
 uint16_t current_speed; /*<  当前车速*/
 uint8_t frame_msg; /*<  帧信息：为固定值0xbb*/
 uint8_t soc; /*<  电池soc*/
 uint8_t error_level; /*<  故障等级*/
 uint8_t current_cmd_source; /*<  当前控制权限*/
 uint8_t backup; /*<  预留：固定值：0x00*/
 uint8_t heart; /*<  心跳计数*/
 uint8_t crc; /*<  CRC校验*/
} mavlink_iusc_ctrl_ugv_motion_state_t;

#define MAVLINK_MSG_ID_IUSC_CTRL_UGV_MOTION_STATE_LEN 21
#define MAVLINK_MSG_ID_IUSC_CTRL_UGV_MOTION_STATE_MIN_LEN 21
#define MAVLINK_MSG_ID_13031_LEN 21
#define MAVLINK_MSG_ID_13031_MIN_LEN 21

#define MAVLINK_MSG_ID_IUSC_CTRL_UGV_MOTION_STATE_CRC 2
#define MAVLINK_MSG_ID_13031_CRC 2



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_IUSC_CTRL_UGV_MOTION_STATE { \
    13031, \
    "IUSC_CTRL_UGV_MOTION_STATE", \
    10, \
    {  { "time_usec", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_iusc_ctrl_ugv_motion_state_t, time_usec) }, \
         { "frame_msg", NULL, MAVLINK_TYPE_UINT8_T, 0, 14, offsetof(mavlink_iusc_ctrl_ugv_motion_state_t, frame_msg) }, \
         { "can_id", NULL, MAVLINK_TYPE_UINT32_T, 0, 8, offsetof(mavlink_iusc_ctrl_ugv_motion_state_t, can_id) }, \
         { "current_speed", NULL, MAVLINK_TYPE_UINT16_T, 0, 12, offsetof(mavlink_iusc_ctrl_ugv_motion_state_t, current_speed) }, \
         { "soc", NULL, MAVLINK_TYPE_UINT8_T, 0, 15, offsetof(mavlink_iusc_ctrl_ugv_motion_state_t, soc) }, \
         { "error_level", NULL, MAVLINK_TYPE_UINT8_T, 0, 16, offsetof(mavlink_iusc_ctrl_ugv_motion_state_t, error_level) }, \
         { "current_cmd_source", NULL, MAVLINK_TYPE_UINT8_T, 0, 17, offsetof(mavlink_iusc_ctrl_ugv_motion_state_t, current_cmd_source) }, \
         { "backup", NULL, MAVLINK_TYPE_UINT8_T, 0, 18, offsetof(mavlink_iusc_ctrl_ugv_motion_state_t, backup) }, \
         { "heart", NULL, MAVLINK_TYPE_UINT8_T, 0, 19, offsetof(mavlink_iusc_ctrl_ugv_motion_state_t, heart) }, \
         { "crc", NULL, MAVLINK_TYPE_UINT8_T, 0, 20, offsetof(mavlink_iusc_ctrl_ugv_motion_state_t, crc) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_IUSC_CTRL_UGV_MOTION_STATE { \
    "IUSC_CTRL_UGV_MOTION_STATE", \
    10, \
    {  { "time_usec", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_iusc_ctrl_ugv_motion_state_t, time_usec) }, \
         { "frame_msg", NULL, MAVLINK_TYPE_UINT8_T, 0, 14, offsetof(mavlink_iusc_ctrl_ugv_motion_state_t, frame_msg) }, \
         { "can_id", NULL, MAVLINK_TYPE_UINT32_T, 0, 8, offsetof(mavlink_iusc_ctrl_ugv_motion_state_t, can_id) }, \
         { "current_speed", NULL, MAVLINK_TYPE_UINT16_T, 0, 12, offsetof(mavlink_iusc_ctrl_ugv_motion_state_t, current_speed) }, \
         { "soc", NULL, MAVLINK_TYPE_UINT8_T, 0, 15, offsetof(mavlink_iusc_ctrl_ugv_motion_state_t, soc) }, \
         { "error_level", NULL, MAVLINK_TYPE_UINT8_T, 0, 16, offsetof(mavlink_iusc_ctrl_ugv_motion_state_t, error_level) }, \
         { "current_cmd_source", NULL, MAVLINK_TYPE_UINT8_T, 0, 17, offsetof(mavlink_iusc_ctrl_ugv_motion_state_t, current_cmd_source) }, \
         { "backup", NULL, MAVLINK_TYPE_UINT8_T, 0, 18, offsetof(mavlink_iusc_ctrl_ugv_motion_state_t, backup) }, \
         { "heart", NULL, MAVLINK_TYPE_UINT8_T, 0, 19, offsetof(mavlink_iusc_ctrl_ugv_motion_state_t, heart) }, \
         { "crc", NULL, MAVLINK_TYPE_UINT8_T, 0, 20, offsetof(mavlink_iusc_ctrl_ugv_motion_state_t, crc) }, \
         } \
}
#endif

/**
 * @brief Pack a iusc_ctrl_ugv_motion_state message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_usec  时间戳
 * @param frame_msg  帧信息：为固定值0xbb
 * @param can_id  报文id：为固定值0x600
 * @param current_speed  当前车速
 * @param soc  电池soc
 * @param error_level  故障等级
 * @param current_cmd_source  当前控制权限
 * @param backup  预留：固定值：0x00
 * @param heart  心跳计数
 * @param crc  CRC校验
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_iusc_ctrl_ugv_motion_state_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint64_t time_usec, uint8_t frame_msg, uint32_t can_id, uint16_t current_speed, uint8_t soc, uint8_t error_level, uint8_t current_cmd_source, uint8_t backup, uint8_t heart, uint8_t crc)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_IUSC_CTRL_UGV_MOTION_STATE_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_uint32_t(buf, 8, can_id);
    _mav_put_uint16_t(buf, 12, current_speed);
    _mav_put_uint8_t(buf, 14, frame_msg);
    _mav_put_uint8_t(buf, 15, soc);
    _mav_put_uint8_t(buf, 16, error_level);
    _mav_put_uint8_t(buf, 17, current_cmd_source);
    _mav_put_uint8_t(buf, 18, backup);
    _mav_put_uint8_t(buf, 19, heart);
    _mav_put_uint8_t(buf, 20, crc);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_IUSC_CTRL_UGV_MOTION_STATE_LEN);
#else
    mavlink_iusc_ctrl_ugv_motion_state_t packet;
    packet.time_usec = time_usec;
    packet.can_id = can_id;
    packet.current_speed = current_speed;
    packet.frame_msg = frame_msg;
    packet.soc = soc;
    packet.error_level = error_level;
    packet.current_cmd_source = current_cmd_source;
    packet.backup = backup;
    packet.heart = heart;
    packet.crc = crc;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_IUSC_CTRL_UGV_MOTION_STATE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_IUSC_CTRL_UGV_MOTION_STATE;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_IUSC_CTRL_UGV_MOTION_STATE_MIN_LEN, MAVLINK_MSG_ID_IUSC_CTRL_UGV_MOTION_STATE_LEN, MAVLINK_MSG_ID_IUSC_CTRL_UGV_MOTION_STATE_CRC);
}

/**
 * @brief Pack a iusc_ctrl_ugv_motion_state message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param time_usec  时间戳
 * @param frame_msg  帧信息：为固定值0xbb
 * @param can_id  报文id：为固定值0x600
 * @param current_speed  当前车速
 * @param soc  电池soc
 * @param error_level  故障等级
 * @param current_cmd_source  当前控制权限
 * @param backup  预留：固定值：0x00
 * @param heart  心跳计数
 * @param crc  CRC校验
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_iusc_ctrl_ugv_motion_state_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint64_t time_usec,uint8_t frame_msg,uint32_t can_id,uint16_t current_speed,uint8_t soc,uint8_t error_level,uint8_t current_cmd_source,uint8_t backup,uint8_t heart,uint8_t crc)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_IUSC_CTRL_UGV_MOTION_STATE_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_uint32_t(buf, 8, can_id);
    _mav_put_uint16_t(buf, 12, current_speed);
    _mav_put_uint8_t(buf, 14, frame_msg);
    _mav_put_uint8_t(buf, 15, soc);
    _mav_put_uint8_t(buf, 16, error_level);
    _mav_put_uint8_t(buf, 17, current_cmd_source);
    _mav_put_uint8_t(buf, 18, backup);
    _mav_put_uint8_t(buf, 19, heart);
    _mav_put_uint8_t(buf, 20, crc);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_IUSC_CTRL_UGV_MOTION_STATE_LEN);
#else
    mavlink_iusc_ctrl_ugv_motion_state_t packet;
    packet.time_usec = time_usec;
    packet.can_id = can_id;
    packet.current_speed = current_speed;
    packet.frame_msg = frame_msg;
    packet.soc = soc;
    packet.error_level = error_level;
    packet.current_cmd_source = current_cmd_source;
    packet.backup = backup;
    packet.heart = heart;
    packet.crc = crc;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_IUSC_CTRL_UGV_MOTION_STATE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_IUSC_CTRL_UGV_MOTION_STATE;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_IUSC_CTRL_UGV_MOTION_STATE_MIN_LEN, MAVLINK_MSG_ID_IUSC_CTRL_UGV_MOTION_STATE_LEN, MAVLINK_MSG_ID_IUSC_CTRL_UGV_MOTION_STATE_CRC);
}

/**
 * @brief Encode a iusc_ctrl_ugv_motion_state struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param iusc_ctrl_ugv_motion_state C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_iusc_ctrl_ugv_motion_state_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_iusc_ctrl_ugv_motion_state_t* iusc_ctrl_ugv_motion_state)
{
    return mavlink_msg_iusc_ctrl_ugv_motion_state_pack(system_id, component_id, msg, iusc_ctrl_ugv_motion_state->time_usec, iusc_ctrl_ugv_motion_state->frame_msg, iusc_ctrl_ugv_motion_state->can_id, iusc_ctrl_ugv_motion_state->current_speed, iusc_ctrl_ugv_motion_state->soc, iusc_ctrl_ugv_motion_state->error_level, iusc_ctrl_ugv_motion_state->current_cmd_source, iusc_ctrl_ugv_motion_state->backup, iusc_ctrl_ugv_motion_state->heart, iusc_ctrl_ugv_motion_state->crc);
}

/**
 * @brief Encode a iusc_ctrl_ugv_motion_state struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param iusc_ctrl_ugv_motion_state C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_iusc_ctrl_ugv_motion_state_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_iusc_ctrl_ugv_motion_state_t* iusc_ctrl_ugv_motion_state)
{
    return mavlink_msg_iusc_ctrl_ugv_motion_state_pack_chan(system_id, component_id, chan, msg, iusc_ctrl_ugv_motion_state->time_usec, iusc_ctrl_ugv_motion_state->frame_msg, iusc_ctrl_ugv_motion_state->can_id, iusc_ctrl_ugv_motion_state->current_speed, iusc_ctrl_ugv_motion_state->soc, iusc_ctrl_ugv_motion_state->error_level, iusc_ctrl_ugv_motion_state->current_cmd_source, iusc_ctrl_ugv_motion_state->backup, iusc_ctrl_ugv_motion_state->heart, iusc_ctrl_ugv_motion_state->crc);
}

/**
 * @brief Send a iusc_ctrl_ugv_motion_state message
 * @param chan MAVLink channel to send the message
 *
 * @param time_usec  时间戳
 * @param frame_msg  帧信息：为固定值0xbb
 * @param can_id  报文id：为固定值0x600
 * @param current_speed  当前车速
 * @param soc  电池soc
 * @param error_level  故障等级
 * @param current_cmd_source  当前控制权限
 * @param backup  预留：固定值：0x00
 * @param heart  心跳计数
 * @param crc  CRC校验
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_iusc_ctrl_ugv_motion_state_send(mavlink_channel_t chan, uint64_t time_usec, uint8_t frame_msg, uint32_t can_id, uint16_t current_speed, uint8_t soc, uint8_t error_level, uint8_t current_cmd_source, uint8_t backup, uint8_t heart, uint8_t crc)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_IUSC_CTRL_UGV_MOTION_STATE_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_uint32_t(buf, 8, can_id);
    _mav_put_uint16_t(buf, 12, current_speed);
    _mav_put_uint8_t(buf, 14, frame_msg);
    _mav_put_uint8_t(buf, 15, soc);
    _mav_put_uint8_t(buf, 16, error_level);
    _mav_put_uint8_t(buf, 17, current_cmd_source);
    _mav_put_uint8_t(buf, 18, backup);
    _mav_put_uint8_t(buf, 19, heart);
    _mav_put_uint8_t(buf, 20, crc);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_IUSC_CTRL_UGV_MOTION_STATE, buf, MAVLINK_MSG_ID_IUSC_CTRL_UGV_MOTION_STATE_MIN_LEN, MAVLINK_MSG_ID_IUSC_CTRL_UGV_MOTION_STATE_LEN, MAVLINK_MSG_ID_IUSC_CTRL_UGV_MOTION_STATE_CRC);
#else
    mavlink_iusc_ctrl_ugv_motion_state_t packet;
    packet.time_usec = time_usec;
    packet.can_id = can_id;
    packet.current_speed = current_speed;
    packet.frame_msg = frame_msg;
    packet.soc = soc;
    packet.error_level = error_level;
    packet.current_cmd_source = current_cmd_source;
    packet.backup = backup;
    packet.heart = heart;
    packet.crc = crc;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_IUSC_CTRL_UGV_MOTION_STATE, (const char *)&packet, MAVLINK_MSG_ID_IUSC_CTRL_UGV_MOTION_STATE_MIN_LEN, MAVLINK_MSG_ID_IUSC_CTRL_UGV_MOTION_STATE_LEN, MAVLINK_MSG_ID_IUSC_CTRL_UGV_MOTION_STATE_CRC);
#endif
}

/**
 * @brief Send a iusc_ctrl_ugv_motion_state message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_iusc_ctrl_ugv_motion_state_send_struct(mavlink_channel_t chan, const mavlink_iusc_ctrl_ugv_motion_state_t* iusc_ctrl_ugv_motion_state)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_iusc_ctrl_ugv_motion_state_send(chan, iusc_ctrl_ugv_motion_state->time_usec, iusc_ctrl_ugv_motion_state->frame_msg, iusc_ctrl_ugv_motion_state->can_id, iusc_ctrl_ugv_motion_state->current_speed, iusc_ctrl_ugv_motion_state->soc, iusc_ctrl_ugv_motion_state->error_level, iusc_ctrl_ugv_motion_state->current_cmd_source, iusc_ctrl_ugv_motion_state->backup, iusc_ctrl_ugv_motion_state->heart, iusc_ctrl_ugv_motion_state->crc);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_IUSC_CTRL_UGV_MOTION_STATE, (const char *)iusc_ctrl_ugv_motion_state, MAVLINK_MSG_ID_IUSC_CTRL_UGV_MOTION_STATE_MIN_LEN, MAVLINK_MSG_ID_IUSC_CTRL_UGV_MOTION_STATE_LEN, MAVLINK_MSG_ID_IUSC_CTRL_UGV_MOTION_STATE_CRC);
#endif
}

#if MAVLINK_MSG_ID_IUSC_CTRL_UGV_MOTION_STATE_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_iusc_ctrl_ugv_motion_state_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t time_usec, uint8_t frame_msg, uint32_t can_id, uint16_t current_speed, uint8_t soc, uint8_t error_level, uint8_t current_cmd_source, uint8_t backup, uint8_t heart, uint8_t crc)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_uint32_t(buf, 8, can_id);
    _mav_put_uint16_t(buf, 12, current_speed);
    _mav_put_uint8_t(buf, 14, frame_msg);
    _mav_put_uint8_t(buf, 15, soc);
    _mav_put_uint8_t(buf, 16, error_level);
    _mav_put_uint8_t(buf, 17, current_cmd_source);
    _mav_put_uint8_t(buf, 18, backup);
    _mav_put_uint8_t(buf, 19, heart);
    _mav_put_uint8_t(buf, 20, crc);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_IUSC_CTRL_UGV_MOTION_STATE, buf, MAVLINK_MSG_ID_IUSC_CTRL_UGV_MOTION_STATE_MIN_LEN, MAVLINK_MSG_ID_IUSC_CTRL_UGV_MOTION_STATE_LEN, MAVLINK_MSG_ID_IUSC_CTRL_UGV_MOTION_STATE_CRC);
#else
    mavlink_iusc_ctrl_ugv_motion_state_t *packet = (mavlink_iusc_ctrl_ugv_motion_state_t *)msgbuf;
    packet->time_usec = time_usec;
    packet->can_id = can_id;
    packet->current_speed = current_speed;
    packet->frame_msg = frame_msg;
    packet->soc = soc;
    packet->error_level = error_level;
    packet->current_cmd_source = current_cmd_source;
    packet->backup = backup;
    packet->heart = heart;
    packet->crc = crc;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_IUSC_CTRL_UGV_MOTION_STATE, (const char *)packet, MAVLINK_MSG_ID_IUSC_CTRL_UGV_MOTION_STATE_MIN_LEN, MAVLINK_MSG_ID_IUSC_CTRL_UGV_MOTION_STATE_LEN, MAVLINK_MSG_ID_IUSC_CTRL_UGV_MOTION_STATE_CRC);
#endif
}
#endif

#endif

// MESSAGE IUSC_CTRL_UGV_MOTION_STATE UNPACKING


/**
 * @brief Get field time_usec from iusc_ctrl_ugv_motion_state message
 *
 * @return  时间戳
 */
static inline uint64_t mavlink_msg_iusc_ctrl_ugv_motion_state_get_time_usec(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field frame_msg from iusc_ctrl_ugv_motion_state message
 *
 * @return  帧信息：为固定值0xbb
 */
static inline uint8_t mavlink_msg_iusc_ctrl_ugv_motion_state_get_frame_msg(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  14);
}

/**
 * @brief Get field can_id from iusc_ctrl_ugv_motion_state message
 *
 * @return  报文id：为固定值0x600
 */
static inline uint32_t mavlink_msg_iusc_ctrl_ugv_motion_state_get_can_id(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  8);
}

/**
 * @brief Get field current_speed from iusc_ctrl_ugv_motion_state message
 *
 * @return  当前车速
 */
static inline uint16_t mavlink_msg_iusc_ctrl_ugv_motion_state_get_current_speed(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  12);
}

/**
 * @brief Get field soc from iusc_ctrl_ugv_motion_state message
 *
 * @return  电池soc
 */
static inline uint8_t mavlink_msg_iusc_ctrl_ugv_motion_state_get_soc(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  15);
}

/**
 * @brief Get field error_level from iusc_ctrl_ugv_motion_state message
 *
 * @return  故障等级
 */
static inline uint8_t mavlink_msg_iusc_ctrl_ugv_motion_state_get_error_level(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  16);
}

/**
 * @brief Get field current_cmd_source from iusc_ctrl_ugv_motion_state message
 *
 * @return  当前控制权限
 */
static inline uint8_t mavlink_msg_iusc_ctrl_ugv_motion_state_get_current_cmd_source(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  17);
}

/**
 * @brief Get field backup from iusc_ctrl_ugv_motion_state message
 *
 * @return  预留：固定值：0x00
 */
static inline uint8_t mavlink_msg_iusc_ctrl_ugv_motion_state_get_backup(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  18);
}

/**
 * @brief Get field heart from iusc_ctrl_ugv_motion_state message
 *
 * @return  心跳计数
 */
static inline uint8_t mavlink_msg_iusc_ctrl_ugv_motion_state_get_heart(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  19);
}

/**
 * @brief Get field crc from iusc_ctrl_ugv_motion_state message
 *
 * @return  CRC校验
 */
static inline uint8_t mavlink_msg_iusc_ctrl_ugv_motion_state_get_crc(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  20);
}

/**
 * @brief Decode a iusc_ctrl_ugv_motion_state message into a struct
 *
 * @param msg The message to decode
 * @param iusc_ctrl_ugv_motion_state C-struct to decode the message contents into
 */
static inline void mavlink_msg_iusc_ctrl_ugv_motion_state_decode(const mavlink_message_t* msg, mavlink_iusc_ctrl_ugv_motion_state_t* iusc_ctrl_ugv_motion_state)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    iusc_ctrl_ugv_motion_state->time_usec = mavlink_msg_iusc_ctrl_ugv_motion_state_get_time_usec(msg);
    iusc_ctrl_ugv_motion_state->can_id = mavlink_msg_iusc_ctrl_ugv_motion_state_get_can_id(msg);
    iusc_ctrl_ugv_motion_state->current_speed = mavlink_msg_iusc_ctrl_ugv_motion_state_get_current_speed(msg);
    iusc_ctrl_ugv_motion_state->frame_msg = mavlink_msg_iusc_ctrl_ugv_motion_state_get_frame_msg(msg);
    iusc_ctrl_ugv_motion_state->soc = mavlink_msg_iusc_ctrl_ugv_motion_state_get_soc(msg);
    iusc_ctrl_ugv_motion_state->error_level = mavlink_msg_iusc_ctrl_ugv_motion_state_get_error_level(msg);
    iusc_ctrl_ugv_motion_state->current_cmd_source = mavlink_msg_iusc_ctrl_ugv_motion_state_get_current_cmd_source(msg);
    iusc_ctrl_ugv_motion_state->backup = mavlink_msg_iusc_ctrl_ugv_motion_state_get_backup(msg);
    iusc_ctrl_ugv_motion_state->heart = mavlink_msg_iusc_ctrl_ugv_motion_state_get_heart(msg);
    iusc_ctrl_ugv_motion_state->crc = mavlink_msg_iusc_ctrl_ugv_motion_state_get_crc(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_IUSC_CTRL_UGV_MOTION_STATE_LEN? msg->len : MAVLINK_MSG_ID_IUSC_CTRL_UGV_MOTION_STATE_LEN;
        memset(iusc_ctrl_ugv_motion_state, 0, MAVLINK_MSG_ID_IUSC_CTRL_UGV_MOTION_STATE_LEN);
    memcpy(iusc_ctrl_ugv_motion_state, _MAV_PAYLOAD(msg), len);
#endif
}
