#ifndef CONDIMENTBEVERAGE_H
#define CONDIMENTBEVERAGE_H

#include "Beverage.h"

#include <iostream>

using namespace std;

class CondimentBeverage: public Beverage
{
    public:
        CondimentBeverage();
        virtual ~CondimentBeverage();

        virtual string getDescription() = 0;

    protected:

    private:
};

#endif // CONDIMENTBEVERAGE_H
