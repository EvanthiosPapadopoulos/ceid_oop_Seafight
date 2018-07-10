#include <iostream>
#include "Tile.h"
#include "Ship.h"
#include "Board.h"
#include "Player.h"
using namespace std;



Tile::Tile(){}

Tile::~Tile(){}

char Tile::draw(int x){
    if(x == 1)
    {
        cout << "~";
    }
    if(x == 2)
    {
        cout << "s";
    }
    if(x == 3)
    {
        cout << "X";
    }
    if(x == 4)
    {
        cout << "o";
    }
}

void Tile::setType(int x){ //change the name
        type = x;
    }

int Tile::getType(){   //get the name
        return type;
    }
