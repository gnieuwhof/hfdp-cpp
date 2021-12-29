#ifndef SQUEAK_H
#define SQUEAK_H

#include "QuackBehavior.h"

class Squeak: public QuackBehavior
{
    public:
        Squeak();
        virtual ~Squeak();

        void quack();

    protected:

    private:
};

#endif // SQUEAK_H
