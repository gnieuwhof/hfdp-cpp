#ifndef SLICEDPEPPERONI_H
#define SLICEDPEPPERONI_H

#include "Pepperoni.h"

#include <string>

using namespace std;

class SlicedPepperoni: public Pepperoni
{
    public:
        SlicedPepperoni();
        virtual ~SlicedPepperoni();

        string toString();

    protected:

    private:
};

#endif // SLICEDPEPPERONI_H
