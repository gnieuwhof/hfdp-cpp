#include "GarageDoor.h"

#include <iostream>

using namespace std;

GarageDoor::GarageDoor(string location)
{
    this->location = location;
}

GarageDoor::~GarageDoor()
{
    //dtor
}


void GarageDoor::up()
{
    cout << location << " Garage Door is Open" << endl;
}

void GarageDoor::down()
{
    cout << location << " Garage Door is Closed" << endl;
}

void GarageDoor::stop()
{
    cout << location << " Garage Door is Stopped" << endl;
}

void GarageDoor::lightOn()
{
    cout << location << " Garage light is On" << endl;
}

void GarageDoor::lightOff()
{
    cout << location << " Garage light is Off" << endl;
}
