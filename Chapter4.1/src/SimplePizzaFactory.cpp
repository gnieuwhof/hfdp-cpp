#include "SimplePizzaFactory.h"

#include "CheesePizza.h"

SimplePizzaFactory::SimplePizzaFactory()
{
    //ctor
}

SimplePizzaFactory::~SimplePizzaFactory()
{
    //dtor
}


Pizza * SimplePizzaFactory::createPizza(string type)
{
    Pizza * pizza;

    if (type == "cheese"){
        pizza = new CheesePizza;
    } else if (type == "pepperoni"){
        //pizza = new PepperoniPizza;
    } else if (type == "clam"){
        //pizza = new ClamPizza;
    } else if (type == "veggie"){
        //pizza = new VeggiePizza;
    }
    return pizza;
}
