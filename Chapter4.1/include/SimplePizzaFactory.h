#ifndef SIMPLEPIZZAFACTORY_H
#define SIMPLEPIZZAFACTORY_H

#include "Pizza.h"

#include <string>

using namespace std;

class SimplePizzaFactory
{
    public:
        SimplePizzaFactory();
        virtual ~SimplePizzaFactory();

        virtual Pizza * createPizza(string type);

    protected:

    private:
};

#endif // SIMPLEPIZZAFACTORY_H
