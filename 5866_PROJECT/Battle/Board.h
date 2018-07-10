#ifndef BOARD_H
#define BOARD_H
#include "Tile.h"

class Board
{
    public:
        Tile boardPlay[7][7];
        Tile boardPlayOpponent[7][7];
        Board();
        virtual ~Board();
        void drawboards(Board a);
        void placeAllShips(Board a, int x);
        void placeAllShipsAlone(Board a, int x);
        bool allShipsSunk(Board a);

    protected:

    private:
};

#endif // BOARD_H
