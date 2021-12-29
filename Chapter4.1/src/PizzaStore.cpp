#include "PizzaStore.h"

PizzaStore::PizzaStore(SimplePizzaFactory * factory)
{
    this->factory = factory;
}

PizzaStore::~PizzaStore()
{
    //dtor
}


Pizza * PizzaStore::orderPizza(string type)
{
    Pizza * pizza;

    pizza = factory->createPizza(type);

    pizza->prepare();
    pizza->bake();
    pizza->cut();
    pizza->box();

    return pizza;
}
