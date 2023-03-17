// MESSAGE IUSC_CTRL_UGV_MOTION_STATE support class

#pragma once

namespace mavlink {
namespace common_IUCS2022 {
namespace msg {

/**
 * @brief IUSC_CTRL_UGV_MOTION_STATE message
 *
 * 无人车运动状态
 */
struct IUSC_CTRL_UGV_MOTION_STATE : mavlink::Message {
    static constexpr msgid_t MSG_ID = 13031;
    static constexpr size_t LENGTH = 21;
    static constexpr size_t MIN_LENGTH = 21;
    static constexpr uint8_t CRC_EXTRA = 2;
    static constexpr auto NAME = "IUSC_CTRL_UGV_MOTION_STATE";


    uint64_t time_usec; /*<  时间戳 */
    uint8_t frame_msg; /*<  帧信息：为固定值0xbb */
    uint32_t can_id; /*<  报文id：为固定值0x600 */
    uint16_t current_speed; /*<  当前车速 */
    uint8_t soc; /*<  电池soc */
    uint8_t error_level; /*<  故障等级 */
    uint8_t current_cmd_source; /*<  当前控制权限 */
    uint8_t backup; /*<  预留：固定值：0x00 */
    uint8_t heart; /*<  心跳计数 */
    uint8_t crc; /*<  CRC校验 */


    inline std::string get_name(void) const override
    {
            return NAME;
    }

    inline Info get_message_info(void) const override
    {
            return { MSG_ID, LENGTH, MIN_LENGTH, CRC_EXTRA };
    }

    inline std::string to_yaml(void) const override
    {
        std::stringstream ss;

        ss << NAME << ":" << std::endl;
        ss << "  time_usec: " << time_usec << std::endl;
        ss << "  frame_msg: " << +frame_msg << std::endl;
        ss << "  can_id: " << can_id << std::endl;
        ss << "  current_speed: " << current_speed << std::endl;
        ss << "  soc: " << +soc << std::endl;
        ss << "  error_level: " << +error_level << std::endl;
        ss << "  current_cmd_source: " << +current_cmd_source << std::endl;
        ss << "  backup: " << +backup << std::endl;
        ss << "  heart: " << +heart << std::endl;
        ss << "  crc: " << +crc << std::endl;

        return ss.str();
    }

    inline void serialize(mavlink::MsgMap &map) const override
    {
        map.reset(MSG_ID, LENGTH);

        map << time_usec;                     // offset: 0
        map << can_id;                        // offset: 8
        map << current_speed;                 // offset: 12
        map << frame_msg;                     // offset: 14
        map << soc;                           // offset: 15
        map << error_level;                   // offset: 16
        map << current_cmd_source;            // offset: 17
        map << backup;                        // offset: 18
        map << heart;                         // offset: 19
        map << crc;                           // offset: 20
    }

    inline void deserialize(mavlink::MsgMap &map) override
    {
        map >> time_usec;                     // offset: 0
        map >> can_id;                        // offset: 8
        map >> current_speed;                 // offset: 12
        map >> frame_msg;                     // offset: 14
        map >> soc;                           // offset: 15
        map >> error_level;                   // offset: 16
        map >> current_cmd_source;            // offset: 17
        map >> backup;                        // offset: 18
        map >> heart;                         // offset: 19
        map >> crc;                           // offset: 20
    }
};

} // namespace msg
} // namespace common_IUCS2022
} // namespace mavlink
