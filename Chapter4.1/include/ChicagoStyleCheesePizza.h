#ifndef CHICAGOSTYLECHEESEPIZZA_H
#define CHICAGOSTYLECHEESEPIZZA_H

#include "Pizza.h"

class ChicagoStyleCheesePizza: public Pizza
{
    public:
        ChicagoStyleCheesePizza();
        virtual ~ChicagoStyleCheesePizza();

        void cut();

    protected:

    private:
};

#endif // CHICAGOSTYLECHEESEPIZZA_H
