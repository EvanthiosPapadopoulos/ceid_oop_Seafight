#ifndef SHIP_H
#define SHIP_H
#include "Board.h"

class Ship
{
    public:
        Ship();
        virtual ~Ship();
        int startCellX;
        int startCellY;
        int orientationX;
        int orientationY;
        int sizeOfShip;
        void placeShip(int x, int y, int a, int b, Tile z[7][7], bool c);
        void placeShipAlone(int keliX, int keliY, int orientationX, int oriantationY, Tile z[7][7], bool c);

    protected:

    private:
};

#endif // SHIP_H
