#ifndef QUACK_H
#define QUACK_H

#include "QuackBehavior.h"

class Quack: public QuackBehavior
{
    public:
        Quack();
        virtual ~Quack();

        void quack();

    protected:

    private:
};

#endif // QUACK_H
