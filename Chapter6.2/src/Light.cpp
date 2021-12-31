#include "Light.h"

#include <iostream>

Light::Light(std::string location)
{
    this->location = location;
}

Light::~Light()
{
    //dtor
}


void Light::on()
{
    std::cout << location << " Light is on" << std::endl;
}

void Light::off()
{
    std::cout << location << " Light is off" << std::endl;
}
