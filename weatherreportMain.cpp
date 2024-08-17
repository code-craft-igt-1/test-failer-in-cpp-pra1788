#include <iostream>
#include "./WeatherReportTests.h"  // Including the test definitions

int main() {
    WeatherSpace::TestStormy();
    WeatherSpace::TestHighPrecipitationAndLowWindspeed();
    WeatherSpace::TestPartlyCloudy();
    WeatherSpace::TestSunnyDay();
    std::cout << "All tests passed successfully.\n";
    return 0;
}
