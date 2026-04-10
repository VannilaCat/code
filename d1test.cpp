#include "rclcpp/rclcpp.hpp"
class CameraNode : public rclcpp::Node{
private:
    bool is_recording;
public:
    CameraNode() : rclcpp::Node("rear_camera") {
        is_recording = false;
    }
};

