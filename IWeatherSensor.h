#ifndef IWEATHERSENSOR_H
#define IWEATHERSENSOR_H

namespace WeatherSpace {

class IWeatherSensor {
 public:
    virtual double TemperatureInC() const = 0;
    virtual int Precipitation() const = 0;
    virtual int Humidity() const = 0;
    virtual int WindSpeedKMPH() const = 0;
    virtual ~IWeatherSensor() = default;
};

}  // namespace WeatherSpace

#endif  // IWEATHERSENSOR_H
