#ifndef MARINARASAUCE_H
#define MARINARASAUCE_H

#include "Sauce.h"

#include <string>

class MarinaraSauce: public Sauce
{
    public:
        MarinaraSauce();
        virtual ~MarinaraSauce();

        std::string toString();

    protected:

    private:
};

#endif // MARINARASAUCE_H
