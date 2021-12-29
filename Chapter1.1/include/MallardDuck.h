#ifndef MALLARDDUCK_H
#define MALLARDDUCK_H

#include "Duck.h"

class MallardDuck: public Duck
{
    public:
        MallardDuck();
        virtual ~MallardDuck();

        void display();

    protected:

    private:
};

#endif // MALLARDDUCK_H
