#include "WeatherData.h"
#include "CurrentConditionsDisplay.h"

#include <iostream>
#include <limits>

using namespace std;

int main()
{
    /*
    WeatherData * weatherData = new WeatherData;
    CurrentConditionsDisplay * currentConditionsDisplay =
        new CurrentConditionsDisplay(weatherData);

    weatherData->setMessurements(80, 65, 30.4);
    weatherData->setMessurements(82, 70, 29.2);
    weatherData->setMessurements(78, 90, 29.2);

    delete weatherData;
    delete currentConditionsDisplay;
    */

    WeatherData weatherData;
    CurrentConditionsDisplay currentConditionsDisplay(&weatherData);


    weatherData.setMessurements(80, 65, 30.4);
    weatherData.setMessurements(82, 70, 29.2);
    weatherData.setMessurements(78, 90, 29.2);

    return 0;
}
