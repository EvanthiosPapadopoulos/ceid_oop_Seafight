#ifndef DESTROYER_H
#define DESTROYER_H
#include "Ship.h"

class Destroyer:public Ship
{
    public:
        Destroyer();
        virtual ~Destroyer();
        int sizeOfShip = 2;

    protected:

    private:
};

#endif // DESTROYER_H
