#ifndef CONDIMENTBEVERAGE_H
#define CONDIMENTBEVERAGE_H

#include "Beverage.h"

#include <iostream>

class CondimentBeverage: public Beverage
{
    public:
        CondimentBeverage();
        virtual ~CondimentBeverage();

        virtual std::string getDescription() = 0;

    protected:

    private:
};

#endif // CONDIMENTBEVERAGE_H
