#ifndef ONION_H
#define ONION_H

#include "Veggies.h"

#include <string>

class Onion: public Veggies
{
    public:
        Onion();
        virtual ~Onion();

        std::string toString();

    protected:

    private:
};

#endif // ONION_H
