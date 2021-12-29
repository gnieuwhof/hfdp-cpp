#ifndef NYPIZZASTORE_H
#define NYPIZZASTORE_H

#include "PizzaStore.h"
#include "Pizza.h"

#include <string>

using namespace std;

class NYPizzaStore: public PizzaStore
{
    public:
        NYPizzaStore();
        virtual ~NYPizzaStore();

    protected:
        Pizza * createPizza(string item);

    private:
};

#endif // NYPIZZASTORE_H
