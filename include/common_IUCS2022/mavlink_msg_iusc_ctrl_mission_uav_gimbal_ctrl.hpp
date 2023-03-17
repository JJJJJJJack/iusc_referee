// MESSAGE IUSC_CTRL_MISSION_UAV_GIMBAL_CTRL support class

#pragma once

namespace mavlink {
namespace common_IUCS2022 {
namespace msg {

/**
 * @brief IUSC_CTRL_MISSION_UAV_GIMBAL_CTRL message
 *
 * ���˻�����̨���տ���ָ��
 */
struct IUSC_CTRL_MISSION_UAV_GIMBAL_CTRL : mavlink::Message {
    static constexpr msgid_t MSG_ID = 13021;
    static constexpr size_t LENGTH = 34;
    static constexpr size_t MIN_LENGTH = 34;
    static constexpr uint8_t CRC_EXTRA = 208;
    static constexpr auto NAME = "IUSC_CTRL_MISSION_UAV_GIMBAL_CTRL";


    uint64_t time_usec; /*<  ʱ��� */
    float roll; /*<  ���չ�ת�� */
    float pitch; /*<  ���ո����� */
    float yaw; /*<  ����ƫ���� */
    uint8_t ang_order_type; /*<  ����ģʽ */
    uint8_t backup; /*<  ���� */
    float ang_order_roll; /*<  ���չ�ת��ָ�� */
    float ang_order_pitch; /*<  ���ո�����ָ�� */
    float ang_order_yaw; /*<  ����ƫ����ָ�� */


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
        ss << "  roll: " << roll << std::endl;
        ss << "  pitch: " << pitch << std::endl;
        ss << "  yaw: " << yaw << std::endl;
        ss << "  ang_order_type: " << +ang_order_type << std::endl;
        ss << "  backup: " << +backup << std::endl;
        ss << "  ang_order_roll: " << ang_order_roll << std::endl;
        ss << "  ang_order_pitch: " << ang_order_pitch << std::endl;
        ss << "  ang_order_yaw: " << ang_order_yaw << std::endl;

        return ss.str();
    }

    inline void serialize(mavlink::MsgMap &map) const override
    {
        map.reset(MSG_ID, LENGTH);

        map << time_usec;                     // offset: 0
        map << roll;                          // offset: 8
        map << pitch;                         // offset: 12
        map << yaw;                           // offset: 16
        map << ang_order_roll;                // offset: 20
        map << ang_order_pitch;               // offset: 24
        map << ang_order_yaw;                 // offset: 28
        map << ang_order_type;                // offset: 32
        map << backup;                        // offset: 33
    }

    inline void deserialize(mavlink::MsgMap &map) override
    {
        map >> time_usec;                     // offset: 0
        map >> roll;                          // offset: 8
        map >> pitch;                         // offset: 12
        map >> yaw;                           // offset: 16
        map >> ang_order_roll;                // offset: 20
        map >> ang_order_pitch;               // offset: 24
        map >> ang_order_yaw;                 // offset: 28
        map >> ang_order_type;                // offset: 32
        map >> backup;                        // offset: 33
    }
};

} // namespace msg
} // namespace common_IUCS2022
} // namespace mavlink
