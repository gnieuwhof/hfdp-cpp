#include "MallardDuck.h"
#include "ModelDuck.h"
#include "FlyRocketPowered.h"

#include <iostream>
#include <limits>

int main()
{
    Duck * mallard = new MallardDuck;
    mallard->performQuack();
    mallard->performFly();
    delete mallard;

    Duck * model = new ModelDuck;
    model->performFly();
    model->setFlyBehavior(new FlyRocketPowered);
    model->performFly();
    delete model;

    return 0;
}
