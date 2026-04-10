#include "rclcpp/rclcpp.hpp"

class UltrasonicNode : public rclcpp::Node {
private:
    double distance;
public:
    UltrasonicNode() : rclcpp::Node("ultrasonic_sensor") {
        distance = 0.0;
    }

    double getDistance() {
        return distance;
    }
};