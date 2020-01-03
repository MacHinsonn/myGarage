#include <iostream>
#include <string>
#include <vector>
#include "Vehicle.h"
#include "Garage.h"

using namespace std;

void Garage::setMaxNrVehicles(int x)
{
    maxNrVehicles = x;
}

int Garage::getMaxNrVehicles()
{
    return maxNrVehicles;
}

void Garage::addVehicle(Vehicle a)
{
    if (listVehicles.size() < maxNrVehicles)
    {
        listVehicles.push_back(a);
        cout << "Vehicle " << a.getRegNr() << " has been added to the garage." << endl;
    }
    else
    {
        cout << "Garage is full." << endl;
    }  
}

void Garage::removeVehicle()
{
    int foundIndex;
    bool found = false;
    cout << "Enter the registration number of the vehicle you want to remove:" << endl;
    string c;
    cin >> c;
    for(int i = 0; i < listVehicles.size(); i++)
    {
        if(listVehicles[i].getRegNr() == c)
        {
            foundIndex = i;
            found = true;
        }
    }
    if (found) 
    {
    listVehicles.erase(listVehicles.begin() + foundIndex);
    cout << "Vehicle " << c << " was deleted." << endl;
    } else { cout << "Vehicle was not found." << endl;}
}

void Garage::printGarage()
{
    for(int i = 0; i < listVehicles.size(); i++)
    {
        listVehicles[i].printSelf();
    }
}

void Garage::findVehicleRegNr(string a)
{
    bool found = false;
    if (listVehicles.size() == 0) {
        cout << "There are no vehicles in the garage. It is empty." << endl;
    }
     for(int i = 0; i < listVehicles.size(); i++)
    {
        string s = listVehicles[i].getRegNr();
        if(listVehicles[i].getRegNr() == a)
        {
            found = true;
            cout << "Vehicle " << s << " was found in the garage." << endl;
            listVehicles[i].printSelf();
        } 
    }
    if(!found)
    {
        cout << "There is no such vehicle in the garage." << endl;
    }
}

void Garage::findVehiclesColor(string b)
{
    vector<Vehicle> allcolorx;
    for(int i = 0; i < listVehicles.size(); i++)
    {
        string s = listVehicles[i].getColor();
        if(listVehicles[i].getColor() == b)
        {
            allcolorx.push_back(listVehicles[i]); 
        }
    }
    for(int j = 0; j < allcolorx.size(); j++)
    {
        allcolorx[j].printSelf();
    }
}

void Garage::findVehiclesNrWheels(int x)
{
    vector<Vehicle> allWheels;
    for(int i = 0; i < listVehicles.size(); i++)
    {
        int y = listVehicles[i].getNrWheels();
        if(listVehicles[i].getNrWheels() == x)
        {
            allWheels.push_back(listVehicles[i]);
        }
    }
    for(int j = 0; j < allWheels.size(); j++)
    {
        allWheels[j].printSelf();
    }
}

void Garage::findVehiclesPassengers(int y)
{
    vector<Vehicle> allPassengers;
    for(int i = 0; i < listVehicles.size(); i++)
    {
        int z = listVehicles[i].getPassengers();
        if(listVehicles[i].getPassengers() == y)
        {
            allPassengers.push_back(listVehicles[i]);
        }
    }
    for(int j = 0; j < allPassengers.size(); j++)
    {
        allPassengers[j].printSelf();
    }
}

 void Garage::findVehiclesType(string type)
{
    bool found = false;
    vector<Vehicle> matchingVehicles;
    for(int i = 0; i < listVehicles.size(); i++)
    {
        if(listVehicles[i].getType() == type)
        {
            matchingVehicles.push_back(listVehicles[i]);
            found = true;
        }
    }
    if(found) {
        for(int i=0; i< matchingVehicles.size(); i++)
        {
            matchingVehicles[i].printSelf();
        }
    }
} 