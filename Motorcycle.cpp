#include <iostream>
#include "Vehicle.h"
#include "Motorcycle.h"

using namespace std;

void Motorcycle::setSidecar(bool tf)
{
    sidecar = tf;
}

bool Motorcycle::getSidecar()
{
    return sidecar;
}