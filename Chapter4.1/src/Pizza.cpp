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


void Pizza::prepare()
{
    cout << "Preparing " << name << endl;
    cout << "Tossing dough..." << endl;
    cout << "Adding suace..." << endl;
    cout << "Adding toppings: " << endl;
    for(list<string>::iterator i = toppings.begin();
        i != toppings.end(); i++)
    {
        cout << "    " << *i << endl;
    }

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

string Pizza::getName()
{
    return name;
}
