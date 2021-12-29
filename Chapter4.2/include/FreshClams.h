#ifndef FRESHCLAMS_H
#define FRESHCLAMS_H

#include "Clams.h"

#include <string>

using namespace std;

class FreshClams: public Clams
{
    public:
        FreshClams();
        virtual ~FreshClams();

        string toString();

    protected:

    private:
};

#endif // FRESHCLAMS_H
