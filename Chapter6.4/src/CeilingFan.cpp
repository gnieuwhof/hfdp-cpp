#include "CeilingFan.h"

#include <iostream>

CeilingFan::CeilingFan(std::string location)
{
    this->location = location;
    speed = OFF;
}

CeilingFan::~CeilingFan()
{
    //dtor
}


void CeilingFan::high()
{
    speed = HIGH;
    std::cout << location << " ceiling fan is on high" << std::endl;
}

void CeilingFan::medium()
{
    speed = MEDIUM;
    std::cout << location << " ceiling fan is on medium" << std::endl;
}

void CeilingFan::low()
{
    speed = LOW;
    std::cout << location << " ceiling fan is on low" << std::endl;
}

void CeilingFan::off()
{
    speed = OFF;
    std::cout << location << " ceiling fan is off" << std::endl;
}

int CeilingFan::getSpeed()
{
    return speed;
}
