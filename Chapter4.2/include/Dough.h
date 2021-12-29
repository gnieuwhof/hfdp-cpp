#ifndef DOUGH_H
#define DOUGH_H

#include <string>

using namespace std;

class Dough
{
    public:
        Dough();
        virtual ~Dough();

        virtual string toString() = 0;

    protected:

    private:
};

#endif // DOUGH_H
