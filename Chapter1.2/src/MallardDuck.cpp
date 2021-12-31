#include "MallardDuck.h"
#include "Quack.h"
#include "FlyWithWings.h"

#include <iostream>

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
    std::cout << "I'm a real Mallard duck" << std::endl;
}
