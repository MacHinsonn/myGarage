#include "Bus.h"
#include "Vehicle.h"

using namespace std;

void Bus::setWheelchairSpots(int w)
{
    wheelchairSpots = w;
}

void Bus::setNrDoors(int d)
{
    nrDoors = d;
}

int Bus::getWheelchairSpots()
{
    return wheelchairSpots;
}

int Bus::getNrDoors()
{
    return nrDoors;
}