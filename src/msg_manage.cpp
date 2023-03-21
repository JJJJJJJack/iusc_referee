#include "msg_manage.h"
#include "iusc_referee/MissionState.h"

using namespace std;

int mavlink_count_1;
int mav_count_attitude = 0;
int heartbeat_count = 0;
bool LASER_COMMAND_READY = false;
bool GIMBAL_CONTROL_READY = false;
bool GIMBAL_STATE_READY = false;

std_msgs::Bool laser_command;
amov_gimbal_sdk_ros::GimbalControl gimbalControl;
amov_gimbal_sdk_ros::GimbalState gimbalState;

/*================  Variables to send  ==================*/
geometry_msgs::PoseStamped quadPoseStamped;
std_msgs::Float32MultiArray UGVPoseXY;
iusc_referee::MissionState Missionstate;

/*============  MAVLINK MSG UPDATE CHECK  ==================*/
bool QUAD_POSE_DATA_READY = false;
bool UGV_POSE_DATA_READY = false;
bool MISSION_STATE_INFO_READY = false;

uint8_t mavlink_msg_recv_referee(uint8_t *buf,int r_msglen)
{
  uint8_t r_id = -1;
  mavlink_message_t r_message;
  mavlink_status_t r_mavlink_status;
  for(int ii=0;ii<r_msglen;ii++)
    {
      if(mavlink_parse_char(MAVLINK_COMM_0, buf[ii], &r_message, &r_mavlink_status))
	{
	  r_id = r_message.msgid;
	  handle_msg(r_message);
	}
    }
  return r_id;
}

int mavlink_msg_send_control(uint8_t *buf)
{
  int Flag_10ms = mavlink_count_1 % 2;
  int len = -1;
  switch(Flag_10ms){
  case 0:
    if(LASER_COMMAND_READY)
        len = msg_equipment(buf,MavMsg_Send_LASER_CTRL);
    break;
  case 1:
    heartbeat_count++;
    if(heartbeat_count>=50)
      {
	heartbeat_count = 0;
	len = msg_equipment(buf,MavMsg_Send_HEARTBEAT);
      }
    break;
  default:
    break;
  }
  return len;
}

int msg_equipment(uint8_t *buf,E_Mavlink_Send_Type MsgType)
{
  mavlink_message_t msg;
  int len = -1; 
  switch(MsgType)
    {
    case MavMsg_Send_HEARTBEAT:
      msg = MSG_HEARTBEAT();
      len = mavlink_msg_to_send_buffer(buf,&msg);
      break;
    case MavMsg_Send_LASER_CTRL:
      msg = MSG_LASER_CTRL();
      len = mavlink_msg_to_send_buffer(buf,&msg);
      break;
    case MavMsg_Send_GIMBAL_CTRL:
      msg = MSG_GIMBAL_CTRL();
      len = mavlink_msg_to_send_buffer(buf,&msg);
      break;
    case MavMsg_Send_COMPUTER_ACK:
      msg = MSG_COMPUTER_ACK();
      len = mavlink_msg_to_send_buffer(buf,&msg);
      break;
    default:
      break;
    }
  return len;
}

/*========== Unpacking message ===============*/
uint8_t handle_msg(mavlink_message_t msg)
{
  switch (msg.msgid)
    {
      // Heartbeat
    case MAVLINK_MSG_ID_HEARTBEAT:
      {
	uint8_t type = mavlink_msg_heartbeat_get_type(&msg);
	uint8_t autopilot = mavlink_msg_heartbeat_get_autopilot(&msg);
	cout<<"Heartbeat received, type "<< (int)type <<endl;
	break;
      }
      // UAV poseStamped
    case MAVLINK_MSG_ID_IUSC_CTRL_MISSION_UAV_SIGNAL_STATE:
      {
    QUAD_POSE_DATA_READY = true;
	quadPoseStamped.pose.position.x = mavlink_msg_iusc_ctrl_mission_uav_signal_state_get_pos_x(&msg);
	quadPoseStamped.pose.position.y = mavlink_msg_iusc_ctrl_mission_uav_signal_state_get_pos_y(&msg);
	quadPoseStamped.pose.position.z = mavlink_msg_iusc_ctrl_mission_uav_signal_state_get_pos_z(&msg);
	//quadPoseStamped.pose.orientation.x = mavlink_msg_iusc_ctrl_mission_uav_signal_state_get_quat_x(&msg);
	//quadPoseStamped.pose.orientation.y = mavlink_msg_iusc_ctrl_mission_uav_signal_state_get_quat_y(&msg);
	//quadPoseStamped.pose.orientation.z = mavlink_msg_iusc_ctrl_mission_uav_signal_state_get_quat_z(&msg);
	//quadPoseStamped.pose.orientation.w = mavlink_msg_iusc_ctrl_mission_uav_signal_state_get_quat_w(&msg);
	break;
      }
      // Pack UGV data into multi-array
    case MAVLINK_MSG_ID_IUSC_CTRL_MISSION_UGV_POSITION:
      {
    UGV_POSE_DATA_READY = true;
	UGVPoseXY.data[0] = mavlink_msg_iusc_ctrl_mission_ugv_position_get_UGV0_pos_x(&msg);
	UGVPoseXY.data[1] = mavlink_msg_iusc_ctrl_mission_ugv_position_get_UGV0_pos_y(&msg);
	UGVPoseXY.data[2] = mavlink_msg_iusc_ctrl_mission_ugv_position_get_UGV1_pos_x(&msg);
	UGVPoseXY.data[3] = mavlink_msg_iusc_ctrl_mission_ugv_position_get_UGV1_pos_y(&msg);
	UGVPoseXY.data[4] = mavlink_msg_iusc_ctrl_mission_ugv_position_get_UGV2_pos_x(&msg);
	UGVPoseXY.data[5] = mavlink_msg_iusc_ctrl_mission_ugv_position_get_UGV2_pos_y(&msg);
	UGVPoseXY.data[6] = mavlink_msg_iusc_ctrl_mission_ugv_position_get_UGV3_pos_x(&msg);
	UGVPoseXY.data[7] = mavlink_msg_iusc_ctrl_mission_ugv_position_get_UGV3_pos_y(&msg);
	UGVPoseXY.data[8] = mavlink_msg_iusc_ctrl_mission_ugv_position_get_UGV4_pos_x(&msg);
	UGVPoseXY.data[9] = mavlink_msg_iusc_ctrl_mission_ugv_position_get_UGV4_pos_y(&msg);
	UGVPoseXY.data[10] = mavlink_msg_iusc_ctrl_mission_ugv_position_get_UGV5_pos_x(&msg);
	UGVPoseXY.data[11] = mavlink_msg_iusc_ctrl_mission_ugv_position_get_UGV5_pos_y(&msg);
	UGVPoseXY.data[12] = mavlink_msg_iusc_ctrl_mission_ugv_position_get_UGV6_pos_x(&msg);
	UGVPoseXY.data[13] = mavlink_msg_iusc_ctrl_mission_ugv_position_get_UGV6_pos_y(&msg);
	UGVPoseXY.data[14] = mavlink_msg_iusc_ctrl_mission_ugv_position_get_UGV7_pos_x(&msg);
	UGVPoseXY.data[15] = mavlink_msg_iusc_ctrl_mission_ugv_position_get_UGV7_pos_y(&msg);
	UGVPoseXY.data[16] = mavlink_msg_iusc_ctrl_mission_ugv_position_get_UGV8_pos_x(&msg);
	UGVPoseXY.data[17] = mavlink_msg_iusc_ctrl_mission_ugv_position_get_UGV8_pos_y(&msg);
	UGVPoseXY.data[18] = mavlink_msg_iusc_ctrl_mission_ugv_position_get_UGV9_pos_x(&msg);
	UGVPoseXY.data[19] = mavlink_msg_iusc_ctrl_mission_ugv_position_get_UGV9_pos_y(&msg);
	break;
      }
    case MAVLINK_MSG_ID_IUSC_CTRL_MISSION_STATE:
      {
    MISSION_STATE_INFO_READY = true;
	Missionstate.uav_id = mavlink_msg_iusc_ctrl_mission_state_get_uav_id(&msg);
	Missionstate.arm_command  = mavlink_msg_iusc_ctrl_mission_state_get_armed(&msg);
	Missionstate.game_stage = mavlink_msg_iusc_ctrl_mission_state_get_stage(&msg);
	break;
      }
    default:
      break;
    }
  return 0;
}

/*========== Packing message ===============*/
extern mavlink_message_t MSG_HEARTBEAT()
{
  mavlink_message_t msgIn;
  uint8_t component_id;
  uint8_t system_id;
  uint8_t type;
  uint8_t autopilot;
  uint8_t base_mode;
  uint32_t custom_mode;
  uint8_t system_status;
  system_id = SYS_ID;
  component_id = MAV_TYPE_IUSC_JUDGE_TERMINAL_PROCESSING;
  type = MAV_TYPE_IUSC_JUDGE_TERMINAL_PROCESSING;
  autopilot = 12;
  base_mode = 113;
  custom_mode = 65536;
  system_status = 3;
  mavlink_msg_heartbeat_pack(system_id, component_id, &msgIn, type, autopilot, base_mode, custom_mode, system_status);
  return msgIn;
}

mavlink_message_t MSG_LASER_CTRL()
{
  mavlink_message_t msgIn;
  uint8_t system_id = SYS_ID;
  uint8_t component_id = MAV_TYPE_IUSC_JUDGE_TERMINAL_PROCESSING;

  mavlink_msg_iusc_ctrl_mission_uav_laser_ctrl_pack(system_id, component_id, &msgIn,
						    time_boot_ms,
						    laser_command.data,
						    0);
  return msgIn;
}

mavlink_message_t MSG_GIMBAL_CTRL()
{
  mavlink_message_t msgIn;
  uint8_t system_id = SYS_ID;
  uint8_t component_id = MAV_TYPE_IUSC_JUDGE_TERMINAL_PROCESSING;
  mavlink_msg_iusc_ctrl_mission_uav_gimbal_ctrl_pack(system_id, component_id, &msgIn,
						     time_boot_ms,
						     gimbalState.imu_angle[0],
						     gimbalState.imu_angle[1],
						     gimbalState.imu_angle[2],
						     gimbalControl.mode,
						     0, // backup
						     gimbalControl.roll_angle,
						     gimbalControl.pitch_angle,
						     gimbalControl.yaw_angle);
  return msgIn;
}

mavlink_message_t MSG_COMPUTER_ACK()
{
  mavlink_message_t msgIn;
  uint8_t system_id = SYS_ID;
  uint8_t component_id = MAV_TYPE_IUSC_JUDGE_TERMINAL_PROCESSING;
  mavlink_msg_iusc_ctrl_mission_computer_ack_pack(system_id, component_id, &msgIn,
						  time_boot_ms,
						  0,//ack
						  0,//time_recv
						  0,//uav_id
						  0,//msg_ack
						  0);//seq_ack
  return msgIn;
}

