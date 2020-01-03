#ifndef BIKE_H
#define BIKE_H
#include "Vehicle.h"

class Bike: public Vehicle
{
    public:
        void setBell(bool tf);
        void setFixedGear(bool ft);

        bool getBell();
        bool getFixedGear();
    protected:
    private:
        bool bell;
        bool fixedGear;
};

#endif // BIKE_H