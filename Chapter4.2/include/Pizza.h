#ifndef PIZZA_H
#define PIZZA_H

#include "Dough.h"
#include "Sauce.h"
#include "Veggies.h"
#include "Cheese.h"
#include "Pepperoni.h"
#include "Clams.h"

#include <string>
#include <list>

using namespace std;

class Pizza
{
    public:
        Pizza();
        virtual ~Pizza();

        virtual void prepare(){}
        void bake();
        virtual void cut();
        void box();
        void setName(string name);
        string getName();
        string toString();

    protected:
        string name;
        Dough * dough;
        Sauce * sauce;
        list<Veggies *> veggies;
        Cheese * cheese;
        Pepperoni * pepperoni;
        Clams * clam;

    private:
};

#endif // PIZZA_H
