#include "PizzaStore.h"
#include "NYPizzaStore.h"
#include "ChicagoPizzaStore.h"
#include "Pizza.h"

#include <iostream>
#include <limits>

int main()
{
    PizzaStore * nyStore = new PizzaStore(new NYPizzaStore);
    PizzaStore * chicagoStore = new PizzaStore(new ChicagoPizzaStore);

    Pizza * pizza = nyStore->orderPizza("cheese");
    std::cout << "Ethan ordered a " << pizza->getName() << std::endl << std::endl;

    pizza = chicagoStore->orderPizza("cheese");
    std::cout << "Joel ordered a " << pizza->getName() << std::endl;

    delete pizza;
    return 0;
}
