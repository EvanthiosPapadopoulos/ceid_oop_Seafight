#ifndef BATTLESHIP_H
#define BATTLESHIP_H
#include "Ship.h"

class Battleship: public Ship
{
    public:
        Battleship();
        virtual ~Battleship();
        int sizeOfShip = 4;

    protected:

    private:
};

#endif // BATTLESHIP_H
