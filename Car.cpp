#include <iostream>
#include <string>
#include "Vehicle.h"
#include "Car.h"

using namespace std;

void Car::setNrDoors(int x)
{
    nrDoors = x;
}

int Car::getNrDoors()
{
    return nrDoors;
}
