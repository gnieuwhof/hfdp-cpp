#ifndef FLYROCKETPOWERED_H
#define FLYROCKETPOWERED_H

#include "FlyBehavior.h"

class FlyRocketPowered: public FlyBehavior
{
    public:
        FlyRocketPowered();
        virtual ~FlyRocketPowered();

        void fly();

    protected:

    private:
};

#endif // FLYROCKETPOWERED_H
