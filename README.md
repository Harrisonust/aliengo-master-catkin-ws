# Aliengo catkin workspace

## Brief
Get the position target from the slave and control aliengo legs correspondingly

## Step
1. launch slamware lidar
```terminal
ssh unitreeTwo  #pw: 123
slam_lidar      
```

2. start amcl rviz and move_base node
```terminal
roslaunch alien_locationing alien_nav.launch
```

## TODO
tf between laser and map?