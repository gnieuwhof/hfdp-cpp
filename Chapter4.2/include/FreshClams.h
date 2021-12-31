#ifndef FRESHCLAMS_H
#define FRESHCLAMS_H

#include "Clams.h"

#include <string>

class FreshClams: public Clams
{
    public:
        FreshClams();
        virtual ~FreshClams();

        std::string toString();

    protected:

    private:
};

#endif // FRESHCLAMS_H
