#include "Beverage.h"

Beverage::Beverage()
{
    description = "Unknown beverage";
}

Beverage::~Beverage()
{
    //dtor
}


std::string Beverage::getDescription()
{
    return description;
}
