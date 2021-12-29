#ifndef FLYWITHWINGS_H
#define FLYWITHWINGS_H

#include "FlyBehavior.h"

class FlyWithWings: public FlyBehavior
{
    public:
        FlyWithWings();
        virtual ~FlyWithWings();

        void fly();

    protected:

    private:
};

#endif // FLYWITHWINGS_H
