#ifndef WEATHERDATA_H
#define WEATHERDATA_H

#include "Subject.h"
#include "Observer.h"

#include <list>

using namespace std;

class WeatherData: public Subject
{
    public:
        WeatherData();
        virtual ~WeatherData();

        void registerObserver(Observer * o);
        void removeObserver(Observer * o);
        void notifyObservers();
        void messurementsChanged();
        void setMessurements(float temperature, float humidity, float pressure);

    protected:

    private:
        list<Observer *> observers;
        float temperature;
        float humidity;
        float pressure;
};

#endif // WEATHERDATA_H
