#include "Stereo.h"

#include <iostream>

Stereo::Stereo(std::string location)
{
    this->location = location;
}

Stereo::~Stereo()
{
    //dtor
}


void Stereo::on()
{
    std::cout << location << " Stereo is On" << std::endl;
}

void Stereo::off()
{
    std::cout << location << " Stereo is Off" << std::endl;
}

void Stereo::setCD()
{
    std::cout << location << " Stereo is set to CD" << std::endl;
}

void Stereo::setDvd()
{
    std::cout << location << " Stereo is set to DVD" << std::endl;
}

void Stereo::setRadio()
{
    std::cout << location << " Stereo is set to Radio" << std::endl;
}

void Stereo::setVolume(int level)
{
    std::cout << location << " Stereo volume is set to " << level << std::endl;
}
