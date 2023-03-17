#pragma once
// MESSAGE IUSC_CTRL_MISSION_COMPUTER_ACK PACKING

#define MAVLINK_MSG_ID_IUSC_CTRL_MISSION_COMPUTER_ACK 13022


typedef struct __mavlink_iusc_ctrl_mission_computer_ack_t {
 uint64_t time_usec; /*<  时间戳*/
 uint64_t time_recv; /*<  接收时间戳*/
 uint8_t ack; /*<  信息确认*/
 uint8_t uav_id; /*<  身份id*/
 uint8_t msg_ack; /*<  消息ID*/
 uint8_t seq_ack; /*<  序列号*/
} mavlink_iusc_ctrl_mission_computer_ack_t;

#define MAVLINK_MSG_ID_IUSC_CTRL_MISSION_COMPUTER_ACK_LEN 20
#define MAVLINK_MSG_ID_IUSC_CTRL_MISSION_COMPUTER_ACK_MIN_LEN 20
#define MAVLINK_MSG_ID_13022_LEN 20
#define MAVLINK_MSG_ID_13022_MIN_LEN 20

#define MAVLINK_MSG_ID_IUSC_CTRL_MISSION_COMPUTER_ACK_CRC 254
#define MAVLINK_MSG_ID_13022_CRC 254



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_IUSC_CTRL_MISSION_COMPUTER_ACK { \
    13022, \
    "IUSC_CTRL_MISSION_COMPUTER_ACK", \
    6, \
    {  { "time_usec", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_iusc_ctrl_mission_computer_ack_t, time_usec) }, \
         { "ack", NULL, MAVLINK_TYPE_UINT8_T, 0, 16, offsetof(mavlink_iusc_ctrl_mission_computer_ack_t, ack) }, \
         { "time_recv", NULL, MAVLINK_TYPE_UINT64_T, 0, 8, offsetof(mavlink_iusc_ctrl_mission_computer_ack_t, time_recv) }, \
         { "uav_id", NULL, MAVLINK_TYPE_UINT8_T, 0, 17, offsetof(mavlink_iusc_ctrl_mission_computer_ack_t, uav_id) }, \
         { "msg_ack", NULL, MAVLINK_TYPE_UINT8_T, 0, 18, offsetof(mavlink_iusc_ctrl_mission_computer_ack_t, msg_ack) }, \
         { "seq_ack", NULL, MAVLINK_TYPE_UINT8_T, 0, 19, offsetof(mavlink_iusc_ctrl_mission_computer_ack_t, seq_ack) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_IUSC_CTRL_MISSION_COMPUTER_ACK { \
    "IUSC_CTRL_MISSION_COMPUTER_ACK", \
    6, \
    {  { "time_usec", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_iusc_ctrl_mission_computer_ack_t, time_usec) }, \
         { "ack", NULL, MAVLINK_TYPE_UINT8_T, 0, 16, offsetof(mavlink_iusc_ctrl_mission_computer_ack_t, ack) }, \
         { "time_recv", NULL, MAVLINK_TYPE_UINT64_T, 0, 8, offsetof(mavlink_iusc_ctrl_mission_computer_ack_t, time_recv) }, \
         { "uav_id", NULL, MAVLINK_TYPE_UINT8_T, 0, 17, offsetof(mavlink_iusc_ctrl_mission_computer_ack_t, uav_id) }, \
         { "msg_ack", NULL, MAVLINK_TYPE_UINT8_T, 0, 18, offsetof(mavlink_iusc_ctrl_mission_computer_ack_t, msg_ack) }, \
         { "seq_ack", NULL, MAVLINK_TYPE_UINT8_T, 0, 19, offsetof(mavlink_iusc_ctrl_mission_computer_ack_t, seq_ack) }, \
         } \
}
#endif

/**
 * @brief Pack a iusc_ctrl_mission_computer_ack message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_usec  时间戳
 * @param ack  信息确认
 * @param time_recv  接收时间戳
 * @param uav_id  身份id
 * @param msg_ack  消息ID
 * @param seq_ack  序列号
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_iusc_ctrl_mission_computer_ack_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint64_t time_usec, uint8_t ack, uint64_t time_recv, uint8_t uav_id, uint8_t msg_ack, uint8_t seq_ack)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_IUSC_CTRL_MISSION_COMPUTER_ACK_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_uint64_t(buf, 8, time_recv);
    _mav_put_uint8_t(buf, 16, ack);
    _mav_put_uint8_t(buf, 17, uav_id);
    _mav_put_uint8_t(buf, 18, msg_ack);
    _mav_put_uint8_t(buf, 19, seq_ack);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_COMPUTER_ACK_LEN);
#else
    mavlink_iusc_ctrl_mission_computer_ack_t packet;
    packet.time_usec = time_usec;
    packet.time_recv = time_recv;
    packet.ack = ack;
    packet.uav_id = uav_id;
    packet.msg_ack = msg_ack;
    packet.seq_ack = seq_ack;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_COMPUTER_ACK_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_IUSC_CTRL_MISSION_COMPUTER_ACK;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_COMPUTER_ACK_MIN_LEN, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_COMPUTER_ACK_LEN, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_COMPUTER_ACK_CRC);
}

/**
 * @brief Pack a iusc_ctrl_mission_computer_ack message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param time_usec  时间戳
 * @param ack  信息确认
 * @param time_recv  接收时间戳
 * @param uav_id  身份id
 * @param msg_ack  消息ID
 * @param seq_ack  序列号
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_iusc_ctrl_mission_computer_ack_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint64_t time_usec,uint8_t ack,uint64_t time_recv,uint8_t uav_id,uint8_t msg_ack,uint8_t seq_ack)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_IUSC_CTRL_MISSION_COMPUTER_ACK_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_uint64_t(buf, 8, time_recv);
    _mav_put_uint8_t(buf, 16, ack);
    _mav_put_uint8_t(buf, 17, uav_id);
    _mav_put_uint8_t(buf, 18, msg_ack);
    _mav_put_uint8_t(buf, 19, seq_ack);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_COMPUTER_ACK_LEN);
#else
    mavlink_iusc_ctrl_mission_computer_ack_t packet;
    packet.time_usec = time_usec;
    packet.time_recv = time_recv;
    packet.ack = ack;
    packet.uav_id = uav_id;
    packet.msg_ack = msg_ack;
    packet.seq_ack = seq_ack;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_COMPUTER_ACK_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_IUSC_CTRL_MISSION_COMPUTER_ACK;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_COMPUTER_ACK_MIN_LEN, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_COMPUTER_ACK_LEN, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_COMPUTER_ACK_CRC);
}

/**
 * @brief Encode a iusc_ctrl_mission_computer_ack struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param iusc_ctrl_mission_computer_ack C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_iusc_ctrl_mission_computer_ack_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_iusc_ctrl_mission_computer_ack_t* iusc_ctrl_mission_computer_ack)
{
    return mavlink_msg_iusc_ctrl_mission_computer_ack_pack(system_id, component_id, msg, iusc_ctrl_mission_computer_ack->time_usec, iusc_ctrl_mission_computer_ack->ack, iusc_ctrl_mission_computer_ack->time_recv, iusc_ctrl_mission_computer_ack->uav_id, iusc_ctrl_mission_computer_ack->msg_ack, iusc_ctrl_mission_computer_ack->seq_ack);
}

/**
 * @brief Encode a iusc_ctrl_mission_computer_ack struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param iusc_ctrl_mission_computer_ack C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_iusc_ctrl_mission_computer_ack_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_iusc_ctrl_mission_computer_ack_t* iusc_ctrl_mission_computer_ack)
{
    return mavlink_msg_iusc_ctrl_mission_computer_ack_pack_chan(system_id, component_id, chan, msg, iusc_ctrl_mission_computer_ack->time_usec, iusc_ctrl_mission_computer_ack->ack, iusc_ctrl_mission_computer_ack->time_recv, iusc_ctrl_mission_computer_ack->uav_id, iusc_ctrl_mission_computer_ack->msg_ack, iusc_ctrl_mission_computer_ack->seq_ack);
}

/**
 * @brief Send a iusc_ctrl_mission_computer_ack message
 * @param chan MAVLink channel to send the message
 *
 * @param time_usec  时间戳
 * @param ack  信息确认
 * @param time_recv  接收时间戳
 * @param uav_id  身份id
 * @param msg_ack  消息ID
 * @param seq_ack  序列号
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_iusc_ctrl_mission_computer_ack_send(mavlink_channel_t chan, uint64_t time_usec, uint8_t ack, uint64_t time_recv, uint8_t uav_id, uint8_t msg_ack, uint8_t seq_ack)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_IUSC_CTRL_MISSION_COMPUTER_ACK_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_uint64_t(buf, 8, time_recv);
    _mav_put_uint8_t(buf, 16, ack);
    _mav_put_uint8_t(buf, 17, uav_id);
    _mav_put_uint8_t(buf, 18, msg_ack);
    _mav_put_uint8_t(buf, 19, seq_ack);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_COMPUTER_ACK, buf, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_COMPUTER_ACK_MIN_LEN, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_COMPUTER_ACK_LEN, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_COMPUTER_ACK_CRC);
#else
    mavlink_iusc_ctrl_mission_computer_ack_t packet;
    packet.time_usec = time_usec;
    packet.time_recv = time_recv;
    packet.ack = ack;
    packet.uav_id = uav_id;
    packet.msg_ack = msg_ack;
    packet.seq_ack = seq_ack;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_COMPUTER_ACK, (const char *)&packet, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_COMPUTER_ACK_MIN_LEN, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_COMPUTER_ACK_LEN, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_COMPUTER_ACK_CRC);
#endif
}

/**
 * @brief Send a iusc_ctrl_mission_computer_ack message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_iusc_ctrl_mission_computer_ack_send_struct(mavlink_channel_t chan, const mavlink_iusc_ctrl_mission_computer_ack_t* iusc_ctrl_mission_computer_ack)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_iusc_ctrl_mission_computer_ack_send(chan, iusc_ctrl_mission_computer_ack->time_usec, iusc_ctrl_mission_computer_ack->ack, iusc_ctrl_mission_computer_ack->time_recv, iusc_ctrl_mission_computer_ack->uav_id, iusc_ctrl_mission_computer_ack->msg_ack, iusc_ctrl_mission_computer_ack->seq_ack);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_COMPUTER_ACK, (const char *)iusc_ctrl_mission_computer_ack, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_COMPUTER_ACK_MIN_LEN, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_COMPUTER_ACK_LEN, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_COMPUTER_ACK_CRC);
#endif
}

#if MAVLINK_MSG_ID_IUSC_CTRL_MISSION_COMPUTER_ACK_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_iusc_ctrl_mission_computer_ack_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t time_usec, uint8_t ack, uint64_t time_recv, uint8_t uav_id, uint8_t msg_ack, uint8_t seq_ack)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_uint64_t(buf, 8, time_recv);
    _mav_put_uint8_t(buf, 16, ack);
    _mav_put_uint8_t(buf, 17, uav_id);
    _mav_put_uint8_t(buf, 18, msg_ack);
    _mav_put_uint8_t(buf, 19, seq_ack);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_COMPUTER_ACK, buf, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_COMPUTER_ACK_MIN_LEN, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_COMPUTER_ACK_LEN, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_COMPUTER_ACK_CRC);
#else
    mavlink_iusc_ctrl_mission_computer_ack_t *packet = (mavlink_iusc_ctrl_mission_computer_ack_t *)msgbuf;
    packet->time_usec = time_usec;
    packet->time_recv = time_recv;
    packet->ack = ack;
    packet->uav_id = uav_id;
    packet->msg_ack = msg_ack;
    packet->seq_ack = seq_ack;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_COMPUTER_ACK, (const char *)packet, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_COMPUTER_ACK_MIN_LEN, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_COMPUTER_ACK_LEN, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_COMPUTER_ACK_CRC);
#endif
}
#endif

#endif

// MESSAGE IUSC_CTRL_MISSION_COMPUTER_ACK UNPACKING


/**
 * @brief Get field time_usec from iusc_ctrl_mission_computer_ack message
 *
 * @return  时间戳
 */
static inline uint64_t mavlink_msg_iusc_ctrl_mission_computer_ack_get_time_usec(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field ack from iusc_ctrl_mission_computer_ack message
 *
 * @return  信息确认
 */
static inline uint8_t mavlink_msg_iusc_ctrl_mission_computer_ack_get_ack(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  16);
}

/**
 * @brief Get field time_recv from iusc_ctrl_mission_computer_ack message
 *
 * @return  接收时间戳
 */
static inline uint64_t mavlink_msg_iusc_ctrl_mission_computer_ack_get_time_recv(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  8);
}

/**
 * @brief Get field uav_id from iusc_ctrl_mission_computer_ack message
 *
 * @return  身份id
 */
static inline uint8_t mavlink_msg_iusc_ctrl_mission_computer_ack_get_uav_id(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  17);
}

/**
 * @brief Get field msg_ack from iusc_ctrl_mission_computer_ack message
 *
 * @return  消息ID
 */
static inline uint8_t mavlink_msg_iusc_ctrl_mission_computer_ack_get_msg_ack(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  18);
}

/**
 * @brief Get field seq_ack from iusc_ctrl_mission_computer_ack message
 *
 * @return  序列号
 */
static inline uint8_t mavlink_msg_iusc_ctrl_mission_computer_ack_get_seq_ack(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  19);
}

/**
 * @brief Decode a iusc_ctrl_mission_computer_ack message into a struct
 *
 * @param msg The message to decode
 * @param iusc_ctrl_mission_computer_ack C-struct to decode the message contents into
 */
static inline void mavlink_msg_iusc_ctrl_mission_computer_ack_decode(const mavlink_message_t* msg, mavlink_iusc_ctrl_mission_computer_ack_t* iusc_ctrl_mission_computer_ack)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    iusc_ctrl_mission_computer_ack->time_usec = mavlink_msg_iusc_ctrl_mission_computer_ack_get_time_usec(msg);
    iusc_ctrl_mission_computer_ack->time_recv = mavlink_msg_iusc_ctrl_mission_computer_ack_get_time_recv(msg);
    iusc_ctrl_mission_computer_ack->ack = mavlink_msg_iusc_ctrl_mission_computer_ack_get_ack(msg);
    iusc_ctrl_mission_computer_ack->uav_id = mavlink_msg_iusc_ctrl_mission_computer_ack_get_uav_id(msg);
    iusc_ctrl_mission_computer_ack->msg_ack = mavlink_msg_iusc_ctrl_mission_computer_ack_get_msg_ack(msg);
    iusc_ctrl_mission_computer_ack->seq_ack = mavlink_msg_iusc_ctrl_mission_computer_ack_get_seq_ack(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_IUSC_CTRL_MISSION_COMPUTER_ACK_LEN? msg->len : MAVLINK_MSG_ID_IUSC_CTRL_MISSION_COMPUTER_ACK_LEN;
        memset(iusc_ctrl_mission_computer_ack, 0, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_COMPUTER_ACK_LEN);
    memcpy(iusc_ctrl_mission_computer_ack, _MAV_PAYLOAD(msg), len);
#endif
}
