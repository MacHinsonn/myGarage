#include <iostream>
#include <string>
#include "Vehicle.h"
#include "Car.h"
#include "Garage.h"
#include "Bus.h"
#include "Bike.h"
#include "Motorcycle.h"
#include "Truck.h"

using namespace std;

Garage createGarage()
{
    int garageSize;
    cout << "Set the size for your garage (whole number):" << endl;
    cin >> garageSize;
    Garage garageObject;
    garageObject.setMaxNrVehicles(garageSize);
    return garageObject;
}

Car createCar()
{
    cout << "Enter the registration number (no white spaces): " << endl;
    string regnum;
    cin >> regnum;
    cout << "What color is the car?" << endl;
    string color;
    cin >> color;
    cout << "How many passengers can it fit?" << endl;
    int passengersnum;
    cin >> passengersnum;
    cout << "How many doors does the car have?" << endl;
    int doorsnum;
    cin >> doorsnum;
    Car carObject;
    carObject.setNrWheels(4);
    carObject.setRegNr(regnum);
    carObject.setColor(color);
    carObject.setPassengers(passengersnum);
    carObject.setNrDoors(doorsnum);
    carObject.setType("car");
    return carObject;
}

Bike createBike()
{
    Bike bikeObject;
    cout << "Enter the registration number (no white spaces):" << endl;
    string regnum;
    cin >> regnum;
    cout << "What color is the bike?" << endl;
    string color;
    cin >> color;
    cout << "Does it have a bell? (y/n)" << endl;
    char answer1;
    cin >> answer1;
    if(answer1 == 'y')
    {
        bikeObject.setBell(true);
    } else if(answer1 == 'n')
    {
        bikeObject.setBell(false);
    } else { cout << "Invalid answer." << endl; }
    cout << "Is it a fixed-gear bike? (y/n)" << endl;
    char answer2;
    cin >> answer2;
    if(answer2 == 'y')
    {
        bikeObject.setFixedGear(true);
    } else if(answer2 == 'n')
    {
        bikeObject.setFixedGear(false);
    } else { cout << "Invalid answer." << endl; }
    bikeObject.setNrWheels(2);
    bikeObject.setPassengers(1);
    bikeObject.setRegNr(regnum);
    bikeObject.setColor(color);
    bikeObject.setType("bike");
    return bikeObject;
}

Motorcycle createMotorcycle()
{
    Motorcycle motorcycleObject;
    cout << "Enter the registration number:" << endl;
    string regnum;
    cin >> regnum;
    cout << "What color is the motorcycle?" << endl;
    string color;
    cin >> color;
    cout << "Does it have a sidecar? (y/n)" << endl;
    char answer;
    cin >> answer;
    if(answer == 'y')
    {
        motorcycleObject.setSidecar(true);
    } else if(answer == 'n')
    {
        motorcycleObject.setSidecar(false);
    } else { cout << "Invalid answer." << endl; }
    if(motorcycleObject.getSidecar() == true)
    {
        motorcycleObject.setPassengers(3);
    } else { motorcycleObject.setPassengers(2); }
    motorcycleObject.setRegNr(regnum);
    motorcycleObject.setColor(color);
    motorcycleObject.setNrWheels(2);
    motorcycleObject.setType("motorcycle");
    return motorcycleObject;
}

Bus createBus()
{
    Bus busObject;
    cout << "Enter the registration number: " << endl;
    string regnum;
    cin >> regnum;
    cout << "What color is the bus?" << endl;
    string color;
    cin >> color;
    cout << "How many passengers can it fit?" << endl;
    int passengersnum;
    cin >> passengersnum;
    cout << "How many wheelchairs can it accomodate?" << endl;
    int wheelchairs;
    cin >> wheelchairs;
    cout << "How many doors does it have?" << endl;
    int doorsnum;
    cin >> doorsnum;
    cout << "How many wheels does it have?" << endl;
    int wheelsnum;
    cin >> wheelsnum;
    busObject.setColor(color);
    busObject.setNrDoors(doorsnum);
    busObject.setNrWheels(wheelsnum);
    busObject.setPassengers(passengersnum);
    busObject.setRegNr(regnum);
    busObject.setWheelchairSpots(wheelchairs);
    busObject.setType("bus");
    return busObject;
}

Truck createTruck()
{
    Truck truckObject;
    cout << "Enter the registration number:" << endl;
    string regnum;
    cin >> regnum;
    cout << "What color is the truck?" << endl;
    string color;
    cin >> color;
    cout << "How many wheels does it have?" << endl;
    int wheelsnum;
    cin >> wheelsnum;
    cout << "Enter the weight (kg):" << endl;
    int weight;
    cin >> weight;
    cout << "Enter the length (cm):" << endl;
    int length;
    cin >> length;
    cout << "Enter the height (cm):" << endl;
    int height;
    cin >> height;
    truckObject.setRegNr(regnum);
    truckObject.setColor(color);
    truckObject.setNrWheels(wheelsnum);
    truckObject.setWeight(weight);
    truckObject.setLength(length);
    truckObject.setHeight(height);
    truckObject.setPassengers(2);
    truckObject.setType("truck");
    return truckObject;
}

void addVehicleMenu(Garage& garage)
{
    cout << "What type of vehicle do you want to add?"
    << "\n1. Car"
    << "\n2. Bike"
    << "\n3. Motorcycle"
    << "\n4. Bus"
    << "\n5. Truck" << endl;

    int choice;
    cin >> choice;
    Vehicle vehicle;

    switch(choice)
    {
        case 1:
            vehicle = createCar();
            break;
        case 2:
            vehicle = createBike();
            break;
        case 3:
            vehicle = createMotorcycle();
            break;
        case 4:
            vehicle = createBus();
            break;
        case 5:
            vehicle = createTruck();
            break;
        default:
            cout << "Invalid selection." << endl;
            break;

    }
    garage.addVehicle(vehicle);
}
void searchByType(Garage& garage)
{
    cout << "List all ...\n"
    << "1. Cars.\n"
    << "2. Bikes.\n"
    << "3. Motorcycles.\n"
    << "4. Buses.\n"
    << "5. Trucks.\n" << endl;
    int choice;
    cin >> choice;
    switch(choice){
        case 1:
            garage.findVehiclesType("car");
            break;
        case 2:
            garage.findVehiclesType("bike");
            break;
        case 3:
            garage.findVehiclesType("motorcycle");
            break;  
        case 4:
            garage.findVehiclesType("bus");
            break;
        case 5:
            garage.findVehiclesType("truck");
            break;
        default:
            cout << "Invalid selection." << endl; 
    }

}
void searchVehicleMenu(Garage& garage)
{
    cout << "Find vehicle: " 
    << "\n1. Search with registration number"
    << "\n2. Search for color"
    << "\n3. Search for number of wheels"
    << "\n4. Search for number of passengers"
    << "\n5. Search for type of vehicle"
    << "\n6. Exit menu" << endl;

    int choice;
    cin >> choice;
    switch(choice)
    {
        case 1:
            {cout << "Enter registration number: " << endl;
            string a;
            cin >> a;
            garage.findVehicleRegNr(a);
            break;}
        case 2:
            {cout << "Enter a color: " << endl;
            string b;
            cin >> b;
            garage.findVehiclesColor(b);
            break;}
        case 3:
            {
                cout << "Enter the number of wheels: " << endl;
                int c;
                cin >> c;
                garage.findVehiclesNrWheels(c);
                break;
            }
        case 4:
            {
                cout << "Enter the number of passengers: " << endl;
                int d;
                cin >> d;
                garage.findVehiclesPassengers(d);
                break;
            }
        case 5:
            {
                searchByType(garage);
            }
        case 6:
            return;
    }
}

int main()
{
    int choice1;
    Garage garage;
    garage = createGarage(); 

    do
    {
       
        cout << "Main menu"
        << "\n1. Add vehicle"
        << "\n2. Remove vehicle"
        << "\n3. Search for vehicle"
        << "\n4. Show all vehicles in the garage"
        << "\n5. Exit program" << endl;
        cin >> choice1;

        switch(choice1)
        {
            case 1:
                addVehicleMenu(garage);
                break;
            case 2:
                garage.removeVehicle();
                break;
            case 3:
                searchVehicleMenu(garage);
                break;
            case 4:
                garage.printGarage();
                break;
            case 5:
                exit(0);
                break;
            default:
                cout << "Invalid selection" << endl;

        }

    } while(choice1 != 0);







    return 0;
}