#ifndef MUSHROOM_H
#define MUSHROOM_H

#include "Veggies.h"

#include <string>

using namespace std;

class Mushroom: public Veggies
{
    public:
        Mushroom();
        virtual ~Mushroom();

        string toString();

    protected:

    private:
};

#endif // MUSHROOM_H
