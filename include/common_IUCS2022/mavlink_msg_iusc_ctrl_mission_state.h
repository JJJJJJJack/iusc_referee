#pragma once
// MESSAGE IUSC_CTRL_MISSION_STATE PACKING

#define MAVLINK_MSG_ID_IUSC_CTRL_MISSION_STATE 13010


typedef struct __mavlink_iusc_ctrl_mission_state_t {
 uint64_t time_usec; /*<  时间戳*/
 uint8_t uav_id; /*<  身份id*/
 uint8_t armed; /*<  开始比赛*/
 uint8_t stage; /*<  目前的比赛阶段*/
} mavlink_iusc_ctrl_mission_state_t;

#define MAVLINK_MSG_ID_IUSC_CTRL_MISSION_STATE_LEN 11
#define MAVLINK_MSG_ID_IUSC_CTRL_MISSION_STATE_MIN_LEN 11
#define MAVLINK_MSG_ID_13010_LEN 11
#define MAVLINK_MSG_ID_13010_MIN_LEN 11

#define MAVLINK_MSG_ID_IUSC_CTRL_MISSION_STATE_CRC 63
#define MAVLINK_MSG_ID_13010_CRC 63



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_IUSC_CTRL_MISSION_STATE { \
    13010, \
    "IUSC_CTRL_MISSION_STATE", \
    4, \
    {  { "time_usec", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_iusc_ctrl_mission_state_t, time_usec) }, \
         { "uav_id", NULL, MAVLINK_TYPE_UINT8_T, 0, 8, offsetof(mavlink_iusc_ctrl_mission_state_t, uav_id) }, \
         { "armed", NULL, MAVLINK_TYPE_UINT8_T, 0, 9, offsetof(mavlink_iusc_ctrl_mission_state_t, armed) }, \
         { "stage", NULL, MAVLINK_TYPE_UINT8_T, 0, 10, offsetof(mavlink_iusc_ctrl_mission_state_t, stage) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_IUSC_CTRL_MISSION_STATE { \
    "IUSC_CTRL_MISSION_STATE", \
    4, \
    {  { "time_usec", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_iusc_ctrl_mission_state_t, time_usec) }, \
         { "uav_id", NULL, MAVLINK_TYPE_UINT8_T, 0, 8, offsetof(mavlink_iusc_ctrl_mission_state_t, uav_id) }, \
         { "armed", NULL, MAVLINK_TYPE_UINT8_T, 0, 9, offsetof(mavlink_iusc_ctrl_mission_state_t, armed) }, \
         { "stage", NULL, MAVLINK_TYPE_UINT8_T, 0, 10, offsetof(mavlink_iusc_ctrl_mission_state_t, stage) }, \
         } \
}
#endif

/**
 * @brief Pack a iusc_ctrl_mission_state message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_usec  时间戳
 * @param uav_id  身份id
 * @param armed  开始比赛
 * @param stage  目前的比赛阶段
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_iusc_ctrl_mission_state_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint64_t time_usec, uint8_t uav_id, uint8_t armed, uint8_t stage)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_IUSC_CTRL_MISSION_STATE_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_uint8_t(buf, 8, uav_id);
    _mav_put_uint8_t(buf, 9, armed);
    _mav_put_uint8_t(buf, 10, stage);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_STATE_LEN);
#else
    mavlink_iusc_ctrl_mission_state_t packet;
    packet.time_usec = time_usec;
    packet.uav_id = uav_id;
    packet.armed = armed;
    packet.stage = stage;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_STATE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_IUSC_CTRL_MISSION_STATE;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_STATE_MIN_LEN, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_STATE_LEN, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_STATE_CRC);
}

/**
 * @brief Pack a iusc_ctrl_mission_state message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param time_usec  时间戳
 * @param uav_id  身份id
 * @param armed  开始比赛
 * @param stage  目前的比赛阶段
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_iusc_ctrl_mission_state_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint64_t time_usec,uint8_t uav_id,uint8_t armed,uint8_t stage)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_IUSC_CTRL_MISSION_STATE_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_uint8_t(buf, 8, uav_id);
    _mav_put_uint8_t(buf, 9, armed);
    _mav_put_uint8_t(buf, 10, stage);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_STATE_LEN);
#else
    mavlink_iusc_ctrl_mission_state_t packet;
    packet.time_usec = time_usec;
    packet.uav_id = uav_id;
    packet.armed = armed;
    packet.stage = stage;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_STATE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_IUSC_CTRL_MISSION_STATE;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_STATE_MIN_LEN, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_STATE_LEN, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_STATE_CRC);
}

/**
 * @brief Encode a iusc_ctrl_mission_state struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param iusc_ctrl_mission_state C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_iusc_ctrl_mission_state_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_iusc_ctrl_mission_state_t* iusc_ctrl_mission_state)
{
    return mavlink_msg_iusc_ctrl_mission_state_pack(system_id, component_id, msg, iusc_ctrl_mission_state->time_usec, iusc_ctrl_mission_state->uav_id, iusc_ctrl_mission_state->armed, iusc_ctrl_mission_state->stage);
}

/**
 * @brief Encode a iusc_ctrl_mission_state struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param iusc_ctrl_mission_state C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_iusc_ctrl_mission_state_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_iusc_ctrl_mission_state_t* iusc_ctrl_mission_state)
{
    return mavlink_msg_iusc_ctrl_mission_state_pack_chan(system_id, component_id, chan, msg, iusc_ctrl_mission_state->time_usec, iusc_ctrl_mission_state->uav_id, iusc_ctrl_mission_state->armed, iusc_ctrl_mission_state->stage);
}

/**
 * @brief Send a iusc_ctrl_mission_state message
 * @param chan MAVLink channel to send the message
 *
 * @param time_usec  时间戳
 * @param uav_id  身份id
 * @param armed  开始比赛
 * @param stage  目前的比赛阶段
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_iusc_ctrl_mission_state_send(mavlink_channel_t chan, uint64_t time_usec, uint8_t uav_id, uint8_t armed, uint8_t stage)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_IUSC_CTRL_MISSION_STATE_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_uint8_t(buf, 8, uav_id);
    _mav_put_uint8_t(buf, 9, armed);
    _mav_put_uint8_t(buf, 10, stage);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_STATE, buf, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_STATE_MIN_LEN, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_STATE_LEN, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_STATE_CRC);
#else
    mavlink_iusc_ctrl_mission_state_t packet;
    packet.time_usec = time_usec;
    packet.uav_id = uav_id;
    packet.armed = armed;
    packet.stage = stage;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_STATE, (const char *)&packet, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_STATE_MIN_LEN, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_STATE_LEN, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_STATE_CRC);
#endif
}

/**
 * @brief Send a iusc_ctrl_mission_state message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_iusc_ctrl_mission_state_send_struct(mavlink_channel_t chan, const mavlink_iusc_ctrl_mission_state_t* iusc_ctrl_mission_state)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_iusc_ctrl_mission_state_send(chan, iusc_ctrl_mission_state->time_usec, iusc_ctrl_mission_state->uav_id, iusc_ctrl_mission_state->armed, iusc_ctrl_mission_state->stage);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_STATE, (const char *)iusc_ctrl_mission_state, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_STATE_MIN_LEN, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_STATE_LEN, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_STATE_CRC);
#endif
}

#if MAVLINK_MSG_ID_IUSC_CTRL_MISSION_STATE_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_iusc_ctrl_mission_state_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t time_usec, uint8_t uav_id, uint8_t armed, uint8_t stage)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_uint8_t(buf, 8, uav_id);
    _mav_put_uint8_t(buf, 9, armed);
    _mav_put_uint8_t(buf, 10, stage);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_STATE, buf, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_STATE_MIN_LEN, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_STATE_LEN, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_STATE_CRC);
#else
    mavlink_iusc_ctrl_mission_state_t *packet = (mavlink_iusc_ctrl_mission_state_t *)msgbuf;
    packet->time_usec = time_usec;
    packet->uav_id = uav_id;
    packet->armed = armed;
    packet->stage = stage;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_STATE, (const char *)packet, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_STATE_MIN_LEN, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_STATE_LEN, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_STATE_CRC);
#endif
}
#endif

#endif

// MESSAGE IUSC_CTRL_MISSION_STATE UNPACKING


/**
 * @brief Get field time_usec from iusc_ctrl_mission_state message
 *
 * @return  时间戳
 */
static inline uint64_t mavlink_msg_iusc_ctrl_mission_state_get_time_usec(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field uav_id from iusc_ctrl_mission_state message
 *
 * @return  身份id
 */
static inline uint8_t mavlink_msg_iusc_ctrl_mission_state_get_uav_id(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  8);
}

/**
 * @brief Get field armed from iusc_ctrl_mission_state message
 *
 * @return  开始比赛
 */
static inline uint8_t mavlink_msg_iusc_ctrl_mission_state_get_armed(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  9);
}

/**
 * @brief Get field stage from iusc_ctrl_mission_state message
 *
 * @return  目前的比赛阶段
 */
static inline uint8_t mavlink_msg_iusc_ctrl_mission_state_get_stage(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  10);
}

/**
 * @brief Decode a iusc_ctrl_mission_state message into a struct
 *
 * @param msg The message to decode
 * @param iusc_ctrl_mission_state C-struct to decode the message contents into
 */
static inline void mavlink_msg_iusc_ctrl_mission_state_decode(const mavlink_message_t* msg, mavlink_iusc_ctrl_mission_state_t* iusc_ctrl_mission_state)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    iusc_ctrl_mission_state->time_usec = mavlink_msg_iusc_ctrl_mission_state_get_time_usec(msg);
    iusc_ctrl_mission_state->uav_id = mavlink_msg_iusc_ctrl_mission_state_get_uav_id(msg);
    iusc_ctrl_mission_state->armed = mavlink_msg_iusc_ctrl_mission_state_get_armed(msg);
    iusc_ctrl_mission_state->stage = mavlink_msg_iusc_ctrl_mission_state_get_stage(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_IUSC_CTRL_MISSION_STATE_LEN? msg->len : MAVLINK_MSG_ID_IUSC_CTRL_MISSION_STATE_LEN;
        memset(iusc_ctrl_mission_state, 0, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_STATE_LEN);
    memcpy(iusc_ctrl_mission_state, _MAV_PAYLOAD(msg), len);
#endif
}
