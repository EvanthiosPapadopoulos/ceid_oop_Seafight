#ifndef CARRIER_H
#define CARRIER_H
#include "Ship.h"


class Carrier: public Ship
{
    public:
        Carrier();
        virtual ~Carrier();
        int sizeOfShip = 5;

    protected:

    private:
};

#endif // CARRIER_H
