#ifndef CRUISER_H
#define CRUISER_H
#include "Ship.h"

class Cruiser:public Ship
{
    public:
        Cruiser();
        virtual ~Cruiser();
        int sizeOfShip = 3;

    protected:

    private:
};

#endif // CRUISER_H
