// MESSAGE IUSC_CTRL_UGV_LASER_STATUS support class

#pragma once

namespace mavlink {
namespace common_IUCS2022 {
namespace msg {

/**
 * @brief IUSC_CTRL_UGV_LASER_STATUS message
 *
 * ���˳����ؼ��������״̬
 */
struct IUSC_CTRL_UGV_LASER_STATUS : mavlink::Message {
    static constexpr msgid_t MSG_ID = 13033;
    static constexpr size_t LENGTH = 9;
    static constexpr size_t MIN_LENGTH = 9;
    static constexpr uint8_t CRC_EXTRA = 42;
    static constexpr auto NAME = "IUSC_CTRL_UGV_LASER_STATUS";


    uint64_t time_usec; /*<  ʱ��� */
    uint8_t state; /*<  0x00��δ���յ������ź� 0x01����ǰ������Ϣ���˳�ģʽ�����ѽ��յ����������ź� 0x02����ǰ���ڻ������˳�ģʽ�����ѽ��յ����������ź� */


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

        return ss.str();
    }

    inline void serialize(mavlink::MsgMap &map) const override
    {
        map.reset(MSG_ID, LENGTH);

        map << time_usec;                     // offset: 0
        map << state;                         // offset: 8
    }

    inline void deserialize(mavlink::MsgMap &map) override
    {
        map >> time_usec;                     // offset: 0
        map >> state;                         // offset: 8
    }
};

} // namespace msg
} // namespace common_IUCS2022
} // namespace mavlink
