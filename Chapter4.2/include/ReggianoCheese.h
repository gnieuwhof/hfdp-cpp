#ifndef REGGIANOCHEESE_H
#define REGGIANOCHEESE_H

#include "Cheese.h"

#include <string>

class ReggianoCheese: public Cheese
{
    public:
        ReggianoCheese();
        virtual ~ReggianoCheese();

        std::string toString();

    protected:

    private:
};

#endif // REGGIANOCHEESE_H
