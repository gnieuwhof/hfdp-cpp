#include "ModelDuck.h"
#include "FlyNoWay.h"
#include "Quack.h"

#include <iostream>

using namespace std;

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
    cout << "I'm a model duck" << endl;
}
