# Aliengo catkin workspace

This workspace contains launch files on the master machine side. There is also a multi-machine communication package(aliengo-master-catkin-ws/src/multi_machine) that can receive customized messages from the slave.

## Start SLAM
1. launch slamware lidar
    ```sh
    ssh unitreeTwo  #pw: 123
    slam_lidar      
    ```

2. start amcl rviz and move_base node
    ```sh
    roslaunch alien_locationing alien_nav.launch
    ```