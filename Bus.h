#ifndef BUS_H
#define BUS_H
#include "Vehicle.h"

class Bus: public Vehicle
{
    public:
        void setWheelchairSpots(int w);
        void setNrDoors(int d);

        int getWheelchairSpots();
        int getNrDoors();
    protected:
    private:
        int wheelchairSpots;
        int nrDoors;
};

#endif // BUS_H