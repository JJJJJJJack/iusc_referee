// MESSAGE IUSC_CTRL_MISSION_COMPUTER_ACK support class

#pragma once

namespace mavlink {
namespace common_IUCS2022 {
namespace msg {

/**
 * @brief IUSC_CTRL_MISSION_COMPUTER_ACK message
 *
 * 无人机的接收裁判终端消息确认
 */
struct IUSC_CTRL_MISSION_COMPUTER_ACK : mavlink::Message {
    static constexpr msgid_t MSG_ID = 13022;
    static constexpr size_t LENGTH = 20;
    static constexpr size_t MIN_LENGTH = 20;
    static constexpr uint8_t CRC_EXTRA = 254;
    static constexpr auto NAME = "IUSC_CTRL_MISSION_COMPUTER_ACK";


    uint64_t time_usec; /*<  时间戳 */
    uint8_t ack; /*<  信息确认 */
    uint64_t time_recv; /*<  接收时间戳 */
    uint8_t uav_id; /*<  身份id */
    uint8_t msg_ack; /*<  消息ID */
    uint8_t seq_ack; /*<  序列号 */


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
        ss << "  ack: " << +ack << std::endl;
        ss << "  time_recv: " << time_recv << std::endl;
        ss << "  uav_id: " << +uav_id << std::endl;
        ss << "  msg_ack: " << +msg_ack << std::endl;
        ss << "  seq_ack: " << +seq_ack << std::endl;

        return ss.str();
    }

    inline void serialize(mavlink::MsgMap &map) const override
    {
        map.reset(MSG_ID, LENGTH);

        map << time_usec;                     // offset: 0
        map << time_recv;                     // offset: 8
        map << ack;                           // offset: 16
        map << uav_id;                        // offset: 17
        map << msg_ack;                       // offset: 18
        map << seq_ack;                       // offset: 19
    }

    inline void deserialize(mavlink::MsgMap &map) override
    {
        map >> time_usec;                     // offset: 0
        map >> time_recv;                     // offset: 8
        map >> ack;                           // offset: 16
        map >> uav_id;                        // offset: 17
        map >> msg_ack;                       // offset: 18
        map >> seq_ack;                       // offset: 19
    }
};

} // namespace msg
} // namespace common_IUCS2022
} // namespace mavlink
