#ifndef CHEESE_H
#define CHEESE_H

#include <string>

using namespace std;

class Cheese
{
    public:
        Cheese();
        virtual ~Cheese();

        virtual string toString() = 0;

    protected:

    private:
};

#endif // CHEESE_H
