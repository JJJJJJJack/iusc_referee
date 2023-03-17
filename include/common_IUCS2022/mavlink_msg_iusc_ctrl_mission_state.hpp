// MESSAGE IUSC_CTRL_MISSION_STATE support class

#pragma once

namespace mavlink {
namespace common_IUCS2022 {
namespace msg {

/**
 * @brief IUSC_CTRL_MISSION_STATE message
 *
 * 比赛任务状态信息
 */
struct IUSC_CTRL_MISSION_STATE : mavlink::Message {
    static constexpr msgid_t MSG_ID = 13010;
    static constexpr size_t LENGTH = 11;
    static constexpr size_t MIN_LENGTH = 11;
    static constexpr uint8_t CRC_EXTRA = 63;
    static constexpr auto NAME = "IUSC_CTRL_MISSION_STATE";


    uint64_t time_usec; /*<  时间戳 */
    uint8_t uav_id; /*<  身份id */
    uint8_t armed; /*<  开始比赛 */
    uint8_t stage; /*<  目前的比赛阶段 */


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
        ss << "  uav_id: " << +uav_id << std::endl;
        ss << "  armed: " << +armed << std::endl;
        ss << "  stage: " << +stage << std::endl;

        return ss.str();
    }

    inline void serialize(mavlink::MsgMap &map) const override
    {
        map.reset(MSG_ID, LENGTH);

        map << time_usec;                     // offset: 0
        map << uav_id;                        // offset: 8
        map << armed;                         // offset: 9
        map << stage;                         // offset: 10
    }

    inline void deserialize(mavlink::MsgMap &map) override
    {
        map >> time_usec;                     // offset: 0
        map >> uav_id;                        // offset: 8
        map >> armed;                         // offset: 9
        map >> stage;                         // offset: 10
    }
};

} // namespace msg
} // namespace common_IUCS2022
} // namespace mavlink
