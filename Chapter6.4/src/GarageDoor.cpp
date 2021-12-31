#include "GarageDoor.h"

#include <iostream>

GarageDoor::GarageDoor(std::string location)
{
    this->location = location;
}

GarageDoor::~GarageDoor()
{
    //dtor
}


void GarageDoor::up()
{
    std::cout << location << " Garage Door is Open" << std::endl;
}

void GarageDoor::down()
{
    std::cout << location << " Garage Door is Closed" << std::endl;
}

void GarageDoor::stop()
{
    std::cout << location << " Garage Door is Stopped" << std::endl;
}

void GarageDoor::lightOn()
{
    std::cout << location << " Garage light is On" << std::endl;
}

void GarageDoor::lightOff()
{
    std::cout << location << " Garage light is Off" << std::endl;
}
