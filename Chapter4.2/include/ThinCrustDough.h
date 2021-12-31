#ifndef THINCRUSTDOUGH_H
#define THINCRUSTDOUGH_H

#include "Dough.h"

#include <string>

class ThinCrustDough: public Dough
{
    public:
        ThinCrustDough();
        virtual ~ThinCrustDough();

        std::string toString();

    protected:

    private:
};

#endif // THINCRUSTDOUGH_H
