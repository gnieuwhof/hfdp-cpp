#ifndef HOUSEBLEND_H
#define HOUSEBLEND_H

#include "Beverage.h"

class HouseBlend: public Beverage
{
    public:
        HouseBlend();
        virtual ~HouseBlend();

        double cost();

    protected:

    private:
};

#endif // HOUSEBLEND_H
