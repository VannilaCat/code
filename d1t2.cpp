#include "rclcpp/rclcpp.hpp"

class OdomNode : public rclcpp::Node
{
private:
    int wheel_ratations;
public:
    OdomNode() : rclcpp::Node("base_odom"){
        wheel_ratations = 0;
}
};
