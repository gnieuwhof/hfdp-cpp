#ifndef NYPIZZASTORE_H
#define NYPIZZASTORE_H

#include "SimplePizzaFactory.h"
#include "Pizza.h"

#include <string>

class NYPizzaStore: public SimplePizzaFactory
{
    public:
        NYPizzaStore();
        virtual ~NYPizzaStore();

        Pizza * createPizza(std::string item);

    protected:

    private:
};

#endif // NYPIZZASTORE_H
