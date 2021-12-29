#ifndef MARINARASAUCE_H
#define MARINARASAUCE_H

#include "Sauce.h"

#include <string>

using namespace std;

class MarinaraSauce: public Sauce
{
    public:
        MarinaraSauce();
        virtual ~MarinaraSauce();

        string toString();

    protected:

    private:
};

#endif // MARINARASAUCE_H
