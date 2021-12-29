#ifndef NYPIZZASTORE_H
#define NYPIZZASTORE_H

#include "SimplePizzaFactory.h"
#include "Pizza.h"

#include <string>

using namespace std;

class NYPizzaStore: public SimplePizzaFactory
{
    public:
        NYPizzaStore();
        virtual ~NYPizzaStore();

        Pizza * createPizza(string item);

    protected:

    private:
};

#endif // NYPIZZASTORE_H
