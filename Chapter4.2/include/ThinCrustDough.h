#ifndef THINCRUSTDOUGH_H
#define THINCRUSTDOUGH_H

#include "Dough.h"

#include <string>

using namespace std;

class ThinCrustDough: public Dough
{
    public:
        ThinCrustDough();
        virtual ~ThinCrustDough();

        string toString();

    protected:

    private:
};

#endif // THINCRUSTDOUGH_H
