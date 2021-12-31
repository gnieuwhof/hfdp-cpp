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

void Pizza::setName(std::string name)
{
    this->name = name;
}

std::string Pizza::getName()
{
    return name;
}

std::string Pizza::toString()
{
    std::string result = name;
    result.append("\n");
    result.append(dough->toString());
    result.append("\n");
    result.append(sauce->toString());
    result.append("\n");
    result.append(cheese->toString());
    result.append("\n");
    for (std::list<Veggies *>::iterator i = veggies.begin();
        i != veggies.end(); i++)
    {
        result.append((*i)->toString());
        result.append("\n");
    }
    return result;
}
