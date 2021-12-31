#include "PizzaStore.h"

#include <iostream>

PizzaStore::PizzaStore()
{
    //ctor
}

PizzaStore::~PizzaStore()
{
    //dtor
}


Pizza * PizzaStore::orderPizza(std::string type)
{
    Pizza * pizza = createPizza(type);

    std::cout << "--- Making a " << pizza->getName() << " ---" << std::endl;

    pizza->prepare();
    pizza->bake();
    pizza->cut();
    pizza->box();

    return pizza;
}
