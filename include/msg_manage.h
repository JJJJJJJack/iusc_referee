#ifndef MSG_MANAGE_H
#define MSG_MANAGE_H

#define SYS_ID MAV_TYPE_IUSC_UAV_MISSION_COMPUTER
#include "common_IUCS2022/mavlink.h"
#include "ros/ros.h"
#include "std_msgs/Bool.h"
#include "std_msgs/UInt8.h"
#include "std_msgs/Float32MultiArray.h"
#include "geometry_msgs/PoseStamped.h"
#include "amov_gimbal_sdk_ros/GimbalControl.h"
#include "amov_gimbal_sdk_ros/GimbalState.h"

typedef enum
{
    MavMsg_Send_HEARTBEAT 	   = 0,
    MavMsg_Send_LASER_CTRL 	   = 1,
    MavMsg_Send_GIMBAL_CTRL 	   = 2,
    MavMsg_Send_COMPUTER_ACK	   = 3,	
}E_Mavlink_Send_Type;

/*================    Local variables   ================================*/	
extern int mavlink_count_1;			
extern int mav_count_attitude;
extern uint64_t time_boot_ms;

/*================  Callback variables from local ==================*/
extern std_msgs::Bool laser_command;
extern amov_gimbal_sdk_ros::GimbalControl gimbalControl;
extern amov_gimbal_sdk_ros::GimbalState gimbalState;

/*================  Variables to send    ==================*/
extern geometry_msgs::PoseStamped quadPoseStamped;
extern std_msgs::Float32MultiArray UGVPoseXY;
extern std_msgs::UInt8 mission_state_uav_id;
extern std_msgs::UInt8 mission_state_arm_command;
extern std_msgs::UInt8 mission_state_game_stage;

/*================                    ================================*/
extern mavlink_message_t MSG_HEARTBEAT();
extern mavlink_message_t MSG_LASER_CTRL();
extern mavlink_message_t MSG_GIMBAL_CTRL();
extern mavlink_message_t MSG_COMPUTER_ACK();
int msg_equipment(uint8_t *buf,E_Mavlink_Send_Type );
extern int mavlink_msg_send_control(uint8_t *buf);
extern uint8_t mavlink_msg_recv_referee(uint8_t *buf, int r_msglen);
uint8_t handle_msg(mavlink_message_t msg);

#endif // MSG_MANAGE_H
