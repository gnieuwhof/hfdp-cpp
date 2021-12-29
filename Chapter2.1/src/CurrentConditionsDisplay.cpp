#include "CurrentConditionsDisplay.h"
#include "Subject.h"

#include <iostream>

using namespace std;

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
    cout << "Current conditions: " << temperature;
    cout << "C degrees and " << humidity << "% humidity" << endl;
}

void CurrentConditionsDisplay::update(float temperature, float humidity, float pressure)
{
    this->temperature = temperature;
    this->humidity = humidity;
    display();
}
