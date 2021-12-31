#include "Hottub.h"

#include <iostream>

Hottub::Hottub()
{
    //ctor
}

Hottub::~Hottub()
{
    //dtor
}


void Hottub::on()
{
    isOn = true;
}

void Hottub::off()
{
    isOn = false;
}

void Hottub::circulate()
{
    if (isOn)
    {
        std::cout << "Hottub is bubling!" << std::endl;
    }
}

void Hottub::jetsOn()
{
    if (isOn)
    {
        std::cout << "Hottub jets are on" << std::endl;
    }
}

void Hottub::jetsOff()
{
    if (isOn)
    {
        std::cout << "Hottub jets are off" << std::endl;
    }
}

void Hottub::setTemperature(int temperature)
{
    if (temperature > this->temperature)
    {
        std::cout << "Hottub is heating to a steaming " << temperature;
        std::cout << " degrees" << std::endl;
    }else
    {
        std::cout << "Hottub is cooling to " << temperature;
        std::cout << " degrees" << std::endl;
    }
    this->temperature = temperature;
}
