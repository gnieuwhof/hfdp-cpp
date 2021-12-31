#include "ModelDuck.h"
#include "FlyNoWay.h"
#include "Quack.h"

#include <iostream>

ModelDuck::ModelDuck()
{
    flyBehavior = new FlyNoWay;
    quackBehavior = new Quack;
}

ModelDuck::~ModelDuck()
{
    delete flyBehavior;
    delete quackBehavior;
}


void ModelDuck::display()
{
    std::cout << "I'm a model duck" << std::endl;
}
