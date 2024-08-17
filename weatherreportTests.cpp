#include <cassert>
#include <iostream>
#include <string>
#include "./SensorStub.h"
#include "./WeatherReport.h"
#include "./weatherreportTests.h"

using std::cout;
using std::endl;
using std::string;

namespace WeatherSpace {

void TestStormy() {
    SensorStub sensor(26, 70, 72, 52);
    string report = Report(sensor);
    cout << "TestStormy: " << report << endl;
    assert(report == "Alert, Stormy with heavy rain");
}

void TestHighPrecipitationAndLowWindspeed() {
    SensorStub sensor(26, 70, 72, 30);
    string report = Report(sensor);
    cout << "TestHighPrecipitationAndLowWindspeed: " << report << endl;
    assert(report == "Rainy day");
}

void TestPartlyCloudy() {
    SensorStub sensor(26, 30, 72, 10);
    string report = Report(sensor);
    cout << "TestPartlyCloudy: " << report << endl;
    assert(report == "Partly cloudy");
}

void TestSunnyDay() {
    SensorStub sensor(24, 10, 50, 20);
    string report = Report(sensor);
    cout << "TestSunnyDay: " << report << endl;
    assert(report == "Sunny day");
}

}  // namespace WeatherSpace
