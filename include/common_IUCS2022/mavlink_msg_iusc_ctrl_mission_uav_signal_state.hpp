// MESSAGE IUSC_CTRL_MISSION_UAV_SIGNAL_STATE support class

#pragma once

namespace mavlink {
namespace common_IUCS2022 {
namespace msg {

/**
 * @brief IUSC_CTRL_MISSION_UAV_SIGNAL_STATE message
 *
 * 无人机个体的位姿信息
 */
struct IUSC_CTRL_MISSION_UAV_SIGNAL_STATE : mavlink::Message {
    static constexpr msgid_t MSG_ID = 13012;
    static constexpr size_t LENGTH = 32;
    static constexpr size_t MIN_LENGTH = 32;
    static constexpr uint8_t CRC_EXTRA = 118;
    static constexpr auto NAME = "IUSC_CTRL_MISSION_UAV_SIGNAL_STATE";


    uint64_t time_usec; /*<  时间戳 */
    float pos_x; /*<  位置x */
    float pos_y; /*<  位置y */
    float pos_z; /*<  位置z */
    float roll; /*<  滚转角 */
    float pitch; /*<  俯仰角 */
    float yaw; /*<  偏航角 */


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
        ss << "  pos_x: " << pos_x << std::endl;
        ss << "  pos_y: " << pos_y << std::endl;
        ss << "  pos_z: " << pos_z << std::endl;
        ss << "  roll: " << roll << std::endl;
        ss << "  pitch: " << pitch << std::endl;
        ss << "  yaw: " << yaw << std::endl;

        return ss.str();
    }

    inline void serialize(mavlink::MsgMap &map) const override
    {
        map.reset(MSG_ID, LENGTH);

        map << time_usec;                     // offset: 0
        map << pos_x;                         // offset: 8
        map << pos_y;                         // offset: 12
        map << pos_z;                         // offset: 16
        map << roll;                          // offset: 20
        map << pitch;                         // offset: 24
        map << yaw;                           // offset: 28
    }

    inline void deserialize(mavlink::MsgMap &map) override
    {
        map >> time_usec;                     // offset: 0
        map >> pos_x;                         // offset: 8
        map >> pos_y;                         // offset: 12
        map >> pos_z;                         // offset: 16
        map >> roll;                          // offset: 20
        map >> pitch;                         // offset: 24
        map >> yaw;                           // offset: 28
    }
};

} // namespace msg
} // namespace common_IUCS2022
} // namespace mavlink
