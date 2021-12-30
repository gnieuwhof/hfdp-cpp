#include "TV.h"

#include <iostream>

using namespace std;

TV::TV(string location)
{
    this->location = location;
}

TV::~TV()
{
    //dtor
}


void TV::on()
{
    cout << location << " TV is on" << endl;
}

void TV::off()
{
    cout << location << "TV is off" << endl;
}

void TV::setChannel(int channel)
{
    this->channel = channel;
    cout << location << " TV is set to channel " << channel << endl;
}
