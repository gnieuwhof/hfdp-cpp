#ifndef BEVERAGE_H
#define BEVERAGE_H

#include <iostream>

class Beverage
{
    public:
        virtual double cost() = 0;

        Beverage();
        virtual ~Beverage();

        virtual std::string getDescription();

    protected:
        std::string description;

    private:
};

#endif // BEVERAGE_H
