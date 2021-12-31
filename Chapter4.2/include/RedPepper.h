#ifndef REDPEPPER_H
#define REDPEPPER_H

#include "Veggies.h"

#include <string>

class RedPepper: public Veggies
{
    public:
        RedPepper();
        virtual ~RedPepper();

        std::string toString();

    protected:

    private:
};

#endif // REDPEPPER_H
