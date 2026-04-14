# code
hello;
I'm here233；
text;

d1:
---

### 练习题 1：机电一体化设计（类与逻辑综合）

**工程背景：**
你需要为机器人设计一个“智能冷却风扇”的图纸。它能够记录当前温度，并在过热时自动开启。

**设计需求：**
1. **图纸名**：创建一个类，叫做 `SmartFan`。
2. **私有黑盒 (`private`)**：
   * 一个双精度浮点型变量 `current_temp`（当前温度）。
   * 一个布尔型变量 `is_on`（风扇是否开启）。
3. **出厂设置 (`public` 构造函数)**：
   * 构造函数名必须叫 `SmartFan()`。
   * 出厂时，把温度默认设为 `25.0`，风扇状态设为 `false`（关闭）。
4. **外部面板 (`public` 函数)**：
   * 写一个名为 `updateTemp` 的函数。进料口（参数）接收一个 `double new_temp`。这个函数不需要返回值（`void`）。功能是：把传进来的 `new_temp` 赋值给私有变量 `current_temp`。
   * 写一个名为 `checkOverheat` 的函数。不需要传参。出料口返回一个 `bool`。逻辑是：如果 `current_temp` 大于 `35.0`，就把 `is_on` 改为 `true`，并 `return true;`，否则 `return false;`。

---

### 练习题 2：标准 ROS2 节点骨架（继承与初始化）

**工程背景：**
底盘组的同事要求你写一个专门读取车轮转速的“里程计节点”。

**设计需求：**
1. **引入头文件**：别忘了 `#include "rclcpp/rclcpp.hpp"`。
2. **继承底盘**：创建一个类叫做 `OdomNode`，严格继承自 `rclcpp::Node`。
3. **私有黑盒 (`private`)**：
   * 一个整型变量 `wheel_rotations`（车轮旋转圈数）。
4. **出厂自检 (`public` 构造函数)**：
   * 使用**初始化列表**，将这个节点在系统里注册命名为 `"base_odom"`。
   * 在构造函数的大括号里，把 `wheel_rotations` 归零（设为 `0`）。

---

### 练习题 3：车间找茬游戏（排错测试）

**工程背景：**
一个新来的实习生写了一段“超声波传感器”的 ROS2 节点代码，但机床（编译器）疯狂报错，死活编译不出来。
请你用这几天学到的“C++ 安全规定”，帮他找出 **3 个致命的语法或逻辑错误**。

**实习生的错误图纸：**
```cpp
#include "rclcpp/rclcpp.hpp"

class UltrasonicNode : public rclcpp::Node {
private:
    double distance

public:
    UltrasonicNode() : rclcpp::Node("ultrasonic_sensor") {
        distance = 0.0;
    }

    void getDistance() {
        return distance;
    }
}
