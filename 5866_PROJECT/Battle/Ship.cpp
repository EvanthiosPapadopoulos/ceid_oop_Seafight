#include <iostream>
#include <stdio.h>
#include <string.h>
#include "Tile.h"
#include "Ship.h"
#include "Board.h"
#include "Player.h"
using namespace std;

Ship::Ship(){}

Ship::~Ship(){}

void Ship::placeShip(int x, int y, int a, int b, Tile z[7][7], bool c){ //x=startCellX, y=startCellY, a=orientationX, b=orientationY

    int sub;
    int small;
    int typeOfTileStarting = z[x][y].getType();
    int typeOfOrientation = z[a][b].getType();
    //cout << typeOfTileStarting << endl;

    if(typeOfTileStarting != 1 || typeOfOrientation != 1 || x>=7 || y>=7 || a>=7 || b>=7 || x<0 || y<0 || a<0 || b<0)
    {
        cout << "Eisai ektos oriwn" << endl;

    }
    else if(x == a || y == b)
    {
        if(x == a){
                if (y>b){
                    sub = y-b;
                     small = b;
                }
                else{
                    sub = b-y;
                   small = y;
                }
                for(int q = small; q <= sub; q++)
                {
                    if(z[x][q].getType() != 1)
                        cout << "You can't here" << endl;
                }
                    for(int q = small ; q <= sub; q++){
                    z[x][q].setType(2);
                    }


                    for(int x = 0; x<7; x++){
                    cout << x << "  ";
            for(int y = 0; y<7; y++){
                    z[x][y].draw(z[x][y].getType());
                    cout << "   ";
                }
                cout << endl;
            }
        }

            else
            {
                if (x>a){
                    sub = x-a;
                    small = a;
                }
                else{
                    sub = a-x;
                    small = x;
                }
                for(int q= small; q <= sub; q++)
                {
                    if(z[q][y].getType() != 1)
                        cout << "You can't here" << endl;
                }
                    for(int q = small; q <= sub; q++){
                           // cout << "asd asd asd asd as as as a asd a" << endl;
                    z[q][y].setType(2);
                    }


                    for(int x = 0; x<7; x++){
                    cout << x << "  ";
            for(int y = 0; y<7; y++){
                    z[x][y].draw(z[x][y].getType());
                    cout << "   ";
                }
                cout << endl;
            }
            }
    }



}

void Ship::placeShipAlone(int keliX, int keliY, int orientationX, int oriantationY, Tile z[7][7], bool c) //keliX, keliY, orientationX, oriantationY
{

    if(keliX == orientationX)
    {

        if (keliY > oriantationY)
        {
            for (int allYs = oriantationY; allYs <= keliY; allYs++)
            {
                z[keliX][allYs].setType(2);
            }
        }
        else if (oriantationY > keliY)
        {
            for (int allYs = keliY; allYs <= oriantationY; allYs++)
            {
                z[keliX][allYs].setType(2);
            }
        }

    }
    else if (keliY == oriantationY)
    {
        if(keliX > orientationX)
        {
            for (int allXs = orientationX; allXs <= keliX; allXs++)
            {
                z[allXs][keliY].setType(2);
            }
        }
        else if (orientationX > keliX)
        {
            for (int allXs = keliX; allXs <= orientationX; allXs++)
            {
                z[allXs][keliY].setType(2);
            }
        }


    }




//--------------------------------------------------------------------------------------------------------------------
}


