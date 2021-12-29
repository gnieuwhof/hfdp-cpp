#ifndef CHEESEPIZZA_H
#define CHEESEPIZZA_H

#include "Pizza.h"
#include "PizzaIngredientFactory.h"

class CheesePizza: public Pizza
{
    public:
        CheesePizza(PizzaIngredientFactory * ingredientFactory);
        virtual ~CheesePizza();

        void prepare();

    protected:
        PizzaIngredientFactory * ingredientFactory;

    private:
};

#endif // CHEESEPIZZA_H
