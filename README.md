# Demo projects.
 
 This repository contains two packages. Both are catkin packages so needs [ROS](http://wiki.ros.org/kinetic/Installation/Ubuntu) and [catkin_workspace](http://wiki.ros.org/catkin/Tutorials/create_a_workspace) to build.

## data_structure

 This is a catkin package that can perform insertion sort for numbers, character and string. This has been done using generic function written in functions.cpp in include folder. In the main function these generic functions have been called for integers, characters, string for demo.

```
$ roscore
$ rosrun data_structure algorithms_node (option)
```
#### Options :
n - Number example.<br />
c - Character example.<br />
s - String example.

## cloud_robotics_simulator

 This is a catkin package which can spawn obstacles dynamically in an environment in Gazebo. This is an example where the environment has been divided into 64 virtual grids numbering from 0 to 63. Some obstacles are already present in the environment. Obstacles can be dynamically spawned in the environment by publishing grid number on the topic "grid_no_for_obstacle".

### Dependency
  
 This package depends on gazebo_ros package.
```
$ sudo apt-get install ros-kinetic-gazebo-*
```

### Commands
 To run the package
```
$ roscd cloud_robotics_simulator/scripts
$ chmod +x *
```
 To start environment and run obstacle spawner node.
```
$ ./gazeboStart
```
 To stop environment and node.
```
$ ./gazeboStop
```
 To spawn obstacle use command line tool or write a simple publisher.
```
$ rostopic pub /grid_no_for_obstacle std_msgs/Int64 "data: (grid number)"
```
