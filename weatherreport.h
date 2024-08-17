#ifndef WEATHERREPORT_H
#define WEATHERREPORT_H

#include <string>
#include "IWeatherSensor.h"

namespace WeatherSpace {

std::string Report(const IWeatherSensor& sensor);

}  // namespace WeatherSpace

#endif  // WEATHERREPORT_H
