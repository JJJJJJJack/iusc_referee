// MESSAGE IUSC_CTRL_UGV_DISPLAY_CONTROLLER support class

#pragma once

namespace mavlink {
namespace common_IUCS2022 {
namespace msg {

/**
 * @brief IUSC_CTRL_UGV_DISPLAY_CONTROLLER message
 *
 * ���˳���ʾ��������ʾ��Ϣ
 */
struct IUSC_CTRL_UGV_DISPLAY_CONTROLLER : mavlink::Message {
    static constexpr msgid_t MSG_ID = 13032;
    static constexpr size_t LENGTH = 15;
    static constexpr size_t MIN_LENGTH = 15;
    static constexpr uint8_t CRC_EXTRA = 224;
    static constexpr auto NAME = "IUSC_CTRL_UGV_DISPLAY_CONTROLLER";


    uint64_t time_usec; /*<  ʱ��� */
    uint8_t state; /*<  ģʽ�ж�:0x00����Ϣ���˳�;0x01���������˳� */
    uint8_t enable; /*<  �Ƿ���ʾ */
    uint8_t char1; /*<  ��1���ַ� */
    uint8_t char2; /*<  ��2���ַ� */
    uint8_t char3; /*<  ��3���ַ� */
    uint8_t char4; /*<  ��4���ַ� */
    uint8_t char5; /*<  ��5���ַ� */


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
