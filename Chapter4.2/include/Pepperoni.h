#ifndef PEPPERONI_H
#define PEPPERONI_H


#include <string>

class Pepperoni
{
    public:
        Pepperoni();
        virtual ~Pepperoni();

        virtual std::string toString() = 0;

    protected:

    private:
};

#endif // PEPPERONI_H
