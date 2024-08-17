#ifndef SENSORSTUB_H
#define SENSORSTUB_H

#include "IWeatherSensor.h"

namespace WeatherSpace {

class SensorStub : public IWeatherSensor {
 public:
    SensorStub(double temperature, int precipitation, int humidity, int windSpeed);

    double TemperatureInC() const override;
    int Precipitation() const override;
    int Humidity() const override;
    int WindSpeedKMPH() const override;

 private:
    double temperature_;
    int precipitation_;
    int humidity_;
    int windSpeed_;
};

}  // namespace WeatherSpace

#endif  // SENSORSTUB_H
