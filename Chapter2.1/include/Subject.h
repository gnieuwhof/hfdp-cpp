#ifndef SUBJECT_H
#define SUBJECT_H

#include "Observer.h"

class Subject
{
    public:
        Subject();
        virtual ~Subject();

        virtual void registerObserver(Observer * o){};
        virtual void removeObserver(Observer * o){};
        virtual void notifyObservers(Observer * o){};

    protected:

    private:
};

#endif // SUBJECT_H
