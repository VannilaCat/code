class LaserScanner {
private:
    int laser_intensity;

public:
    // 构造函数：出厂设置
    LaserScanner() {
        laser_intensity = 100;
    }

    // 外部面板功能：机床的出料口 bool 挂在名字 scan 的前面！
    bool scan() {
        return true;
    }    
};