#pragma once
// MESSAGE IUSC_CTRL_UGV_MOTION_CONTROLLER PACKING

#define MAVLINK_MSG_ID_IUSC_CTRL_UGV_MOTION_CONTROLLER 13030


typedef struct __mavlink_iusc_ctrl_ugv_motion_controller_t {
 uint64_t time_usec; /*<  时间戳*/
 uint32_t can_id; /*<  报文id：为固定值0x674*/
 uint16_t target_speed; /*<  目标车速*/
 uint16_t target_heading; /*<  目标航向角*/
 uint16_t current_heading; /*<  当前车辆航向角*/
 uint8_t frame_msg; /*<  帧信息：为固定值0xcc*/
 uint8_t heart; /*<  心跳计数*/
 uint8_t crc; /*<  CRC校验*/
} mavlink_iusc_ctrl_ugv_motion_controller_t;

#define MAVLINK_MSG_ID_IUSC_CTRL_UGV_MOTION_CONTROLLER_LEN 21
#define MAVLINK_MSG_ID_IUSC_CTRL_UGV_MOTION_CONTROLLER_MIN_LEN 21
#define MAVLINK_MSG_ID_13030_LEN 21
#define MAVLINK_MSG_ID_13030_MIN_LEN 21

#define MAVLINK_MSG_ID_IUSC_CTRL_UGV_MOTION_CONTROLLER_CRC 114
#define MAVLINK_MSG_ID_13030_CRC 114



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_IUSC_CTRL_UGV_MOTION_CONTROLLER { \
    13030, \
    "IUSC_CTRL_UGV_MOTION_CONTROLLER", \
    8, \
    {  { "time_usec", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_iusc_ctrl_ugv_motion_controller_t, time_usec) }, \
         { "frame_msg", NULL, MAVLINK_TYPE_UINT8_T, 0, 18, offsetof(mavlink_iusc_ctrl_ugv_motion_controller_t, frame_msg) }, \
         { "can_id", NULL, MAVLINK_TYPE_UINT32_T, 0, 8, offsetof(mavlink_iusc_ctrl_ugv_motion_controller_t, can_id) }, \
         { "target_speed", NULL, MAVLINK_TYPE_UINT16_T, 0, 12, offsetof(mavlink_iusc_ctrl_ugv_motion_controller_t, target_speed) }, \
         { "target_heading", NULL, MAVLINK_TYPE_UINT16_T, 0, 14, offsetof(mavlink_iusc_ctrl_ugv_motion_controller_t, target_heading) }, \
         { "current_heading", NULL, MAVLINK_TYPE_UINT16_T, 0, 16, offsetof(mavlink_iusc_ctrl_ugv_motion_controller_t, current_heading) }, \
         { "heart", NULL, MAVLINK_TYPE_UINT8_T, 0, 19, offsetof(mavlink_iusc_ctrl_ugv_motion_controller_t, heart) }, \
         { "crc", NULL, MAVLINK_TYPE_UINT8_T, 0, 20, offsetof(mavlink_iusc_ctrl_ugv_motion_controller_t, crc) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_IUSC_CTRL_UGV_MOTION_CONTROLLER { \
    "IUSC_CTRL_UGV_MOTION_CONTROLLER", \
    8, \
    {  { "time_usec", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_iusc_ctrl_ugv_motion_controller_t, time_usec) }, \
         { "frame_msg", NULL, MAVLINK_TYPE_UINT8_T, 0, 18, offsetof(mavlink_iusc_ctrl_ugv_motion_controller_t, frame_msg) }, \
         { "can_id", NULL, MAVLINK_TYPE_UINT32_T, 0, 8, offsetof(mavlink_iusc_ctrl_ugv_motion_controller_t, can_id) }, \
         { "target_speed", NULL, MAVLINK_TYPE_UINT16_T, 0, 12, offsetof(mavlink_iusc_ctrl_ugv_motion_controller_t, target_speed) }, \
         { "target_heading", NULL, MAVLINK_TYPE_UINT16_T, 0, 14, offsetof(mavlink_iusc_ctrl_ugv_motion_controller_t, target_heading) }, \
         { "current_heading", NULL, MAVLINK_TYPE_UINT16_T, 0, 16, offsetof(mavlink_iusc_ctrl_ugv_motion_controller_t, current_heading) }, \
         { "heart", NULL, MAVLINK_TYPE_UINT8_T, 0, 19, offsetof(mavlink_iusc_ctrl_ugv_motion_controller_t, heart) }, \
         { "crc", NULL, MAVLINK_TYPE_UINT8_T, 0, 20, offsetof(mavlink_iusc_ctrl_ugv_motion_controller_t, crc) }, \
         } \
}
#endif

/**
 * @brief Pack a iusc_ctrl_ugv_motion_controller message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_usec  时间戳
 * @param frame_msg  帧信息：为固定值0xcc
 * @param can_id  报文id：为固定值0x674
 * @param target_speed  目标车速
 * @param target_heading  目标航向角
 * @param current_heading  当前车辆航向角
 * @param heart  心跳计数
 * @param crc  CRC校验
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_iusc_ctrl_ugv_motion_controller_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint64_t time_usec, uint8_t frame_msg, uint32_t can_id, uint16_t target_speed, uint16_t target_heading, uint16_t current_heading, uint8_t heart, uint8_t crc)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_IUSC_CTRL_UGV_MOTION_CONTROLLER_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_uint32_t(buf, 8, can_id);
    _mav_put_uint16_t(buf, 12, target_speed);
    _mav_put_uint16_t(buf, 14, target_heading);
    _mav_put_uint16_t(buf, 16, current_heading);
    _mav_put_uint8_t(buf, 18, frame_msg);
    _mav_put_uint8_t(buf, 19, heart);
    _mav_put_uint8_t(buf, 20, crc);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_IUSC_CTRL_UGV_MOTION_CONTROLLER_LEN);
#else
    mavlink_iusc_ctrl_ugv_motion_controller_t packet;
    packet.time_usec = time_usec;
    packet.can_id = can_id;
    packet.target_speed = target_speed;
    packet.target_heading = target_heading;
    packet.current_heading = current_heading;
    packet.frame_msg = frame_msg;
    packet.heart = heart;
    packet.crc = crc;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_IUSC_CTRL_UGV_MOTION_CONTROLLER_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_IUSC_CTRL_UGV_MOTION_CONTROLLER;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_IUSC_CTRL_UGV_MOTION_CONTROLLER_MIN_LEN, MAVLINK_MSG_ID_IUSC_CTRL_UGV_MOTION_CONTROLLER_LEN, MAVLINK_MSG_ID_IUSC_CTRL_UGV_MOTION_CONTROLLER_CRC);
}

/**
 * @brief Pack a iusc_ctrl_ugv_motion_controller message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param time_usec  时间戳
 * @param frame_msg  帧信息：为固定值0xcc
 * @param can_id  报文id：为固定值0x674
 * @param target_speed  目标车速
 * @param target_heading  目标航向角
 * @param current_heading  当前车辆航向角
 * @param heart  心跳计数
 * @param crc  CRC校验
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_iusc_ctrl_ugv_motion_controller_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint64_t time_usec,uint8_t frame_msg,uint32_t can_id,uint16_t target_speed,uint16_t target_heading,uint16_t current_heading,uint8_t heart,uint8_t crc)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_IUSC_CTRL_UGV_MOTION_CONTROLLER_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_uint32_t(buf, 8, can_id);
    _mav_put_uint16_t(buf, 12, target_speed);
    _mav_put_uint16_t(buf, 14, target_heading);
    _mav_put_uint16_t(buf, 16, current_heading);
    _mav_put_uint8_t(buf, 18, frame_msg);
    _mav_put_uint8_t(buf, 19, heart);
    _mav_put_uint8_t(buf, 20, crc);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_IUSC_CTRL_UGV_MOTION_CONTROLLER_LEN);
#else
    mavlink_iusc_ctrl_ugv_motion_controller_t packet;
    packet.time_usec = time_usec;
    packet.can_id = can_id;
    packet.target_speed = target_speed;
    packet.target_heading = target_heading;
    packet.current_heading = current_heading;
    packet.frame_msg = frame_msg;
    packet.heart = heart;
    packet.crc = crc;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_IUSC_CTRL_UGV_MOTION_CONTROLLER_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_IUSC_CTRL_UGV_MOTION_CONTROLLER;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_IUSC_CTRL_UGV_MOTION_CONTROLLER_MIN_LEN, MAVLINK_MSG_ID_IUSC_CTRL_UGV_MOTION_CONTROLLER_LEN, MAVLINK_MSG_ID_IUSC_CTRL_UGV_MOTION_CONTROLLER_CRC);
}

/**
 * @brief Encode a iusc_ctrl_ugv_motion_controller struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param iusc_ctrl_ugv_motion_controller C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_iusc_ctrl_ugv_motion_controller_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_iusc_ctrl_ugv_motion_controller_t* iusc_ctrl_ugv_motion_controller)
{
    return mavlink_msg_iusc_ctrl_ugv_motion_controller_pack(system_id, component_id, msg, iusc_ctrl_ugv_motion_controller->time_usec, iusc_ctrl_ugv_motion_controller->frame_msg, iusc_ctrl_ugv_motion_controller->can_id, iusc_ctrl_ugv_motion_controller->target_speed, iusc_ctrl_ugv_motion_controller->target_heading, iusc_ctrl_ugv_motion_controller->current_heading, iusc_ctrl_ugv_motion_controller->heart, iusc_ctrl_ugv_motion_controller->crc);
}

/**
 * @brief Encode a iusc_ctrl_ugv_motion_controller struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param iusc_ctrl_ugv_motion_controller C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_iusc_ctrl_ugv_motion_controller_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_iusc_ctrl_ugv_motion_controller_t* iusc_ctrl_ugv_motion_controller)
{
    return mavlink_msg_iusc_ctrl_ugv_motion_controller_pack_chan(system_id, component_id, chan, msg, iusc_ctrl_ugv_motion_controller->time_usec, iusc_ctrl_ugv_motion_controller->frame_msg, iusc_ctrl_ugv_motion_controller->can_id, iusc_ctrl_ugv_motion_controller->target_speed, iusc_ctrl_ugv_motion_controller->target_heading, iusc_ctrl_ugv_motion_controller->current_heading, iusc_ctrl_ugv_motion_controller->heart, iusc_ctrl_ugv_motion_controller->crc);
}

/**
 * @brief Send a iusc_ctrl_ugv_motion_controller message
 * @param chan MAVLink channel to send the message
 *
 * @param time_usec  时间戳
 * @param frame_msg  帧信息：为固定值0xcc
 * @param can_id  报文id：为固定值0x674
 * @param target_speed  目标车速
 * @param target_heading  目标航向角
 * @param current_heading  当前车辆航向角
 * @param heart  心跳计数
 * @param crc  CRC校验
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_iusc_ctrl_ugv_motion_controller_send(mavlink_channel_t chan, uint64_t time_usec, uint8_t frame_msg, uint32_t can_id, uint16_t target_speed, uint16_t target_heading, uint16_t current_heading, uint8_t heart, uint8_t crc)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_IUSC_CTRL_UGV_MOTION_CONTROLLER_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_uint32_t(buf, 8, can_id);
    _mav_put_uint16_t(buf, 12, target_speed);
    _mav_put_uint16_t(buf, 14, target_heading);
    _mav_put_uint16_t(buf, 16, current_heading);
    _mav_put_uint8_t(buf, 18, frame_msg);
    _mav_put_uint8_t(buf, 19, heart);
    _mav_put_uint8_t(buf, 20, crc);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_IUSC_CTRL_UGV_MOTION_CONTROLLER, buf, MAVLINK_MSG_ID_IUSC_CTRL_UGV_MOTION_CONTROLLER_MIN_LEN, MAVLINK_MSG_ID_IUSC_CTRL_UGV_MOTION_CONTROLLER_LEN, MAVLINK_MSG_ID_IUSC_CTRL_UGV_MOTION_CONTROLLER_CRC);
#else
    mavlink_iusc_ctrl_ugv_motion_controller_t packet;
    packet.time_usec = time_usec;
    packet.can_id = can_id;
    packet.target_speed = target_speed;
    packet.target_heading = target_heading;
    packet.current_heading = current_heading;
    packet.frame_msg = frame_msg;
    packet.heart = heart;
    packet.crc = crc;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_IUSC_CTRL_UGV_MOTION_CONTROLLER, (const char *)&packet, MAVLINK_MSG_ID_IUSC_CTRL_UGV_MOTION_CONTROLLER_MIN_LEN, MAVLINK_MSG_ID_IUSC_CTRL_UGV_MOTION_CONTROLLER_LEN, MAVLINK_MSG_ID_IUSC_CTRL_UGV_MOTION_CONTROLLER_CRC);
#endif
}

/**
 * @brief Send a iusc_ctrl_ugv_motion_controller message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_iusc_ctrl_ugv_motion_controller_send_struct(mavlink_channel_t chan, const mavlink_iusc_ctrl_ugv_motion_controller_t* iusc_ctrl_ugv_motion_controller)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_iusc_ctrl_ugv_motion_controller_send(chan, iusc_ctrl_ugv_motion_controller->time_usec, iusc_ctrl_ugv_motion_controller->frame_msg, iusc_ctrl_ugv_motion_controller->can_id, iusc_ctrl_ugv_motion_controller->target_speed, iusc_ctrl_ugv_motion_controller->target_heading, iusc_ctrl_ugv_motion_controller->current_heading, iusc_ctrl_ugv_motion_controller->heart, iusc_ctrl_ugv_motion_controller->crc);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_IUSC_CTRL_UGV_MOTION_CONTROLLER, (const char *)iusc_ctrl_ugv_motion_controller, MAVLINK_MSG_ID_IUSC_CTRL_UGV_MOTION_CONTROLLER_MIN_LEN, MAVLINK_MSG_ID_IUSC_CTRL_UGV_MOTION_CONTROLLER_LEN, MAVLINK_MSG_ID_IUSC_CTRL_UGV_MOTION_CONTROLLER_CRC);
#endif
}

#if MAVLINK_MSG_ID_IUSC_CTRL_UGV_MOTION_CONTROLLER_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_iusc_ctrl_ugv_motion_controller_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t time_usec, uint8_t frame_msg, uint32_t can_id, uint16_t target_speed, uint16_t target_heading, uint16_t current_heading, uint8_t heart, uint8_t crc)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_uint32_t(buf, 8, can_id);
    _mav_put_uint16_t(buf, 12, target_speed);
    _mav_put_uint16_t(buf, 14, target_heading);
    _mav_put_uint16_t(buf, 16, current_heading);
    _mav_put_uint8_t(buf, 18, frame_msg);
    _mav_put_uint8_t(buf, 19, heart);
    _mav_put_uint8_t(buf, 20, crc);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_IUSC_CTRL_UGV_MOTION_CONTROLLER, buf, MAVLINK_MSG_ID_IUSC_CTRL_UGV_MOTION_CONTROLLER_MIN_LEN, MAVLINK_MSG_ID_IUSC_CTRL_UGV_MOTION_CONTROLLER_LEN, MAVLINK_MSG_ID_IUSC_CTRL_UGV_MOTION_CONTROLLER_CRC);
#else
    mavlink_iusc_ctrl_ugv_motion_controller_t *packet = (mavlink_iusc_ctrl_ugv_motion_controller_t *)msgbuf;
    packet->time_usec = time_usec;
    packet->can_id = can_id;
    packet->target_speed = target_speed;
    packet->target_heading = target_heading;
    packet->current_heading = current_heading;
    packet->frame_msg = frame_msg;
    packet->heart = heart;
    packet->crc = crc;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_IUSC_CTRL_UGV_MOTION_CONTROLLER, (const char *)packet, MAVLINK_MSG_ID_IUSC_CTRL_UGV_MOTION_CONTROLLER_MIN_LEN, MAVLINK_MSG_ID_IUSC_CTRL_UGV_MOTION_CONTROLLER_LEN, MAVLINK_MSG_ID_IUSC_CTRL_UGV_MOTION_CONTROLLER_CRC);
#endif
}
#endif

#endif

// MESSAGE IUSC_CTRL_UGV_MOTION_CONTROLLER UNPACKING


/**
 * @brief Get field time_usec from iusc_ctrl_ugv_motion_controller message
 *
 * @return  时间戳
 */
static inline uint64_t mavlink_msg_iusc_ctrl_ugv_motion_controller_get_time_usec(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field frame_msg from iusc_ctrl_ugv_motion_controller message
 *
 * @return  帧信息：为固定值0xcc
 */
static inline uint8_t mavlink_msg_iusc_ctrl_ugv_motion_controller_get_frame_msg(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  18);
}

/**
 * @brief Get field can_id from iusc_ctrl_ugv_motion_controller message
 *
 * @return  报文id：为固定值0x674
 */
static inline uint32_t mavlink_msg_iusc_ctrl_ugv_motion_controller_get_can_id(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  8);
}

/**
 * @brief Get field target_speed from iusc_ctrl_ugv_motion_controller message
 *
 * @return  目标车速
 */
static inline uint16_t mavlink_msg_iusc_ctrl_ugv_motion_controller_get_target_speed(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  12);
}

/**
 * @brief Get field target_heading from iusc_ctrl_ugv_motion_controller message
 *
 * @return  目标航向角
 */
static inline uint16_t mavlink_msg_iusc_ctrl_ugv_motion_controller_get_target_heading(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  14);
}

/**
 * @brief Get field current_heading from iusc_ctrl_ugv_motion_controller message
 *
 * @return  当前车辆航向角
 */
static inline uint16_t mavlink_msg_iusc_ctrl_ugv_motion_controller_get_current_heading(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  16);
}

/**
 * @brief Get field heart from iusc_ctrl_ugv_motion_controller message
 *
 * @return  心跳计数
 */
static inline uint8_t mavlink_msg_iusc_ctrl_ugv_motion_controller_get_heart(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  19);
}

/**
 * @brief Get field crc from iusc_ctrl_ugv_motion_controller message
 *
 * @return  CRC校验
 */
static inline uint8_t mavlink_msg_iusc_ctrl_ugv_motion_controller_get_crc(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  20);
}

/**
 * @brief Decode a iusc_ctrl_ugv_motion_controller message into a struct
 *
 * @param msg The message to decode
 * @param iusc_ctrl_ugv_motion_controller C-struct to decode the message contents into
 */
static inline void mavlink_msg_iusc_ctrl_ugv_motion_controller_decode(const mavlink_message_t* msg, mavlink_iusc_ctrl_ugv_motion_controller_t* iusc_ctrl_ugv_motion_controller)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    iusc_ctrl_ugv_motion_controller->time_usec = mavlink_msg_iusc_ctrl_ugv_motion_controller_get_time_usec(msg);
    iusc_ctrl_ugv_motion_controller->can_id = mavlink_msg_iusc_ctrl_ugv_motion_controller_get_can_id(msg);
    iusc_ctrl_ugv_motion_controller->target_speed = mavlink_msg_iusc_ctrl_ugv_motion_controller_get_target_speed(msg);
    iusc_ctrl_ugv_motion_controller->target_heading = mavlink_msg_iusc_ctrl_ugv_motion_controller_get_target_heading(msg);
    iusc_ctrl_ugv_motion_controller->current_heading = mavlink_msg_iusc_ctrl_ugv_motion_controller_get_current_heading(msg);
    iusc_ctrl_ugv_motion_controller->frame_msg = mavlink_msg_iusc_ctrl_ugv_motion_controller_get_frame_msg(msg);
    iusc_ctrl_ugv_motion_controller->heart = mavlink_msg_iusc_ctrl_ugv_motion_controller_get_heart(msg);
    iusc_ctrl_ugv_motion_controller->crc = mavlink_msg_iusc_ctrl_ugv_motion_controller_get_crc(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_IUSC_CTRL_UGV_MOTION_CONTROLLER_LEN? msg->len : MAVLINK_MSG_ID_IUSC_CTRL_UGV_MOTION_CONTROLLER_LEN;
        memset(iusc_ctrl_ugv_motion_controller, 0, MAVLINK_MSG_ID_IUSC_CTRL_UGV_MOTION_CONTROLLER_LEN);
    memcpy(iusc_ctrl_ugv_motion_controller, _MAV_PAYLOAD(msg), len);
#endif
}
