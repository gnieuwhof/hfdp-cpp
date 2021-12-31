#include "MuteQuack.h"

#include <iostream>

MuteQuack::MuteQuack()
{
    //ctor
}

MuteQuack::~MuteQuack()
{
    //dtor
}


void MuteQuack::quack()
{
    std::cout << "Silence" << std::endl;
}
