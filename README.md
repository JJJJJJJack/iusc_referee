# IUSC Referee ROS node

IUSC competition ROS node for the communication of quads with IUSC referee system.

## Description

The `msg_manage.cpp` file interfaces with IUSC referee system (hardware) via Mavlink through UART. The `iusc_referee.cpp` file handles the ROS information, publishing and subscribing on the following topics. **Do not make any change to the code**. Send it to issues or contact [the IUSC committee](http://iusc.csaa.org.cn/) for error in installation or compilation.

## Publishers

- `quad_pose_pub` :  publishes the pose data of the quad to the topic `/QuadPose` with message type `geometry_msgs/PoseStamped` ;
- `ugv_pose_pub` :  publishes the pose data of all UGVs to the topic `/UGVPose` with message type `Float32MultiArray` . Dimension of the array is set to `[10,2]` for 2D `(x,y)` positions of 10 UGVs. **Please note the data is available only in the second session of the competition** ;
- `mission_state_pub` : publishes the mission state of the competition to the topic `MissionState` . Customized message is located in `msg/MissionState.msg`.

## Subscribers

- `laser_command_sub` : subscribes the laser command information from the topic `/laser_command` ;
- `gimbal_control_sub` : subscribes the gimbal control information from the topic `/amov_gimbal_ros/gimbal_control` ;
- `gimbal_state_sub` : subscribes the gimbal state information from the topic `/amov_gimbal_ros/gimbal_state` .

## Installation and prerequisites

Please follow the command below to install the node:

```c++
cd ~/catkin_ws/src
git clone https://github.com/JJJJJJJack/iusc_referee
cd ..
catkin_make
```

Before the installation, it is necessary to: 

- install Amov Gimbal SDK following <https://wiki.amovlab.com/public/gimbalwiki/G1/doc/AmovGimbalROSpackage.html>.  
- install Open CV (version 3.3.1 or later).

