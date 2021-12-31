#ifndef SIMPLEPIZZAFACTORY_H
#define SIMPLEPIZZAFACTORY_H

#include "Pizza.h"

#include <string>

class SimplePizzaFactory
{
    public:
        SimplePizzaFactory();
        virtual ~SimplePizzaFactory();

        virtual Pizza * createPizza(std::string type);

    protected:

    private:
};

#endif // SIMPLEPIZZAFACTORY_H
