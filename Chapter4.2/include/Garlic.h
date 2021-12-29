#ifndef GARLIC_H
#define GARLIC_H

#include "Veggies.h"

#include <string>

using namespace std;

class Garlic: public Veggies
{
    public:
        Garlic();
        virtual ~Garlic();

        string toString();

    protected:

    private:
};

#endif // GARLIC_H
