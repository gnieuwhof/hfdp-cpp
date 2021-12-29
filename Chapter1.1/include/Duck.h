#ifndef DUCK_H
#define DUCK_H

#include "FlyBehavior.h"
#include "QuackBehavior.h"

class Duck
{
    public:
        Duck();
        virtual ~Duck();

        virtual void display(){};
        void performFly();
        void performQuack();
        void swim();

    protected:
        FlyBehavior * flyBehavior;
        QuackBehavior * quackBehavior;

    private:
};

#endif // DUCK_H
