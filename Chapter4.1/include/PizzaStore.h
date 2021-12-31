#ifndef PIZZASTORE_H
#define PIZZASTORE_H

#include "SimplePizzaFactory.h"

#include <string>

class PizzaStore
{
    public:
        PizzaStore(SimplePizzaFactory * factory);
        virtual ~PizzaStore();

        Pizza * orderPizza(std::string type);

    protected:
        SimplePizzaFactory * factory;

    private:
};

#endif // PIZZASTORE_H
