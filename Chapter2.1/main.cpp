#include <iostream>
#include <limits>
#include <list>

using namespace std;

class Observer
{
    public:
        virtual void update(float temp, float humidity, float pressure){};
};

class Subject
{
    public:
        virtual void registerObserver(Observer * o){};
        virtual void removeObserver(Observer * o){};
        virtual void notifyObservers(Observer * o){};
};

class DisplayElement
{
    public:
        virtual void display(){};
};

class WeatherData: public Subject
{
    private:
        list<Observer *> observers;
        float temperature;
        float humidity;
        float pressure;

    public:
        void registerObserver(Observer * o)
        {
            observers.push_back(o);
        }

        void removeObserver(Observer * o)
        {
            observers.remove(o);
        }

        void notifyObservers()
        {
            list<Observer *>::iterator i = observers.begin();
            while(i != observers.end())
            {
                (*i)->update(temperature, humidity, pressure);
                i++;
            }
        }

        void messurementsChanged()
        {
            notifyObservers();
        }

        void setMessurements(float temperature, float humidity, float pressure)
        {
            this->temperature = temperature;
            this->humidity = humidity;
            this->pressure = pressure;
            messurementsChanged();
        }
};

class CurrentConditionsDisplay: public Observer, public DisplayElement
{
    private:
        float temperature;
        float humidity;
        Subject * weatherData;

    public:
        CurrentConditionsDisplay(Subject * weatherData)
        {
            this->weatherData = weatherData;
            weatherData->registerObserver(this);
        }

        ~CurrentConditionsDisplay()
        {
            delete weatherData;
        }

        void display()
        {
            cout << "Current conditions: " << temperature;
            cout << "C degrees and " << humidity << "% humidity" << endl;
        }

        void update(float temperature, float humidity, float pressure)
        {
            this->temperature = temperature;
            this->humidity = humidity;
            display();
        }
};

int main()
{
    WeatherData * weatherData = new WeatherData;
    CurrentConditionsDisplay * currentConditionsDisplay =
        new CurrentConditionsDisplay(weatherData);

    weatherData->setMessurements(80, 65, 30.4);
    weatherData->setMessurements(82, 70, 29.2);
    weatherData->setMessurements(78, 90, 29.2);

    delete weatherData;
    delete currentConditionsDisplay;

    return 0;
}
