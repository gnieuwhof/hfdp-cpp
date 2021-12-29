#ifndef MUTEQUACK_H
#define MUTEQUACK_H

#include "QuackBehavior.h"

class MuteQuack: public QuackBehavior
{
    public:
        MuteQuack();
        virtual ~MuteQuack();

        void quack();

    protected:

    private:
};

#endif // MUTEQUACK_H
