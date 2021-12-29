#include "WeatherData.h"

#include <list>

WeatherData::WeatherData()
{
    //ctor
}

WeatherData::~WeatherData()
{
    //dtor
}


void WeatherData::registerObserver(Observer * o)
{
    observers.push_back(o);
}

void WeatherData::removeObserver(Observer * o)
{
    observers.remove(o);
}

void WeatherData::notifyObservers()
{
    list<Observer *>::iterator i = observers.begin();
    while(i != observers.end())
    {
        (*i)->update(temperature, humidity, pressure);
        i++;
    }
}

void WeatherData::messurementsChanged()
{
    notifyObservers();
}

void WeatherData::setMessurements(float temperature, float humidity, float pressure)
{
    this->temperature = temperature;
    this->humidity = humidity;
    this->pressure = pressure;
    messurementsChanged();
}
