#include "MallardDuck.h"

#include <iostream>
#include <limits>

int main()
{
    Duck * mallard = new MallardDuck;
    mallard->performQuack();
    mallard->performFly();
    delete mallard;

    return 0;
}
