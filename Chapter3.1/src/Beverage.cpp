#include "Beverage.h"

Beverage::Beverage()
{
    description = "Unknown beverage";
}

Beverage::~Beverage()
{
    //dtor
}


string Beverage::getDescription()
{
    return description;
}
