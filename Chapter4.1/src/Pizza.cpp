#include "Pizza.h"

#include <iostream>

Pizza::Pizza()
{
    //ctor
}

Pizza::~Pizza()
{
    //dtor
}


void Pizza::prepare()
{
    std::cout << "Preparing " << name << std::endl;
    std::cout << "Tossing dough..." << std::endl;
    std::cout << "Adding sauce..." << std::endl;
    std::cout << "Adding toppings: " << std::endl;
    for(std::list<std::string>::iterator i = toppings.begin();
        i != toppings.end(); i++)
    {
        std::cout << "    " << *i << std::endl;
    }

}

void Pizza::bake()
{
    std::cout << "Bake for 25 minutes at 350" << std::endl;
}

void Pizza::cut()
{
    std::cout << "Cutting the pizza into diagonal slices" << std::endl;
}

void Pizza::box()
{
    std::cout << "Place pizza into official PizzaStore box" << std::endl;
}

std::string Pizza::getName()
{
    return name;
}
