#include "GarageDoor.h"

#include <iostream>

GarageDoor::GarageDoor()
{
    //ctor
}

GarageDoor::~GarageDoor()
{
    //dtor
}


void GarageDoor::up()
{
    std::cout << "Garage Door is Open" << std::endl;
}

void GarageDoor::down()
{
    std::cout << "Garage Door is Closed" << std::endl;
}

void GarageDoor::stop()
{
    std::cout << "Garage Door is Stopped" << std::endl;
}

void GarageDoor::lightOn()
{
    std::cout << "Garage light is On" << std::endl;
}

void GarageDoor::lightOff()
{
    std::cout << "Garage light is Off" << std::endl;
}
