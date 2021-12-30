#include "Hottub.h"

#include <iostream>

using namespace std;

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
        cout << "Hottub is bubling!" << endl;
    }
}

void Hottub::jetsOn()
{
    if (isOn)
    {
        cout << "Hottub jets are on" << endl;
    }
}

void Hottub::jetsOff()
{
    if (isOn)
    {
        cout << "Hottub jets are off" << endl;
    }
}

void Hottub::setTemperature(int temperature)
{
    if (temperature > this->temperature)
    {
        cout << "Hottub is heating to a steaming " << temperature;
        cout << " degrees" << endl;
    }else
    {
        cout << "Hottub is cooling to " << temperature;
        cout << " degrees" << endl;
    }
    this->temperature = temperature;
}
