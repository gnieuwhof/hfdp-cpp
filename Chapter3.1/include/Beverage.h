#ifndef BEVERAGE_H
#define BEVERAGE_H

#include <iostream>

using namespace std;

class Beverage
{
    public:
        virtual double cost() = 0;

        Beverage();
        virtual ~Beverage();

        virtual string getDescription();

    protected:
        string description;

    private:
};

#endif // BEVERAGE_H
