// MESSAGE IUSC_CTRL_UGV_MOTION_CONTROLLER support class

#pragma once

namespace mavlink {
namespace common_IUCS2022 {
namespace msg {

/**
 * @brief IUSC_CTRL_UGV_MOTION_CONTROLLER message
 *
 * ���˳��˶�����
 */
struct IUSC_CTRL_UGV_MOTION_CONTROLLER : mavlink::Message {
    static constexpr msgid_t MSG_ID = 13030;
    static constexpr size_t LENGTH = 21;
    static constexpr size_t MIN_LENGTH = 21;
    static constexpr uint8_t CRC_EXTRA = 114;
    static constexpr auto NAME = "IUSC_CTRL_UGV_MOTION_CONTROLLER";


    uint64_t time_usec; /*<  ʱ��� */
    uint8_t frame_msg; /*<  ֡��Ϣ��Ϊ�̶�ֵ0xcc */
    uint32_t can_id; /*<  ����id��Ϊ�̶�ֵ0x674 */
    uint16_t target_speed; /*<  Ŀ�공�� */
    uint16_t target_heading; /*<  Ŀ�꺽��� */
    uint16_t current_heading; /*<  ��ǰ��������� */
    uint8_t heart; /*<  �������� */
    uint8_t crc; /*<  CRCУ�� */


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
        ss << "  frame_msg: " << +frame_msg << std::endl;
        ss << "  can_id: " << can_id << std::endl;
        ss << "  target_speed: " << target_speed << std::endl;
        ss << "  target_heading: " << target_heading << std::endl;
        ss << "  current_heading: " << current_heading << std::endl;
        ss << "  heart: " << +heart << std::endl;
        ss << "  crc: " << +crc << std::endl;

        return ss.str();
    }

    inline void serialize(mavlink::MsgMap &map) const override
    {
        map.reset(MSG_ID, LENGTH);

        map << time_usec;                     // offset: 0
        map << can_id;                        // offset: 8
        map << target_speed;                  // offset: 12
        map << target_heading;                // offset: 14
        map << current_heading;               // offset: 16
        map << frame_msg;                     // offset: 18
        map << heart;                         // offset: 19
        map << crc;                           // offset: 20
    }

    inline void deserialize(mavlink::MsgMap &map) override
    {
        map >> time_usec;                     // offset: 0
        map >> can_id;                        // offset: 8
        map >> target_speed;                  // offset: 12
        map >> target_heading;                // offset: 14
        map >> current_heading;               // offset: 16
        map >> frame_msg;                     // offset: 18
        map >> heart;                         // offset: 19
        map >> crc;                           // offset: 20
    }
};

} // namespace msg
} // namespace common_IUCS2022
} // namespace mavlink
