#pragma once
// MESSAGE IUSC_CTRL_UGV_DISPLAY_CONTROLLER PACKING

#define MAVLINK_MSG_ID_IUSC_CTRL_UGV_DISPLAY_CONTROLLER 13032


typedef struct __mavlink_iusc_ctrl_ugv_display_controller_t {
 uint64_t time_usec; /*<  时间戳*/
 uint8_t state; /*<  模式判定:0x00：信息无人车;0x01：火情无人车*/
 uint8_t enable; /*<  是否显示*/
 uint8_t char1; /*<  第1个字符*/
 uint8_t char2; /*<  第2个字符*/
 uint8_t char3; /*<  第3个字符*/
 uint8_t char4; /*<  第4个字符*/
 uint8_t char5; /*<  第5个字符*/
} mavlink_iusc_ctrl_ugv_display_controller_t;

#define MAVLINK_MSG_ID_IUSC_CTRL_UGV_DISPLAY_CONTROLLER_LEN 15
#define MAVLINK_MSG_ID_IUSC_CTRL_UGV_DISPLAY_CONTROLLER_MIN_LEN 15
#define MAVLINK_MSG_ID_13032_LEN 15
#define MAVLINK_MSG_ID_13032_MIN_LEN 15

#define MAVLINK_MSG_ID_IUSC_CTRL_UGV_DISPLAY_CONTROLLER_CRC 224
#define MAVLINK_MSG_ID_13032_CRC 224



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_IUSC_CTRL_UGV_DISPLAY_CONTROLLER { \
    13032, \
    "IUSC_CTRL_UGV_DISPLAY_CONTROLLER", \
    8, \
    {  { "time_usec", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_iusc_ctrl_ugv_display_controller_t, time_usec) }, \
         { "state", NULL, MAVLINK_TYPE_UINT8_T, 0, 8, offsetof(mavlink_iusc_ctrl_ugv_display_controller_t, state) }, \
         { "enable", NULL, MAVLINK_TYPE_UINT8_T, 0, 9, offsetof(mavlink_iusc_ctrl_ugv_display_controller_t, enable) }, \
         { "char1", NULL, MAVLINK_TYPE_UINT8_T, 0, 10, offsetof(mavlink_iusc_ctrl_ugv_display_controller_t, char1) }, \
         { "char2", NULL, MAVLINK_TYPE_UINT8_T, 0, 11, offsetof(mavlink_iusc_ctrl_ugv_display_controller_t, char2) }, \
         { "char3", NULL, MAVLINK_TYPE_UINT8_T, 0, 12, offsetof(mavlink_iusc_ctrl_ugv_display_controller_t, char3) }, \
         { "char4", NULL, MAVLINK_TYPE_UINT8_T, 0, 13, offsetof(mavlink_iusc_ctrl_ugv_display_controller_t, char4) }, \
         { "char5", NULL, MAVLINK_TYPE_UINT8_T, 0, 14, offsetof(mavlink_iusc_ctrl_ugv_display_controller_t, char5) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_IUSC_CTRL_UGV_DISPLAY_CONTROLLER { \
    "IUSC_CTRL_UGV_DISPLAY_CONTROLLER", \
    8, \
    {  { "time_usec", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_iusc_ctrl_ugv_display_controller_t, time_usec) }, \
         { "state", NULL, MAVLINK_TYPE_UINT8_T, 0, 8, offsetof(mavlink_iusc_ctrl_ugv_display_controller_t, state) }, \
         { "enable", NULL, MAVLINK_TYPE_UINT8_T, 0, 9, offsetof(mavlink_iusc_ctrl_ugv_display_controller_t, enable) }, \
         { "char1", NULL, MAVLINK_TYPE_UINT8_T, 0, 10, offsetof(mavlink_iusc_ctrl_ugv_display_controller_t, char1) }, \
         { "char2", NULL, MAVLINK_TYPE_UINT8_T, 0, 11, offsetof(mavlink_iusc_ctrl_ugv_display_controller_t, char2) }, \
         { "char3", NULL, MAVLINK_TYPE_UINT8_T, 0, 12, offsetof(mavlink_iusc_ctrl_ugv_display_controller_t, char3) }, \
         { "char4", NULL, MAVLINK_TYPE_UINT8_T, 0, 13, offsetof(mavlink_iusc_ctrl_ugv_display_controller_t, char4) }, \
         { "char5", NULL, MAVLINK_TYPE_UINT8_T, 0, 14, offsetof(mavlink_iusc_ctrl_ugv_display_controller_t, char5) }, \
         } \
}
#endif

/**
 * @brief Pack a iusc_ctrl_ugv_display_controller message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_usec  时间戳
 * @param state  模式判定:0x00：信息无人车;0x01：火情无人车
 * @param enable  是否显示
 * @param char1  第1个字符
 * @param char2  第2个字符
 * @param char3  第3个字符
 * @param char4  第4个字符
 * @param char5  第5个字符
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_iusc_ctrl_ugv_display_controller_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint64_t time_usec, uint8_t state, uint8_t enable, uint8_t char1, uint8_t char2, uint8_t char3, uint8_t char4, uint8_t char5)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_IUSC_CTRL_UGV_DISPLAY_CONTROLLER_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_uint8_t(buf, 8, state);
    _mav_put_uint8_t(buf, 9, enable);
    _mav_put_uint8_t(buf, 10, char1);
    _mav_put_uint8_t(buf, 11, char2);
    _mav_put_uint8_t(buf, 12, char3);
    _mav_put_uint8_t(buf, 13, char4);
    _mav_put_uint8_t(buf, 14, char5);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_IUSC_CTRL_UGV_DISPLAY_CONTROLLER_LEN);
#else
    mavlink_iusc_ctrl_ugv_display_controller_t packet;
    packet.time_usec = time_usec;
    packet.state = state;
    packet.enable = enable;
    packet.char1 = char1;
    packet.char2 = char2;
    packet.char3 = char3;
    packet.char4 = char4;
    packet.char5 = char5;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_IUSC_CTRL_UGV_DISPLAY_CONTROLLER_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_IUSC_CTRL_UGV_DISPLAY_CONTROLLER;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_IUSC_CTRL_UGV_DISPLAY_CONTROLLER_MIN_LEN, MAVLINK_MSG_ID_IUSC_CTRL_UGV_DISPLAY_CONTROLLER_LEN, MAVLINK_MSG_ID_IUSC_CTRL_UGV_DISPLAY_CONTROLLER_CRC);
}

/**
 * @brief Pack a iusc_ctrl_ugv_display_controller message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param time_usec  时间戳
 * @param state  模式判定:0x00：信息无人车;0x01：火情无人车
 * @param enable  是否显示
 * @param char1  第1个字符
 * @param char2  第2个字符
 * @param char3  第3个字符
 * @param char4  第4个字符
 * @param char5  第5个字符
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_iusc_ctrl_ugv_display_controller_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint64_t time_usec,uint8_t state,uint8_t enable,uint8_t char1,uint8_t char2,uint8_t char3,uint8_t char4,uint8_t char5)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_IUSC_CTRL_UGV_DISPLAY_CONTROLLER_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_uint8_t(buf, 8, state);
    _mav_put_uint8_t(buf, 9, enable);
    _mav_put_uint8_t(buf, 10, char1);
    _mav_put_uint8_t(buf, 11, char2);
    _mav_put_uint8_t(buf, 12, char3);
    _mav_put_uint8_t(buf, 13, char4);
    _mav_put_uint8_t(buf, 14, char5);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_IUSC_CTRL_UGV_DISPLAY_CONTROLLER_LEN);
#else
    mavlink_iusc_ctrl_ugv_display_controller_t packet;
    packet.time_usec = time_usec;
    packet.state = state;
    packet.enable = enable;
    packet.char1 = char1;
    packet.char2 = char2;
    packet.char3 = char3;
    packet.char4 = char4;
    packet.char5 = char5;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_IUSC_CTRL_UGV_DISPLAY_CONTROLLER_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_IUSC_CTRL_UGV_DISPLAY_CONTROLLER;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_IUSC_CTRL_UGV_DISPLAY_CONTROLLER_MIN_LEN, MAVLINK_MSG_ID_IUSC_CTRL_UGV_DISPLAY_CONTROLLER_LEN, MAVLINK_MSG_ID_IUSC_CTRL_UGV_DISPLAY_CONTROLLER_CRC);
}

/**
 * @brief Encode a iusc_ctrl_ugv_display_controller struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param iusc_ctrl_ugv_display_controller C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_iusc_ctrl_ugv_display_controller_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_iusc_ctrl_ugv_display_controller_t* iusc_ctrl_ugv_display_controller)
{
    return mavlink_msg_iusc_ctrl_ugv_display_controller_pack(system_id, component_id, msg, iusc_ctrl_ugv_display_controller->time_usec, iusc_ctrl_ugv_display_controller->state, iusc_ctrl_ugv_display_controller->enable, iusc_ctrl_ugv_display_controller->char1, iusc_ctrl_ugv_display_controller->char2, iusc_ctrl_ugv_display_controller->char3, iusc_ctrl_ugv_display_controller->char4, iusc_ctrl_ugv_display_controller->char5);
}

/**
 * @brief Encode a iusc_ctrl_ugv_display_controller struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param iusc_ctrl_ugv_display_controller C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_iusc_ctrl_ugv_display_controller_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_iusc_ctrl_ugv_display_controller_t* iusc_ctrl_ugv_display_controller)
{
    return mavlink_msg_iusc_ctrl_ugv_display_controller_pack_chan(system_id, component_id, chan, msg, iusc_ctrl_ugv_display_controller->time_usec, iusc_ctrl_ugv_display_controller->state, iusc_ctrl_ugv_display_controller->enable, iusc_ctrl_ugv_display_controller->char1, iusc_ctrl_ugv_display_controller->char2, iusc_ctrl_ugv_display_controller->char3, iusc_ctrl_ugv_display_controller->char4, iusc_ctrl_ugv_display_controller->char5);
}

/**
 * @brief Send a iusc_ctrl_ugv_display_controller message
 * @param chan MAVLink channel to send the message
 *
 * @param time_usec  时间戳
 * @param state  模式判定:0x00：信息无人车;0x01：火情无人车
 * @param enable  是否显示
 * @param char1  第1个字符
 * @param char2  第2个字符
 * @param char3  第3个字符
 * @param char4  第4个字符
 * @param char5  第5个字符
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_iusc_ctrl_ugv_display_controller_send(mavlink_channel_t chan, uint64_t time_usec, uint8_t state, uint8_t enable, uint8_t char1, uint8_t char2, uint8_t char3, uint8_t char4, uint8_t char5)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_IUSC_CTRL_UGV_DISPLAY_CONTROLLER_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_uint8_t(buf, 8, state);
    _mav_put_uint8_t(buf, 9, enable);
    _mav_put_uint8_t(buf, 10, char1);
    _mav_put_uint8_t(buf, 11, char2);
    _mav_put_uint8_t(buf, 12, char3);
    _mav_put_uint8_t(buf, 13, char4);
    _mav_put_uint8_t(buf, 14, char5);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_IUSC_CTRL_UGV_DISPLAY_CONTROLLER, buf, MAVLINK_MSG_ID_IUSC_CTRL_UGV_DISPLAY_CONTROLLER_MIN_LEN, MAVLINK_MSG_ID_IUSC_CTRL_UGV_DISPLAY_CONTROLLER_LEN, MAVLINK_MSG_ID_IUSC_CTRL_UGV_DISPLAY_CONTROLLER_CRC);
#else
    mavlink_iusc_ctrl_ugv_display_controller_t packet;
    packet.time_usec = time_usec;
    packet.state = state;
    packet.enable = enable;
    packet.char1 = char1;
    packet.char2 = char2;
    packet.char3 = char3;
    packet.char4 = char4;
    packet.char5 = char5;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_IUSC_CTRL_UGV_DISPLAY_CONTROLLER, (const char *)&packet, MAVLINK_MSG_ID_IUSC_CTRL_UGV_DISPLAY_CONTROLLER_MIN_LEN, MAVLINK_MSG_ID_IUSC_CTRL_UGV_DISPLAY_CONTROLLER_LEN, MAVLINK_MSG_ID_IUSC_CTRL_UGV_DISPLAY_CONTROLLER_CRC);
#endif
}

/**
 * @brief Send a iusc_ctrl_ugv_display_controller message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_iusc_ctrl_ugv_display_controller_send_struct(mavlink_channel_t chan, const mavlink_iusc_ctrl_ugv_display_controller_t* iusc_ctrl_ugv_display_controller)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_iusc_ctrl_ugv_display_controller_send(chan, iusc_ctrl_ugv_display_controller->time_usec, iusc_ctrl_ugv_display_controller->state, iusc_ctrl_ugv_display_controller->enable, iusc_ctrl_ugv_display_controller->char1, iusc_ctrl_ugv_display_controller->char2, iusc_ctrl_ugv_display_controller->char3, iusc_ctrl_ugv_display_controller->char4, iusc_ctrl_ugv_display_controller->char5);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_IUSC_CTRL_UGV_DISPLAY_CONTROLLER, (const char *)iusc_ctrl_ugv_display_controller, MAVLINK_MSG_ID_IUSC_CTRL_UGV_DISPLAY_CONTROLLER_MIN_LEN, MAVLINK_MSG_ID_IUSC_CTRL_UGV_DISPLAY_CONTROLLER_LEN, MAVLINK_MSG_ID_IUSC_CTRL_UGV_DISPLAY_CONTROLLER_CRC);
#endif
}

#if MAVLINK_MSG_ID_IUSC_CTRL_UGV_DISPLAY_CONTROLLER_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_iusc_ctrl_ugv_display_controller_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t time_usec, uint8_t state, uint8_t enable, uint8_t char1, uint8_t char2, uint8_t char3, uint8_t char4, uint8_t char5)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_uint8_t(buf, 8, state);
    _mav_put_uint8_t(buf, 9, enable);
    _mav_put_uint8_t(buf, 10, char1);
    _mav_put_uint8_t(buf, 11, char2);
    _mav_put_uint8_t(buf, 12, char3);
    _mav_put_uint8_t(buf, 13, char4);
    _mav_put_uint8_t(buf, 14, char5);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_IUSC_CTRL_UGV_DISPLAY_CONTROLLER, buf, MAVLINK_MSG_ID_IUSC_CTRL_UGV_DISPLAY_CONTROLLER_MIN_LEN, MAVLINK_MSG_ID_IUSC_CTRL_UGV_DISPLAY_CONTROLLER_LEN, MAVLINK_MSG_ID_IUSC_CTRL_UGV_DISPLAY_CONTROLLER_CRC);
#else
    mavlink_iusc_ctrl_ugv_display_controller_t *packet = (mavlink_iusc_ctrl_ugv_display_controller_t *)msgbuf;
    packet->time_usec = time_usec;
    packet->state = state;
    packet->enable = enable;
    packet->char1 = char1;
    packet->char2 = char2;
    packet->char3 = char3;
    packet->char4 = char4;
    packet->char5 = char5;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_IUSC_CTRL_UGV_DISPLAY_CONTROLLER, (const char *)packet, MAVLINK_MSG_ID_IUSC_CTRL_UGV_DISPLAY_CONTROLLER_MIN_LEN, MAVLINK_MSG_ID_IUSC_CTRL_UGV_DISPLAY_CONTROLLER_LEN, MAVLINK_MSG_ID_IUSC_CTRL_UGV_DISPLAY_CONTROLLER_CRC);
#endif
}
#endif

#endif

// MESSAGE IUSC_CTRL_UGV_DISPLAY_CONTROLLER UNPACKING


/**
 * @brief Get field time_usec from iusc_ctrl_ugv_display_controller message
 *
 * @return  时间戳
 */
static inline uint64_t mavlink_msg_iusc_ctrl_ugv_display_controller_get_time_usec(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field state from iusc_ctrl_ugv_display_controller message
 *
 * @return  模式判定:0x00：信息无人车;0x01：火情无人车
 */
static inline uint8_t mavlink_msg_iusc_ctrl_ugv_display_controller_get_state(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  8);
}

/**
 * @brief Get field enable from iusc_ctrl_ugv_display_controller message
 *
 * @return  是否显示
 */
static inline uint8_t mavlink_msg_iusc_ctrl_ugv_display_controller_get_enable(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  9);
}

/**
 * @brief Get field char1 from iusc_ctrl_ugv_display_controller message
 *
 * @return  第1个字符
 */
static inline uint8_t mavlink_msg_iusc_ctrl_ugv_display_controller_get_char1(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  10);
}

/**
 * @brief Get field char2 from iusc_ctrl_ugv_display_controller message
 *
 * @return  第2个字符
 */
static inline uint8_t mavlink_msg_iusc_ctrl_ugv_display_controller_get_char2(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  11);
}

/**
 * @brief Get field char3 from iusc_ctrl_ugv_display_controller message
 *
 * @return  第3个字符
 */
static inline uint8_t mavlink_msg_iusc_ctrl_ugv_display_controller_get_char3(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  12);
}

/**
 * @brief Get field char4 from iusc_ctrl_ugv_display_controller message
 *
 * @return  第4个字符
 */
static inline uint8_t mavlink_msg_iusc_ctrl_ugv_display_controller_get_char4(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  13);
}

/**
 * @brief Get field char5 from iusc_ctrl_ugv_display_controller message
 *
 * @return  第5个字符
 */
static inline uint8_t mavlink_msg_iusc_ctrl_ugv_display_controller_get_char5(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  14);
}

/**
 * @brief Decode a iusc_ctrl_ugv_display_controller message into a struct
 *
 * @param msg The message to decode
 * @param iusc_ctrl_ugv_display_controller C-struct to decode the message contents into
 */
static inline void mavlink_msg_iusc_ctrl_ugv_display_controller_decode(const mavlink_message_t* msg, mavlink_iusc_ctrl_ugv_display_controller_t* iusc_ctrl_ugv_display_controller)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    iusc_ctrl_ugv_display_controller->time_usec = mavlink_msg_iusc_ctrl_ugv_display_controller_get_time_usec(msg);
    iusc_ctrl_ugv_display_controller->state = mavlink_msg_iusc_ctrl_ugv_display_controller_get_state(msg);
    iusc_ctrl_ugv_display_controller->enable = mavlink_msg_iusc_ctrl_ugv_display_controller_get_enable(msg);
    iusc_ctrl_ugv_display_controller->char1 = mavlink_msg_iusc_ctrl_ugv_display_controller_get_char1(msg);
    iusc_ctrl_ugv_display_controller->char2 = mavlink_msg_iusc_ctrl_ugv_display_controller_get_char2(msg);
    iusc_ctrl_ugv_display_controller->char3 = mavlink_msg_iusc_ctrl_ugv_display_controller_get_char3(msg);
    iusc_ctrl_ugv_display_controller->char4 = mavlink_msg_iusc_ctrl_ugv_display_controller_get_char4(msg);
    iusc_ctrl_ugv_display_controller->char5 = mavlink_msg_iusc_ctrl_ugv_display_controller_get_char5(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_IUSC_CTRL_UGV_DISPLAY_CONTROLLER_LEN? msg->len : MAVLINK_MSG_ID_IUSC_CTRL_UGV_DISPLAY_CONTROLLER_LEN;
        memset(iusc_ctrl_ugv_display_controller, 0, MAVLINK_MSG_ID_IUSC_CTRL_UGV_DISPLAY_CONTROLLER_LEN);
    memcpy(iusc_ctrl_ugv_display_controller, _MAV_PAYLOAD(msg), len);
#endif
}
