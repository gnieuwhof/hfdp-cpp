#ifndef PIZZASTORE_H
#define PIZZASTORE_H

#include "SimplePizzaFactory.h"

#include <string>

using namespace std;

class PizzaStore
{
    public:
        PizzaStore(SimplePizzaFactory * factory);
        virtual ~PizzaStore();

        Pizza * orderPizza(string type);

    protected:
        SimplePizzaFactory * factory;

    private:
};

#endif // PIZZASTORE_H
