class SmartFan {
    private:
        double Current_temperature;
        bool is_on;
    public:
        SmartFan() {
            Current_temperature = 25.0;
            is_on = false;
        }
        checkOverheat() {
            if (Current_temperature > 35.0)
            {
                is_on = true;
                return "true";
            }
            else
                return "false";
        }
}