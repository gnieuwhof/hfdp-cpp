#include "Espresso.h"
#include "HouseBlend.h"
#include "Mocha.h"

#include <iostream>
#include <limits>
#include <string>

int main()
{
    Beverage * beverage = new Espresso;
    std::cout << beverage->getDescription() << " $" << beverage->cost() << std::endl;
    delete beverage;

    Beverage * beverage2 = new HouseBlend;
    beverage2 = new Mocha(beverage2);
    std::cout << beverage2->getDescription() << " $" << beverage2->cost() << std::endl;
    delete beverage2;

    return 0;
}
