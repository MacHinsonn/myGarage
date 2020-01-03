#ifndef GARAGE_H
#define GARAGE_H
#include <vector>

using namespace std;

class Garage
{
    public:
        void setMaxNrVehicles(int x);
        int getMaxNrVehicles();
        void addVehicle(Vehicle a);
        void removeVehicle();
        void findVehicleRegNr(string a);
        void findVehiclesColor(string b);
        void findVehiclesNrWheels(int x);
        void findVehiclesPassengers(int y);
        void findVehiclesType(string type);
        void printGarage();

    protected:
    private:
        int maxNrVehicles;
        vector<Vehicle> listVehicles;
};

#endif // GARAGE_H