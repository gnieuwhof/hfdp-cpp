#ifndef CHICAGOPIZZASTORE_H
#define CHICAGOPIZZASTORE_H

#include "SimplePizzaFactory.h"
#include "Pizza.h"

#include <string>

class ChicagoPizzaStore: public SimplePizzaFactory
{
    public:
        ChicagoPizzaStore();
        virtual ~ChicagoPizzaStore();

        Pizza * createPizza(std::string item);

    protected:

    private:
};

#endif // CHICAGOPIZZASTORE_H
