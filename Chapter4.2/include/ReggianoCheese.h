#ifndef REGGIANOCHEESE_H
#define REGGIANOCHEESE_H

#include "Cheese.h"

#include <string>

using namespace std;

class ReggianoCheese: public Cheese
{
    public:
        ReggianoCheese();
        virtual ~ReggianoCheese();

        string toString();

    protected:

    private:
};

#endif // REGGIANOCHEESE_H
