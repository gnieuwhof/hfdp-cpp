#ifndef MOCHA_H
#define MOCHA_H

#include "CondimentBeverage.h"
#include "Beverage.h"

#include <string>

class Mocha: public CondimentBeverage
{
    public:
        Mocha(Beverage * beverage);
        virtual ~Mocha();
        std::string getDescription();
        double cost();

    protected:

    private:
        Beverage * beverage;
};

#endif // MOCHA_H
