#include "SensorStub.h"

namespace WeatherSpace {

SensorStub::SensorStub(double temperature, int precipitation, int humidity, int windSpeed)
    : temperature_(temperature), precipitation_(precipitation),
      humidity_(humidity), windSpeed_(windSpeed) {}

double SensorStub::TemperatureInC() const {
    return temperature_;
}

int SensorStub::Precipitation() const {
    return precipitation_;
}

int SensorStub::Humidity() const {
    return humidity_;
}

int SensorStub::WindSpeedKMPH() const {
    return windSpeed_;
}

}  // namespace WeatherSpace
