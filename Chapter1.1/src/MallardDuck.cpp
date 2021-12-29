#include "MallardDuck.h"
#include "Quack.h"
#include "FlyWithWings.h"

#include <iostream>

using namespace std;

MallardDuck::MallardDuck()
{
    quackBehavior = new Quack;
    flyBehavior = new FlyWithWings;
}

MallardDuck::~MallardDuck()
{
    delete flyBehavior;
    delete quackBehavior;
}


void MallardDuck::display()
{
    cout << "I'm a real Mallard duck" << endl;
}
