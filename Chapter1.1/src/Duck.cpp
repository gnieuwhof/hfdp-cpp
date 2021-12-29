#include "Duck.h"

#include <iostream>

using namespace std;

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
    cout << "All ducks float, even decoys!" << endl;
}
