// MESSAGE IUSC_CTRL_RESCUE_ROBOT support class

#pragma once

namespace mavlink {
namespace common_IUCS2022 {
namespace msg {

/**
 * @brief IUSC_CTRL_RESCUE_ROBOT message
 *
 * ��ȼ��˿���ָ��
 */
struct IUSC_CTRL_RESCUE_ROBOT : mavlink::Message {
    static constexpr msgid_t MSG_ID = 13002;
    static constexpr size_t LENGTH = 10;
    static constexpr size_t MIN_LENGTH = 10;
    static constexpr uint8_t CRC_EXTRA = 227;
    static constexpr auto NAME = "IUSC_CTRL_RESCUE_ROBOT";


    uint64_t time_usec; /*<  ʱ��� */
    uint8_t dummy_id; /*<  ����id��0x00~0x09�����˱��1-10 */
    uint8_t state; /*<  ����״̬:0x00�����˲���;0x01�����˿�ʼ��� */


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
        ss << "  dummy_id: " << +dummy_id << std::endl;
        ss << "  state: " << +state << std::endl;

        return ss.str();
    }

    inline void serialize(mavlink::MsgMap &map) const override
    {
        map.reset(MSG_ID, LENGTH);

        map << time_usec;                     // offset: 0
        map << dummy_id;                      // offset: 8
        map << state;                         // offset: 9
    }

    inline void deserialize(mavlink::MsgMap &map) override
    {
        map >> time_usec;                     // offset: 0
        map >> dummy_id;                      // offset: 8
        map >> state;                         // offset: 9
    }
};

} // namespace msg
} // namespace common_IUCS2022
} // namespace mavlink
