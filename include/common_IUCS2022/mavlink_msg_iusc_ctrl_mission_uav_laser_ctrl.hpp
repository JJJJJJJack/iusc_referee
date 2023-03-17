// MESSAGE IUSC_CTRL_MISSION_UAV_LASER_CTRL support class

#pragma once

namespace mavlink {
namespace common_IUCS2022 {
namespace msg {

/**
 * @brief IUSC_CTRL_MISSION_UAV_LASER_CTRL message
 *
 * 无人机的激光发射指令
 */
struct IUSC_CTRL_MISSION_UAV_LASER_CTRL : mavlink::Message {
    static constexpr msgid_t MSG_ID = 13020;
    static constexpr size_t LENGTH = 10;
    static constexpr size_t MIN_LENGTH = 10;
    static constexpr uint8_t CRC_EXTRA = 12;
    static constexpr auto NAME = "IUSC_CTRL_MISSION_UAV_LASER_CTRL";


    uint64_t time_usec; /*<  时间戳 */
    uint8_t laser_ctrl; /*<  激光指令 */
    uint8_t backup; /*<  备用 */


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
        ss << "  laser_ctrl: " << +laser_ctrl << std::endl;
        ss << "  backup: " << +backup << std::endl;

        return ss.str();
    }

    inline void serialize(mavlink::MsgMap &map) const override
    {
        map.reset(MSG_ID, LENGTH);

        map << time_usec;                     // offset: 0
        map << laser_ctrl;                    // offset: 8
        map << backup;                        // offset: 9
    }

    inline void deserialize(mavlink::MsgMap &map) override
    {
        map >> time_usec;                     // offset: 0
        map >> laser_ctrl;                    // offset: 8
        map >> backup;                        // offset: 9
    }
};

} // namespace msg
} // namespace common_IUCS2022
} // namespace mavlink
