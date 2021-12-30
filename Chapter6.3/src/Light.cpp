#include "Light.h"

#include <iostream>

using namespace std;

Light::Light(string location)
{
    this->location = location;
}

Light::~Light()
{
    //dtor
}


void Light::on()
{
    cout << location << " Light is on" << endl;
}

void Light::off()
{
    cout << location << " Light is off" << endl;
}
