#ifndef PLAYER_H
#define PLAYER_H
#include <string>
#include "Board.h"
using namespace std;
class Player
{
    public:
        Player();
        string yourName;
        Board a;
        int sumFires = 0;
        int sumMisses = 0;
        int sumSuccessfulFires = 0;
        int sumAlreadyHit = 0;
        int sumAlreadyMisses = 0;
        int repeats = 0;

        virtual ~Player();
        void placeAllShips(Board a, Board *z, int x);
        void placeAllShipsAlone(Board a, Board *z, int x);
        void placeShip();
        void fire(Board a, Board *boa, int z,  int k, int player);
        void getStats();

    protected:

    private:
};

#endif // PLAYER_H
