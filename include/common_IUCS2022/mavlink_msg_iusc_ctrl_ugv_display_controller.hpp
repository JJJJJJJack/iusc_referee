// MESSAGE IUSC_CTRL_UGV_DISPLAY_CONTROLLER support class

#pragma once

namespace mavlink {
namespace common_IUCS2022 {
namespace msg {

/**
 * @brief IUSC_CTRL_UGV_DISPLAY_CONTROLLER message
 *
 * 无人车显示器生成提示信息
 */
struct IUSC_CTRL_UGV_DISPLAY_CONTROLLER : mavlink::Message {
    static constexpr msgid_t MSG_ID = 13032;
    static constexpr size_t LENGTH = 15;
    static constexpr size_t MIN_LENGTH = 15;
    static constexpr uint8_t CRC_EXTRA = 224;
    static constexpr auto NAME = "IUSC_CTRL_UGV_DISPLAY_CONTROLLER";


    uint64_t time_usec; /*<  时间戳 */
    uint8_t state; /*<  模式判定:0x00：信息无人车;0x01：火情无人车 */
    uint8_t enable; /*<  是否显示 */
    uint8_t char1; /*<  第1个字符 */
    uint8_t char2; /*<  第2个字符 */
    uint8_t char3; /*<  第3个字符 */
    uint8_t char4; /*<  第4个字符 */
    uint8_t char5; /*<  第5个字符 */


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
        ss << "  enable: " << +enable << std::endl;
        ss << "  char1: " << +char1 << std::endl;
        ss << "  char2: " << +char2 << std::endl;
        ss << "  char3: " << +char3 << std::endl;
        ss << "  char4: " << +char4 << std::endl;
        ss << "  char5: " << +char5 << std::endl;

        return ss.str();
    }

    inline void serialize(mavlink::MsgMap &map) const override
    {
        map.reset(MSG_ID, LENGTH);

        map << time_usec;                     // offset: 0
        map << state;                         // offset: 8
        map << enable;                        // offset: 9
        map << char1;                         // offset: 10
        map << char2;                         // offset: 11
        map << char3;                         // offset: 12
        map << char4;                         // offset: 13
        map << char5;                         // offset: 14
    }

    inline void deserialize(mavlink::MsgMap &map) override
    {
        map >> time_usec;                     // offset: 0
        map >> state;                         // offset: 8
        map >> enable;                        // offset: 9
        map >> char1;                         // offset: 10
        map >> char2;                         // offset: 11
        map >> char3;                         // offset: 12
        map >> char4;                         // offset: 13
        map >> char5;                         // offset: 14
    }
};

} // namespace msg
} // namespace common_IUCS2022
} // namespace mavlink
