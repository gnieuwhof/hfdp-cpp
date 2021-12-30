#include "GarageDoor.h"

#include <iostream>

using namespace std;

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
    cout << "Garage Door is Open" << endl;
}

void GarageDoor::down()
{
    cout << "Garage Door is Closed" << endl;
}

void GarageDoor::stop()
{
    cout << "Garage Door is Stopped" << endl;
}

void GarageDoor::lightOn()
{
    cout << "Garage light is On" << endl;
}

void GarageDoor::lightOff()
{
    cout << "Garage light is Off" << endl;
}
