// MESSAGE IUSC_CTRL_MISSION_UGV_POSITION support class

#pragma once

namespace mavlink {
namespace common_IUCS2022 {
namespace msg {

/**
 * @brief IUSC_CTRL_MISSION_UGV_POSITION message
 *
 * ����Ŀ�����˳�ȫ��λ����Ϣ
 */
struct IUSC_CTRL_MISSION_UGV_POSITION : mavlink::Message {
    static constexpr msgid_t MSG_ID = 13011;
    static constexpr size_t LENGTH = 88;
    static constexpr size_t MIN_LENGTH = 88;
    static constexpr uint8_t CRC_EXTRA = 61;
    static constexpr auto NAME = "IUSC_CTRL_MISSION_UGV_POSITION";


    uint64_t time_usec; /*<  ʱ��� */
    float UGV0_pos_x; /*<  λ��x */
    float UGV0_pos_y; /*<  λ��y */
    float UGV1_pos_x; /*<  λ��x */
    float UGV1_pos_y; /*<  λ��y */
    float UGV2_pos_x; /*<  λ��x */
    float UGV2_pos_y; /*<  λ��y */
    float UGV3_pos_x; /*<  λ��x */
    float UGV3_pos_y; /*<  λ��y */
    float UGV4_pos_x; /*<  λ��x */
    float UGV4_pos_y; /*<  λ��y */
    float UGV5_pos_x; /*<  λ��x */
    float UGV5_pos_y; /*<  λ��y */
    float UGV6_pos_x; /*<  λ��x */
    float UGV6_pos_y; /*<  λ��y */
    float UGV7_pos_x; /*<  λ��x */
    float UGV7_pos_y; /*<  λ��y */
    float UGV8_pos_x; /*<  λ��x */
    float UGV8_pos_y; /*<  λ��y */
    float UGV9_pos_x; /*<  λ��x */
    float UGV9_pos_y; /*<  λ��y */


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
        ss << "  UGV0_pos_x: " << UGV0_pos_x << std::endl;
        ss << "  UGV0_pos_y: " << UGV0_pos_y << std::endl;
        ss << "  UGV1_pos_x: " << UGV1_pos_x << std::endl;
        ss << "  UGV1_pos_y: " << UGV1_pos_y << std::endl;
        ss << "  UGV2_pos_x: " << UGV2_pos_x << std::endl;
        ss << "  UGV2_pos_y: " << UGV2_pos_y << std::endl;
        ss << "  UGV3_pos_x: " << UGV3_pos_x << std::endl;
        ss << "  UGV3_pos_y: " << UGV3_pos_y << std::endl;
        ss << "  UGV4_pos_x: " << UGV4_pos_x << std::endl;
        ss << "  UGV4_pos_y: " << UGV4_pos_y << std::endl;
        ss << "  UGV5_pos_x: " << UGV5_pos_x << std::endl;
        ss << "  UGV5_pos_y: " << UGV5_pos_y << std::endl;
        ss << "  UGV6_pos_x: " << UGV6_pos_x << std::endl;
        ss << "  UGV6_pos_y: " << UGV6_pos_y << std::endl;
        ss << "  UGV7_pos_x: " << UGV7_pos_x << std::endl;
        ss << "  UGV7_pos_y: " << UGV7_pos_y << std::endl;
        ss << "  UGV8_pos_x: " << UGV8_pos_x << std::endl;
        ss << "  UGV8_pos_y: " << UGV8_pos_y << std::endl;
        ss << "  UGV9_pos_x: " << UGV9_pos_x << std::endl;
        ss << "  UGV9_pos_y: " << UGV9_pos_y << std::endl;

        return ss.str();
    }

    inline void serialize(mavlink::MsgMap &map) const override
    {
        map.reset(MSG_ID, LENGTH);

        map << time_usec;                     // offset: 0
        map << UGV0_pos_x;                    // offset: 8
        map << UGV0_pos_y;                    // offset: 12
        map << UGV1_pos_x;                    // offset: 16
        map << UGV1_pos_y;                    // offset: 20
        map << UGV2_pos_x;                    // offset: 24
        map << UGV2_pos_y;                    // offset: 28
        map << UGV3_pos_x;                    // offset: 32
        map << UGV3_pos_y;                    // offset: 36
        map << UGV4_pos_x;                    // offset: 40
        map << UGV4_pos_y;                    // offset: 44
        map << UGV5_pos_x;                    // offset: 48
        map << UGV5_pos_y;                    // offset: 52
        map << UGV6_pos_x;                    // offset: 56
        map << UGV6_pos_y;                    // offset: 60
        map << UGV7_pos_x;                    // offset: 64
        map << UGV7_pos_y;                    // offset: 68
        map << UGV8_pos_x;                    // offset: 72
        map << UGV8_pos_y;                    // offset: 76
        map << UGV9_pos_x;                    // offset: 80
        map << UGV9_pos_y;                    // offset: 84
    }

    inline void deserialize(mavlink::MsgMap &map) override
    {
        map >> time_usec;                     // offset: 0
        map >> UGV0_pos_x;                    // offset: 8
        map >> UGV0_pos_y;                    // offset: 12
        map >> UGV1_pos_x;                    // offset: 16
        map >> UGV1_pos_y;                    // offset: 20
        map >> UGV2_pos_x;                    // offset: 24
        map >> UGV2_pos_y;                    // offset: 28
        map >> UGV3_pos_x;                    // offset: 32
        map >> UGV3_pos_y;                    // offset: 36
        map >> UGV4_pos_x;                    // offset: 40
        map >> UGV4_pos_y;                    // offset: 44
        map >> UGV5_pos_x;                    // offset: 48
        map >> UGV5_pos_y;                    // offset: 52
        map >> UGV6_pos_x;                    // offset: 56
        map >> UGV6_pos_y;                    // offset: 60
        map >> UGV7_pos_x;                    // offset: 64
        map >> UGV7_pos_y;                    // offset: 68
        map >> UGV8_pos_x;                    // offset: 72
        map >> UGV8_pos_y;                    // offset: 76
        map >> UGV9_pos_x;                    // offset: 80
        map >> UGV9_pos_y;                    // offset: 84
    }
};

} // namespace msg
} // namespace common_IUCS2022
} // namespace mavlink
