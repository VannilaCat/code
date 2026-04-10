#include "rclcpp/rclcpp.hpp"

class MyRobotNode : public rclcpp::Node {
    public:
        MyRobotNode() : MyRobotNode("my_robot_node") {
        }
};