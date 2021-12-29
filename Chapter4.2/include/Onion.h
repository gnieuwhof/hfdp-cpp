#ifndef ONION_H
#define ONION_H

#include "Veggies.h"

#include <string>

using namespace std;

class Onion: public Veggies
{
    public:
        Onion();
        virtual ~Onion();

        string toString();

    protected:

    private:
};

#endif // ONION_H
