#pragma once
// MESSAGE IUSC_CTRL_MISSION_UAV_GIMBAL_CTRL PACKING

#define MAVLINK_MSG_ID_IUSC_CTRL_MISSION_UAV_GIMBAL_CTRL 13021


typedef struct __mavlink_iusc_ctrl_mission_uav_gimbal_ctrl_t {
 uint64_t time_usec; /*<  Ê±¼ä´Á*/
 float roll; /*<  µõ²Õ¹ö×ª½Ç*/
 float pitch; /*<  µõ²Õ¸©Ñö½Ç*/
 float yaw; /*<  µõ²ÕÆ«º½½Ç*/
 float ang_order_roll; /*<  µõ²Õ¹ö×ª½ÇÖ¸Áî*/
 float ang_order_pitch; /*<  µõ²Õ¸©Ñö½ÇÖ¸Áî*/
 float ang_order_yaw; /*<  µõ²ÕÆ«º½½ÇÖ¸Áî*/
 uint8_t ang_order_type; /*<  ¿ØÖÆÄ£Ê½*/
 uint8_t backup; /*<  ±¸ÓÃ*/
} mavlink_iusc_ctrl_mission_uav_gimbal_ctrl_t;

#define MAVLINK_MSG_ID_IUSC_CTRL_MISSION_UAV_GIMBAL_CTRL_LEN 34
#define MAVLINK_MSG_ID_IUSC_CTRL_MISSION_UAV_GIMBAL_CTRL_MIN_LEN 34
#define MAVLINK_MSG_ID_13021_LEN 34
#define MAVLINK_MSG_ID_13021_MIN_LEN 34

#define MAVLINK_MSG_ID_IUSC_CTRL_MISSION_UAV_GIMBAL_CTRL_CRC 208
#define MAVLINK_MSG_ID_13021_CRC 208



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_IUSC_CTRL_MISSION_UAV_GIMBAL_CTRL { \
    13021, \
    "IUSC_CTRL_MISSION_UAV_GIMBAL_CTRL", \
    9, \
    {  { "time_usec", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_iusc_ctrl_mission_uav_gimbal_ctrl_t, time_usec) }, \
         { "roll", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_iusc_ctrl_mission_uav_gimbal_ctrl_t, roll) }, \
         { "pitch", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_iusc_ctrl_mission_uav_gimbal_ctrl_t, pitch) }, \
         { "yaw", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_iusc_ctrl_mission_uav_gimbal_ctrl_t, yaw) }, \
         { "ang_order_type", NULL, MAVLINK_TYPE_UINT8_T, 0, 32, offsetof(mavlink_iusc_ctrl_mission_uav_gimbal_ctrl_t, ang_order_type) }, \
         { "backup", NULL, MAVLINK_TYPE_UINT8_T, 0, 33, offsetof(mavlink_iusc_ctrl_mission_uav_gimbal_ctrl_t, backup) }, \
         { "ang_order_roll", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_iusc_ctrl_mission_uav_gimbal_ctrl_t, ang_order_roll) }, \
         { "ang_order_pitch", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_iusc_ctrl_mission_uav_gimbal_ctrl_t, ang_order_pitch) }, \
         { "ang_order_yaw", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_iusc_ctrl_mission_uav_gimbal_ctrl_t, ang_order_yaw) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_IUSC_CTRL_MISSION_UAV_GIMBAL_CTRL { \
    "IUSC_CTRL_MISSION_UAV_GIMBAL_CTRL", \
    9, \
    {  { "time_usec", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_iusc_ctrl_mission_uav_gimbal_ctrl_t, time_usec) }, \
         { "roll", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_iusc_ctrl_mission_uav_gimbal_ctrl_t, roll) }, \
         { "pitch", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_iusc_ctrl_mission_uav_gimbal_ctrl_t, pitch) }, \
         { "yaw", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_iusc_ctrl_mission_uav_gimbal_ctrl_t, yaw) }, \
         { "ang_order_type", NULL, MAVLINK_TYPE_UINT8_T, 0, 32, offsetof(mavlink_iusc_ctrl_mission_uav_gimbal_ctrl_t, ang_order_type) }, \
         { "backup", NULL, MAVLINK_TYPE_UINT8_T, 0, 33, offsetof(mavlink_iusc_ctrl_mission_uav_gimbal_ctrl_t, backup) }, \
         { "ang_order_roll", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_iusc_ctrl_mission_uav_gimbal_ctrl_t, ang_order_roll) }, \
         { "ang_order_pitch", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_iusc_ctrl_mission_uav_gimbal_ctrl_t, ang_order_pitch) }, \
         { "ang_order_yaw", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_iusc_ctrl_mission_uav_gimbal_ctrl_t, ang_order_yaw) }, \
         } \
}
#endif

/**
 * @brief Pack a iusc_ctrl_mission_uav_gimbal_ctrl message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_usec  Ê±¼ä´Á
 * @param roll  µõ²Õ¹ö×ª½Ç
 * @param pitch  µõ²Õ¸©Ñö½Ç
 * @param yaw  µõ²ÕÆ«º½½Ç
 * @param ang_order_type  ¿ØÖÆÄ£Ê½
 * @param backup  ±¸ÓÃ
 * @param ang_order_roll  µõ²Õ¹ö×ª½ÇÖ¸Áî
 * @param ang_order_pitch  µõ²Õ¸©Ñö½ÇÖ¸Áî
 * @param ang_order_yaw  µõ²ÕÆ«º½½ÇÖ¸Áî
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_iusc_ctrl_mission_uav_gimbal_ctrl_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint64_t time_usec, float roll, float pitch, float yaw, uint8_t ang_order_type, uint8_t backup, float ang_order_roll, float ang_order_pitch, float ang_order_yaw)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_IUSC_CTRL_MISSION_UAV_GIMBAL_CTRL_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_float(buf, 8, roll);
    _mav_put_float(buf, 12, pitch);
    _mav_put_float(buf, 16, yaw);
    _mav_put_float(buf, 20, ang_order_roll);
    _mav_put_float(buf, 24, ang_order_pitch);
    _mav_put_float(buf, 28, ang_order_yaw);
    _mav_put_uint8_t(buf, 32, ang_order_type);
    _mav_put_uint8_t(buf, 33, backup);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_UAV_GIMBAL_CTRL_LEN);
#else
    mavlink_iusc_ctrl_mission_uav_gimbal_ctrl_t packet;
    packet.time_usec = time_usec;
    packet.roll = roll;
    packet.pitch = pitch;
    packet.yaw = yaw;
    packet.ang_order_roll = ang_order_roll;
    packet.ang_order_pitch = ang_order_pitch;
    packet.ang_order_yaw = ang_order_yaw;
    packet.ang_order_type = ang_order_type;
    packet.backup = backup;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_UAV_GIMBAL_CTRL_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_IUSC_CTRL_MISSION_UAV_GIMBAL_CTRL;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_UAV_GIMBAL_CTRL_MIN_LEN, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_UAV_GIMBAL_CTRL_LEN, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_UAV_GIMBAL_CTRL_CRC);
}

/**
 * @brief Pack a iusc_ctrl_mission_uav_gimbal_ctrl message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param time_usec  Ê±¼ä´Á
 * @param roll  µõ²Õ¹ö×ª½Ç
 * @param pitch  µõ²Õ¸©Ñö½Ç
 * @param yaw  µõ²ÕÆ«º½½Ç
 * @param ang_order_type  ¿ØÖÆÄ£Ê½
 * @param backup  ±¸ÓÃ
 * @param ang_order_roll  µõ²Õ¹ö×ª½ÇÖ¸Áî
 * @param ang_order_pitch  µõ²Õ¸©Ñö½ÇÖ¸Áî
 * @param ang_order_yaw  µõ²ÕÆ«º½½ÇÖ¸Áî
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_iusc_ctrl_mission_uav_gimbal_ctrl_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint64_t time_usec,float roll,float pitch,float yaw,uint8_t ang_order_type,uint8_t backup,float ang_order_roll,float ang_order_pitch,float ang_order_yaw)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_IUSC_CTRL_MISSION_UAV_GIMBAL_CTRL_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_float(buf, 8, roll);
    _mav_put_float(buf, 12, pitch);
    _mav_put_float(buf, 16, yaw);
    _mav_put_float(buf, 20, ang_order_roll);
    _mav_put_float(buf, 24, ang_order_pitch);
    _mav_put_float(buf, 28, ang_order_yaw);
    _mav_put_uint8_t(buf, 32, ang_order_type);
    _mav_put_uint8_t(buf, 33, backup);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_UAV_GIMBAL_CTRL_LEN);
#else
    mavlink_iusc_ctrl_mission_uav_gimbal_ctrl_t packet;
    packet.time_usec = time_usec;
    packet.roll = roll;
    packet.pitch = pitch;
    packet.yaw = yaw;
    packet.ang_order_roll = ang_order_roll;
    packet.ang_order_pitch = ang_order_pitch;
    packet.ang_order_yaw = ang_order_yaw;
    packet.ang_order_type = ang_order_type;
    packet.backup = backup;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_UAV_GIMBAL_CTRL_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_IUSC_CTRL_MISSION_UAV_GIMBAL_CTRL;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_UAV_GIMBAL_CTRL_MIN_LEN, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_UAV_GIMBAL_CTRL_LEN, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_UAV_GIMBAL_CTRL_CRC);
}

/**
 * @brief Encode a iusc_ctrl_mission_uav_gimbal_ctrl struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param iusc_ctrl_mission_uav_gimbal_ctrl C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_iusc_ctrl_mission_uav_gimbal_ctrl_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_iusc_ctrl_mission_uav_gimbal_ctrl_t* iusc_ctrl_mission_uav_gimbal_ctrl)
{
    return mavlink_msg_iusc_ctrl_mission_uav_gimbal_ctrl_pack(system_id, component_id, msg, iusc_ctrl_mission_uav_gimbal_ctrl->time_usec, iusc_ctrl_mission_uav_gimbal_ctrl->roll, iusc_ctrl_mission_uav_gimbal_ctrl->pitch, iusc_ctrl_mission_uav_gimbal_ctrl->yaw, iusc_ctrl_mission_uav_gimbal_ctrl->ang_order_type, iusc_ctrl_mission_uav_gimbal_ctrl->backup, iusc_ctrl_mission_uav_gimbal_ctrl->ang_order_roll, iusc_ctrl_mission_uav_gimbal_ctrl->ang_order_pitch, iusc_ctrl_mission_uav_gimbal_ctrl->ang_order_yaw);
}

/**
 * @brief Encode a iusc_ctrl_mission_uav_gimbal_ctrl struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param iusc_ctrl_mission_uav_gimbal_ctrl C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_iusc_ctrl_mission_uav_gimbal_ctrl_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_iusc_ctrl_mission_uav_gimbal_ctrl_t* iusc_ctrl_mission_uav_gimbal_ctrl)
{
    return mavlink_msg_iusc_ctrl_mission_uav_gimbal_ctrl_pack_chan(system_id, component_id, chan, msg, iusc_ctrl_mission_uav_gimbal_ctrl->time_usec, iusc_ctrl_mission_uav_gimbal_ctrl->roll, iusc_ctrl_mission_uav_gimbal_ctrl->pitch, iusc_ctrl_mission_uav_gimbal_ctrl->yaw, iusc_ctrl_mission_uav_gimbal_ctrl->ang_order_type, iusc_ctrl_mission_uav_gimbal_ctrl->backup, iusc_ctrl_mission_uav_gimbal_ctrl->ang_order_roll, iusc_ctrl_mission_uav_gimbal_ctrl->ang_order_pitch, iusc_ctrl_mission_uav_gimbal_ctrl->ang_order_yaw);
}

/**
 * @brief Send a iusc_ctrl_mission_uav_gimbal_ctrl message
 * @param chan MAVLink channel to send the message
 *
 * @param time_usec  Ê±¼ä´Á
 * @param roll  µõ²Õ¹ö×ª½Ç
 * @param pitch  µõ²Õ¸©Ñö½Ç
 * @param yaw  µõ²ÕÆ«º½½Ç
 * @param ang_order_type  ¿ØÖÆÄ£Ê½
 * @param backup  ±¸ÓÃ
 * @param ang_order_roll  µõ²Õ¹ö×ª½ÇÖ¸Áî
 * @param ang_order_pitch  µõ²Õ¸©Ñö½ÇÖ¸Áî
 * @param ang_order_yaw  µõ²ÕÆ«º½½ÇÖ¸Áî
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_iusc_ctrl_mission_uav_gimbal_ctrl_send(mavlink_channel_t chan, uint64_t time_usec, float roll, float pitch, float yaw, uint8_t ang_order_type, uint8_t backup, float ang_order_roll, float ang_order_pitch, float ang_order_yaw)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_IUSC_CTRL_MISSION_UAV_GIMBAL_CTRL_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_float(buf, 8, roll);
    _mav_put_float(buf, 12, pitch);
    _mav_put_float(buf, 16, yaw);
    _mav_put_float(buf, 20, ang_order_roll);
    _mav_put_float(buf, 24, ang_order_pitch);
    _mav_put_float(buf, 28, ang_order_yaw);
    _mav_put_uint8_t(buf, 32, ang_order_type);
    _mav_put_uint8_t(buf, 33, backup);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_UAV_GIMBAL_CTRL, buf, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_UAV_GIMBAL_CTRL_MIN_LEN, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_UAV_GIMBAL_CTRL_LEN, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_UAV_GIMBAL_CTRL_CRC);
#else
    mavlink_iusc_ctrl_mission_uav_gimbal_ctrl_t packet;
    packet.time_usec = time_usec;
    packet.roll = roll;
    packet.pitch = pitch;
    packet.yaw = yaw;
    packet.ang_order_roll = ang_order_roll;
    packet.ang_order_pitch = ang_order_pitch;
    packet.ang_order_yaw = ang_order_yaw;
    packet.ang_order_type = ang_order_type;
    packet.backup = backup;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_UAV_GIMBAL_CTRL, (const char *)&packet, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_UAV_GIMBAL_CTRL_MIN_LEN, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_UAV_GIMBAL_CTRL_LEN, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_UAV_GIMBAL_CTRL_CRC);
#endif
}

/**
 * @brief Send a iusc_ctrl_mission_uav_gimbal_ctrl message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_iusc_ctrl_mission_uav_gimbal_ctrl_send_struct(mavlink_channel_t chan, const mavlink_iusc_ctrl_mission_uav_gimbal_ctrl_t* iusc_ctrl_mission_uav_gimbal_ctrl)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_iusc_ctrl_mission_uav_gimbal_ctrl_send(chan, iusc_ctrl_mission_uav_gimbal_ctrl->time_usec, iusc_ctrl_mission_uav_gimbal_ctrl->roll, iusc_ctrl_mission_uav_gimbal_ctrl->pitch, iusc_ctrl_mission_uav_gimbal_ctrl->yaw, iusc_ctrl_mission_uav_gimbal_ctrl->ang_order_type, iusc_ctrl_mission_uav_gimbal_ctrl->backup, iusc_ctrl_mission_uav_gimbal_ctrl->ang_order_roll, iusc_ctrl_mission_uav_gimbal_ctrl->ang_order_pitch, iusc_ctrl_mission_uav_gimbal_ctrl->ang_order_yaw);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_UAV_GIMBAL_CTRL, (const char *)iusc_ctrl_mission_uav_gimbal_ctrl, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_UAV_GIMBAL_CTRL_MIN_LEN, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_UAV_GIMBAL_CTRL_LEN, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_UAV_GIMBAL_CTRL_CRC);
#endif
}

#if MAVLINK_MSG_ID_IUSC_CTRL_MISSION_UAV_GIMBAL_CTRL_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_iusc_ctrl_mission_uav_gimbal_ctrl_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t time_usec, float roll, float pitch, float yaw, uint8_t ang_order_type, uint8_t backup, float ang_order_roll, float ang_order_pitch, float ang_order_yaw)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_float(buf, 8, roll);
    _mav_put_float(buf, 12, pitch);
    _mav_put_float(buf, 16, yaw);
    _mav_put_float(buf, 20, ang_order_roll);
    _mav_put_float(buf, 24, ang_order_pitch);
    _mav_put_float(buf, 28, ang_order_yaw);
    _mav_put_uint8_t(buf, 32, ang_order_type);
    _mav_put_uint8_t(buf, 33, backup);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_UAV_GIMBAL_CTRL, buf, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_UAV_GIMBAL_CTRL_MIN_LEN, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_UAV_GIMBAL_CTRL_LEN, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_UAV_GIMBAL_CTRL_CRC);
#else
    mavlink_iusc_ctrl_mission_uav_gimbal_ctrl_t *packet = (mavlink_iusc_ctrl_mission_uav_gimbal_ctrl_t *)msgbuf;
    packet->time_usec = time_usec;
    packet->roll = roll;
    packet->pitch = pitch;
    packet->yaw = yaw;
    packet->ang_order_roll = ang_order_roll;
    packet->ang_order_pitch = ang_order_pitch;
    packet->ang_order_yaw = ang_order_yaw;
    packet->ang_order_type = ang_order_type;
    packet->backup = backup;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_UAV_GIMBAL_CTRL, (const char *)packet, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_UAV_GIMBAL_CTRL_MIN_LEN, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_UAV_GIMBAL_CTRL_LEN, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_UAV_GIMBAL_CTRL_CRC);
#endif
}
#endif

#endif

// MESSAGE IUSC_CTRL_MISSION_UAV_GIMBAL_CTRL UNPACKING


/**
 * @brief Get field time_usec from iusc_ctrl_mission_uav_gimbal_ctrl message
 *
 * @return  Ê±¼ä´Á
 */
static inline uint64_t mavlink_msg_iusc_ctrl_mission_uav_gimbal_ctrl_get_time_usec(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field roll from iusc_ctrl_mission_uav_gimbal_ctrl message
 *
 * @return  µõ²Õ¹ö×ª½Ç
 */
static inline float mavlink_msg_iusc_ctrl_mission_uav_gimbal_ctrl_get_roll(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field pitch from iusc_ctrl_mission_uav_gimbal_ctrl message
 *
 * @return  µõ²Õ¸©Ñö½Ç
 */
static inline float mavlink_msg_iusc_ctrl_mission_uav_gimbal_ctrl_get_pitch(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Get field yaw from iusc_ctrl_mission_uav_gimbal_ctrl message
 *
 * @return  µõ²ÕÆ«º½½Ç
 */
static inline float mavlink_msg_iusc_ctrl_mission_uav_gimbal_ctrl_get_yaw(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  16);
}

/**
 * @brief Get field ang_order_type from iusc_ctrl_mission_uav_gimbal_ctrl message
 *
 * @return  ¿ØÖÆÄ£Ê½
 */
static inline uint8_t mavlink_msg_iusc_ctrl_mission_uav_gimbal_ctrl_get_ang_order_type(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  32);
}

/**
 * @brief Get field backup from iusc_ctrl_mission_uav_gimbal_ctrl message
 *
 * @return  ±¸ÓÃ
 */
static inline uint8_t mavlink_msg_iusc_ctrl_mission_uav_gimbal_ctrl_get_backup(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  33);
}

/**
 * @brief Get field ang_order_roll from iusc_ctrl_mission_uav_gimbal_ctrl message
 *
 * @return  µõ²Õ¹ö×ª½ÇÖ¸Áî
 */
static inline float mavlink_msg_iusc_ctrl_mission_uav_gimbal_ctrl_get_ang_order_roll(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  20);
}

/**
 * @brief Get field ang_order_pitch from iusc_ctrl_mission_uav_gimbal_ctrl message
 *
 * @return  µõ²Õ¸©Ñö½ÇÖ¸Áî
 */
static inline float mavlink_msg_iusc_ctrl_mission_uav_gimbal_ctrl_get_ang_order_pitch(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  24);
}

/**
 * @brief Get field ang_order_yaw from iusc_ctrl_mission_uav_gimbal_ctrl message
 *
 * @return  µõ²ÕÆ«º½½ÇÖ¸Áî
 */
static inline float mavlink_msg_iusc_ctrl_mission_uav_gimbal_ctrl_get_ang_order_yaw(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  28);
}

/**
 * @brief Decode a iusc_ctrl_mission_uav_gimbal_ctrl message into a struct
 *
 * @param msg The message to decode
 * @param iusc_ctrl_mission_uav_gimbal_ctrl C-struct to decode the message contents into
 */
static inline void mavlink_msg_iusc_ctrl_mission_uav_gimbal_ctrl_decode(const mavlink_message_t* msg, mavlink_iusc_ctrl_mission_uav_gimbal_ctrl_t* iusc_ctrl_mission_uav_gimbal_ctrl)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    iusc_ctrl_mission_uav_gimbal_ctrl->time_usec = mavlink_msg_iusc_ctrl_mission_uav_gimbal_ctrl_get_time_usec(msg);
    iusc_ctrl_mission_uav_gimbal_ctrl->roll = mavlink_msg_iusc_ctrl_mission_uav_gimbal_ctrl_get_roll(msg);
    iusc_ctrl_mission_uav_gimbal_ctrl->pitch = mavlink_msg_iusc_ctrl_mission_uav_gimbal_ctrl_get_pitch(msg);
    iusc_ctrl_mission_uav_gimbal_ctrl->yaw = mavlink_msg_iusc_ctrl_mission_uav_gimbal_ctrl_get_yaw(msg);
    iusc_ctrl_mission_uav_gimbal_ctrl->ang_order_roll = mavlink_msg_iusc_ctrl_mission_uav_gimbal_ctrl_get_ang_order_roll(msg);
    iusc_ctrl_mission_uav_gimbal_ctrl->ang_order_pitch = mavlink_msg_iusc_ctrl_mission_uav_gimbal_ctrl_get_ang_order_pitch(msg);
    iusc_ctrl_mission_uav_gimbal_ctrl->ang_order_yaw = mavlink_msg_iusc_ctrl_mission_uav_gimbal_ctrl_get_ang_order_yaw(msg);
    iusc_ctrl_mission_uav_gimbal_ctrl->ang_order_type = mavlink_msg_iusc_ctrl_mission_uav_gimbal_ctrl_get_ang_order_type(msg);
    iusc_ctrl_mission_uav_gimbal_ctrl->backup = mavlink_msg_iusc_ctrl_mission_uav_gimbal_ctrl_get_backup(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_IUSC_CTRL_MISSION_UAV_GIMBAL_CTRL_LEN? msg->len : MAVLINK_MSG_ID_IUSC_CTRL_MISSION_UAV_GIMBAL_CTRL_LEN;
        memset(iusc_ctrl_mission_uav_gimbal_ctrl, 0, MAVLINK_MSG_ID_IUSC_CTRL_MISSION_UAV_GIMBAL_CTRL_LEN);
    memcpy(iusc_ctrl_mission_uav_gimbal_ctrl, _MAV_PAYLOAD(msg), len);
#endif
}
