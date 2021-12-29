#include "ChocolateBoiler.h"

#include <iostream>
#include <limits>

using namespace std;

// Lazy
//ChocolateBoiler * ChocolateBoiler::uniqueInstance = 0;
//int ChocolateBoiler::instances = 0;
// Eager
ChocolateBoiler * ChocolateBoiler::uniqueInstance = new ChocolateBoiler;

int main()
{
    ChocolateBoiler * chocolateBoiler = ChocolateBoiler::getInstance();
    ChocolateBoiler * chocolateBoiler2 = ChocolateBoiler::getInstance();
    chocolateBoiler->fill();
    chocolateBoiler->boil();
    chocolateBoiler2->fill();
    chocolateBoiler->drain();
    chocolateBoiler2->boil();
    chocolateBoiler2->drain();

    delete chocolateBoiler;
    delete chocolateBoiler2;
    ChocolateBoiler * chocolateBoiler3 = ChocolateBoiler::getInstance();
    ChocolateBoiler * chocolateBoiler4 = ChocolateBoiler::getInstance();
    chocolateBoiler3->fill();
    chocolateBoiler3->boil();
    chocolateBoiler4->fill();
    chocolateBoiler3->drain();
    chocolateBoiler4->boil();
    chocolateBoiler4->drain();

    delete chocolateBoiler3;
    delete chocolateBoiler4;

    ChocolateBoiler::dispose();
    return 0;
}
