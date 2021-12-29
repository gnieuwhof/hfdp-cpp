#ifndef CURRENTCONDITIONSDISPLAY_H
#define CURRENTCONDITIONSDISPLAY_H

#include "Observer.h"
#include "DisplayElement.h"
#include "Subject.h"

class CurrentConditionsDisplay: public Observer, public DisplayElement
{
    public:
        CurrentConditionsDisplay(Subject * weatherData);
        virtual ~CurrentConditionsDisplay();

        void display();
        void update(float temperature, float humidity, float pressure);

    protected:

    private:
        float temperature;
        float humidity;
        Subject * weatherData;
};

#endif // CURRENTCONDITIONSDISPLAY_H
