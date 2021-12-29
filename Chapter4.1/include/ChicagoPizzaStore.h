#ifndef CHICAGOPIZZASTORE_H
#define CHICAGOPIZZASTORE_H

#include "SimplePizzaFactory.h"
#include "Pizza.h"

#include <string>

using namespace std;

class ChicagoPizzaStore: public SimplePizzaFactory
{
    public:
        ChicagoPizzaStore();
        virtual ~ChicagoPizzaStore();

        Pizza * createPizza(string item);

    protected:

    private:
};

#endif // CHICAGOPIZZASTORE_H
