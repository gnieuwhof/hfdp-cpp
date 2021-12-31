#include "TV.h"

#include <iostream>

TV::TV(std::string location)
{
    this->location = location;
}

TV::~TV()
{
    //dtor
}


void TV::on()
{
    std::cout << location << " TV is on" << std::endl;
}

void TV::off()
{
    std::cout << location << "TV is off" << std::endl;
}

void TV::setChannel(int channel)
{
    this->channel = channel;
    std::cout << location << " TV is set to channel " << channel << std::endl;
}
