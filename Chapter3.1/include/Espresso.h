#ifndef ESPRESSO_H
#define ESPRESSO_H

#include "Beverage.h"

class Espresso: public Beverage
{
    public:
        Espresso();
        virtual ~Espresso();

        double cost();

    protected:

    private:
};

#endif // ESPRESSO_H
