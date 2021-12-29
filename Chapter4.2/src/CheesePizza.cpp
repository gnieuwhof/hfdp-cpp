#include "CheesePizza.h"

#include <iostream>

using namespace std;

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
    cout << "Preparing " << name << endl;
    dough = ingredientFactory->createDough();
    sauce = ingredientFactory->createSauce();
    cheese = ingredientFactory->createCheese();
    veggies = ingredientFactory->createVeggies();
}
