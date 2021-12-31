#ifndef CHEESE_H
#define CHEESE_H

#include <string>

class Cheese
{
    public:
        Cheese();
        virtual ~Cheese();

        virtual std::string toString() = 0;

    protected:

    private:
};

#endif // CHEESE_H
