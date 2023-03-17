#pragma once
// MESSAGE IUSC_CTRL_OBSTACLE_DYN PACKING

#define MAVLINK_MSG_ID_IUSC_CTRL_OBSTACLE_DYN 13001


typedef struct __mavlink_iusc_ctrl_obstacle_dyn_t {
 uint64_t time_usec; /*<  时间戳*/
 float control0; /*<  电机0转速*/
 float control1; /*<  电机0转速*/
 float control2; /*<  电机0转速*/
 float control3; /*<  电机0转速*/
 uint8_t state; /*<  电机状态*/
} mavlink_iusc_ctrl_obstacle_dyn_t;

#define MAVLINK_MSG_ID_IUSC_CTRL_OBSTACLE_DYN_LEN 25
#define MAVLINK_MSG_ID_IUSC_CTRL_OBSTACLE_DYN_MIN_LEN 25
#define MAVLINK_MSG_ID_13001_LEN 25
#define MAVLINK_MSG_ID_13001_MIN_LEN 25

#define MAVLINK_MSG_ID_IUSC_CTRL_OBSTACLE_DYN_CRC 79
#define MAVLINK_MSG_ID_13001_CRC 79



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_IUSC_CTRL_OBSTACLE_DYN { \
    13001, \
    "IUSC_CTRL_OBSTACLE_DYN", \
    6, \
    {  { "time_usec", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_iusc_ctrl_obstacle_dyn_t, time_usec) }, \
         { "state", NULL, MAVLINK_TYPE_UINT8_T, 0, 24, offsetof(mavlink_iusc_ctrl_obstacle_dyn_t, state) }, \
         { "control0", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_iusc_ctrl_obstacle_dyn_t, control0) }, \
         { "control1", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_iusc_ctrl_obstacle_dyn_t, control1) }, \
         { "control2", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_iusc_ctrl_obstacle_dyn_t, control2) }, \
         { "control3", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_iusc_ctrl_obstacle_dyn_t, control3) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_IUSC_CTRL_OBSTACLE_DYN { \
    "IUSC_CTRL_OBSTACLE_DYN", \
    6, \
    {  { "time_usec", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_iusc_ctrl_obstacle_dyn_t, time_usec) }, \
         { "state", NULL, MAVLINK_TYPE_UINT8_T, 0, 24, offsetof(mavlink_iusc_ctrl_obstacle_dyn_t, state) }, \
         { "control0", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_iusc_ctrl_obstacle_dyn_t, control0) }, \
         { "control1", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_iusc_ctrl_obstacle_dyn_t, control1) }, \
         { "control2", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_iusc_ctrl_obstacle_dyn_t, control2) }, \
         { "control3", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_iusc_ctrl_obstacle_dyn_t, control3) }, \
         } \
}
#endif

/**
 * @brief Pack a iusc_ctrl_obstacle_dyn message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_usec  时间戳
 * @param state  电机状态
 * @param control0  电机0转速
 * @param control1  电机0转速
 * @param control2  电机0转速
 * @param control3  电机0转速
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_iusc_ctrl_obstacle_dyn_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint64_t time_usec, uint8_t state, float control0, float control1, float control2, float control3)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_IUSC_CTRL_OBSTACLE_DYN_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_float(buf, 8, control0);
    _mav_put_float(buf, 12, control1);
    _mav_put_float(buf, 16, control2);
    _mav_put_float(buf, 20, control3);
    _mav_put_uint8_t(buf, 24, state);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_IUSC_CTRL_OBSTACLE_DYN_LEN);
#else
    mavlink_iusc_ctrl_obstacle_dyn_t packet;
    packet.time_usec = time_usec;
    packet.control0 = control0;
    packet.control1 = control1;
    packet.control2 = control2;
    packet.control3 = control3;
    packet.state = state;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_IUSC_CTRL_OBSTACLE_DYN_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_IUSC_CTRL_OBSTACLE_DYN;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_IUSC_CTRL_OBSTACLE_DYN_MIN_LEN, MAVLINK_MSG_ID_IUSC_CTRL_OBSTACLE_DYN_LEN, MAVLINK_MSG_ID_IUSC_CTRL_OBSTACLE_DYN_CRC);
}

/**
 * @brief Pack a iusc_ctrl_obstacle_dyn message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param time_usec  时间戳
 * @param state  电机状态
 * @param control0  电机0转速
 * @param control1  电机0转速
 * @param control2  电机0转速
 * @param control3  电机0转速
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_iusc_ctrl_obstacle_dyn_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint64_t time_usec,uint8_t state,float control0,float control1,float control2,float control3)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_IUSC_CTRL_OBSTACLE_DYN_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_float(buf, 8, control0);
    _mav_put_float(buf, 12, control1);
    _mav_put_float(buf, 16, control2);
    _mav_put_float(buf, 20, control3);
    _mav_put_uint8_t(buf, 24, state);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_IUSC_CTRL_OBSTACLE_DYN_LEN);
#else
    mavlink_iusc_ctrl_obstacle_dyn_t packet;
    packet.time_usec = time_usec;
    packet.control0 = control0;
    packet.control1 = control1;
    packet.control2 = control2;
    packet.control3 = control3;
    packet.state = state;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_IUSC_CTRL_OBSTACLE_DYN_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_IUSC_CTRL_OBSTACLE_DYN;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_IUSC_CTRL_OBSTACLE_DYN_MIN_LEN, MAVLINK_MSG_ID_IUSC_CTRL_OBSTACLE_DYN_LEN, MAVLINK_MSG_ID_IUSC_CTRL_OBSTACLE_DYN_CRC);
}

/**
 * @brief Encode a iusc_ctrl_obstacle_dyn struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param iusc_ctrl_obstacle_dyn C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_iusc_ctrl_obstacle_dyn_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_iusc_ctrl_obstacle_dyn_t* iusc_ctrl_obstacle_dyn)
{
    return mavlink_msg_iusc_ctrl_obstacle_dyn_pack(system_id, component_id, msg, iusc_ctrl_obstacle_dyn->time_usec, iusc_ctrl_obstacle_dyn->state, iusc_ctrl_obstacle_dyn->control0, iusc_ctrl_obstacle_dyn->control1, iusc_ctrl_obstacle_dyn->control2, iusc_ctrl_obstacle_dyn->control3);
}

/**
 * @brief Encode a iusc_ctrl_obstacle_dyn struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param iusc_ctrl_obstacle_dyn C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_iusc_ctrl_obstacle_dyn_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_iusc_ctrl_obstacle_dyn_t* iusc_ctrl_obstacle_dyn)
{
    return mavlink_msg_iusc_ctrl_obstacle_dyn_pack_chan(system_id, component_id, chan, msg, iusc_ctrl_obstacle_dyn->time_usec, iusc_ctrl_obstacle_dyn->state, iusc_ctrl_obstacle_dyn->control0, iusc_ctrl_obstacle_dyn->control1, iusc_ctrl_obstacle_dyn->control2, iusc_ctrl_obstacle_dyn->control3);
}

/**
 * @brief Send a iusc_ctrl_obstacle_dyn message
 * @param chan MAVLink channel to send the message
 *
 * @param time_usec  时间戳
 * @param state  电机状态
 * @param control0  电机0转速
 * @param control1  电机0转速
 * @param control2  电机0转速
 * @param control3  电机0转速
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_iusc_ctrl_obstacle_dyn_send(mavlink_channel_t chan, uint64_t time_usec, uint8_t state, float control0, float control1, float control2, float control3)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_IUSC_CTRL_OBSTACLE_DYN_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_float(buf, 8, control0);
    _mav_put_float(buf, 12, control1);
    _mav_put_float(buf, 16, control2);
    _mav_put_float(buf, 20, control3);
    _mav_put_uint8_t(buf, 24, state);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_IUSC_CTRL_OBSTACLE_DYN, buf, MAVLINK_MSG_ID_IUSC_CTRL_OBSTACLE_DYN_MIN_LEN, MAVLINK_MSG_ID_IUSC_CTRL_OBSTACLE_DYN_LEN, MAVLINK_MSG_ID_IUSC_CTRL_OBSTACLE_DYN_CRC);
#else
    mavlink_iusc_ctrl_obstacle_dyn_t packet;
    packet.time_usec = time_usec;
    packet.control0 = control0;
    packet.control1 = control1;
    packet.control2 = control2;
    packet.control3 = control3;
    packet.state = state;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_IUSC_CTRL_OBSTACLE_DYN, (const char *)&packet, MAVLINK_MSG_ID_IUSC_CTRL_OBSTACLE_DYN_MIN_LEN, MAVLINK_MSG_ID_IUSC_CTRL_OBSTACLE_DYN_LEN, MAVLINK_MSG_ID_IUSC_CTRL_OBSTACLE_DYN_CRC);
#endif
}

/**
 * @brief Send a iusc_ctrl_obstacle_dyn message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_iusc_ctrl_obstacle_dyn_send_struct(mavlink_channel_t chan, const mavlink_iusc_ctrl_obstacle_dyn_t* iusc_ctrl_obstacle_dyn)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_iusc_ctrl_obstacle_dyn_send(chan, iusc_ctrl_obstacle_dyn->time_usec, iusc_ctrl_obstacle_dyn->state, iusc_ctrl_obstacle_dyn->control0, iusc_ctrl_obstacle_dyn->control1, iusc_ctrl_obstacle_dyn->control2, iusc_ctrl_obstacle_dyn->control3);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_IUSC_CTRL_OBSTACLE_DYN, (const char *)iusc_ctrl_obstacle_dyn, MAVLINK_MSG_ID_IUSC_CTRL_OBSTACLE_DYN_MIN_LEN, MAVLINK_MSG_ID_IUSC_CTRL_OBSTACLE_DYN_LEN, MAVLINK_MSG_ID_IUSC_CTRL_OBSTACLE_DYN_CRC);
#endif
}

#if MAVLINK_MSG_ID_IUSC_CTRL_OBSTACLE_DYN_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_iusc_ctrl_obstacle_dyn_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t time_usec, uint8_t state, float control0, float control1, float control2, float control3)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_float(buf, 8, control0);
    _mav_put_float(buf, 12, control1);
    _mav_put_float(buf, 16, control2);
    _mav_put_float(buf, 20, control3);
    _mav_put_uint8_t(buf, 24, state);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_IUSC_CTRL_OBSTACLE_DYN, buf, MAVLINK_MSG_ID_IUSC_CTRL_OBSTACLE_DYN_MIN_LEN, MAVLINK_MSG_ID_IUSC_CTRL_OBSTACLE_DYN_LEN, MAVLINK_MSG_ID_IUSC_CTRL_OBSTACLE_DYN_CRC);
#else
    mavlink_iusc_ctrl_obstacle_dyn_t *packet = (mavlink_iusc_ctrl_obstacle_dyn_t *)msgbuf;
    packet->time_usec = time_usec;
    packet->control0 = control0;
    packet->control1 = control1;
    packet->control2 = control2;
    packet->control3 = control3;
    packet->state = state;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_IUSC_CTRL_OBSTACLE_DYN, (const char *)packet, MAVLINK_MSG_ID_IUSC_CTRL_OBSTACLE_DYN_MIN_LEN, MAVLINK_MSG_ID_IUSC_CTRL_OBSTACLE_DYN_LEN, MAVLINK_MSG_ID_IUSC_CTRL_OBSTACLE_DYN_CRC);
#endif
}
#endif

#endif

// MESSAGE IUSC_CTRL_OBSTACLE_DYN UNPACKING


/**
 * @brief Get field time_usec from iusc_ctrl_obstacle_dyn message
 *
 * @return  时间戳
 */
static inline uint64_t mavlink_msg_iusc_ctrl_obstacle_dyn_get_time_usec(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field state from iusc_ctrl_obstacle_dyn message
 *
 * @return  电机状态
 */
static inline uint8_t mavlink_msg_iusc_ctrl_obstacle_dyn_get_state(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  24);
}

/**
 * @brief Get field control0 from iusc_ctrl_obstacle_dyn message
 *
 * @return  电机0转速
 */
static inline float mavlink_msg_iusc_ctrl_obstacle_dyn_get_control0(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field control1 from iusc_ctrl_obstacle_dyn message
 *
 * @return  电机0转速
 */
static inline float mavlink_msg_iusc_ctrl_obstacle_dyn_get_control1(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Get field control2 from iusc_ctrl_obstacle_dyn message
 *
 * @return  电机0转速
 */
static inline float mavlink_msg_iusc_ctrl_obstacle_dyn_get_control2(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  16);
}

/**
 * @brief Get field control3 from iusc_ctrl_obstacle_dyn message
 *
 * @return  电机0转速
 */
static inline float mavlink_msg_iusc_ctrl_obstacle_dyn_get_control3(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  20);
}

/**
 * @brief Decode a iusc_ctrl_obstacle_dyn message into a struct
 *
 * @param msg The message to decode
 * @param iusc_ctrl_obstacle_dyn C-struct to decode the message contents into
 */
static inline void mavlink_msg_iusc_ctrl_obstacle_dyn_decode(const mavlink_message_t* msg, mavlink_iusc_ctrl_obstacle_dyn_t* iusc_ctrl_obstacle_dyn)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    iusc_ctrl_obstacle_dyn->time_usec = mavlink_msg_iusc_ctrl_obstacle_dyn_get_time_usec(msg);
    iusc_ctrl_obstacle_dyn->control0 = mavlink_msg_iusc_ctrl_obstacle_dyn_get_control0(msg);
    iusc_ctrl_obstacle_dyn->control1 = mavlink_msg_iusc_ctrl_obstacle_dyn_get_control1(msg);
    iusc_ctrl_obstacle_dyn->control2 = mavlink_msg_iusc_ctrl_obstacle_dyn_get_control2(msg);
    iusc_ctrl_obstacle_dyn->control3 = mavlink_msg_iusc_ctrl_obstacle_dyn_get_control3(msg);
    iusc_ctrl_obstacle_dyn->state = mavlink_msg_iusc_ctrl_obstacle_dyn_get_state(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_IUSC_CTRL_OBSTACLE_DYN_LEN? msg->len : MAVLINK_MSG_ID_IUSC_CTRL_OBSTACLE_DYN_LEN;
        memset(iusc_ctrl_obstacle_dyn, 0, MAVLINK_MSG_ID_IUSC_CTRL_OBSTACLE_DYN_LEN);
    memcpy(iusc_ctrl_obstacle_dyn, _MAV_PAYLOAD(msg), len);
#endif
}
