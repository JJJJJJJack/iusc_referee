// MESSAGE PLAY_TUNE_V2 support class

#pragma once

namespace mavlink {
namespace common_IUCS2022 {
namespace msg {

/**
 * @brief PLAY_TUNE_V2 message
 *
 * Play vehicle tone/tune (buzzer). Supersedes message PLAY_TUNE.
 */
struct PLAY_TUNE_V2 : mavlink::Message {
    static constexpr msgid_t MSG_ID = 400;
    static constexpr size_t LENGTH = 254;
    static constexpr size_t MIN_LENGTH = 254;
    static constexpr uint8_t CRC_EXTRA = 110;
    static constexpr auto NAME = "PLAY_TUNE_V2";


    uint8_t target_system; /*<  System ID */
    uint8_t target_component; /*<  Component ID */
    uint32_t format; /*<  Tune format */
    std::array<char, 248> tune; /*<  Tune definition as a NULL-terminated string. */


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
        ss << "  format: " << format << std::endl;
        ss << "  tune: \"" << to_string(tune) << "\"" << std::endl;

        return ss.str();
    }

    inline void serialize(mavlink::MsgMap &map) const override
    {
        map.reset(MSG_ID, LENGTH);

        map << format;                        // offset: 0
        map << target_system;                 // offset: 4
        map << target_component;              // offset: 5
        map << tune;                          // offset: 6
    }

    inline void deserialize(mavlink::MsgMap &map) override
    {
        map >> format;                        // offset: 0
        map >> target_system;                 // offset: 4
        map >> target_component;              // offset: 5
        map >> tune;                          // offset: 6
    }
};

} // namespace msg
} // namespace common_IUCS2022
} // namespace mavlink
