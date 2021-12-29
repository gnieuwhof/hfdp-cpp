#include "NYPizzaStore.h"

#include "NYStyleCheesePizza.h"

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
    if (item == "cheese"){
        return new NYStyleCheesePizza;
    } else if (item == "veggie"){
//                return new NYStyleVeggiePizza;
    } else if (item == "clam"){
//                return new NYStyleClamPizza;
    } else if (item == "pepperoni"){
//                return new NYStylePepperoniPizza;
    }
    return 0;
}
