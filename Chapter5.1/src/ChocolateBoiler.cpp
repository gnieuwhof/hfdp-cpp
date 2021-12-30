#include "ChocolateBoiler.h"

#include <iostream>

using namespace std;

ChocolateBoiler::ChocolateBoiler()
{
    empty = true;
    boiled = false;
}

ChocolateBoiler::~ChocolateBoiler()
{
    /*
    // Lazy Singleton
    if (instances == 0)
    {
        delete uniqueInstance;
    }
    else instances--;
    */
}


ChocolateBoiler * ChocolateBoiler::getInstance()
{
//    instances++;                                  //
//    if (uniqueInstance == 0)                      //
//    {                                             // Lazy Singleton
//        uniqueInstance = new ChocolateBoiler();   //
//    }                                             //
    return uniqueInstance;
}

void ChocolateBoiler::dispose() // Use with Eager Singleton
{
    delete uniqueInstance;
}

bool ChocolateBoiler::isEmpty()
{
    return empty;
}

bool ChocolateBoiler::isBoiled()
{
    return boiled;
}

void ChocolateBoiler::fill()
{
    if (isEmpty())
    {
        empty = false;
        boiled = false;
        cout << "Boiler filled." << endl;
    }
    else cout << "Boiler already filled!" << endl;
}

void ChocolateBoiler::drain()
{
    if (!isEmpty() && isBoiled())
    {
        empty = true;
        cout << "Boiler drained." << endl;
    }
    else cout << "Boiler is empty!" << endl;
}

void ChocolateBoiler::boil()
{
    if (!isEmpty() && !isBoiled())
    {
        boiled = true;
        cout << "Boiler boiled." << endl;
    }
    else cout << "Boiler is empty or already boiled!" << endl;
}
