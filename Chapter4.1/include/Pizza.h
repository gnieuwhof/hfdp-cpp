#ifndef PIZZA_H
#define PIZZA_H

#include <string>
#include <list>

using namespace std;

class Pizza
{
    public:
        Pizza();
        virtual ~Pizza();

        void prepare();
        void bake();
        virtual void cut();
        void box();
        string getName();

    protected:
        string name;
        string dough;
        string sauce;
        list<string> toppings;

    private:
};

#endif // PIZZA_H
