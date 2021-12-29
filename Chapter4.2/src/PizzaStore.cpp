#include "PizzaStore.h"

#include <iostream>

using namespace std;

PizzaStore::PizzaStore()
{
    //ctor
}

PizzaStore::~PizzaStore()
{
    //dtor
}


Pizza * PizzaStore::orderPizza(string type)
{
    Pizza * pizza = createPizza(type);

    cout << "--- Making a " << pizza->getName() << " ---" << endl;

    pizza->prepare();
    pizza->bake();
    pizza->cut();
    pizza->box();

    return pizza;
}
