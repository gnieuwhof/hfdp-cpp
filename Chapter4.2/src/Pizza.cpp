#include "Pizza.h"

#include <iostream>

using namespace std;

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
    cout << "Bake for 25 minutes at 350" << endl;
}

void Pizza::cut()
{
    cout << "Cutting the pizza into diagonal slices" << endl;
}

void Pizza::box()
{
    cout << "Place pizza into official PizzaStore box" << endl;
}

void Pizza::setName(string name)
{
    this->name = name;
}

string Pizza::getName()
{
    return name;
}

string Pizza::toString()
{
    string result = name;
    result.append("\n");
    result.append(dough->toString());
    result.append("\n");
    result.append(sauce->toString());
    result.append("\n");
    result.append(cheese->toString());
    result.append("\n");
    for (list<Veggies *>::iterator i = veggies.begin();
        i != veggies.end(); i++)
    {
        result.append((*i)->toString());
        result.append("\n");
    }
    return result;
}
