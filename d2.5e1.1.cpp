#include <vector>

std::vector<double> voltages;
voltages.push_back(24.5);
voltages.push_back(23.8);
int battery_count = voltages.size();

double first_voltage = voltages[0];
