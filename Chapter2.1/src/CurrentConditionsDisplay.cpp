#include "CurrentConditionsDisplay.h"
#include "Subject.h"

#include <iostream>

CurrentConditionsDisplay::CurrentConditionsDisplay(Subject * weatherData)
{
    this->weatherData = weatherData;
    weatherData->registerObserver(this);
}

CurrentConditionsDisplay::~CurrentConditionsDisplay()
{
    delete weatherData;
}

void CurrentConditionsDisplay::display()
{
    std::cout << "Current conditions: " << temperature;
    std::cout << "C degrees and " << humidity << "% humidity" << std::endl;
}

void CurrentConditionsDisplay::update(float temperature, float humidity, float pressure)
{
    this->temperature = temperature;
    this->humidity = humidity;
    display();
}
