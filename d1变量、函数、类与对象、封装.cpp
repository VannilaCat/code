class TempSensor
{
private:
    double current_temperature;
public:
    TempSensor(){
        current_temperature = 25.0;
    }
    double readTemp(){
        return current_temperature;
    }
};

