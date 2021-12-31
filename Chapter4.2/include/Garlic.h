#ifndef GARLIC_H
#define GARLIC_H

#include "Veggies.h"

#include <string>

class Garlic: public Veggies
{
    public:
        Garlic();
        virtual ~Garlic();

        std::string toString();

    protected:

    private:
};

#endif // GARLIC_H
