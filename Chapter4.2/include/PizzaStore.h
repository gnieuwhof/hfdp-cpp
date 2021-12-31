#ifndef PIZZASTORE_H
#define PIZZASTORE_H

#include "Pizza.h"

#include <string>

class PizzaStore
{
    public:
        PizzaStore();
        virtual ~PizzaStore();

        Pizza * orderPizza(std::string type);

    protected:
        virtual Pizza * createPizza(std::string item) = 0;

    private:
};

#endif // PIZZASTORE_H
