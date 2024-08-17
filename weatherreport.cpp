#include <assert.h>
#include <string>
#include <iostream>

using std::cout;
using std::endl;
using std::string;

namespace WeatherSpace {

class IWeatherSensor {
 public:
    virtual double TemperatureInC() const = 0;
    virtual int Precipitation() const = 0;
    virtual int Humidity() const = 0;
    virtual int WindSpeedKMPH() const = 0;
    virtual ~IWeatherSensor() = default;
};

class SensorStub : public IWeatherSensor {
 public:
    SensorStub(double temperature, int precipitation, int humidity, int windSpeed)
        : temperature_(temperature), precipitation_(precipitation),
          humidity_(humidity), windSpeed_(windSpeed) {}

    double TemperatureInC() const override {
        return temperature_;
    }

    int Precipitation() const override {
        return precipitation_;
    }

    int Humidity() const override {
        return humidity_;
    }

    int WindSpeedKMPH() const override {
        return windSpeed_;
    }

 private:
    double temperature_;
    int precipitation_;
    int humidity_;
    int windSpeed_;
};

string Report(const IWeatherSensor& sensor) {
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

// Test case for stormy weather conditions
void TestStormy() {
    SensorStub sensor(26, 70, 72, 52);
    string report = Report(sensor);
    cout << "TestStormy: " << report << endl;
    assert(report == "Alert, Stormy with heavy rain");
}

// Test case for rainy day with high precipitation and low wind speed
void TestHighPrecipitationAndLowWindspeed() {
    SensorStub sensor(26, 70, 72, 30);
    string report = Report(sensor);
    cout << "TestHighPrecipitationAndLowWindspeed: " << report << endl;
    assert(report == "Rainy day");
}

// Test case for partly cloudy day
void TestPartlyCloudy() {
    SensorStub sensor(26, 30, 72, 10);
    string report = Report(sensor);
    cout << "TestPartlyCloudy: " << report << endl;
    assert(report == "Partly cloudy");
}

// Test case for a sunny day
void TestSunnyDay() {
    SensorStub sensor(24, 10, 50, 20);
    string report = Report(sensor);
    cout << "TestSunnyDay: " << report << endl;
    assert(report == "Sunny day");
}

}  // namespace WeatherSpace

int main() {
    WeatherSpace::TestStormy();
    WeatherSpace::TestHighPrecipitationAndLowWindspeed();
    WeatherSpace::TestPartlyCloudy();
    WeatherSpace::TestSunnyDay();
    cout << "All tests passed successfully.\n";
    return 0;
}
