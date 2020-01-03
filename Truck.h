#ifndef TRUCK_H
#define TRUCK_H
#include "Vehicle.h"

class Truck: public Vehicle
{
    public:
        void setWeight(int w);
        void setLength(int l);
        void setHeight(int h);

        int getWeight();
        int getLength();
        int getHeight();
    protected:
    private:
        int weight;
        int length;
        int height;
};

#endif // TRUCK_H