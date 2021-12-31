#ifndef PIZZA_H
#define PIZZA_H

#include <string>
#include <list>

class Pizza
{
    public:
        Pizza();
        virtual ~Pizza();

        void prepare();
        void bake();
        virtual void cut();
        void box();
        std::string getName();

    protected:
        std::string name;
        std::string dough;
        std::string sauce;
        std::list<std::string> toppings;

    private:
};

#endif // PIZZA_H
