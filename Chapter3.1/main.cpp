#include <iostream>
#include <limits>
#include <string>

using namespace std;

class Beverage
{
    protected:
        string description;

    public:
        Beverage()
        {
            description = "Unknown beverage";
        }

        virtual string getDescription()
        {
            return description;
        }

        virtual double cost() = 0;
};

class CondimentBeverage: public Beverage
{
    public:
        virtual string getDescription() = 0;
};

class Espresso: public Beverage
{
    public:
        Espresso()
        {
            description = "Espresso";
        }

        double cost()
        {
            return 1.99;
        }
};

class HouseBlend: public Beverage
{
    public:
        HouseBlend()
        {
            description = "House Blend Coffee";
        }

        double cost()
        {
            return .99;
        }
};

class Mocha: public CondimentBeverage
{
    private:
        Beverage * beverage;

    public:
        ~Mocha()
        {
            delete beverage;
        }

        Mocha(Beverage * beverage)
        {
            this->beverage = beverage;
        }

        string getDescription()
        {
            return beverage->getDescription().append(", Mocha");
        }

        double cost()
        {
            return beverage->cost() + .20;
        }
};

int main()
{
    Beverage * beverage = new Espresso;
    cout << beverage->getDescription() << " $" << beverage->cost() << endl;
    delete beverage;

    Beverage * beverage2 = new HouseBlend;
    beverage2 = new Mocha(beverage2);
    cout << beverage2->getDescription() << " $" << beverage2->cost() << endl;
    delete beverage2;

    return 0;
}
