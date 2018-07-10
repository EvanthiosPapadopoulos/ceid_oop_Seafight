#ifndef SUBMARINE_H
#define SUBMARINE_H
#include "Ship.h"


class Submarine: public Ship
{
    public:
        Submarine();
        virtual ~Submarine();
        int sizeOfShip = 3;

    protected:

    private:
};

#endif // SUBMARINE_H
