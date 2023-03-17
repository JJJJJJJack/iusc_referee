#include "ros/ros.h"
#include <string>
#include "std_msgs/String.h"
#include <iostream>
#include <fstream>
#include "serial/serial.h"

#include <time.h>

#include "msg_manage.h"

using namespace std;

uint64_t time_boot_ms = 0;

/*void joystick_command_callback(const sensor_msgs::Joy& message){
  joy_control_ready = true;
  joy_control = message;
  }*/

void init_variables(){
  std_msgs::MultiArrayDimension dimVehicle, dimPose;
  dimVehicle.label = "vehicleNum";
  dimVehicle.size = 10;
  dimVehicle.stride = 10*2;
  dimPose.label = "poseXY";
  dimPose.size = 2;
  dimPose.stride = 2;
  UGVPoseXY.layout.dim.push_back(dimVehicle);
  UGVPoseXY.layout.dim.push_back(dimPose);
  for(int i = 0; i < 10; i++){
    UGVPoseXY.data.push_back(0);
    UGVPoseXY.data.push_back(0);
  }
}

int main(int argc, char **argv)
{
  ros::init(argc, argv, "iusc_referee");
  ros::NodeHandle n;
  ros::Rate loop_rate(50);
  string USB_Dev;
  ros::NodeHandle nh("~");
  nh.param<std::string>("USB", USB_Dev, "/dev/ttyUSB0");
  
  serial::Serial my_serial;
  serial::Timeout timeout = serial::Timeout::simpleTimeout(0);

  my_serial.setPort(USB_Dev);
  my_serial.setBaudrate(115200);
  my_serial.setTimeout(timeout);

  try{
    my_serial.open();
  }
  catch(serial::IOException& e){
    ROS_ERROR_STREAM("Unable to open Serial USB port: " << USB_Dev);
    return -1;
  }  

  if(my_serial.isOpen()){
    cout<<"Serial port open successfully!"<<endl;
  }else{
    cerr<<"Error openning serial port!"<<endl;
  }

  init_variables();

  struct timeval tvstart, tvend;
  gettimeofday(&tvstart,NULL);

  int count = 0;
  srand((int)time(0));

  while (ros::ok())
  {
    gettimeofday(&tvend,NULL);
    time_boot_ms = (tvend.tv_sec - tvstart.tv_sec) * 1e06 + (tvend.tv_usec - tvstart.tv_usec);
    
    // Send mavlink message
    mavlink_count_1++;
    int send_len = -1;
    uint8_t buf[512];
    send_len = mavlink_msg_send_control(buf);
    if(send_len>-1){
      my_serial.write(buf, send_len);
    }
    ROS_INFO_THROTTLE(5, "Referee system running...");
    // Receive Mavlink message 
    uint8_t mavlink_recv[500];
    string mavlink_recv_str;
    size_t recv_len = my_serial.readline(mavlink_recv_str, 65536);
    //mavlink_recv = mavlink_recv_str.c_str();
    copy(mavlink_recv_str.begin(), mavlink_recv_str.end(), begin(mavlink_recv));
    if (recv_len > 0){
      uint8_t r_id = mavlink_msg_recv_referee(mavlink_recv, recv_len);
    }
        
    ros::spinOnce();

    loop_rate.sleep();
    ++count;
  }
  
  return 0;
}
