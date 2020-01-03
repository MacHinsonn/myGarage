#ifndef VEHICLE_H
#define VEHICLE_H
#include <string>

using namespace std;

class Vehicle
{
    public:
        Vehicle();
        void setRegNr(string a);
        void setNrWheels(int x);
        void setColor(string y);
        void setPassengers(int z);
        void printSelf();

        string getType();
        void setType(string type);
        string getRegNr();
        int getNrWheels();
        string getColor();
        int getPassengers();
    protected:
    private:
        string regNr;
        int nrWheels;
        string color;
        int passengers;
        string type;
};

#endif // VEHICLE_H