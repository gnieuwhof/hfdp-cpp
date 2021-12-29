#include "NYPizzaStore.h"
#include "PizzaIngredientFactory.h"
#include "NYPizzaIngredientFactory.h"
#include "CheesePizza.h"

NYPizzaStore::NYPizzaStore()
{
    //ctor
}

NYPizzaStore::~NYPizzaStore()
{
    //dtor
}


Pizza * NYPizzaStore::createPizza(string item)
{
    Pizza * pizza = 0;
    PizzaIngredientFactory * ingredientFactory =
        new NYPizzaIngredientFactory;

    if (item == "cheese"){
        pizza = new CheesePizza(ingredientFactory);
        pizza->setName("New York Style Cheese Pizza");
    } else if (item == "veggie"){
//                return new NYStyleVeggiePizza;
    } else if (item == "clam"){
//                return new NYStyleClamPizza;
    } else if (item == "pepperoni"){
//                return new NYStylePepperoniPizza;
    }
    return pizza;
}
