#include "Mocha.h"

Mocha::Mocha(Beverage * beverage)
{
    this->beverage = beverage;
}

Mocha::~Mocha()
{
    delete beverage;
}


std::string Mocha::getDescription()
{
    return beverage->getDescription().append(", Mocha");
}

double Mocha::cost()
{
    return beverage->cost() + .20;
}
