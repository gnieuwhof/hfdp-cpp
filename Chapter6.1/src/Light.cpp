#include "Light.h"

#include <iostream>

using namespace std;

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
    cout << "Light is on" << endl;
}

void Light::off()
{
    cout << "Light is off" << endl;
}
