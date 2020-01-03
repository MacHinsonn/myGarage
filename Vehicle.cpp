#include <iostream>
#include <string>
#include "Vehicle.h"

using namespace std;

Vehicle::Vehicle()
{

}

void Vehicle::setRegNr(string a)
{
    regNr = a;
}

void Vehicle::setNrWheels(int x)
{
    nrWheels = x;
}

void Vehicle::setColor(string y)
{
    color = y;
}

void Vehicle::setPassengers(int z)
{
    passengers = z;
}

string Vehicle::getRegNr()
{
    return regNr;
}
string Vehicle::getType() 
{
    return type;
}
void Vehicle::setType(string t) 
{
    type = t;
}
void Vehicle::printSelf()
{
    cout << "REG. NR.\t\tWHEELS\tCOLOR\tTYPE\n" <<
    regNr << "," << nrWheels << ","  << color << "," <<
    type << endl;
}
int Vehicle::getNrWheels()
{
    return nrWheels;
}

string Vehicle::getColor()
{
    return color;
}

int Vehicle::getPassengers()
{
    return passengers;
}