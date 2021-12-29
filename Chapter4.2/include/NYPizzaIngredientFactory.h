#ifndef NYPIZZAINGREDIENTFACTORY_H
#define NYPIZZAINGREDIENTFACTORY_H

#include "PizzaIngredientFactory.h"
#include "Dough.h"
#include "Sauce.h"
#include "Cheese.h"
#include "Veggies.h"
#include "Pepperoni.h"
#include "Clams.h"

#include <list>

class NYPizzaIngredientFactory: public PizzaIngredientFactory
{
    public:
        NYPizzaIngredientFactory();
        virtual ~NYPizzaIngredientFactory();

        Dough * createDough();
        Sauce * createSauce();
        Cheese * createCheese();
        list<Veggies *> createVeggies();
        Pepperoni * createPepperoni();
        Clams * createClam();

    protected:

    private:
};

#endif // NYPIZZAINGREDIENTFACTORY_H
