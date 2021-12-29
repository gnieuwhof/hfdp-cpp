#include "PizzaStore.h"
#include "NYPizzaStore.h"
#include "ChicagoPizzaStore.h"
#include "Pizza.h"

#include <iostream>
#include <limits>

using namespace std;

int main()
{
    PizzaStore * nyStore = new PizzaStore(new NYPizzaStore);
    PizzaStore * chicagoStore = new PizzaStore(new ChicagoPizzaStore);

    Pizza * pizza = nyStore->orderPizza("cheese");
    cout << "Ethan ordered a " << pizza->getName() << endl << endl;

    pizza = chicagoStore->orderPizza("cheese");
    cout << "Joel ordered a " << pizza->getName() << endl;

    delete pizza;
    return 0;
}
