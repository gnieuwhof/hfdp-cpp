#include "Stereo.h"

#include <iostream>

using namespace std;

Stereo::Stereo(string location)
{
    this->location = location;
}

Stereo::~Stereo()
{
    //dtor
}


void Stereo::on()
{
    cout << location << " Stereo is On" << endl;
}

void Stereo::off()
{
    cout << location << " Stereo is Off" << endl;
}

void Stereo::setCD()
{
    cout << location << " Stereo is set to CD" << endl;
}

void Stereo::setDvd()
{
    cout << location << " Stereo is set to DVD" << endl;
}

void Stereo::setRadio()
{
    cout << location << " Stereo is set to Radio" << endl;
}

void Stereo::setVolume(int level)
{
    cout << location << " Stereo volume is set to " << level << endl;
}
