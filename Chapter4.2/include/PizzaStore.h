#ifndef PIZZASTORE_H
#define PIZZASTORE_H

#include "Pizza.h"

#include <string>

using namespace std;

class PizzaStore
{
    public:
        PizzaStore();
        virtual ~PizzaStore();

        Pizza * orderPizza(string type);

    protected:
        virtual Pizza * createPizza(string item) = 0;

    private:
};

#endif // PIZZASTORE_H
