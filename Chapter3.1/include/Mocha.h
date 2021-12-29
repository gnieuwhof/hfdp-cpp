#ifndef MOCHA_H
#define MOCHA_H

#include "CondimentBeverage.h"
#include "Beverage.h"

#include <iostream>

using namespace std;

class Mocha: public CondimentBeverage
{
    public:
        Mocha(Beverage * beverage);
        virtual ~Mocha();
        string getDescription();
        double cost();

    protected:

    private:
        Beverage * beverage;
};

#endif // MOCHA_H
