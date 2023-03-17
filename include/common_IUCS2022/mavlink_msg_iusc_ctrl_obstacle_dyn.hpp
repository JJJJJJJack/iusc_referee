// MESSAGE IUSC_CTRL_OBSTACLE_DYN support class

#pragma once

namespace mavlink {
namespace common_IUCS2022 {
namespace msg {

/**
 * @brief IUSC_CTRL_OBSTACLE_DYN message
 *
 * IUSC_CTRL_OBSTACLE_DYN
 */
struct IUSC_CTRL_OBSTACLE_DYN : mavlink::Message {
    static constexpr msgid_t MSG_ID = 13001;
    static constexpr size_t LENGTH = 25;
    static constexpr size_t MIN_LENGTH = 25;
    static constexpr uint8_t CRC_EXTRA = 79;
    static constexpr auto NAME = "IUSC_CTRL_OBSTACLE_DYN";


    uint64_t time_usec; /*<  时间戳 */
    uint8_t state; /*<  电机状态 */
    float control0; /*<  电机0转速 */
    float control1; /*<  电机0转速 */
    float control2; /*<  电机0转速 */
    float control3; /*<  电机0转速 */


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
        ss << "  state: " << +state << std::endl;
        ss << "  control0: " << control0 << std::endl;
        ss << "  control1: " << control1 << std::endl;
        ss << "  control2: " << control2 << std::endl;
        ss << "  control3: " << control3 << std::endl;

        return ss.str();
    }

    inline void serialize(mavlink::MsgMap &map) const override
    {
        map.reset(MSG_ID, LENGTH);

        map << time_usec;                     // offset: 0
        map << control0;                      // offset: 8
        map << control1;                      // offset: 12
        map << control2;                      // offset: 16
        map << control3;                      // offset: 20
        map << state;                         // offset: 24
    }

    inline void deserialize(mavlink::MsgMap &map) override
    {
        map >> time_usec;                     // offset: 0
        map >> control0;                      // offset: 8
        map >> control1;                      // offset: 12
        map >> control2;                      // offset: 16
        map >> control3;                      // offset: 20
        map >> state;                         // offset: 24
    }
};

} // namespace msg
} // namespace common_IUCS2022
} // namespace mavlink
