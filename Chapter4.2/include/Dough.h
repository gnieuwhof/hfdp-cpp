#ifndef DOUGH_H
#define DOUGH_H

#include <string>

class Dough
{
    public:
        Dough();
        virtual ~Dough();

        virtual std::string toString() = 0;

    protected:

    private:
};

#endif // DOUGH_H
