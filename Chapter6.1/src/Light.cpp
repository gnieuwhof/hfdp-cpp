#include "Light.h"

#include <iostream>

Light::Light()
{
    //ctor
}

Light::~Light()
{
    //dtor
}


void Light::on()
{
    std::cout << "Light is on" << std::endl;
}

void Light::off()
{
    std::cout << "Light is off" << std::endl;
}
