#ifndef CAR_H
#define CAR_H
#include "Vehicle.h"

class Car: public Vehicle
{
    public:
        void setNrDoors(int x);
        int getNrDoors();
        void printSelf() {

    cout << "I am a car" << endl;
        };
    protected:
    private:
        int nrDoors;
};

#endif // CAR_H