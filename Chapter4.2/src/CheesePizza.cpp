#include "CheesePizza.h"

#include <iostream>

CheesePizza::CheesePizza(PizzaIngredientFactory * ingredientFactory)
{
    this->ingredientFactory = ingredientFactory;
}

CheesePizza::~CheesePizza()
{
    //dtor
}


void CheesePizza::prepare()
{
    std::cout << "Preparing " << name << std::endl;
    dough = ingredientFactory->createDough();
    sauce = ingredientFactory->createSauce();
    cheese = ingredientFactory->createCheese();
    veggies = ingredientFactory->createVeggies();
}
