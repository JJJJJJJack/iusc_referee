#pragma once
// MESSAGE IUSC_CTRL_MISSION_UAV_SIGNAL_STATE PACKING

#define MAVLINK_MSG_ID_IUSC_CTRL_MISSION_UAV_SIGNAL_STATE 13012


typedef struct __mavlink_iusc_ctrl_mission_uav_signal_state_t {
 uint64_t time_usec; /*<  Ê±¼ä´Á*/
 float pos_x; /*<  Î»ÖÃx*/
 float pos_y; /*<  Î»ÖÃy*/
 float pos_z; /*<  Î»ÖÃz*/
 float roll; /*<  ¹ö×ª½Ç*/
 float pitch; /*<  ¸©Ñö½Ç*/
 float yaw; /*<  Æ«º½½Ç*/
} mavlink_iusc_ctrl_mission_uav_signal_state_t;

#define MAVLINK_MSG_ID_IUSC_CTRL_MISSION_UAV_SIGNAL_STATE_LEN 32
#define MAVLINK_MSG_ID_IUSC_CTRL_MISSION_UAV_SIGNAL_STATE_MIN_LEN 32
#define MAVLINK_MSG_ID_13012_LEN 32
#define MAVLINK_MSG_ID_13012_MIN_LEN 32

#define MAVLINK_MSG_ID_IUSC_CTRL_MISSION_UAV_SIGNAL_STATE_CRC 118
#define MAVLINK_MSG_ID_13012_CRC 118



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_IUSC_CTRL_MISSION_UAV_SIGNAL_STATE { \
    13012, \
    "IUSC_CTRL_MISSION_UAV_SIGNAL_STATE", \
    7, \
    {  { "time_usec", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_iusc_ctrl_mission_uav_signal_state_t, time_usec) }, \
         { "pos_x", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_iusc_ctrl_mission_uav_signal_state_t, pos_x) }, \
         { "pos_y", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_iusc_ctrl_mission_uav_signal_state_t, pos_y) }, \
         { "pos_z", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_iusc_ctrl_mission_uav_signal_state_t, pos_z) }, \
         { "roll", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_iusc_ctrl_mission_uav_signal_state_t, roll) }, \
         { "pitch", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_iusc_ctrl_mission_uav_signal_state_t, pitch) }, \
         { "yaw", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_iusc_ctrl_mission_uav_signal_state_t, yaw) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_IUSC_CTRL_MISSION_UAV_SIGNAL_STATE { \
    "IUSC_CTRL_MISSION_UAV_SIGNAL_STATE", \
    7, \
    {  { "time_usec", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_iusc_ctrl_mission_uav_signal_state_t, time_usec) }, \
         { "pos_x", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_iusc_ctrl_mission_uav_signal_state_t, pos_x) }, \
         { "pos_y", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_iusc_ctrl_mission_uav_signal_state_t, pos_y) }, \
         { "pos_z", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_iusc_ctrl_mission_uav_signal_state_t, pos_z) }, \
         { "roll", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_iusc_ctrl_mission_uav_signal_state_t, roll) }, \
         { "pitch", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_iusc_ctrl_mission_uav_signal_state_t, pitch) }, \
         { "yaw", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_iusc_ctrl_mission_uav_signal_state_t, yaw) }, \
         } \
}
#endif

/**
 * @brief Pack a iusc_ctrl_mission_uav_signal_state message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_usec  Ê±¼ä´Á
 * @param pos_x  Î»ÖÃx
 * @param pos_y  Î»ÖÃy
 * @param pos_z  Î»ÖÃz
 * @param roll  ¹ö×ª½Ç
 * @param pitch  ¸©Ñö½Ç
 * @param yaw  Æ«º½½Ç
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_iusc_ctrl_mission_uav_signal_state_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint64_t time_usec, float pos_x, float pos_y, float pos_z, float roll, float pitch, float yaw)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_IUSC_CTRL_MISSION_UAV_SIGNAL_STATE_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_float(buf, 8, pos_x);
    _mav_put_float(buf, 12, pos_y);
    _mav_put_float(buf, 16, pos_z);
    _mav_put_float(buf, 20, roll);
    _mav_put_float(buf, 24, pitch);
    _mav_put_float(buf, 28, yaw);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_UAV_SIGNAL_STATE_LEN);
#else
    mavlink_iusc_ctrl_mission_uav_signal_state_t packet;
    packet.time_usec = time_usec;
    packet.pos_x = pos_x;
    packet.pos_y = pos_y;
    packet.pos_z = pos_z;
    packet.roll = roll;
    packet.pitch = pitch;
    packet.yaw = yaw;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_UAV_SIGNAL_STATE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_IUSC_CTRL_MISSION_UAV_SIGNAL_STATE;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_UAV_SIGNAL_STATE_MIN_LEN, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_UAV_SIGNAL_STATE_LEN, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_UAV_SIGNAL_STATE_CRC);
}

/**
 * @brief Pack a iusc_ctrl_mission_uav_signal_state message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param time_usec  Ê±¼ä´Á
 * @param pos_x  Î»ÖÃx
 * @param pos_y  Î»ÖÃy
 * @param pos_z  Î»ÖÃz
 * @param roll  ¹ö×ª½Ç
 * @param pitch  ¸©Ñö½Ç
 * @param yaw  Æ«º½½Ç
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_iusc_ctrl_mission_uav_signal_state_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint64_t time_usec,float pos_x,float pos_y,float pos_z,float roll,float pitch,float yaw)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_IUSC_CTRL_MISSION_UAV_SIGNAL_STATE_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_float(buf, 8, pos_x);
    _mav_put_float(buf, 12, pos_y);
    _mav_put_float(buf, 16, pos_z);
    _mav_put_float(buf, 20, roll);
    _mav_put_float(buf, 24, pitch);
    _mav_put_float(buf, 28, yaw);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_UAV_SIGNAL_STATE_LEN);
#else
    mavlink_iusc_ctrl_mission_uav_signal_state_t packet;
    packet.time_usec = time_usec;
    packet.pos_x = pos_x;
    packet.pos_y = pos_y;
    packet.pos_z = pos_z;
    packet.roll = roll;
    packet.pitch = pitch;
    packet.yaw = yaw;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_UAV_SIGNAL_STATE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_IUSC_CTRL_MISSION_UAV_SIGNAL_STATE;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_UAV_SIGNAL_STATE_MIN_LEN, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_UAV_SIGNAL_STATE_LEN, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_UAV_SIGNAL_STATE_CRC);
}

/**
 * @brief Encode a iusc_ctrl_mission_uav_signal_state struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param iusc_ctrl_mission_uav_signal_state C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_iusc_ctrl_mission_uav_signal_state_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_iusc_ctrl_mission_uav_signal_state_t* iusc_ctrl_mission_uav_signal_state)
{
    return mavlink_msg_iusc_ctrl_mission_uav_signal_state_pack(system_id, component_id, msg, iusc_ctrl_mission_uav_signal_state->time_usec, iusc_ctrl_mission_uav_signal_state->pos_x, iusc_ctrl_mission_uav_signal_state->pos_y, iusc_ctrl_mission_uav_signal_state->pos_z, iusc_ctrl_mission_uav_signal_state->roll, iusc_ctrl_mission_uav_signal_state->pitch, iusc_ctrl_mission_uav_signal_state->yaw);
}

/**
 * @brief Encode a iusc_ctrl_mission_uav_signal_state struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param iusc_ctrl_mission_uav_signal_state C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_iusc_ctrl_mission_uav_signal_state_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_iusc_ctrl_mission_uav_signal_state_t* iusc_ctrl_mission_uav_signal_state)
{
    return mavlink_msg_iusc_ctrl_mission_uav_signal_state_pack_chan(system_id, component_id, chan, msg, iusc_ctrl_mission_uav_signal_state->time_usec, iusc_ctrl_mission_uav_signal_state->pos_x, iusc_ctrl_mission_uav_signal_state->pos_y, iusc_ctrl_mission_uav_signal_state->pos_z, iusc_ctrl_mission_uav_signal_state->roll, iusc_ctrl_mission_uav_signal_state->pitch, iusc_ctrl_mission_uav_signal_state->yaw);
}

/**
 * @brief Send a iusc_ctrl_mission_uav_signal_state message
 * @param chan MAVLink channel to send the message
 *
 * @param time_usec  Ê±¼ä´Á
 * @param pos_x  Î»ÖÃx
 * @param pos_y  Î»ÖÃy
 * @param pos_z  Î»ÖÃz
 * @param roll  ¹ö×ª½Ç
 * @param pitch  ¸©Ñö½Ç
 * @param yaw  Æ«º½½Ç
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_iusc_ctrl_mission_uav_signal_state_send(mavlink_channel_t chan, uint64_t time_usec, float pos_x, float pos_y, float pos_z, float roll, float pitch, float yaw)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_IUSC_CTRL_MISSION_UAV_SIGNAL_STATE_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_float(buf, 8, pos_x);
    _mav_put_float(buf, 12, pos_y);
    _mav_put_float(buf, 16, pos_z);
    _mav_put_float(buf, 20, roll);
    _mav_put_float(buf, 24, pitch);
    _mav_put_float(buf, 28, yaw);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_UAV_SIGNAL_STATE, buf, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_UAV_SIGNAL_STATE_MIN_LEN, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_UAV_SIGNAL_STATE_LEN, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_UAV_SIGNAL_STATE_CRC);
#else
    mavlink_iusc_ctrl_mission_uav_signal_state_t packet;
    packet.time_usec = time_usec;
    packet.pos_x = pos_x;
    packet.pos_y = pos_y;
    packet.pos_z = pos_z;
    packet.roll = roll;
    packet.pitch = pitch;
    packet.yaw = yaw;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_UAV_SIGNAL_STATE, (const char *)&packet, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_UAV_SIGNAL_STATE_MIN_LEN, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_UAV_SIGNAL_STATE_LEN, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_UAV_SIGNAL_STATE_CRC);
#endif
}

/**
 * @brief Send a iusc_ctrl_mission_uav_signal_state message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_iusc_ctrl_mission_uav_signal_state_send_struct(mavlink_channel_t chan, const mavlink_iusc_ctrl_mission_uav_signal_state_t* iusc_ctrl_mission_uav_signal_state)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_iusc_ctrl_mission_uav_signal_state_send(chan, iusc_ctrl_mission_uav_signal_state->time_usec, iusc_ctrl_mission_uav_signal_state->pos_x, iusc_ctrl_mission_uav_signal_state->pos_y, iusc_ctrl_mission_uav_signal_state->pos_z, iusc_ctrl_mission_uav_signal_state->roll, iusc_ctrl_mission_uav_signal_state->pitch, iusc_ctrl_mission_uav_signal_state->yaw);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_UAV_SIGNAL_STATE, (const char *)iusc_ctrl_mission_uav_signal_state, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_UAV_SIGNAL_STATE_MIN_LEN, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_UAV_SIGNAL_STATE_LEN, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_UAV_SIGNAL_STATE_CRC);
#endif
}

#if MAVLINK_MSG_ID_IUSC_CTRL_MISSION_UAV_SIGNAL_STATE_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_iusc_ctrl_mission_uav_signal_state_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t time_usec, float pos_x, float pos_y, float pos_z, float roll, float pitch, float yaw)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_float(buf, 8, pos_x);
    _mav_put_float(buf, 12, pos_y);
    _mav_put_float(buf, 16, pos_z);
    _mav_put_float(buf, 20, roll);
    _mav_put_float(buf, 24, pitch);
    _mav_put_float(buf, 28, yaw);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_UAV_SIGNAL_STATE, buf, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_UAV_SIGNAL_STATE_MIN_LEN, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_UAV_SIGNAL_STATE_LEN, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_UAV_SIGNAL_STATE_CRC);
#else
    mavlink_iusc_ctrl_mission_uav_signal_state_t *packet = (mavlink_iusc_ctrl_mission_uav_signal_state_t *)msgbuf;
    packet->time_usec = time_usec;
    packet->pos_x = pos_x;
    packet->pos_y = pos_y;
    packet->pos_z = pos_z;
    packet->roll = roll;
    packet->pitch = pitch;
    packet->yaw = yaw;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_UAV_SIGNAL_STATE, (const char *)packet, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_UAV_SIGNAL_STATE_MIN_LEN, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_UAV_SIGNAL_STATE_LEN, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_UAV_SIGNAL_STATE_CRC);
#endif
}
#endif

#endif

// MESSAGE IUSC_CTRL_MISSION_UAV_SIGNAL_STATE UNPACKING


/**
 * @brief Get field time_usec from iusc_ctrl_mission_uav_signal_state message
 *
 * @return  Ê±¼ä´Á
 */
static inline uint64_t mavlink_msg_iusc_ctrl_mission_uav_signal_state_get_time_usec(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field pos_x from iusc_ctrl_mission_uav_signal_state message
 *
 * @return  Î»ÖÃx
 */
static inline float mavlink_msg_iusc_ctrl_mission_uav_signal_state_get_pos_x(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field pos_y from iusc_ctrl_mission_uav_signal_state message
 *
 * @return  Î»ÖÃy
 */
static inline float mavlink_msg_iusc_ctrl_mission_uav_signal_state_get_pos_y(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Get field pos_z from iusc_ctrl_mission_uav_signal_state message
 *
 * @return  Î»ÖÃz
 */
static inline float mavlink_msg_iusc_ctrl_mission_uav_signal_state_get_pos_z(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  16);
}

/**
 * @brief Get field roll from iusc_ctrl_mission_uav_signal_state message
 *
 * @return  ¹ö×ª½Ç
 */
static inline float mavlink_msg_iusc_ctrl_mission_uav_signal_state_get_roll(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  20);
}

/**
 * @brief Get field pitch from iusc_ctrl_mission_uav_signal_state message
 *
 * @return  ¸©Ñö½Ç
 */
static inline float mavlink_msg_iusc_ctrl_mission_uav_signal_state_get_pitch(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  24);
}

/**
 * @brief Get field yaw from iusc_ctrl_mission_uav_signal_state message
 *
 * @return  Æ«º½½Ç
 */
static inline float mavlink_msg_iusc_ctrl_mission_uav_signal_state_get_yaw(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  28);
}

/**
 * @brief Decode a iusc_ctrl_mission_uav_signal_state message into a struct
 *
 * @param msg The message to decode
 * @param iusc_ctrl_mission_uav_signal_state C-struct to decode the message contents into
 */
static inline void mavlink_msg_iusc_ctrl_mission_uav_signal_state_decode(const mavlink_message_t* msg, mavlink_iusc_ctrl_mission_uav_signal_state_t* iusc_ctrl_mission_uav_signal_state)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    iusc_ctrl_mission_uav_signal_state->time_usec = mavlink_msg_iusc_ctrl_mission_uav_signal_state_get_time_usec(msg);
    iusc_ctrl_mission_uav_signal_state->pos_x = mavlink_msg_iusc_ctrl_mission_uav_signal_state_get_pos_x(msg);
    iusc_ctrl_mission_uav_signal_state->pos_y = mavlink_msg_iusc_ctrl_mission_uav_signal_state_get_pos_y(msg);
    iusc_ctrl_mission_uav_signal_state->pos_z = mavlink_msg_iusc_ctrl_mission_uav_signal_state_get_pos_z(msg);
    iusc_ctrl_mission_uav_signal_state->roll = mavlink_msg_iusc_ctrl_mission_uav_signal_state_get_roll(msg);
    iusc_ctrl_mission_uav_signal_state->pitch = mavlink_msg_iusc_ctrl_mission_uav_signal_state_get_pitch(msg);
    iusc_ctrl_mission_uav_signal_state->yaw = mavlink_msg_iusc_ctrl_mission_uav_signal_state_get_yaw(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_IUSC_CTRL_MISSION_UAV_SIGNAL_STATE_LEN? msg->len : MAVLINK_MSG_ID_IUSC_CTRL_MISSION_UAV_SIGNAL_STATE_LEN;
        memset(iusc_ctrl_mission_uav_signal_state, 0, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_UAV_SIGNAL_STATE_LEN);
    memcpy(iusc_ctrl_mission_uav_signal_state, _MAV_PAYLOAD(msg), len);
#endif
}
