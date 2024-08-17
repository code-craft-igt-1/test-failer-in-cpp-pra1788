#include "WeatherReport.h"

namespace WeatherSpace {

std::string Report(const IWeatherSensor& sensor) {
    int precipitation = sensor.Precipitation();
    int windSpeed = sensor.WindSpeedKMPH();
    double temperature = sensor.TemperatureInC();

    if (temperature > 25) {
        if (precipitation >= 60) {
            if (windSpeed > 50) {
                return "Alert, Stormy with heavy rain";
            } else {
                return "Rainy day";
            }
        } else if (precipitation >= 20) {
            return "Partly cloudy";
        }
    }

    return "Sunny day";
}

}  // namespace WeatherSpace
