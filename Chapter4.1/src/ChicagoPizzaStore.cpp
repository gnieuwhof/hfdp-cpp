#include "ChicagoPizzaStore.h"

#include "ChicagoStyleCheesePizza.h"

ChicagoPizzaStore::ChicagoPizzaStore()
{
    //ctor
}

ChicagoPizzaStore::~ChicagoPizzaStore()
{
    //dtor
}


Pizza * ChicagoPizzaStore::createPizza(std::string item)
{
    if (item == "cheese")
    {
        return new ChicagoStyleCheesePizza;
    }
    else if (item == "veggie")
    {
//                return new ChicagoStyleVeggiePizza;
    }
    else if (item == "clam")
    {
//                return new ChicagoStyleClamPizza;
    }
    else if (item == "pepperoni")
    {
//                return new ChicagoStylePepperoniPizza;
    }
    return 0;
}
