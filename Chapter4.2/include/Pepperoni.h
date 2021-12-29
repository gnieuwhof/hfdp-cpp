#ifndef PEPPERONI_H
#define PEPPERONI_H


#include <string>

using namespace std;

class Pepperoni
{
    public:
        Pepperoni();
        virtual ~Pepperoni();

        virtual string toString() = 0;

    protected:

    private:
};

#endif // PEPPERONI_H
