#ifndef NYPIZZASTORE_H
#define NYPIZZASTORE_H

#include "PizzaStore.h"
#include "Pizza.h"

#include <string>

class NYPizzaStore: public PizzaStore
{
    public:
        NYPizzaStore();
        virtual ~NYPizzaStore();

    protected:
        Pizza * createPizza(std::string item);

    private:
};

#endif // NYPIZZASTORE_H
