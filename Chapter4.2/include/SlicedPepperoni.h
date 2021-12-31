#ifndef SLICEDPEPPERONI_H
#define SLICEDPEPPERONI_H

#include "Pepperoni.h"

#include <string>

class SlicedPepperoni: public Pepperoni
{
    public:
        SlicedPepperoni();
        virtual ~SlicedPepperoni();

        std::string toString();

    protected:

    private:
};

#endif // SLICEDPEPPERONI_H
