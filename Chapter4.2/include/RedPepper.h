#ifndef REDPEPPER_H
#define REDPEPPER_H

#include "Veggies.h"

#include <string>

using namespace std;

class RedPepper: public Veggies
{
    public:
        RedPepper();
        virtual ~RedPepper();

        string toString();

    protected:

    private:
};

#endif // REDPEPPER_H
