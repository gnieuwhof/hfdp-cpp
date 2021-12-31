#include "ChocolateBoiler.h"

#include <iostream>

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
        std::cout << "Boiler filled." << std::endl;
    }
    else
    {
        std::cout << "Boiler already filled!" << std::endl;
    }
}

void ChocolateBoiler::drain()
{
    if (!isEmpty() && isBoiled())
    {
        empty = true;
        std::cout << "Boiler drained." << std::endl;
    }
    else
    {
        std::cout << "Boiler is empty!" << std::endl;
    }
}

void ChocolateBoiler::boil()
{
    if (!isEmpty() && !isBoiled())
    {
        boiled = true;
        std::cout << "Boiler boiled." << std::endl;
    }
    else
    {
        std::cout << "Boiler is empty or already boiled!" << std::endl;
    }
}
