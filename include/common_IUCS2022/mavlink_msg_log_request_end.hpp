// MESSAGE LOG_REQUEST_END support class

#pragma once

namespace mavlink {
namespace common_IUCS2022 {
namespace msg {

/**
 * @brief LOG_REQUEST_END message
 *
 * Stop log transfer and resume normal logging
 */
struct LOG_REQUEST_END : mavlink::Message {
    static constexpr msgid_t MSG_ID = 122;
    static constexpr size_t LENGTH = 2;
    static constexpr size_t MIN_LENGTH = 2;
    static constexpr uint8_t CRC_EXTRA = 203;
    static constexpr auto NAME = "LOG_REQUEST_END";


    uint8_t target_system; /*<  System ID */
    uint8_t target_component; /*<  Component ID */


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
        ss << "  target_system: " << +target_system << std::endl;
        ss << "  target_component: " << +target_component << std::endl;

        return ss.str();
    }

    inline void serialize(mavlink::MsgMap &map) const override
    {
        map.reset(MSG_ID, LENGTH);

        map << target_system;                 // offset: 0
        map << target_component;              // offset: 1
    }

    inline void deserialize(mavlink::MsgMap &map) override
    {
        map >> target_system;                 // offset: 0
        map >> target_component;              // offset: 1
    }
};

} // namespace msg
} // namespace common_IUCS2022
} // namespace mavlink
