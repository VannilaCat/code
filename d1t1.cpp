class SmartFan
{
    private:
        double current_temp;
        bool is_on;
    public:
        SmartFan(){
            current_temp = 25.0;
            is_on = false;
        }
    
        void updateTemp(doule new_temp){
            current_temp = new_temp:
        }
        bool checkOverheat(){
            if (current_temp > 35.0){
                is_on = true;
                return true;
            }
            else{
                is_on = false;
                return false;
            }
        }