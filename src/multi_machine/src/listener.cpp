#include "ros/ros.h"
#include "std_msgs/String.h"

void chatterCallback(const std_msgs::String::ConstPtr& msg){
  ROS_INFO("I hear: [%s]", msg->data.c_str());
}

int main(int argc, char **argv){
  
    ros::init(argc, argv, "listener");
    ros::NodeHandle n;
    ros::Subscriber sub = n.subscribe("chatter", 1000, chatterCallback); 
    // invoke callback function whenever receiver msg
    // from the subscribing topics

    ros::spin();
    return 0;
}
