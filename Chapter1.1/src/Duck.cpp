#include "Duck.h"

#include <iostream>

Duck::Duck()
{
    //ctor
}

Duck::~Duck()
{
    //dtor
}


void Duck::performFly()
{
    flyBehavior->fly();
}

void Duck::performQuack()
{
    quackBehavior->quack();
}

void Duck::swim()
{
    std::cout << "All ducks float, even decoys!" << std::endl;
}
