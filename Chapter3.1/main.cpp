#include "Espresso.h"
#include "HouseBlend.h"
#include "Mocha.h"

#include <iostream>
#include <limits>
#include <string>

using namespace std;

int main()
{
    Beverage * beverage = new Espresso;
    cout << beverage->getDescription() << " $" << beverage->cost() << endl;
    delete beverage;

    Beverage * beverage2 = new HouseBlend;
    beverage2 = new Mocha(beverage2);
    cout << beverage2->getDescription() << " $" << beverage2->cost() << endl;
    delete beverage2;

    return 0;
}
