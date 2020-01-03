#include <iostream>
#include "Vehicle.h"
#include "Truck.h"

using namespace std;

void Truck::setWeight(int w)
{
    weight = w;
}

void Truck::setLength(int l)
{
    length = l;
}

void Truck::setHeight(int h)
{
    height = h;
}

int Truck::getWeight()
{
    return weight;
}

int Truck::getLength()
{
    return length;
}

int Truck::getHeight()
{
    return height;
}