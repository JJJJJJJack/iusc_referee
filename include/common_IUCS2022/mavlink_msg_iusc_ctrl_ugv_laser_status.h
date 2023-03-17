#pragma once
// MESSAGE IUSC_CTRL_UGV_LASER_STATUS PACKING

#define MAVLINK_MSG_ID_IUSC_CTRL_UGV_LASER_STATUS 13033


typedef struct __mavlink_iusc_ctrl_ugv_laser_status_t {
 uint64_t time_usec; /*<  时间戳*/
 uint8_t state; /*<  0x00：未接收到激光信号 0x01：当前处于信息无人车模式，且已接收到三个激光信号 0x02：当前处于火情无人车模式，且已接收到两个激光信号*/
} mavlink_iusc_ctrl_ugv_laser_status_t;

#define MAVLINK_MSG_ID_IUSC_CTRL_UGV_LASER_STATUS_LEN 9
#define MAVLINK_MSG_ID_IUSC_CTRL_UGV_LASER_STATUS_MIN_LEN 9
#define MAVLINK_MSG_ID_13033_LEN 9
#define MAVLINK_MSG_ID_13033_MIN_LEN 9

#define MAVLINK_MSG_ID_IUSC_CTRL_UGV_LASER_STATUS_CRC 42
#define MAVLINK_MSG_ID_13033_CRC 42



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_IUSC_CTRL_UGV_LASER_STATUS { \
    13033, \
    "IUSC_CTRL_UGV_LASER_STATUS", \
    2, \
    {  { "time_usec", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_iusc_ctrl_ugv_laser_status_t, time_usec) }, \
         { "state", NULL, MAVLINK_TYPE_UINT8_T, 0, 8, offsetof(mavlink_iusc_ctrl_ugv_laser_status_t, state) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_IUSC_CTRL_UGV_LASER_STATUS { \
    "IUSC_CTRL_UGV_LASER_STATUS", \
    2, \
    {  { "time_usec", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_iusc_ctrl_ugv_laser_status_t, time_usec) }, \
         { "state", NULL, MAVLINK_TYPE_UINT8_T, 0, 8, offsetof(mavlink_iusc_ctrl_ugv_laser_status_t, state) }, \
         } \
}
#endif

/**
 * @brief Pack a iusc_ctrl_ugv_laser_status message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_usec  时间戳
 * @param state  0x00：未接收到激光信号 0x01：当前处于信息无人车模式，且已接收到三个激光信号 0x02：当前处于火情无人车模式，且已接收到两个激光信号
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_iusc_ctrl_ugv_laser_status_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint64_t time_usec, uint8_t state)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_IUSC_CTRL_UGV_LASER_STATUS_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_uint8_t(buf, 8, state);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_IUSC_CTRL_UGV_LASER_STATUS_LEN);
#else
    mavlink_iusc_ctrl_ugv_laser_status_t packet;
    packet.time_usec = time_usec;
    packet.state = state;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_IUSC_CTRL_UGV_LASER_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_IUSC_CTRL_UGV_LASER_STATUS;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_IUSC_CTRL_UGV_LASER_STATUS_MIN_LEN, MAVLINK_MSG_ID_IUSC_CTRL_UGV_LASER_STATUS_LEN, MAVLINK_MSG_ID_IUSC_CTRL_UGV_LASER_STATUS_CRC);
}

/**
 * @brief Pack a iusc_ctrl_ugv_laser_status message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param time_usec  时间戳
 * @param state  0x00：未接收到激光信号 0x01：当前处于信息无人车模式，且已接收到三个激光信号 0x02：当前处于火情无人车模式，且已接收到两个激光信号
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_iusc_ctrl_ugv_laser_status_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint64_t time_usec,uint8_t state)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_IUSC_CTRL_UGV_LASER_STATUS_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_uint8_t(buf, 8, state);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_IUSC_CTRL_UGV_LASER_STATUS_LEN);
#else
    mavlink_iusc_ctrl_ugv_laser_status_t packet;
    packet.time_usec = time_usec;
    packet.state = state;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_IUSC_CTRL_UGV_LASER_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_IUSC_CTRL_UGV_LASER_STATUS;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_IUSC_CTRL_UGV_LASER_STATUS_MIN_LEN, MAVLINK_MSG_ID_IUSC_CTRL_UGV_LASER_STATUS_LEN, MAVLINK_MSG_ID_IUSC_CTRL_UGV_LASER_STATUS_CRC);
}

/**
 * @brief Encode a iusc_ctrl_ugv_laser_status struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param iusc_ctrl_ugv_laser_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_iusc_ctrl_ugv_laser_status_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_iusc_ctrl_ugv_laser_status_t* iusc_ctrl_ugv_laser_status)
{
    return mavlink_msg_iusc_ctrl_ugv_laser_status_pack(system_id, component_id, msg, iusc_ctrl_ugv_laser_status->time_usec, iusc_ctrl_ugv_laser_status->state);
}

/**
 * @brief Encode a iusc_ctrl_ugv_laser_status struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param iusc_ctrl_ugv_laser_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_iusc_ctrl_ugv_laser_status_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_iusc_ctrl_ugv_laser_status_t* iusc_ctrl_ugv_laser_status)
{
    return mavlink_msg_iusc_ctrl_ugv_laser_status_pack_chan(system_id, component_id, chan, msg, iusc_ctrl_ugv_laser_status->time_usec, iusc_ctrl_ugv_laser_status->state);
}

/**
 * @brief Send a iusc_ctrl_ugv_laser_status message
 * @param chan MAVLink channel to send the message
 *
 * @param time_usec  时间戳
 * @param state  0x00：未接收到激光信号 0x01：当前处于信息无人车模式，且已接收到三个激光信号 0x02：当前处于火情无人车模式，且已接收到两个激光信号
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_iusc_ctrl_ugv_laser_status_send(mavlink_channel_t chan, uint64_t time_usec, uint8_t state)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_IUSC_CTRL_UGV_LASER_STATUS_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_uint8_t(buf, 8, state);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_IUSC_CTRL_UGV_LASER_STATUS, buf, MAVLINK_MSG_ID_IUSC_CTRL_UGV_LASER_STATUS_MIN_LEN, MAVLINK_MSG_ID_IUSC_CTRL_UGV_LASER_STATUS_LEN, MAVLINK_MSG_ID_IUSC_CTRL_UGV_LASER_STATUS_CRC);
#else
    mavlink_iusc_ctrl_ugv_laser_status_t packet;
    packet.time_usec = time_usec;
    packet.state = state;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_IUSC_CTRL_UGV_LASER_STATUS, (const char *)&packet, MAVLINK_MSG_ID_IUSC_CTRL_UGV_LASER_STATUS_MIN_LEN, MAVLINK_MSG_ID_IUSC_CTRL_UGV_LASER_STATUS_LEN, MAVLINK_MSG_ID_IUSC_CTRL_UGV_LASER_STATUS_CRC);
#endif
}

/**
 * @brief Send a iusc_ctrl_ugv_laser_status message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_iusc_ctrl_ugv_laser_status_send_struct(mavlink_channel_t chan, const mavlink_iusc_ctrl_ugv_laser_status_t* iusc_ctrl_ugv_laser_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_iusc_ctrl_ugv_laser_status_send(chan, iusc_ctrl_ugv_laser_status->time_usec, iusc_ctrl_ugv_laser_status->state);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_IUSC_CTRL_UGV_LASER_STATUS, (const char *)iusc_ctrl_ugv_laser_status, MAVLINK_MSG_ID_IUSC_CTRL_UGV_LASER_STATUS_MIN_LEN, MAVLINK_MSG_ID_IUSC_CTRL_UGV_LASER_STATUS_LEN, MAVLINK_MSG_ID_IUSC_CTRL_UGV_LASER_STATUS_CRC);
#endif
}

#if MAVLINK_MSG_ID_IUSC_CTRL_UGV_LASER_STATUS_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_iusc_ctrl_ugv_laser_status_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t time_usec, uint8_t state)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_uint8_t(buf, 8, state);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_IUSC_CTRL_UGV_LASER_STATUS, buf, MAVLINK_MSG_ID_IUSC_CTRL_UGV_LASER_STATUS_MIN_LEN, MAVLINK_MSG_ID_IUSC_CTRL_UGV_LASER_STATUS_LEN, MAVLINK_MSG_ID_IUSC_CTRL_UGV_LASER_STATUS_CRC);
#else
    mavlink_iusc_ctrl_ugv_laser_status_t *packet = (mavlink_iusc_ctrl_ugv_laser_status_t *)msgbuf;
    packet->time_usec = time_usec;
    packet->state = state;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_IUSC_CTRL_UGV_LASER_STATUS, (const char *)packet, MAVLINK_MSG_ID_IUSC_CTRL_UGV_LASER_STATUS_MIN_LEN, MAVLINK_MSG_ID_IUSC_CTRL_UGV_LASER_STATUS_LEN, MAVLINK_MSG_ID_IUSC_CTRL_UGV_LASER_STATUS_CRC);
#endif
}
#endif

#endif

// MESSAGE IUSC_CTRL_UGV_LASER_STATUS UNPACKING


/**
 * @brief Get field time_usec from iusc_ctrl_ugv_laser_status message
 *
 * @return  时间戳
 */
static inline uint64_t mavlink_msg_iusc_ctrl_ugv_laser_status_get_time_usec(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field state from iusc_ctrl_ugv_laser_status message
 *
 * @return  0x00：未接收到激光信号 0x01：当前处于信息无人车模式，且已接收到三个激光信号 0x02：当前处于火情无人车模式，且已接收到两个激光信号
 */
static inline uint8_t mavlink_msg_iusc_ctrl_ugv_laser_status_get_state(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  8);
}

/**
 * @brief Decode a iusc_ctrl_ugv_laser_status message into a struct
 *
 * @param msg The message to decode
 * @param iusc_ctrl_ugv_laser_status C-struct to decode the message contents into
 */
static inline void mavlink_msg_iusc_ctrl_ugv_laser_status_decode(const mavlink_message_t* msg, mavlink_iusc_ctrl_ugv_laser_status_t* iusc_ctrl_ugv_laser_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    iusc_ctrl_ugv_laser_status->time_usec = mavlink_msg_iusc_ctrl_ugv_laser_status_get_time_usec(msg);
    iusc_ctrl_ugv_laser_status->state = mavlink_msg_iusc_ctrl_ugv_laser_status_get_state(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_IUSC_CTRL_UGV_LASER_STATUS_LEN? msg->len : MAVLINK_MSG_ID_IUSC_CTRL_UGV_LASER_STATUS_LEN;
        memset(iusc_ctrl_ugv_laser_status, 0, MAVLINK_MSG_ID_IUSC_CTRL_UGV_LASER_STATUS_LEN);
    memcpy(iusc_ctrl_ugv_laser_status, _MAV_PAYLOAD(msg), len);
#endif
}
