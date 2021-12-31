#include "ChicagoStyleCheesePizza.h"

#include <iostream>

ChicagoStyleCheesePizza::ChicagoStyleCheesePizza()
{
    name = "Chicago Style Deep Dish Cheese Pizza";
    dough = "Extra Thick Crust Dough";
    sauce = "Plum Tomato Sauce";

    toppings.push_back("Shredded Mozzarella Cheese");
}

ChicagoStyleCheesePizza::~ChicagoStyleCheesePizza()
{
    //dtor
}


void ChicagoStyleCheesePizza::cut()
{
    std::cout << "Cutting the pizza into square slices" << std::endl;
}
