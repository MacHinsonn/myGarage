#include <iostream>
#include "Vehicle.h"
#include "Bike.h"

using namespace std;

void Bike::setBell(bool tf)
{
    bell = tf;
}

void Bike::setFixedGear(bool ft)
{
    fixedGear = ft;
}

bool Bike::getBell()
{
    return bell;
}

bool Bike::getFixedGear()
{
    return fixedGear;
}