

#include "Planet.h"
#include "Celestial.h"
//#pragma "Planet.cpp"
#include <iostream>
Planet::Planet()
{
    //ctor
}

Planet::~Planet()
{
    //dtor
    std::cout << "Planet destroyed " << std::endl;
}
