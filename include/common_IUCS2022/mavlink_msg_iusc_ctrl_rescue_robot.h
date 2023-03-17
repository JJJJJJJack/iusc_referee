#pragma once
// MESSAGE IUSC_CTRL_RESCUE_ROBOT PACKING

#define MAVLINK_MSG_ID_IUSC_CTRL_RESCUE_ROBOT 13002


typedef struct __mavlink_iusc_ctrl_rescue_robot_t {
 uint64_t time_usec; /*<  时间戳*/
 uint8_t dummy_id; /*<  假人id：0x00~0x09：假人编号1-10*/
 uint8_t state; /*<  假人状态:0x00：假人不动;0x01：假人开始求救*/
} mavlink_iusc_ctrl_rescue_robot_t;

#define MAVLINK_MSG_ID_IUSC_CTRL_RESCUE_ROBOT_LEN 10
#define MAVLINK_MSG_ID_IUSC_CTRL_RESCUE_ROBOT_MIN_LEN 10
#define MAVLINK_MSG_ID_13002_LEN 10
#define MAVLINK_MSG_ID_13002_MIN_LEN 10

#define MAVLINK_MSG_ID_IUSC_CTRL_RESCUE_ROBOT_CRC 227
#define MAVLINK_MSG_ID_13002_CRC 227



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_IUSC_CTRL_RESCUE_ROBOT { \
    13002, \
    "IUSC_CTRL_RESCUE_ROBOT", \
    3, \
    {  { "time_usec", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_iusc_ctrl_rescue_robot_t, time_usec) }, \
         { "dummy_id", NULL, MAVLINK_TYPE_UINT8_T, 0, 8, offsetof(mavlink_iusc_ctrl_rescue_robot_t, dummy_id) }, \
         { "state", NULL, MAVLINK_TYPE_UINT8_T, 0, 9, offsetof(mavlink_iusc_ctrl_rescue_robot_t, state) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_IUSC_CTRL_RESCUE_ROBOT { \
    "IUSC_CTRL_RESCUE_ROBOT", \
    3, \
    {  { "time_usec", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_iusc_ctrl_rescue_robot_t, time_usec) }, \
         { "dummy_id", NULL, MAVLINK_TYPE_UINT8_T, 0, 8, offsetof(mavlink_iusc_ctrl_rescue_robot_t, dummy_id) }, \
         { "state", NULL, MAVLINK_TYPE_UINT8_T, 0, 9, offsetof(mavlink_iusc_ctrl_rescue_robot_t, state) }, \
         } \
}
#endif

/**
 * @brief Pack a iusc_ctrl_rescue_robot message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_usec  时间戳
 * @param dummy_id  假人id：0x00~0x09：假人编号1-10
 * @param state  假人状态:0x00：假人不动;0x01：假人开始求救
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_iusc_ctrl_rescue_robot_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint64_t time_usec, uint8_t dummy_id, uint8_t state)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_IUSC_CTRL_RESCUE_ROBOT_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_uint8_t(buf, 8, dummy_id);
    _mav_put_uint8_t(buf, 9, state);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_IUSC_CTRL_RESCUE_ROBOT_LEN);
#else
    mavlink_iusc_ctrl_rescue_robot_t packet;
    packet.time_usec = time_usec;
    packet.dummy_id = dummy_id;
    packet.state = state;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_IUSC_CTRL_RESCUE_ROBOT_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_IUSC_CTRL_RESCUE_ROBOT;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_IUSC_CTRL_RESCUE_ROBOT_MIN_LEN, MAVLINK_MSG_ID_IUSC_CTRL_RESCUE_ROBOT_LEN, MAVLINK_MSG_ID_IUSC_CTRL_RESCUE_ROBOT_CRC);
}

/**
 * @brief Pack a iusc_ctrl_rescue_robot message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param time_usec  时间戳
 * @param dummy_id  假人id：0x00~0x09：假人编号1-10
 * @param state  假人状态:0x00：假人不动;0x01：假人开始求救
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_iusc_ctrl_rescue_robot_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint64_t time_usec,uint8_t dummy_id,uint8_t state)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_IUSC_CTRL_RESCUE_ROBOT_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_uint8_t(buf, 8, dummy_id);
    _mav_put_uint8_t(buf, 9, state);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_IUSC_CTRL_RESCUE_ROBOT_LEN);
#else
    mavlink_iusc_ctrl_rescue_robot_t packet;
    packet.time_usec = time_usec;
    packet.dummy_id = dummy_id;
    packet.state = state;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_IUSC_CTRL_RESCUE_ROBOT_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_IUSC_CTRL_RESCUE_ROBOT;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_IUSC_CTRL_RESCUE_ROBOT_MIN_LEN, MAVLINK_MSG_ID_IUSC_CTRL_RESCUE_ROBOT_LEN, MAVLINK_MSG_ID_IUSC_CTRL_RESCUE_ROBOT_CRC);
}

/**
 * @brief Encode a iusc_ctrl_rescue_robot struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param iusc_ctrl_rescue_robot C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_iusc_ctrl_rescue_robot_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_iusc_ctrl_rescue_robot_t* iusc_ctrl_rescue_robot)
{
    return mavlink_msg_iusc_ctrl_rescue_robot_pack(system_id, component_id, msg, iusc_ctrl_rescue_robot->time_usec, iusc_ctrl_rescue_robot->dummy_id, iusc_ctrl_rescue_robot->state);
}

/**
 * @brief Encode a iusc_ctrl_rescue_robot struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param iusc_ctrl_rescue_robot C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_iusc_ctrl_rescue_robot_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_iusc_ctrl_rescue_robot_t* iusc_ctrl_rescue_robot)
{
    return mavlink_msg_iusc_ctrl_rescue_robot_pack_chan(system_id, component_id, chan, msg, iusc_ctrl_rescue_robot->time_usec, iusc_ctrl_rescue_robot->dummy_id, iusc_ctrl_rescue_robot->state);
}

/**
 * @brief Send a iusc_ctrl_rescue_robot message
 * @param chan MAVLink channel to send the message
 *
 * @param time_usec  时间戳
 * @param dummy_id  假人id：0x00~0x09：假人编号1-10
 * @param state  假人状态:0x00：假人不动;0x01：假人开始求救
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_iusc_ctrl_rescue_robot_send(mavlink_channel_t chan, uint64_t time_usec, uint8_t dummy_id, uint8_t state)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_IUSC_CTRL_RESCUE_ROBOT_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_uint8_t(buf, 8, dummy_id);
    _mav_put_uint8_t(buf, 9, state);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_IUSC_CTRL_RESCUE_ROBOT, buf, MAVLINK_MSG_ID_IUSC_CTRL_RESCUE_ROBOT_MIN_LEN, MAVLINK_MSG_ID_IUSC_CTRL_RESCUE_ROBOT_LEN, MAVLINK_MSG_ID_IUSC_CTRL_RESCUE_ROBOT_CRC);
#else
    mavlink_iusc_ctrl_rescue_robot_t packet;
    packet.time_usec = time_usec;
    packet.dummy_id = dummy_id;
    packet.state = state;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_IUSC_CTRL_RESCUE_ROBOT, (const char *)&packet, MAVLINK_MSG_ID_IUSC_CTRL_RESCUE_ROBOT_MIN_LEN, MAVLINK_MSG_ID_IUSC_CTRL_RESCUE_ROBOT_LEN, MAVLINK_MSG_ID_IUSC_CTRL_RESCUE_ROBOT_CRC);
#endif
}

/**
 * @brief Send a iusc_ctrl_rescue_robot message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_iusc_ctrl_rescue_robot_send_struct(mavlink_channel_t chan, const mavlink_iusc_ctrl_rescue_robot_t* iusc_ctrl_rescue_robot)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_iusc_ctrl_rescue_robot_send(chan, iusc_ctrl_rescue_robot->time_usec, iusc_ctrl_rescue_robot->dummy_id, iusc_ctrl_rescue_robot->state);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_IUSC_CTRL_RESCUE_ROBOT, (const char *)iusc_ctrl_rescue_robot, MAVLINK_MSG_ID_IUSC_CTRL_RESCUE_ROBOT_MIN_LEN, MAVLINK_MSG_ID_IUSC_CTRL_RESCUE_ROBOT_LEN, MAVLINK_MSG_ID_IUSC_CTRL_RESCUE_ROBOT_CRC);
#endif
}

#if MAVLINK_MSG_ID_IUSC_CTRL_RESCUE_ROBOT_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_iusc_ctrl_rescue_robot_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t time_usec, uint8_t dummy_id, uint8_t state)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_uint8_t(buf, 8, dummy_id);
    _mav_put_uint8_t(buf, 9, state);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_IUSC_CTRL_RESCUE_ROBOT, buf, MAVLINK_MSG_ID_IUSC_CTRL_RESCUE_ROBOT_MIN_LEN, MAVLINK_MSG_ID_IUSC_CTRL_RESCUE_ROBOT_LEN, MAVLINK_MSG_ID_IUSC_CTRL_RESCUE_ROBOT_CRC);
#else
    mavlink_iusc_ctrl_rescue_robot_t *packet = (mavlink_iusc_ctrl_rescue_robot_t *)msgbuf;
    packet->time_usec = time_usec;
    packet->dummy_id = dummy_id;
    packet->state = state;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_IUSC_CTRL_RESCUE_ROBOT, (const char *)packet, MAVLINK_MSG_ID_IUSC_CTRL_RESCUE_ROBOT_MIN_LEN, MAVLINK_MSG_ID_IUSC_CTRL_RESCUE_ROBOT_LEN, MAVLINK_MSG_ID_IUSC_CTRL_RESCUE_ROBOT_CRC);
#endif
}
#endif

#endif

// MESSAGE IUSC_CTRL_RESCUE_ROBOT UNPACKING


/**
 * @brief Get field time_usec from iusc_ctrl_rescue_robot message
 *
 * @return  时间戳
 */
static inline uint64_t mavlink_msg_iusc_ctrl_rescue_robot_get_time_usec(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field dummy_id from iusc_ctrl_rescue_robot message
 *
 * @return  假人id：0x00~0x09：假人编号1-10
 */
static inline uint8_t mavlink_msg_iusc_ctrl_rescue_robot_get_dummy_id(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  8);
}

/**
 * @brief Get field state from iusc_ctrl_rescue_robot message
 *
 * @return  假人状态:0x00：假人不动;0x01：假人开始求救
 */
static inline uint8_t mavlink_msg_iusc_ctrl_rescue_robot_get_state(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  9);
}

/**
 * @brief Decode a iusc_ctrl_rescue_robot message into a struct
 *
 * @param msg The message to decode
 * @param iusc_ctrl_rescue_robot C-struct to decode the message contents into
 */
static inline void mavlink_msg_iusc_ctrl_rescue_robot_decode(const mavlink_message_t* msg, mavlink_iusc_ctrl_rescue_robot_t* iusc_ctrl_rescue_robot)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    iusc_ctrl_rescue_robot->time_usec = mavlink_msg_iusc_ctrl_rescue_robot_get_time_usec(msg);
    iusc_ctrl_rescue_robot->dummy_id = mavlink_msg_iusc_ctrl_rescue_robot_get_dummy_id(msg);
    iusc_ctrl_rescue_robot->state = mavlink_msg_iusc_ctrl_rescue_robot_get_state(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_IUSC_CTRL_RESCUE_ROBOT_LEN? msg->len : MAVLINK_MSG_ID_IUSC_CTRL_RESCUE_ROBOT_LEN;
        memset(iusc_ctrl_rescue_robot, 0, MAVLINK_MSG_ID_IUSC_CTRL_RESCUE_ROBOT_LEN);
    memcpy(iusc_ctrl_rescue_robot, _MAV_PAYLOAD(msg), len);
#endif
}
