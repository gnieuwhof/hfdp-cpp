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

class Pizza
{
    public:
        Pizza();
        virtual ~Pizza();

        virtual void prepare(){}
        void bake();
        virtual void cut();
        void box();
        void setName(std::string name);
        std::string getName();
        std::string toString();

    protected:
        std::string name;
        Dough * dough;
        Sauce * sauce;
        std::list<Veggies *> veggies;
        Cheese * cheese;
        Pepperoni * pepperoni;
        Clams * clam;

    private:
};

#endif // PIZZA_H
