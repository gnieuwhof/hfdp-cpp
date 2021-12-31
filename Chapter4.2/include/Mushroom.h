#ifndef MUSHROOM_H
#define MUSHROOM_H

#include "Veggies.h"

#include <string>

class Mushroom: public Veggies
{
    public:
        Mushroom();
        virtual ~Mushroom();

        std::string toString();

    protected:

    private:
};

#endif // MUSHROOM_H
