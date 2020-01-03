#ifndef MOTORCYCLE_H
#define MOTORCYCLE_H
#include "Vehicle.h"

class Motorcycle: public Vehicle
{
    public:
        void setSidecar(bool tf);
        bool getSidecar();
    protected:
    private:
        bool sidecar;
};

#endif // MOTORCYCLE_H