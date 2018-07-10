#include <iostream>
#include "Tile.h"
#include "Ship.h"
#include "Board.h"
#include "Destroyer.h"
#include "Battleship.h"
#include "Cruiser.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctime>
#include "Player.h"
#include "Carrier.h"
#include "Submarine.h"
#include "Destroyer.h"

using namespace std;

Board::Board()
{
    //cout <<  "- - - - YOU - - - -" << endl;
    //Tile boardPlay[5][5];
    for(int x = 0; x<7; x++){
        for(int y = 0; y<7; y++){
                boardPlay[x][y].setType(1);
        }
    }

    //cout <<  "- - - - OPPONENT - - - -" << endl;
    //Tile boardPlayOpponent[5][5];
    for(int x = 0; x<7; x++){
        for(int y = 0; y<7; y++){
                boardPlayOpponent[x][y].setType(1);
        }
    }
}

Board::~Board()
{
    //dtor
}

void Board::drawboards(Board a)
{

    //ARXIKA O YOU
    cout <<  "\n- - - - YOU - - - -" << endl;
    for(int x = 0; x<7; x++)
        cout << "   " << x;
    cout << endl;
    for(int x = 0; x<7; x++){
        cout << x << "  ";
       for(int y = 0; y<7; y++){
            boardPlay[x][y].draw(boardPlay[x][y].getType());
            cout << "   ";
        }
        cout << endl;
    }


    //STHN SYNEXEIA GIA TON OPPONENT
    cout <<  "- - - - OPPONENT - - - -" << endl;
    for(int x = 0; x<7; x++)
        cout << "   " << x;
    cout << endl;
    for(int x = 0; x<7; x++){
            cout << x << "  ";
       for(int y = 0; y<7; y++){
            boardPlayOpponent[x][y].draw(boardPlayOpponent[x][y].getType());
            cout << "   ";
        }
        cout << endl;
    }
}

void Board::placeAllShips(Board a, int x)
{
    //h place all ships pairnei oxi tyxaia tis syntetagmenes kai epishs pairnei ena arithmo x opoios mas rwtaei an einai gia 0->YOU, 1->OPPONENT, 2->BOTH
    if(x == 0 ){
    Cruiser firstShip;
    Battleship secondShip;
    Destroyer thirdShip;
    Carrier forthShip;
    Submarine fifthShip;
    Destroyer sixthShip;

    firstShip.startCellX = 0; //rand() % 4;
    firstShip.startCellY= 0; //rand() % 4;
    firstShip.orientationX = 0; //rand() % 4;
    firstShip.orientationY= 2; //rand() % 4;

    secondShip.startCellX = 3; //rand() % 4;
    secondShip.startCellY= 3; //rand() % 4;
    secondShip.orientationX = 3; //rand() % 4;
    secondShip.orientationY= 0; //rand() % 4;

    thirdShip.startCellX = 0; //rand() % 4;
    thirdShip.startCellY= 4; //rand() % 4;
    thirdShip.orientationX = 2; //rand() % 4;
    thirdShip.orientationY= 4; //rand() % 4;

    forthShip.startCellX = 0; //rand() % 4;
    forthShip.startCellY= 6; //rand() % 4;
    forthShip.orientationX = 4; //rand() % 4;
    forthShip.orientationY= 6; //rand() % 4;

    fifthShip.startCellX = 2; //rand() % 4;
    fifthShip.startCellY= 0; //rand() % 4;
    fifthShip.orientationX = 2; //rand() % 4;
    fifthShip.orientationY= 2; //rand() % 4;

    sixthShip.startCellX = 6; //rand() % 4;
    sixthShip.startCellY= 1; //rand() % 4;
    sixthShip.orientationX = 6; //rand() % 4;
    sixthShip.orientationY= 3; //rand() % 4;



    cout << "- - - First Ship  for You - - -" << endl;
    firstShip.placeShip(firstShip.startCellX, firstShip.startCellY, firstShip.orientationX, firstShip.orientationY, a.boardPlay, true);
    cout << "Next Ship " << endl;
    secondShip.placeShip(secondShip.startCellX, secondShip.startCellY, secondShip.orientationX, secondShip.orientationY, a.boardPlay, true);
    cout << "Next Ship " << endl;
    thirdShip.placeShip(thirdShip.startCellX, thirdShip.startCellY, thirdShip.orientationX, thirdShip.orientationY, a.boardPlay, true);
    cout << "Next Ship " << endl;
    forthShip.placeShip(forthShip.startCellX, forthShip.startCellY, forthShip.orientationX, forthShip.orientationY, a.boardPlay, true);
    cout << "Next Ship " << endl;
    fifthShip.placeShip(fifthShip.startCellX, fifthShip.startCellY, fifthShip.orientationX, fifthShip.orientationY, a.boardPlay, true);
    cout << "Next Ship " << endl;
    sixthShip.placeShip(sixthShip.startCellX, sixthShip.startCellY, sixthShip.orientationX, sixthShip.orientationY, a.boardPlay, true);
    cout << "Finished " << endl;


    for(int x = 0; x<7; x++){
        for(int y = 0; y<7; y++){
            boardPlay[x][y].setType(a.boardPlay[x][y].getType());
            //cout <<  a.boardPlay[x][y].getType();
        }
     }



    }
    else if(x == 1)
    {
    Cruiser firstShip;
    Battleship secondShip;
    Destroyer thirdShip;
    Carrier forthShip;
    Submarine fifthShip;
    Destroyer sixthShip;

    firstShip.startCellX = 0; //rand() % 4;
    firstShip.startCellY= 0; //rand() % 4;
    firstShip.orientationX = 0; //rand() % 4;
    firstShip.orientationY= 2; //rand() % 4;

    secondShip.startCellX = 3; //rand() % 4;
    secondShip.startCellY= 3; //rand() % 4;
    secondShip.orientationX = 3; //rand() % 4;
    secondShip.orientationY= 0; //rand() % 4;

    thirdShip.startCellX = 0; //rand() % 4;
    thirdShip.startCellY= 4; //rand() % 4;
    thirdShip.orientationX = 2; //rand() % 4;
    thirdShip.orientationY= 4; //rand() % 4;

    forthShip.startCellX = 0; //rand() % 4;
    forthShip.startCellY= 6; //rand() % 4;
    forthShip.orientationX = 4; //rand() % 4;
    forthShip.orientationY= 6; //rand() % 4;

    fifthShip.startCellX = 2; //rand() % 4;
    fifthShip.startCellY= 0; //rand() % 4;
    fifthShip.orientationX = 2; //rand() % 4;
    fifthShip.orientationY= 2; //rand() % 4;

    sixthShip.startCellX = 6; //rand() % 4;
    sixthShip.startCellY= 1; //rand() % 4;
    sixthShip.orientationX = 6; //rand() % 4;
    sixthShip.orientationY= 3; //rand() % 4;



    cout << "- - - First Ship  for Opponent - - -" << endl;
    firstShip.placeShip(firstShip.startCellX, firstShip.startCellY, firstShip.orientationX, firstShip.orientationY, a.boardPlayOpponent, true);
    cout << "Next Ship " << endl;
    secondShip.placeShip(secondShip.startCellX, secondShip.startCellY, secondShip.orientationX, secondShip.orientationY, a.boardPlayOpponent, true);
    cout << "Next Ship " << endl;
    thirdShip.placeShip(thirdShip.startCellX, thirdShip.startCellY, thirdShip.orientationX, thirdShip.orientationY, a.boardPlayOpponent, true);
    cout << "Next Ship " << endl;
    forthShip.placeShip(forthShip.startCellX, forthShip.startCellY, forthShip.orientationX, forthShip.orientationY, a.boardPlayOpponent, true);
    cout << "Next Ship " << endl;
    fifthShip.placeShip(fifthShip.startCellX, fifthShip.startCellY, fifthShip.orientationX, fifthShip.orientationY, a.boardPlayOpponent, true);
    cout << "Next Ship " << endl;
    sixthShip.placeShip(sixthShip.startCellX, sixthShip.startCellY, sixthShip.orientationX, sixthShip.orientationY, a.boardPlayOpponent, true);
    cout << "Finished " << endl;

    for(int x = 0; x<7; x++){
        for(int y = 0; y<7; y++){
            boardPlayOpponent[x][y] = a.boardPlayOpponent[x][y];
        }
     }

    }


}

void Board::placeAllShipsAlone(Board a, int x)
{
    a.drawboards(a);
    Cruiser firstShip;

    int keliX, keliY, prosanatolism, noShipHere;
    int orientationX, oriantationY;
    noShipHere = 0;
    cout << "To prwto ploio einai to Cruiser me 3 theseis." << endl;
    cout << "Dwse mou to KELI ENARKSHS (dld to x, y syntetagmenes). Prosoxh oi syntetagmenes prepei na einai mesa sta oria dld apo 0 ews 6 kai tpt allo." << endl;
    cin >> keliX >> keliY;
    int typeOfTileStarting = a.boardPlay[keliX][keliY].getType();
    cout << "Twra dwse mou kai prosanatolismo. " << endl;
    cout << "Dwse mou '0' gia horizontal alliws '1' gia vertical prosanatolismo. " << endl;
    cin >> prosanatolism;
    while(prosanatolism < 0 || prosanatolism > 1){
        cout << "Edwses lathos prosanatolismo prospathise pali. " << endl;
        cin >> prosanatolism;
    }

    if (prosanatolism == 0)
    {
        if(keliX == 0)
        {
            if (keliY == 0)
            {
                orientationX = keliX;
                oriantationY = 2;
            }
            else if (keliY == 1)
            {
                orientationX = keliX;
                oriantationY = 3;
            }
             else if (keliY == 2)
            {
                orientationX = keliX;
                oriantationY = 4;
            }
             else if (keliY == 3)
            {
                orientationX = keliX;
                oriantationY = 5;
            }
             else if (keliY == 4)
            {
                orientationX = keliX;
                oriantationY = 6;
            }
            else if (keliY == 5)
            {
                orientationX = keliX;
                oriantationY = 3;
            }
             else if (keliY == 6)
            {
                orientationX = keliX;
                oriantationY = 4;
            }
        }
        else if (keliX == 1)
        {
            if (keliY == 0)
            {
                orientationX = keliX;
                oriantationY = 2;
            }
            else if (keliY == 1)
            {
                orientationX = keliX;
                oriantationY = 3;
            }
             else if (keliY == 2)
            {
                orientationX = keliX;
                oriantationY = 4;
            }
             else if (keliY == 3)
            {
                orientationX = keliX;
                oriantationY = 5;
            }
             else if (keliY == 4)
            {
                orientationX = keliX;
                oriantationY = 6;
            }
            else if (keliY == 5)
            {
                orientationX = keliX;
                oriantationY = 3;
            }
             else if (keliY == 6)
            {
                orientationX = keliX;
                oriantationY = 4;
            }
        }
        else if (keliX == 2)
        {
            if (keliY == 0)
            {
                orientationX = keliX;
                oriantationY = 2;
            }
            else if (keliY == 1)
            {
                orientationX = keliX;
                oriantationY = 3;
            }
             else if (keliY == 2)
            {
                orientationX = keliX;
                oriantationY = 4;
            }
             else if (keliY == 3)
            {
                orientationX = keliX;
                oriantationY = 5;
            }
             else if (keliY == 4)
            {
                orientationX = keliX;
                oriantationY = 6;
            }
            else if (keliY == 5)
            {
                orientationX = keliX;
                oriantationY = 3;
            }
             else if (keliY == 6)
            {
                orientationX = keliX;
                oriantationY = 4;
            }
        }
        else if (keliX == 3)
        {
            if (keliY == 0)
            {
                orientationX = keliX;
                oriantationY = 2;
            }
            else if (keliY == 1)
            {
                orientationX = keliX;
                oriantationY = 3;
            }
             else if (keliY == 2)
            {
                orientationX = keliX;
                oriantationY = 4;
            }
             else if (keliY == 3)
            {
                orientationX = keliX;
                oriantationY = 5;
            }
             else if (keliY == 4)
            {
                orientationX = keliX;
                oriantationY = 6;
            }
            else if (keliY == 5)
            {
                orientationX = keliX;
                oriantationY = 3;
            }
             else if (keliY == 6)
            {
                orientationX = keliX;
                oriantationY = 4;
            }
        }
        else if (keliX == 4)
        {
            if (keliY == 0)
            {
                orientationX = keliX;
                oriantationY = 2;
            }
            else if (keliY == 1)
            {
                orientationX = keliX;
                oriantationY = 3;
            }
             else if (keliY == 2)
            {
                orientationX = keliX;
                oriantationY = 4;
            }
             else if (keliY == 3)
            {
                orientationX = keliX;
                oriantationY = 5;
            }
             else if (keliY == 4)
            {
                orientationX = keliX;
                oriantationY = 6;
            }
            else if (keliY == 5)
            {
                orientationX = keliX;
                oriantationY = 3;
            }
             else if (keliY == 6)
            {
                orientationX = keliX;
                oriantationY = 4;
            }
        }
        else if (keliX == 5)
        {
            if (keliY == 0)
            {
                orientationX = keliX;
                oriantationY = 2;
            }
            else if (keliY == 1)
            {
                orientationX = keliX;
                oriantationY = 3;
            }
             else if (keliY == 2)
            {
                orientationX = keliX;
                oriantationY = 4;
            }
             else if (keliY == 3)
            {
                orientationX = keliX;
                oriantationY = 5;
            }
             else if (keliY == 4)
            {
                orientationX = keliX;
                oriantationY = 6;
            }
            else if (keliY == 5)
            {
                orientationX = keliX;
                oriantationY = 3;
            }
             else if (keliY == 6)
            {
                orientationX = keliX;
                oriantationY = 4;
            }
        }
        else if (keliX == 6)
        {
            if (keliY == 0)
            {
                orientationX = keliX;
                oriantationY = 2;
            }
            else if (keliY == 1)
            {
                orientationX = keliX;
                oriantationY = 3;
            }
             else if (keliY == 2)
            {
                orientationX = keliX;
                oriantationY = 4;
            }
             else if (keliY == 3)
            {
                orientationX = keliX;
                oriantationY = 5;
            }
             else if (keliY == 4)
            {
                orientationX = keliX;
                oriantationY = 6;
            }
            else if (keliY == 5)
            {
                orientationX = keliX;
                oriantationY = 3;
            }
             else if (keliY == 6)
            {
                orientationX = keliX;
                oriantationY = 4;
            }
        }
    }
    else if (prosanatolism == 1 )
    {
        if(keliX == 0)
        {
            if (keliY == 0)
            {
                oriantationY = keliY;
                orientationX = 2;
            }
            else if (keliY == 1)
            {
                oriantationY = keliY;
                orientationX = 2;
            }
            else if (keliY == 2)
            {
                oriantationY = keliY;
                orientationX = 2;
            }
            else if (keliY == 3)
            {
                oriantationY = keliY;
                orientationX = 2;
            }
            else if (keliY == 4)
            {
                oriantationY = keliY;
                orientationX = 2;
            }
            else if (keliY == 5)
            {
                oriantationY = keliY;
                orientationX = 2;
            }
            else if (keliY == 6)
            {
                oriantationY = keliY;
                orientationX = 2;
            }
        }
        else if(keliX == 1)
        {
            if (keliY == 0)
            {
                oriantationY = keliY;
                orientationX = 3;
            }
            else if (keliY == 1)
            {
                oriantationY = keliY;
                orientationX = 3;
            }
            else if (keliY == 2)
            {
                oriantationY = keliY;
                orientationX = 3;
            }
            else if (keliY == 3)
            {
                oriantationY = keliY;
                orientationX = 3;
            }
            else if (keliY == 4)
            {
                oriantationY = keliY;
                orientationX = 3;
            }
            else if (keliY == 5)
            {
                oriantationY = keliY;
                orientationX = 3;
            }
            else if (keliY == 6)
            {
                oriantationY = keliY;
                orientationX = 3;
            }
        }
        else if(keliX == 2)
        {
            if (keliY == 0)
            {
                oriantationY = keliY;
                orientationX = 4;
            }
            else if (keliY == 1)
            {
                oriantationY = keliY;
                orientationX = 4;
            }
            else if (keliY == 2)
            {
                oriantationY = keliY;
                orientationX = 4;
            }
            else if (keliY == 3)
            {
                oriantationY = keliY;
                orientationX = 4;
            }
            else if (keliY == 4)
            {
                oriantationY = keliY;
                orientationX = 4;
            }
            else if (keliY == 5)
            {
                oriantationY = keliY;
                orientationX = 4;
            }
            else if (keliY == 6)
            {
                oriantationY = keliY;
                orientationX = 4;
            }
        }
        else if(keliX == 3)
        {
            if (keliY == 0)
            {
                oriantationY = keliY;
                orientationX = 5;
            }
            else if (keliY == 1)
            {
                oriantationY = keliY;
                orientationX = 5;
            }
            else if (keliY == 2)
            {
                oriantationY = keliY;
                orientationX = 5;
            }
            else if (keliY == 3)
            {
                oriantationY = keliY;
                orientationX = 5;
            }
            else if (keliY == 4)
            {
                oriantationY = keliY;
                orientationX = 5;
            }
            else if (keliY == 5)
            {
                oriantationY = keliY;
                orientationX = 5;
            }
            else if (keliY == 6)
            {
                oriantationY = keliY;
                orientationX = 5;
            }
        }
        else if(keliX == 4)
        {
            if (keliY == 0)
            {
                oriantationY = keliY;
                orientationX = 6;
            }
            else if (keliY == 1)
            {
                oriantationY = keliY;
                orientationX = 6;
            }
            else if (keliY == 2)
            {
                oriantationY = keliY;
                orientationX = 6;
            }
            else if (keliY == 3)
            {
                oriantationY = keliY;
                orientationX = 6;
            }
            else if (keliY == 4)
            {
                oriantationY = keliY;
                orientationX = 6;
            }
            else if (keliY == 5)
            {
                oriantationY = keliY;
                orientationX = 6;
            }
            else if (keliY == 6)
            {
                oriantationY = keliY;
                orientationX = 6;
            }
        }
        else if(keliX == 5)
        {
            if (keliY == 0)
            {
                oriantationY = keliY;
                orientationX = 3;
            }
            else if (keliY == 1)
            {
                oriantationY = keliY;
                orientationX = 3;
            }
            else if (keliY == 2)
            {
                oriantationY = keliY;
                orientationX = 3;
            }
            else if (keliY == 3)
            {
                oriantationY = keliY;
                orientationX = 3;
            }
            else if (keliY == 4)
            {
                oriantationY = keliY;
                orientationX = 3;
            }
            else if (keliY == 5)
            {
                oriantationY = keliY;
                orientationX = 3;
            }
            else if (keliY == 6)
            {
                oriantationY = keliY;
                orientationX = 3;
            }
        }
        else if(keliX == 6)
        {
            if (keliY == 0)
            {
                oriantationY = keliY;
                orientationX = 4;
            }
            else if (keliY == 1)
            {
                oriantationY = keliY;
                orientationX = 4;
            }
            else if (keliY == 2)
            {
                oriantationY = keliY;
                orientationX = 4;
            }
            else if (keliY == 3)
            {
                oriantationY = keliY;
                orientationX = 4;
            }
            else if (keliY == 4)
            {
                oriantationY = keliY;
                orientationX = 4;
            }
            else if (keliY == 5)
            {
                oriantationY = keliY;
                orientationX = 4;
            }
            else if (keliY == 6)
            {
                oriantationY = keliY;
                orientationX = 4;
            }
        }
    }


    if(keliX == orientationX)
    {

        if (keliY > oriantationY)
        {
            for (int allYs = oriantationY; allYs <= keliY; allYs++)
            {
                if(a.boardPlay[keliX][allYs].getType() == 2)
                    noShipHere = 1;
            }
        }
        else if (oriantationY > keliY)
        {
            for (int allYs = keliY; allYs <= oriantationY; allYs++)
            {
                if(a.boardPlay[keliX][allYs].getType() == 2)
                    noShipHere = 1;
            }
        }

    }
    else if (keliY == oriantationY)
    {
        if(keliX > orientationX)
        {
            for (int allXs = orientationX; allXs <= keliX; allXs++)
            {
                if(a.boardPlay[allXs][keliY].getType() == 2)
                    noShipHere = 1;
            }
        }
        else if (orientationX > keliX)
        {
            for (int allXs = keliX; allXs <= orientationX; allXs++)
            {
                if(a.boardPlay[allXs][keliY].getType() == 2)
                    noShipHere = 1;
            }
        }


    }


    while(keliX < 0 || keliX > 6 || keliY < 0 || keliY > 6 || typeOfTileStarting != 1 || noShipHere == 1){
            noShipHere = 0;
        cout << "Edwses lathos suntetagmenes prospathise pali. " << endl;
        if (typeOfTileStarting == 2)
            cout << "Oooops another ship here." << endl;
    cin >> keliX >> keliY;
    typeOfTileStarting = a.boardPlay[keliX][keliY].getType();

    cout << "Twra dwse mou kai prosanatolismo. " << endl;
    cout << "Dwse mou '0' gia horizontal alliws '1' gia vertical prosanatolismo. " << endl;
    cin >> prosanatolism;
    while(prosanatolism < 0 || prosanatolism > 1){
        cout << "Edwses lathos prosanatolismo prospathise pali. " << endl;
        cin >> prosanatolism;
    }

    if (prosanatolism == 0)
    {
        if(keliX == 0)
        {
            if (keliY == 0)
            {
                orientationX = keliX;
                oriantationY = 2;
            }
            else if (keliY == 1)
            {
                orientationX = keliX;
                oriantationY = 3;
            }
             else if (keliY == 2)
            {
                orientationX = keliX;
                oriantationY = 4;
            }
             else if (keliY == 3)
            {
                orientationX = keliX;
                oriantationY = 5;
            }
             else if (keliY == 4)
            {
                orientationX = keliX;
                oriantationY = 6;
            }
            else if (keliY == 5)
            {
                orientationX = keliX;
                oriantationY = 3;
            }
             else if (keliY == 6)
            {
                orientationX = keliX;
                oriantationY = 4;
            }
        }
        else if (keliX == 1)
        {
            if (keliY == 0)
            {
                orientationX = keliX;
                oriantationY = 2;
            }
            else if (keliY == 1)
            {
                orientationX = keliX;
                oriantationY = 3;
            }
             else if (keliY == 2)
            {
                orientationX = keliX;
                oriantationY = 4;
            }
             else if (keliY == 3)
            {
                orientationX = keliX;
                oriantationY = 5;
            }
             else if (keliY == 4)
            {
                orientationX = keliX;
                oriantationY = 6;
            }
            else if (keliY == 5)
            {
                orientationX = keliX;
                oriantationY = 3;
            }
             else if (keliY == 6)
            {
                orientationX = keliX;
                oriantationY = 4;
            }
        }
        else if (keliX == 2)
        {
            if (keliY == 0)
            {
                orientationX = keliX;
                oriantationY = 2;
            }
            else if (keliY == 1)
            {
                orientationX = keliX;
                oriantationY = 3;
            }
             else if (keliY == 2)
            {
                orientationX = keliX;
                oriantationY = 4;
            }
             else if (keliY == 3)
            {
                orientationX = keliX;
                oriantationY = 5;
            }
             else if (keliY == 4)
            {
                orientationX = keliX;
                oriantationY = 6;
            }
            else if (keliY == 5)
            {
                orientationX = keliX;
                oriantationY = 3;
            }
             else if (keliY == 6)
            {
                orientationX = keliX;
                oriantationY = 4;
            }
        }
        else if (keliX == 3)
        {
            if (keliY == 0)
            {
                orientationX = keliX;
                oriantationY = 2;
            }
            else if (keliY == 1)
            {
                orientationX = keliX;
                oriantationY = 3;
            }
             else if (keliY == 2)
            {
                orientationX = keliX;
                oriantationY = 4;
            }
             else if (keliY == 3)
            {
                orientationX = keliX;
                oriantationY = 5;
            }
             else if (keliY == 4)
            {
                orientationX = keliX;
                oriantationY = 6;
            }
            else if (keliY == 5)
            {
                orientationX = keliX;
                oriantationY = 3;
            }
             else if (keliY == 6)
            {
                orientationX = keliX;
                oriantationY = 4;
            }
        }
        else if (keliX == 4)
        {
            if (keliY == 0)
            {
                orientationX = keliX;
                oriantationY = 2;
            }
            else if (keliY == 1)
            {
                orientationX = keliX;
                oriantationY = 3;
            }
             else if (keliY == 2)
            {
                orientationX = keliX;
                oriantationY = 4;
            }
             else if (keliY == 3)
            {
                orientationX = keliX;
                oriantationY = 5;
            }
             else if (keliY == 4)
            {
                orientationX = keliX;
                oriantationY = 6;
            }
            else if (keliY == 5)
            {
                orientationX = keliX;
                oriantationY = 3;
            }
             else if (keliY == 6)
            {
                orientationX = keliX;
                oriantationY = 4;
            }
        }
        else if (keliX == 5)
        {
            if (keliY == 0)
            {
                orientationX = keliX;
                oriantationY = 2;
            }
            else if (keliY == 1)
            {
                orientationX = keliX;
                oriantationY = 3;
            }
             else if (keliY == 2)
            {
                orientationX = keliX;
                oriantationY = 4;
            }
             else if (keliY == 3)
            {
                orientationX = keliX;
                oriantationY = 5;
            }
             else if (keliY == 4)
            {
                orientationX = keliX;
                oriantationY = 6;
            }
            else if (keliY == 5)
            {
                orientationX = keliX;
                oriantationY = 3;
            }
             else if (keliY == 6)
            {
                orientationX = keliX;
                oriantationY = 4;
            }
        }
        else if (keliX == 6)
        {
            if (keliY == 0)
            {
                orientationX = keliX;
                oriantationY = 2;
            }
            else if (keliY == 1)
            {
                orientationX = keliX;
                oriantationY = 3;
            }
             else if (keliY == 2)
            {
                orientationX = keliX;
                oriantationY = 4;
            }
             else if (keliY == 3)
            {
                orientationX = keliX;
                oriantationY = 5;
            }
             else if (keliY == 4)
            {
                orientationX = keliX;
                oriantationY = 6;
            }
            else if (keliY == 5)
            {
                orientationX = keliX;
                oriantationY = 3;
            }
             else if (keliY == 6)
            {
                orientationX = keliX;
                oriantationY = 4;
            }
        }
    }
    else if (prosanatolism == 1 )
    {
        if(keliX == 0)
        {
            if (keliY == 0)
            {
                oriantationY = keliY;
                orientationX = 2;
            }
            else if (keliY == 1)
            {
                oriantationY = keliY;
                orientationX = 2;
            }
            else if (keliY == 2)
            {
                oriantationY = keliY;
                orientationX = 2;
            }
            else if (keliY == 3)
            {
                oriantationY = keliY;
                orientationX = 2;
            }
            else if (keliY == 4)
            {
                oriantationY = keliY;
                orientationX = 2;
            }
            else if (keliY == 5)
            {
                oriantationY = keliY;
                orientationX = 2;
            }
            else if (keliY == 6)
            {
                oriantationY = keliY;
                orientationX = 2;
            }
        }
        else if(keliX == 1)
        {
            if (keliY == 0)
            {
                oriantationY = keliY;
                orientationX = 3;
            }
            else if (keliY == 1)
            {
                oriantationY = keliY;
                orientationX = 3;
            }
            else if (keliY == 2)
            {
                oriantationY = keliY;
                orientationX = 3;
            }
            else if (keliY == 3)
            {
                oriantationY = keliY;
                orientationX = 3;
            }
            else if (keliY == 4)
            {
                oriantationY = keliY;
                orientationX = 3;
            }
            else if (keliY == 5)
            {
                oriantationY = keliY;
                orientationX = 3;
            }
            else if (keliY == 6)
            {
                oriantationY = keliY;
                orientationX = 3;
            }
        }
        else if(keliX == 2)
        {
            if (keliY == 0)
            {
                oriantationY = keliY;
                orientationX = 4;
            }
            else if (keliY == 1)
            {
                oriantationY = keliY;
                orientationX = 4;
            }
            else if (keliY == 2)
            {
                oriantationY = keliY;
                orientationX = 4;
            }
            else if (keliY == 3)
            {
                oriantationY = keliY;
                orientationX = 4;
            }
            else if (keliY == 4)
            {
                oriantationY = keliY;
                orientationX = 4;
            }
            else if (keliY == 5)
            {
                oriantationY = keliY;
                orientationX = 4;
            }
            else if (keliY == 6)
            {
                oriantationY = keliY;
                orientationX = 4;
            }
        }
        else if(keliX == 3)
        {
            if (keliY == 0)
            {
                oriantationY = keliY;
                orientationX = 5;
            }
            else if (keliY == 1)
            {
                oriantationY = keliY;
                orientationX = 5;
            }
            else if (keliY == 2)
            {
                oriantationY = keliY;
                orientationX = 5;
            }
            else if (keliY == 3)
            {
                oriantationY = keliY;
                orientationX = 5;
            }
            else if (keliY == 4)
            {
                oriantationY = keliY;
                orientationX = 5;
            }
            else if (keliY == 5)
            {
                oriantationY = keliY;
                orientationX = 5;
            }
            else if (keliY == 6)
            {
                oriantationY = keliY;
                orientationX = 5;
            }
        }
        else if(keliX == 4)
        {
            if (keliY == 0)
            {
                oriantationY = keliY;
                orientationX = 6;
            }
            else if (keliY == 1)
            {
                oriantationY = keliY;
                orientationX = 6;
            }
            else if (keliY == 2)
            {
                oriantationY = keliY;
                orientationX = 6;
            }
            else if (keliY == 3)
            {
                oriantationY = keliY;
                orientationX = 6;
            }
            else if (keliY == 4)
            {
                oriantationY = keliY;
                orientationX = 6;
            }
            else if (keliY == 5)
            {
                oriantationY = keliY;
                orientationX = 6;
            }
            else if (keliY == 6)
            {
                oriantationY = keliY;
                orientationX = 6;
            }
        }
        else if(keliX == 5)
        {
            if (keliY == 0)
            {
                oriantationY = keliY;
                orientationX = 3;
            }
            else if (keliY == 1)
            {
                oriantationY = keliY;
                orientationX = 3;
            }
            else if (keliY == 2)
            {
                oriantationY = keliY;
                orientationX = 3;
            }
            else if (keliY == 3)
            {
                oriantationY = keliY;
                orientationX = 3;
            }
            else if (keliY == 4)
            {
                oriantationY = keliY;
                orientationX = 3;
            }
            else if (keliY == 5)
            {
                oriantationY = keliY;
                orientationX = 3;
            }
            else if (keliY == 6)
            {
                oriantationY = keliY;
                orientationX = 3;
            }
        }
        else if(keliX == 6)
        {
            if (keliY == 0)
            {
                oriantationY = keliY;
                orientationX = 4;
            }
            else if (keliY == 1)
            {
                oriantationY = keliY;
                orientationX = 4;
            }
            else if (keliY == 2)
            {
                oriantationY = keliY;
                orientationX = 4;
            }
            else if (keliY == 3)
            {
                oriantationY = keliY;
                orientationX = 4;
            }
            else if (keliY == 4)
            {
                oriantationY = keliY;
                orientationX = 4;
            }
            else if (keliY == 5)
            {
                oriantationY = keliY;
                orientationX = 4;
            }
            else if (keliY == 6)
            {
                oriantationY = keliY;
                orientationX = 4;
            }
        }
    }


    if(keliX == orientationX)
    {

        if (keliY > oriantationY)
        {
            for (int allYs = oriantationY; allYs <= keliY; allYs++)
            {
                if(a.boardPlay[keliX][allYs].getType() == 2)
                    noShipHere = 1;
            }
        }
        else if (oriantationY > keliY)
        {
            for (int allYs = keliY; allYs <= oriantationY; allYs++)
            {
                if(a.boardPlay[keliX][allYs].getType() == 2)
                    noShipHere = 1;
            }
        }

    }
    else if (keliY == oriantationY)
    {
        if(keliX > orientationX)
        {
            for (int allXs = orientationX; allXs <= keliX; allXs++)
            {
                if(a.boardPlay[allXs][keliY].getType() == 2)
                    noShipHere = 1;
            }
        }
        else if (orientationX > keliX)
        {
            for (int allXs = keliX; allXs <= orientationX; allXs++)
            {
                if(a.boardPlay[allXs][keliY].getType() == 2)
                    noShipHere = 1;
            }
        }


    }


    }


    cout << "KeliX: " << keliX << endl;
    cout << "Keliy: " << keliY << endl;
    cout << "OrientationX: " << orientationX << endl;
    cout << "OrientationY: " << oriantationY << endl;

    firstShip.placeShipAlone(keliX, keliY, orientationX, oriantationY, a.boardPlay, true);

    Submarine secondShip;

    cout << "To deutero ploio einai to Submarine me 3 theseis." << endl;
    cout << "Dwse mou to KELI ENARKSHS (dld to x, y syntetagmenes). Prosoxh oi syntetagmenes prepei na einai mesa sta oria dld apo 0 ews 6 kai tpt allo." << endl;
    cin >> keliX >> keliY;
    typeOfTileStarting = a.boardPlay[keliX][keliY].getType();
    cout << "Twra dwse mou kai prosanatolismo. " << endl;
    cout << "Dwse mou '0' gia horizontal alliws '1' gia vertical prosanatolismo. " << endl;
    cin >> prosanatolism;
    while(prosanatolism < 0 || prosanatolism > 1){
        cout << "Edwses lathos prosanatolismo prospathise pali. " << endl;
        cin >> prosanatolism;
    }

    if (prosanatolism == 0)
    {
        if(keliX == 0)
        {
            if (keliY == 0)
            {
                orientationX = keliX;
                oriantationY = 2;
            }
            else if (keliY == 1)
            {
                orientationX = keliX;
                oriantationY = 3;
            }
             else if (keliY == 2)
            {
                orientationX = keliX;
                oriantationY = 4;
            }
             else if (keliY == 3)
            {
                orientationX = keliX;
                oriantationY = 5;
            }
             else if (keliY == 4)
            {
                orientationX = keliX;
                oriantationY = 6;
            }
            else if (keliY == 5)
            {
                orientationX = keliX;
                oriantationY = 3;
            }
             else if (keliY == 6)
            {
                orientationX = keliX;
                oriantationY = 4;
            }
        }
        else if (keliX == 1)
        {
            if (keliY == 0)
            {
                orientationX = keliX;
                oriantationY = 2;
            }
            else if (keliY == 1)
            {
                orientationX = keliX;
                oriantationY = 3;
            }
             else if (keliY == 2)
            {
                orientationX = keliX;
                oriantationY = 4;
            }
             else if (keliY == 3)
            {
                orientationX = keliX;
                oriantationY = 5;
            }
             else if (keliY == 4)
            {
                orientationX = keliX;
                oriantationY = 6;
            }
            else if (keliY == 5)
            {
                orientationX = keliX;
                oriantationY = 3;
            }
             else if (keliY == 6)
            {
                orientationX = keliX;
                oriantationY = 4;
            }
        }
        else if (keliX == 2)
        {
            if (keliY == 0)
            {
                orientationX = keliX;
                oriantationY = 2;
            }
            else if (keliY == 1)
            {
                orientationX = keliX;
                oriantationY = 3;
            }
             else if (keliY == 2)
            {
                orientationX = keliX;
                oriantationY = 4;
            }
             else if (keliY == 3)
            {
                orientationX = keliX;
                oriantationY = 5;
            }
             else if (keliY == 4)
            {
                orientationX = keliX;
                oriantationY = 6;
            }
            else if (keliY == 5)
            {
                orientationX = keliX;
                oriantationY = 3;
            }
             else if (keliY == 6)
            {
                orientationX = keliX;
                oriantationY = 4;
            }
        }
        else if (keliX == 3)
        {
            if (keliY == 0)
            {
                orientationX = keliX;
                oriantationY = 2;
            }
            else if (keliY == 1)
            {
                orientationX = keliX;
                oriantationY = 3;
            }
             else if (keliY == 2)
            {
                orientationX = keliX;
                oriantationY = 4;
            }
             else if (keliY == 3)
            {
                orientationX = keliX;
                oriantationY = 5;
            }
             else if (keliY == 4)
            {
                orientationX = keliX;
                oriantationY = 6;
            }
            else if (keliY == 5)
            {
                orientationX = keliX;
                oriantationY = 3;
            }
             else if (keliY == 6)
            {
                orientationX = keliX;
                oriantationY = 4;
            }
        }
        else if (keliX == 4)
        {
            if (keliY == 0)
            {
                orientationX = keliX;
                oriantationY = 2;
            }
            else if (keliY == 1)
            {
                orientationX = keliX;
                oriantationY = 3;
            }
             else if (keliY == 2)
            {
                orientationX = keliX;
                oriantationY = 4;
            }
             else if (keliY == 3)
            {
                orientationX = keliX;
                oriantationY = 5;
            }
             else if (keliY == 4)
            {
                orientationX = keliX;
                oriantationY = 6;
            }
            else if (keliY == 5)
            {
                orientationX = keliX;
                oriantationY = 3;
            }
             else if (keliY == 6)
            {
                orientationX = keliX;
                oriantationY = 4;
            }
        }
        else if (keliX == 5)
        {
            if (keliY == 0)
            {
                orientationX = keliX;
                oriantationY = 2;
            }
            else if (keliY == 1)
            {
                orientationX = keliX;
                oriantationY = 3;
            }
             else if (keliY == 2)
            {
                orientationX = keliX;
                oriantationY = 4;
            }
             else if (keliY == 3)
            {
                orientationX = keliX;
                oriantationY = 5;
            }
             else if (keliY == 4)
            {
                orientationX = keliX;
                oriantationY = 6;
            }
            else if (keliY == 5)
            {
                orientationX = keliX;
                oriantationY = 3;
            }
             else if (keliY == 6)
            {
                orientationX = keliX;
                oriantationY = 4;
            }
        }
        else if (keliX == 6)
        {
            if (keliY == 0)
            {
                orientationX = keliX;
                oriantationY = 2;
            }
            else if (keliY == 1)
            {
                orientationX = keliX;
                oriantationY = 3;
            }
             else if (keliY == 2)
            {
                orientationX = keliX;
                oriantationY = 4;
            }
             else if (keliY == 3)
            {
                orientationX = keliX;
                oriantationY = 5;
            }
             else if (keliY == 4)
            {
                orientationX = keliX;
                oriantationY = 6;
            }
            else if (keliY == 5)
            {
                orientationX = keliX;
                oriantationY = 3;
            }
             else if (keliY == 6)
            {
                orientationX = keliX;
                oriantationY = 4;
            }
        }
    }
    else if (prosanatolism == 1 )
    {
        if(keliX == 0)
        {
            if (keliY == 0)
            {
                oriantationY = keliY;
                orientationX = 2;
            }
            else if (keliY == 1)
            {
                oriantationY = keliY;
                orientationX = 2;
            }
            else if (keliY == 2)
            {
                oriantationY = keliY;
                orientationX = 2;
            }
            else if (keliY == 3)
            {
                oriantationY = keliY;
                orientationX = 2;
            }
            else if (keliY == 4)
            {
                oriantationY = keliY;
                orientationX = 2;
            }
            else if (keliY == 5)
            {
                oriantationY = keliY;
                orientationX = 2;
            }
            else if (keliY == 6)
            {
                oriantationY = keliY;
                orientationX = 2;
            }
        }
        else if(keliX == 1)
        {
            if (keliY == 0)
            {
                oriantationY = keliY;
                orientationX = 3;
            }
            else if (keliY == 1)
            {
                oriantationY = keliY;
                orientationX = 3;
            }
            else if (keliY == 2)
            {
                oriantationY = keliY;
                orientationX = 3;
            }
            else if (keliY == 3)
            {
                oriantationY = keliY;
                orientationX = 3;
            }
            else if (keliY == 4)
            {
                oriantationY = keliY;
                orientationX = 3;
            }
            else if (keliY == 5)
            {
                oriantationY = keliY;
                orientationX = 3;
            }
            else if (keliY == 6)
            {
                oriantationY = keliY;
                orientationX = 3;
            }
        }
        else if(keliX == 2)
        {
            if (keliY == 0)
            {
                oriantationY = keliY;
                orientationX = 4;
            }
            else if (keliY == 1)
            {
                oriantationY = keliY;
                orientationX = 4;
            }
            else if (keliY == 2)
            {
                oriantationY = keliY;
                orientationX = 4;
            }
            else if (keliY == 3)
            {
                oriantationY = keliY;
                orientationX = 4;
            }
            else if (keliY == 4)
            {
                oriantationY = keliY;
                orientationX = 4;
            }
            else if (keliY == 5)
            {
                oriantationY = keliY;
                orientationX = 4;
            }
            else if (keliY == 6)
            {
                oriantationY = keliY;
                orientationX = 4;
            }
        }
        else if(keliX == 3)
        {
            if (keliY == 0)
            {
                oriantationY = keliY;
                orientationX = 5;
            }
            else if (keliY == 1)
            {
                oriantationY = keliY;
                orientationX = 5;
            }
            else if (keliY == 2)
            {
                oriantationY = keliY;
                orientationX = 5;
            }
            else if (keliY == 3)
            {
                oriantationY = keliY;
                orientationX = 5;
            }
            else if (keliY == 4)
            {
                oriantationY = keliY;
                orientationX = 5;
            }
            else if (keliY == 5)
            {
                oriantationY = keliY;
                orientationX = 5;
            }
            else if (keliY == 6)
            {
                oriantationY = keliY;
                orientationX = 5;
            }
        }
        else if(keliX == 4)
        {
            if (keliY == 0)
            {
                oriantationY = keliY;
                orientationX = 6;
            }
            else if (keliY == 1)
            {
                oriantationY = keliY;
                orientationX = 6;
            }
            else if (keliY == 2)
            {
                oriantationY = keliY;
                orientationX = 6;
            }
            else if (keliY == 3)
            {
                oriantationY = keliY;
                orientationX = 6;
            }
            else if (keliY == 4)
            {
                oriantationY = keliY;
                orientationX = 6;
            }
            else if (keliY == 5)
            {
                oriantationY = keliY;
                orientationX = 6;
            }
            else if (keliY == 6)
            {
                oriantationY = keliY;
                orientationX = 6;
            }
        }
        else if(keliX == 5)
        {
            if (keliY == 0)
            {
                oriantationY = keliY;
                orientationX = 3;
            }
            else if (keliY == 1)
            {
                oriantationY = keliY;
                orientationX = 3;
            }
            else if (keliY == 2)
            {
                oriantationY = keliY;
                orientationX = 3;
            }
            else if (keliY == 3)
            {
                oriantationY = keliY;
                orientationX = 3;
            }
            else if (keliY == 4)
            {
                oriantationY = keliY;
                orientationX = 3;
            }
            else if (keliY == 5)
            {
                oriantationY = keliY;
                orientationX = 3;
            }
            else if (keliY == 6)
            {
                oriantationY = keliY;
                orientationX = 3;
            }
        }
        else if(keliX == 6)
        {
            if (keliY == 0)
            {
                oriantationY = keliY;
                orientationX = 4;
            }
            else if (keliY == 1)
            {
                oriantationY = keliY;
                orientationX = 4;
            }
            else if (keliY == 2)
            {
                oriantationY = keliY;
                orientationX = 4;
            }
            else if (keliY == 3)
            {
                oriantationY = keliY;
                orientationX = 4;
            }
            else if (keliY == 4)
            {
                oriantationY = keliY;
                orientationX = 4;
            }
            else if (keliY == 5)
            {
                oriantationY = keliY;
                orientationX = 4;
            }
            else if (keliY == 6)
            {
                oriantationY = keliY;
                orientationX = 4;
            }
        }
    }


    if(keliX == orientationX)
    {

        if (keliY > oriantationY)
        {
            for (int allYs = oriantationY; allYs <= keliY; allYs++)
            {
                if(a.boardPlay[keliX][allYs].getType() == 2)
                    noShipHere = 1;
            }
        }
        else if (oriantationY > keliY)
        {
            for (int allYs = keliY; allYs <= oriantationY; allYs++)
            {
                if(a.boardPlay[keliX][allYs].getType() == 2)
                    noShipHere = 1;
            }
        }

    }
    else if (keliY == oriantationY)
    {
        if(keliX > orientationX)
        {
            for (int allXs = orientationX; allXs <= keliX; allXs++)
            {
                if(a.boardPlay[allXs][keliY].getType() == 2)
                    noShipHere = 1;
            }
        }
        else if (orientationX > keliX)
        {
            for (int allXs = keliX; allXs <= orientationX; allXs++)
            {
                if(a.boardPlay[allXs][keliY].getType() == 2)
                    noShipHere = 1;
            }
        }


    }


    while(keliX < 0 || keliX > 6 || keliY < 0 || keliY > 6 || typeOfTileStarting != 1 || noShipHere == 1){
            noShipHere = 0;
        cout << "Edwses lathos suntetagmenes prospathise pali. " << endl;
        if (typeOfTileStarting == 2)
            cout << "Oooops another ship here." << endl;
    cin >> keliX >> keliY;
    typeOfTileStarting = a.boardPlay[keliX][keliY].getType();

    cout << "Twra dwse mou kai prosanatolismo. " << endl;
    cout << "Dwse mou '0' gia horizontal alliws '1' gia vertical prosanatolismo. " << endl;
    cin >> prosanatolism;
    while(prosanatolism < 0 || prosanatolism > 1){
        cout << "Edwses lathos prosanatolismo prospathise pali. " << endl;
        cin >> prosanatolism;
    }

    if (prosanatolism == 0)
    {
        if(keliX == 0)
        {
            if (keliY == 0)
            {
                orientationX = keliX;
                oriantationY = 2;
            }
            else if (keliY == 1)
            {
                orientationX = keliX;
                oriantationY = 3;
            }
             else if (keliY == 2)
            {
                orientationX = keliX;
                oriantationY = 4;
            }
             else if (keliY == 3)
            {
                orientationX = keliX;
                oriantationY = 5;
            }
             else if (keliY == 4)
            {
                orientationX = keliX;
                oriantationY = 6;
            }
            else if (keliY == 5)
            {
                orientationX = keliX;
                oriantationY = 3;
            }
             else if (keliY == 6)
            {
                orientationX = keliX;
                oriantationY = 4;
            }
        }
        else if (keliX == 1)
        {
            if (keliY == 0)
            {
                orientationX = keliX;
                oriantationY = 2;
            }
            else if (keliY == 1)
            {
                orientationX = keliX;
                oriantationY = 3;
            }
             else if (keliY == 2)
            {
                orientationX = keliX;
                oriantationY = 4;
            }
             else if (keliY == 3)
            {
                orientationX = keliX;
                oriantationY = 5;
            }
             else if (keliY == 4)
            {
                orientationX = keliX;
                oriantationY = 6;
            }
            else if (keliY == 5)
            {
                orientationX = keliX;
                oriantationY = 3;
            }
             else if (keliY == 6)
            {
                orientationX = keliX;
                oriantationY = 4;
            }
        }
        else if (keliX == 2)
        {
            if (keliY == 0)
            {
                orientationX = keliX;
                oriantationY = 2;
            }
            else if (keliY == 1)
            {
                orientationX = keliX;
                oriantationY = 3;
            }
             else if (keliY == 2)
            {
                orientationX = keliX;
                oriantationY = 4;
            }
             else if (keliY == 3)
            {
                orientationX = keliX;
                oriantationY = 5;
            }
             else if (keliY == 4)
            {
                orientationX = keliX;
                oriantationY = 6;
            }
            else if (keliY == 5)
            {
                orientationX = keliX;
                oriantationY = 3;
            }
             else if (keliY == 6)
            {
                orientationX = keliX;
                oriantationY = 4;
            }
        }
        else if (keliX == 3)
        {
            if (keliY == 0)
            {
                orientationX = keliX;
                oriantationY = 2;
            }
            else if (keliY == 1)
            {
                orientationX = keliX;
                oriantationY = 3;
            }
             else if (keliY == 2)
            {
                orientationX = keliX;
                oriantationY = 4;
            }
             else if (keliY == 3)
            {
                orientationX = keliX;
                oriantationY = 5;
            }
             else if (keliY == 4)
            {
                orientationX = keliX;
                oriantationY = 6;
            }
            else if (keliY == 5)
            {
                orientationX = keliX;
                oriantationY = 3;
            }
             else if (keliY == 6)
            {
                orientationX = keliX;
                oriantationY = 4;
            }
        }
        else if (keliX == 4)
        {
            if (keliY == 0)
            {
                orientationX = keliX;
                oriantationY = 2;
            }
            else if (keliY == 1)
            {
                orientationX = keliX;
                oriantationY = 3;
            }
             else if (keliY == 2)
            {
                orientationX = keliX;
                oriantationY = 4;
            }
             else if (keliY == 3)
            {
                orientationX = keliX;
                oriantationY = 5;
            }
             else if (keliY == 4)
            {
                orientationX = keliX;
                oriantationY = 6;
            }
            else if (keliY == 5)
            {
                orientationX = keliX;
                oriantationY = 3;
            }
             else if (keliY == 6)
            {
                orientationX = keliX;
                oriantationY = 4;
            }
        }
        else if (keliX == 5)
        {
            if (keliY == 0)
            {
                orientationX = keliX;
                oriantationY = 2;
            }
            else if (keliY == 1)
            {
                orientationX = keliX;
                oriantationY = 3;
            }
             else if (keliY == 2)
            {
                orientationX = keliX;
                oriantationY = 4;
            }
             else if (keliY == 3)
            {
                orientationX = keliX;
                oriantationY = 5;
            }
             else if (keliY == 4)
            {
                orientationX = keliX;
                oriantationY = 6;
            }
            else if (keliY == 5)
            {
                orientationX = keliX;
                oriantationY = 3;
            }
             else if (keliY == 6)
            {
                orientationX = keliX;
                oriantationY = 4;
            }
        }
        else if (keliX == 6)
        {
            if (keliY == 0)
            {
                orientationX = keliX;
                oriantationY = 2;
            }
            else if (keliY == 1)
            {
                orientationX = keliX;
                oriantationY = 3;
            }
             else if (keliY == 2)
            {
                orientationX = keliX;
                oriantationY = 4;
            }
             else if (keliY == 3)
            {
                orientationX = keliX;
                oriantationY = 5;
            }
             else if (keliY == 4)
            {
                orientationX = keliX;
                oriantationY = 6;
            }
            else if (keliY == 5)
            {
                orientationX = keliX;
                oriantationY = 3;
            }
             else if (keliY == 6)
            {
                orientationX = keliX;
                oriantationY = 4;
            }
        }
    }
    else if (prosanatolism == 1 )
    {
        if(keliX == 0)
        {
            if (keliY == 0)
            {
                oriantationY = keliY;
                orientationX = 2;
            }
            else if (keliY == 1)
            {
                oriantationY = keliY;
                orientationX = 2;
            }
            else if (keliY == 2)
            {
                oriantationY = keliY;
                orientationX = 2;
            }
            else if (keliY == 3)
            {
                oriantationY = keliY;
                orientationX = 2;
            }
            else if (keliY == 4)
            {
                oriantationY = keliY;
                orientationX = 2;
            }
            else if (keliY == 5)
            {
                oriantationY = keliY;
                orientationX = 2;
            }
            else if (keliY == 6)
            {
                oriantationY = keliY;
                orientationX = 2;
            }
        }
        else if(keliX == 1)
        {
            if (keliY == 0)
            {
                oriantationY = keliY;
                orientationX = 3;
            }
            else if (keliY == 1)
            {
                oriantationY = keliY;
                orientationX = 3;
            }
            else if (keliY == 2)
            {
                oriantationY = keliY;
                orientationX = 3;
            }
            else if (keliY == 3)
            {
                oriantationY = keliY;
                orientationX = 3;
            }
            else if (keliY == 4)
            {
                oriantationY = keliY;
                orientationX = 3;
            }
            else if (keliY == 5)
            {
                oriantationY = keliY;
                orientationX = 3;
            }
            else if (keliY == 6)
            {
                oriantationY = keliY;
                orientationX = 3;
            }
        }
        else if(keliX == 2)
        {
            if (keliY == 0)
            {
                oriantationY = keliY;
                orientationX = 4;
            }
            else if (keliY == 1)
            {
                oriantationY = keliY;
                orientationX = 4;
            }
            else if (keliY == 2)
            {
                oriantationY = keliY;
                orientationX = 4;
            }
            else if (keliY == 3)
            {
                oriantationY = keliY;
                orientationX = 4;
            }
            else if (keliY == 4)
            {
                oriantationY = keliY;
                orientationX = 4;
            }
            else if (keliY == 5)
            {
                oriantationY = keliY;
                orientationX = 4;
            }
            else if (keliY == 6)
            {
                oriantationY = keliY;
                orientationX = 4;
            }
        }
        else if(keliX == 3)
        {
            if (keliY == 0)
            {
                oriantationY = keliY;
                orientationX = 5;
            }
            else if (keliY == 1)
            {
                oriantationY = keliY;
                orientationX = 5;
            }
            else if (keliY == 2)
            {
                oriantationY = keliY;
                orientationX = 5;
            }
            else if (keliY == 3)
            {
                oriantationY = keliY;
                orientationX = 5;
            }
            else if (keliY == 4)
            {
                oriantationY = keliY;
                orientationX = 5;
            }
            else if (keliY == 5)
            {
                oriantationY = keliY;
                orientationX = 5;
            }
            else if (keliY == 6)
            {
                oriantationY = keliY;
                orientationX = 5;
            }
        }
        else if(keliX == 4)
        {
            if (keliY == 0)
            {
                oriantationY = keliY;
                orientationX = 6;
            }
            else if (keliY == 1)
            {
                oriantationY = keliY;
                orientationX = 6;
            }
            else if (keliY == 2)
            {
                oriantationY = keliY;
                orientationX = 6;
            }
            else if (keliY == 3)
            {
                oriantationY = keliY;
                orientationX = 6;
            }
            else if (keliY == 4)
            {
                oriantationY = keliY;
                orientationX = 6;
            }
            else if (keliY == 5)
            {
                oriantationY = keliY;
                orientationX = 6;
            }
            else if (keliY == 6)
            {
                oriantationY = keliY;
                orientationX = 6;
            }
        }
        else if(keliX == 5)
        {
            if (keliY == 0)
            {
                oriantationY = keliY;
                orientationX = 3;
            }
            else if (keliY == 1)
            {
                oriantationY = keliY;
                orientationX = 3;
            }
            else if (keliY == 2)
            {
                oriantationY = keliY;
                orientationX = 3;
            }
            else if (keliY == 3)
            {
                oriantationY = keliY;
                orientationX = 3;
            }
            else if (keliY == 4)
            {
                oriantationY = keliY;
                orientationX = 3;
            }
            else if (keliY == 5)
            {
                oriantationY = keliY;
                orientationX = 3;
            }
            else if (keliY == 6)
            {
                oriantationY = keliY;
                orientationX = 3;
            }
        }
        else if(keliX == 6)
        {
            if (keliY == 0)
            {
                oriantationY = keliY;
                orientationX = 4;
            }
            else if (keliY == 1)
            {
                oriantationY = keliY;
                orientationX = 4;
            }
            else if (keliY == 2)
            {
                oriantationY = keliY;
                orientationX = 4;
            }
            else if (keliY == 3)
            {
                oriantationY = keliY;
                orientationX = 4;
            }
            else if (keliY == 4)
            {
                oriantationY = keliY;
                orientationX = 4;
            }
            else if (keliY == 5)
            {
                oriantationY = keliY;
                orientationX = 4;
            }
            else if (keliY == 6)
            {
                oriantationY = keliY;
                orientationX = 4;
            }
        }
    }


    if(keliX == orientationX)
    {

        if (keliY > oriantationY)
        {
            for (int allYs = oriantationY; allYs <= keliY; allYs++)
            {
                if(a.boardPlay[keliX][allYs].getType() == 2)
                    noShipHere = 1;
            }
        }
        else if (oriantationY > keliY)
        {
            for (int allYs = keliY; allYs <= oriantationY; allYs++)
            {
                if(a.boardPlay[keliX][allYs].getType() == 2)
                    noShipHere = 1;
            }
        }

    }
    else if (keliY == oriantationY)
    {
        if(keliX > orientationX)
        {
            for (int allXs = orientationX; allXs <= keliX; allXs++)
            {
                if(a.boardPlay[allXs][keliY].getType() == 2)
                    noShipHere = 1;
            }
        }
        else if (orientationX > keliX)
        {
            for (int allXs = keliX; allXs <= orientationX; allXs++)
            {
                if(a.boardPlay[allXs][keliY].getType() == 2)
                    noShipHere = 1;
            }
        }


    }


    }


    cout << "KeliX: " << keliX << endl;
    cout << "Keliy: " << keliY << endl;
    cout << "OrientationX: " << orientationX << endl;
    cout << "OrientationY: " << oriantationY << endl;

    secondShip.placeShipAlone(keliX, keliY, orientationX, oriantationY, a.boardPlay, true);

    Destroyer thirdShip;

    cout << "To trito ploio einai to Destroyer me 2 theseis." << endl;
    cout << "Dwse mou to KELI ENARKSHS (dld to x, y syntetagmenes). Prosoxh oi syntetagmenes prepei na einai mesa sta oria dld apo 0 ews 6 kai tpt allo." << endl;
    cin >> keliX >> keliY;
    typeOfTileStarting = a.boardPlay[keliX][keliY].getType();
    cout << "Twra dwse mou kai prosanatolismo. " << endl;
    cout << "Dwse mou '0' gia horizontal alliws '1' gia vertical prosanatolismo. " << endl;
    cin >> prosanatolism;
    while(prosanatolism < 0 || prosanatolism > 1){
        cout << "Edwses lathos prosanatolismo prospathise pali. " << endl;
        cin >> prosanatolism;
    }

    if (prosanatolism == 0)
    {
        if(keliX == 0)
        {
            if (keliY == 0)
            {
                orientationX = keliX;
                oriantationY = 1;
            }
            else if (keliY == 1)
            {
                orientationX = keliX;
                oriantationY = 2;
            }
             else if (keliY == 2)
            {
                orientationX = keliX;
                oriantationY = 3;
            }
             else if (keliY == 3)
            {
                orientationX = keliX;
                oriantationY = 4;
            }
             else if (keliY == 4)
            {
                orientationX = keliX;
                oriantationY = 5;
            }
            else if (keliY == 5)
            {
                orientationX = keliX;
                oriantationY = 6;
            }
             else if (keliY == 6)
            {
                orientationX = keliX;
                oriantationY = 5;
            }
        }
        else if (keliX == 1)
        {
            if (keliY == 0)
            {
                orientationX = keliX;
                oriantationY = 1;
            }
            else if (keliY == 1)
            {
                orientationX = keliX;
                oriantationY = 2;
            }
             else if (keliY == 2)
            {
                orientationX = keliX;
                oriantationY = 3;
            }
             else if (keliY == 3)
            {
                orientationX = keliX;
                oriantationY = 4;
            }
             else if (keliY == 4)
            {
                orientationX = keliX;
                oriantationY = 5;
            }
            else if (keliY == 5)
            {
                orientationX = keliX;
                oriantationY = 6;
            }
             else if (keliY == 6)
            {
                orientationX = keliX;
                oriantationY = 5;
            }
        }
        else if (keliX == 2)
        {
            if (keliY == 0)
            {
                orientationX = keliX;
                oriantationY = 1;
            }
            else if (keliY == 1)
            {
                orientationX = keliX;
                oriantationY = 2;
            }
             else if (keliY == 2)
            {
                orientationX = keliX;
                oriantationY = 3;
            }
             else if (keliY == 3)
            {
                orientationX = keliX;
                oriantationY = 4;
            }
             else if (keliY == 4)
            {
                orientationX = keliX;
                oriantationY = 5;
            }
            else if (keliY == 5)
            {
                orientationX = keliX;
                oriantationY = 6;
            }
             else if (keliY == 6)
            {
                orientationX = keliX;
                oriantationY = 5;
            }
        }
        else if (keliX == 3)
        {
            if (keliY == 0)
            {
                orientationX = keliX;
                oriantationY = 1;
            }
            else if (keliY == 1)
            {
                orientationX = keliX;
                oriantationY = 2;
            }
             else if (keliY == 2)
            {
                orientationX = keliX;
                oriantationY = 3;
            }
             else if (keliY == 3)
            {
                orientationX = keliX;
                oriantationY = 4;
            }
             else if (keliY == 4)
            {
                orientationX = keliX;
                oriantationY = 5;
            }
            else if (keliY == 5)
            {
                orientationX = keliX;
                oriantationY = 6;
            }
             else if (keliY == 6)
            {
                orientationX = keliX;
                oriantationY = 5;
            }
        }
        else if (keliX == 4)
        {
            if (keliY == 0)
            {
                orientationX = keliX;
                oriantationY = 1;
            }
            else if (keliY == 1)
            {
                orientationX = keliX;
                oriantationY = 2;
            }
             else if (keliY == 2)
            {
                orientationX = keliX;
                oriantationY = 3;
            }
             else if (keliY == 3)
            {
                orientationX = keliX;
                oriantationY = 4;
            }
             else if (keliY == 4)
            {
                orientationX = keliX;
                oriantationY = 5;
            }
            else if (keliY == 5)
            {
                orientationX = keliX;
                oriantationY = 6;
            }
             else if (keliY == 6)
            {
                orientationX = keliX;
                oriantationY = 5;
            }
        }
        else if (keliX == 5)
        {
            if (keliY == 0)
            {
                orientationX = keliX;
                oriantationY = 1;
            }
            else if (keliY == 1)
            {
                orientationX = keliX;
                oriantationY = 2;
            }
             else if (keliY == 2)
            {
                orientationX = keliX;
                oriantationY = 3;
            }
             else if (keliY == 3)
            {
                orientationX = keliX;
                oriantationY = 4;
            }
             else if (keliY == 4)
            {
                orientationX = keliX;
                oriantationY = 5;
            }
            else if (keliY == 5)
            {
                orientationX = keliX;
                oriantationY = 6;
            }
             else if (keliY == 6)
            {
                orientationX = keliX;
                oriantationY = 5;
            }
        }
        else if (keliX == 6)
        {
            if (keliY == 0)
            {
                orientationX = keliX;
                oriantationY = 1;
            }
            else if (keliY == 1)
            {
                orientationX = keliX;
                oriantationY = 2;
            }
             else if (keliY == 2)
            {
                orientationX = keliX;
                oriantationY = 3;
            }
             else if (keliY == 3)
            {
                orientationX = keliX;
                oriantationY = 4;
            }
             else if (keliY == 4)
            {
                orientationX = keliX;
                oriantationY = 5;
            }
            else if (keliY == 5)
            {
                orientationX = keliX;
                oriantationY = 6;
            }
             else if (keliY == 6)
            {
                orientationX = keliX;
                oriantationY = 5;
            }
        }
    }
    else if (prosanatolism == 1 )
    {
        if(keliX == 0)
        {
            if (keliY == 0)
            {
                oriantationY = keliY;
                orientationX = 1;
            }
            else if (keliY == 1)
            {
                oriantationY = keliY;
                orientationX = 1;
            }
            else if (keliY == 2)
            {
                oriantationY = keliY;
                orientationX = 1;
            }
            else if (keliY == 3)
            {
                oriantationY = keliY;
                orientationX = 1;
            }
            else if (keliY == 4)
            {
                oriantationY = keliY;
                orientationX = 1;
            }
            else if (keliY == 5)
            {
                oriantationY = keliY;
                orientationX = 1;
            }
            else if (keliY == 6)
            {
                oriantationY = keliY;
                orientationX = 1;
            }
        }
        else if(keliX == 1)
        {
            if (keliY == 0)
            {
                oriantationY = keliY;
                orientationX = 2;
            }
            else if (keliY == 1)
            {
                oriantationY = keliY;
                orientationX = 2;
            }
            else if (keliY == 2)
            {
                oriantationY = keliY;
                orientationX = 2;
            }
            else if (keliY == 3)
            {
                oriantationY = keliY;
                orientationX = 2;
            }
            else if (keliY == 4)
            {
                oriantationY = keliY;
                orientationX = 2;
            }
            else if (keliY == 5)
            {
                oriantationY = keliY;
                orientationX = 2;
            }
            else if (keliY == 6)
            {
                oriantationY = keliY;
                orientationX = 2;
            }
        }
        else if(keliX == 2)
        {
            if (keliY == 0)
            {
                oriantationY = keliY;
                orientationX = 3;
            }
            else if (keliY == 1)
            {
                oriantationY = keliY;
                orientationX = 3;
            }
            else if (keliY == 2)
            {
                oriantationY = keliY;
                orientationX = 3;
            }
            else if (keliY == 3)
            {
                oriantationY = keliY;
                orientationX = 3;
            }
            else if (keliY == 4)
            {
                oriantationY = keliY;
                orientationX = 3;
            }
            else if (keliY == 5)
            {
                oriantationY = keliY;
                orientationX = 3;
            }
            else if (keliY == 6)
            {
                oriantationY = keliY;
                orientationX = 3;
            }
        }
        else if(keliX == 3)
        {
            if (keliY == 0)
            {
                oriantationY = keliY;
                orientationX = 4;
            }
            else if (keliY == 1)
            {
                oriantationY = keliY;
                orientationX = 4;
            }
            else if (keliY == 2)
            {
                oriantationY = keliY;
                orientationX = 4;
            }
            else if (keliY == 3)
            {
                oriantationY = keliY;
                orientationX = 4;
            }
            else if (keliY == 4)
            {
                oriantationY = keliY;
                orientationX = 4;
            }
            else if (keliY == 5)
            {
                oriantationY = keliY;
                orientationX = 4;
            }
            else if (keliY == 6)
            {
                oriantationY = keliY;
                orientationX = 4;
            }
        }
        else if(keliX == 4)
        {
            if (keliY == 0)
            {
                oriantationY = keliY;
                orientationX = 5;
            }
            else if (keliY == 1)
            {
                oriantationY = keliY;
                orientationX = 5;
            }
            else if (keliY == 2)
            {
                oriantationY = keliY;
                orientationX = 5;
            }
            else if (keliY == 3)
            {
                oriantationY = keliY;
                orientationX = 5;
            }
            else if (keliY == 4)
            {
                oriantationY = keliY;
                orientationX = 5;
            }
            else if (keliY == 5)
            {
                oriantationY = keliY;
                orientationX = 5;
            }
            else if (keliY == 6)
            {
                oriantationY = keliY;
                orientationX = 5;
            }
        }
        else if(keliX == 5)
        {
            if (keliY == 0)
            {
                oriantationY = keliY;
                orientationX = 6;
            }
            else if (keliY == 1)
            {
                oriantationY = keliY;
                orientationX = 6;
            }
            else if (keliY == 2)
            {
                oriantationY = keliY;
                orientationX = 6;
            }
            else if (keliY == 3)
            {
                oriantationY = keliY;
                orientationX = 6;
            }
            else if (keliY == 4)
            {
                oriantationY = keliY;
                orientationX = 6;
            }
            else if (keliY == 5)
            {
                oriantationY = keliY;
                orientationX = 6;
            }
            else if (keliY == 6)
            {
                oriantationY = keliY;
                orientationX = 6;
            }
        }
        else if(keliX == 6)
        {
            if (keliY == 0)
            {
                oriantationY = keliY;
                orientationX = 5;
            }
            else if (keliY == 1)
            {
                oriantationY = keliY;
                orientationX = 5;
            }
            else if (keliY == 2)
            {
                oriantationY = keliY;
                orientationX = 5;
            }
            else if (keliY == 3)
            {
                oriantationY = keliY;
                orientationX = 5;
            }
            else if (keliY == 4)
            {
                oriantationY = keliY;
                orientationX = 5;
            }
            else if (keliY == 5)
            {
                oriantationY = keliY;
                orientationX = 5;
            }
            else if (keliY == 6)
            {
                oriantationY = keliY;
                orientationX = 5;
            }
        }
    }


    if(keliX == orientationX)
    {

        if (keliY > oriantationY)
        {
            for (int allYs = oriantationY; allYs <= keliY; allYs++)
            {
                if(a.boardPlay[keliX][allYs].getType() == 2)
                    noShipHere = 1;
            }
        }
        else if (oriantationY > keliY)
        {
            for (int allYs = keliY; allYs <= oriantationY; allYs++)
            {
                if(a.boardPlay[keliX][allYs].getType() == 2)
                    noShipHere = 1;
            }
        }

    }
    else if (keliY == oriantationY)
    {
        if(keliX > orientationX)
        {
            for (int allXs = orientationX; allXs <= keliX; allXs++)
            {
                if(a.boardPlay[allXs][keliY].getType() == 2)
                    noShipHere = 1;
            }
        }
        else if (orientationX > keliX)
        {
            for (int allXs = keliX; allXs <= orientationX; allXs++)
            {
                if(a.boardPlay[allXs][keliY].getType() == 2)
                    noShipHere = 1;
            }
        }


    }


    while(keliX < 0 || keliX > 6 || keliY < 0 || keliY > 6 || typeOfTileStarting != 1 || noShipHere == 1){
            noShipHere = 0;
        cout << "Edwses lathos suntetagmenes prospathise pali. " << endl;
        if (typeOfTileStarting == 2)
            cout << "Oooops another ship here." << endl;
    cin >> keliX >> keliY;
    typeOfTileStarting = a.boardPlay[keliX][keliY].getType();

    cout << "Twra dwse mou kai prosanatolismo. " << endl;
    cout << "Dwse mou '0' gia horizontal alliws '1' gia vertical prosanatolismo. " << endl;
    cin >> prosanatolism;
    while(prosanatolism < 0 || prosanatolism > 1){
        cout << "Edwses lathos prosanatolismo prospathise pali. " << endl;
        cin >> prosanatolism;
    }

    if (prosanatolism == 0)
    {
        if(keliX == 0)
        {
            if (keliY == 0)
            {
                orientationX = keliX;
                oriantationY = 1;
            }
            else if (keliY == 1)
            {
                orientationX = keliX;
                oriantationY = 2;
            }
             else if (keliY == 2)
            {
                orientationX = keliX;
                oriantationY = 3;
            }
             else if (keliY == 3)
            {
                orientationX = keliX;
                oriantationY = 4;
            }
             else if (keliY == 4)
            {
                orientationX = keliX;
                oriantationY = 5;
            }
            else if (keliY == 5)
            {
                orientationX = keliX;
                oriantationY = 6;
            }
             else if (keliY == 6)
            {
                orientationX = keliX;
                oriantationY = 5;
            }
        }
        else if (keliX == 1)
        {
            if (keliY == 0)
            {
                orientationX = keliX;
                oriantationY = 1;
            }
            else if (keliY == 1)
            {
                orientationX = keliX;
                oriantationY = 2;
            }
             else if (keliY == 2)
            {
                orientationX = keliX;
                oriantationY = 3;
            }
             else if (keliY == 3)
            {
                orientationX = keliX;
                oriantationY = 4;
            }
             else if (keliY == 4)
            {
                orientationX = keliX;
                oriantationY = 5;
            }
            else if (keliY == 5)
            {
                orientationX = keliX;
                oriantationY = 6;
            }
             else if (keliY == 6)
            {
                orientationX = keliX;
                oriantationY = 5;
            }
        }
        else if (keliX == 2)
        {
            if (keliY == 0)
            {
                orientationX = keliX;
                oriantationY = 1;
            }
            else if (keliY == 1)
            {
                orientationX = keliX;
                oriantationY = 2;
            }
             else if (keliY == 2)
            {
                orientationX = keliX;
                oriantationY = 3;
            }
             else if (keliY == 3)
            {
                orientationX = keliX;
                oriantationY = 4;
            }
             else if (keliY == 4)
            {
                orientationX = keliX;
                oriantationY = 5;
            }
            else if (keliY == 5)
            {
                orientationX = keliX;
                oriantationY = 6;
            }
             else if (keliY == 6)
            {
                orientationX = keliX;
                oriantationY = 5;
            }
        }
        else if (keliX == 3)
        {
            if (keliY == 0)
            {
                orientationX = keliX;
                oriantationY = 1;
            }
            else if (keliY == 1)
            {
                orientationX = keliX;
                oriantationY = 2;
            }
             else if (keliY == 2)
            {
                orientationX = keliX;
                oriantationY = 3;
            }
             else if (keliY == 3)
            {
                orientationX = keliX;
                oriantationY = 4;
            }
             else if (keliY == 4)
            {
                orientationX = keliX;
                oriantationY = 5;
            }
            else if (keliY == 5)
            {
                orientationX = keliX;
                oriantationY = 6;
            }
             else if (keliY == 6)
            {
                orientationX = keliX;
                oriantationY = 5;
            }
        }
        else if (keliX == 4)
        {
            if (keliY == 0)
            {
                orientationX = keliX;
                oriantationY = 1;
            }
            else if (keliY == 1)
            {
                orientationX = keliX;
                oriantationY = 2;
            }
             else if (keliY == 2)
            {
                orientationX = keliX;
                oriantationY = 3;
            }
             else if (keliY == 3)
            {
                orientationX = keliX;
                oriantationY = 4;
            }
             else if (keliY == 4)
            {
                orientationX = keliX;
                oriantationY = 5;
            }
            else if (keliY == 5)
            {
                orientationX = keliX;
                oriantationY = 6;
            }
             else if (keliY == 6)
            {
                orientationX = keliX;
                oriantationY = 5;
            }
        }
        else if (keliX == 5)
        {
            if (keliY == 0)
            {
                orientationX = keliX;
                oriantationY = 1;
            }
            else if (keliY == 1)
            {
                orientationX = keliX;
                oriantationY = 2;
            }
             else if (keliY == 2)
            {
                orientationX = keliX;
                oriantationY = 3;
            }
             else if (keliY == 3)
            {
                orientationX = keliX;
                oriantationY = 4;
            }
             else if (keliY == 4)
            {
                orientationX = keliX;
                oriantationY = 5;
            }
            else if (keliY == 5)
            {
                orientationX = keliX;
                oriantationY = 6;
            }
             else if (keliY == 6)
            {
                orientationX = keliX;
                oriantationY = 5;
            }
        }
        else if (keliX == 6)
        {
            if (keliY == 0)
            {
                orientationX = keliX;
                oriantationY = 1;
            }
            else if (keliY == 1)
            {
                orientationX = keliX;
                oriantationY = 2;
            }
             else if (keliY == 2)
            {
                orientationX = keliX;
                oriantationY = 3;
            }
             else if (keliY == 3)
            {
                orientationX = keliX;
                oriantationY = 4;
            }
             else if (keliY == 4)
            {
                orientationX = keliX;
                oriantationY = 5;
            }
            else if (keliY == 5)
            {
                orientationX = keliX;
                oriantationY = 6;
            }
             else if (keliY == 6)
            {
                orientationX = keliX;
                oriantationY = 5;
            }
        }
    }
    else if (prosanatolism == 1 )
    {
        if(keliX == 0)
        {
            if (keliY == 0)
            {
                oriantationY = keliY;
                orientationX = 1;
            }
            else if (keliY == 1)
            {
                oriantationY = keliY;
                orientationX = 1;
            }
            else if (keliY == 2)
            {
                oriantationY = keliY;
                orientationX = 1;
            }
            else if (keliY == 3)
            {
                oriantationY = keliY;
                orientationX = 1;
            }
            else if (keliY == 4)
            {
                oriantationY = keliY;
                orientationX = 1;
            }
            else if (keliY == 5)
            {
                oriantationY = keliY;
                orientationX = 1;
            }
            else if (keliY == 6)
            {
                oriantationY = keliY;
                orientationX = 1;
            }
        }
        else if(keliX == 1)
        {
            if (keliY == 0)
            {
                oriantationY = keliY;
                orientationX = 2;
            }
            else if (keliY == 1)
            {
                oriantationY = keliY;
                orientationX = 2;
            }
            else if (keliY == 2)
            {
                oriantationY = keliY;
                orientationX = 2;
            }
            else if (keliY == 3)
            {
                oriantationY = keliY;
                orientationX = 2;
            }
            else if (keliY == 4)
            {
                oriantationY = keliY;
                orientationX = 2;
            }
            else if (keliY == 5)
            {
                oriantationY = keliY;
                orientationX = 2;
            }
            else if (keliY == 6)
            {
                oriantationY = keliY;
                orientationX = 2;
            }
        }
        else if(keliX == 2)
        {
            if (keliY == 0)
            {
                oriantationY = keliY;
                orientationX = 3;
            }
            else if (keliY == 1)
            {
                oriantationY = keliY;
                orientationX = 3;
            }
            else if (keliY == 2)
            {
                oriantationY = keliY;
                orientationX = 3;
            }
            else if (keliY == 3)
            {
                oriantationY = keliY;
                orientationX = 3;
            }
            else if (keliY == 4)
            {
                oriantationY = keliY;
                orientationX = 3;
            }
            else if (keliY == 5)
            {
                oriantationY = keliY;
                orientationX = 3;
            }
            else if (keliY == 6)
            {
                oriantationY = keliY;
                orientationX = 3;
            }
        }
        else if(keliX == 3)
        {
            if (keliY == 0)
            {
                oriantationY = keliY;
                orientationX = 4;
            }
            else if (keliY == 1)
            {
                oriantationY = keliY;
                orientationX = 4;
            }
            else if (keliY == 2)
            {
                oriantationY = keliY;
                orientationX = 4;
            }
            else if (keliY == 3)
            {
                oriantationY = keliY;
                orientationX = 4;
            }
            else if (keliY == 4)
            {
                oriantationY = keliY;
                orientationX = 4;
            }
            else if (keliY == 5)
            {
                oriantationY = keliY;
                orientationX = 4;
            }
            else if (keliY == 6)
            {
                oriantationY = keliY;
                orientationX = 4;
            }
        }
        else if(keliX == 4)
        {
            if (keliY == 0)
            {
                oriantationY = keliY;
                orientationX = 5;
            }
            else if (keliY == 1)
            {
                oriantationY = keliY;
                orientationX = 5;
            }
            else if (keliY == 2)
            {
                oriantationY = keliY;
                orientationX = 5;
            }
            else if (keliY == 3)
            {
                oriantationY = keliY;
                orientationX = 5;
            }
            else if (keliY == 4)
            {
                oriantationY = keliY;
                orientationX = 5;
            }
            else if (keliY == 5)
            {
                oriantationY = keliY;
                orientationX = 5;
            }
            else if (keliY == 6)
            {
                oriantationY = keliY;
                orientationX = 5;
            }
        }
        else if(keliX == 5)
        {
            if (keliY == 0)
            {
                oriantationY = keliY;
                orientationX = 6;
            }
            else if (keliY == 1)
            {
                oriantationY = keliY;
                orientationX = 6;
            }
            else if (keliY == 2)
            {
                oriantationY = keliY;
                orientationX = 6;
            }
            else if (keliY == 3)
            {
                oriantationY = keliY;
                orientationX = 6;
            }
            else if (keliY == 4)
            {
                oriantationY = keliY;
                orientationX = 6;
            }
            else if (keliY == 5)
            {
                oriantationY = keliY;
                orientationX = 6;
            }
            else if (keliY == 6)
            {
                oriantationY = keliY;
                orientationX = 6;
            }
        }
        else if(keliX == 6)
        {
            if (keliY == 0)
            {
                oriantationY = keliY;
                orientationX = 5;
            }
            else if (keliY == 1)
            {
                oriantationY = keliY;
                orientationX = 5;
            }
            else if (keliY == 2)
            {
                oriantationY = keliY;
                orientationX = 5;
            }
            else if (keliY == 3)
            {
                oriantationY = keliY;
                orientationX = 5;
            }
            else if (keliY == 4)
            {
                oriantationY = keliY;
                orientationX = 5;
            }
            else if (keliY == 5)
            {
                oriantationY = keliY;
                orientationX = 5;
            }
            else if (keliY == 6)
            {
                oriantationY = keliY;
                orientationX = 5;
            }
        }
    }



    if(keliX == orientationX)
    {

        if (keliY > oriantationY)
        {
            for (int allYs = oriantationY; allYs <= keliY; allYs++)
            {
                if(a.boardPlay[keliX][allYs].getType() == 2)
                    noShipHere = 1;
            }
        }
        else if (oriantationY > keliY)
        {
            for (int allYs = keliY; allYs <= oriantationY; allYs++)
            {
                if(a.boardPlay[keliX][allYs].getType() == 2)
                    noShipHere = 1;
            }
        }

    }
    else if (keliY == oriantationY)
    {
        if(keliX > orientationX)
        {
            for (int allXs = orientationX; allXs <= keliX; allXs++)
            {
                if(a.boardPlay[allXs][keliY].getType() == 2)
                    noShipHere = 1;
            }
        }
        else if (orientationX > keliX)
        {
            for (int allXs = keliX; allXs <= orientationX; allXs++)
            {
                if(a.boardPlay[allXs][keliY].getType() == 2)
                    noShipHere = 1;
            }
        }


    }


    }


    cout << "KeliX: " << keliX << endl;
    cout << "Keliy: " << keliY << endl;
    cout << "OrientationX: " << orientationX << endl;
    cout << "OrientationY: " << oriantationY << endl;

    thirdShip.placeShipAlone(keliX, keliY, orientationX, oriantationY, a.boardPlay, true);

    Carrier forthShip;

    cout << "To tetarto ploio einai to Carrier me 5 theseis." << endl;
    cout << "Dwse mou to KELI ENARKSHS (dld to x, y syntetagmenes). Prosoxh oi syntetagmenes prepei na einai mesa sta oria dld apo 0 ews 6 kai tpt allo." << endl;
    cin >> keliX >> keliY;
    typeOfTileStarting = a.boardPlay[keliX][keliY].getType();
    cout << "Twra dwse mou kai prosanatolismo. " << endl;
    cout << "Dwse mou '0' gia horizontal alliws '1' gia vertical prosanatolismo. " << endl;
    cin >> prosanatolism;
    while(prosanatolism < 0 || prosanatolism > 1){
        cout << "Edwses lathos prosanatolismo prospathise pali. " << endl;
        cin >> prosanatolism;
    }

    if (prosanatolism == 0)
    {
        if(keliX == 0)
        {
            if (keliY == 0)
            {
                orientationX = keliX;
                oriantationY = 4;
            }
            else if (keliY == 1)
            {
                orientationX = keliX;
                oriantationY = 5;
            }
             else if (keliY == 2)
            {
                orientationX = keliX;
                oriantationY = 6;
            }
             else if (keliY == 3)
            {
                orientationX = keliX;
                oriantationY = 4;
                cout << "Den xwraei edw." << endl;
                keliX = 9;
            }
             else if (keliY == 4)
            {
                orientationX = keliX;
                oriantationY = 0;
            }
            else if (keliY == 5)
            {
                orientationX = keliX;
                oriantationY = 1;
            }
             else if (keliY == 6)
            {
                orientationX = keliX;
                oriantationY = 2;
            }
        }
        else if (keliX == 1)
        {
            if (keliY == 0)
            {
                orientationX = keliX;
                oriantationY = 4;
            }
            else if (keliY == 1)
            {
                orientationX = keliX;
                oriantationY = 5;
            }
             else if (keliY == 2)
            {
                orientationX = keliX;
                oriantationY = 6;
            }
             else if (keliY == 3)
            {
                orientationX = keliX;
                oriantationY = 4;
                cout << "Den xwraei edw." << endl;
                keliX = 9;
            }
             else if (keliY == 4)
            {
                orientationX = keliX;
                oriantationY = 0;
            }
            else if (keliY == 5)
            {
                orientationX = keliX;
                oriantationY = 1;
            }
             else if (keliY == 6)
            {
                orientationX = keliX;
                oriantationY = 2;
            }
        }
        else if (keliX == 2)
        {
            if (keliY == 0)
            {
                orientationX = keliX;
                oriantationY = 4;
            }
            else if (keliY == 1)
            {
                orientationX = keliX;
                oriantationY = 5;
            }
             else if (keliY == 2)
            {
                orientationX = keliX;
                oriantationY = 6;
            }
             else if (keliY == 3)
            {
                orientationX = keliX;
                oriantationY = 4;
                cout << "Den xwraei edw." << endl;
                keliX = 9;
            }
             else if (keliY == 4)
            {
                orientationX = keliX;
                oriantationY = 0;
            }
            else if (keliY == 5)
            {
                orientationX = keliX;
                oriantationY = 1;
            }
             else if (keliY == 6)
            {
                orientationX = keliX;
                oriantationY = 2;
            }
        }
        else if (keliX == 3)
        {
            if (keliY == 0)
            {
                orientationX = keliX;
                oriantationY = 4;
            }
            else if (keliY == 1)
            {
                orientationX = keliX;
                oriantationY = 5;
            }
             else if (keliY == 2)
            {
                orientationX = keliX;
                oriantationY = 6;
            }
             else if (keliY == 3)
            {
                orientationX = keliX;
                oriantationY = 4;
                cout << "Den xwraei edw." << endl;
                keliX = 9;
            }
             else if (keliY == 4)
            {
                orientationX = keliX;
                oriantationY = 0;
            }
            else if (keliY == 5)
            {
                orientationX = keliX;
                oriantationY = 1;
            }
             else if (keliY == 6)
            {
                orientationX = keliX;
                oriantationY = 2;
            }
        }
        else if (keliX == 4)
        {
            if (keliY == 0)
            {
                orientationX = keliX;
                oriantationY = 4;
            }
            else if (keliY == 1)
            {
                orientationX = keliX;
                oriantationY = 5;
            }
             else if (keliY == 2)
            {
                orientationX = keliX;
                oriantationY = 6;
            }
             else if (keliY == 3)
            {
                orientationX = keliX;
                oriantationY = 4;
                cout << "Den xwraei edw." << endl;
                keliX = 9;
            }
             else if (keliY == 4)
            {
                orientationX = keliX;
                oriantationY = 0;
            }
            else if (keliY == 5)
            {
                orientationX = keliX;
                oriantationY = 1;
            }
             else if (keliY == 6)
            {
                orientationX = keliX;
                oriantationY = 2;
            }
        }
        else if (keliX == 5)
        {
            if (keliY == 0)
            {
                orientationX = keliX;
                oriantationY = 4;
            }
            else if (keliY == 1)
            {
                orientationX = keliX;
                oriantationY = 5;
            }
             else if (keliY == 2)
            {
                orientationX = keliX;
                oriantationY = 6;
            }
             else if (keliY == 3)
            {
                orientationX = keliX;
                oriantationY = 4;
                cout << "Den xwraei edw." << endl;
                keliX = 9;
            }
             else if (keliY == 4)
            {
                orientationX = keliX;
                oriantationY = 0;
            }
            else if (keliY == 5)
            {
                orientationX = keliX;
                oriantationY = 1;
            }
             else if (keliY == 6)
            {
                orientationX = keliX;
                oriantationY = 2;
            }
        }
        else if (keliX == 6)
        {
           if (keliY == 0)
            {
                orientationX = keliX;
                oriantationY = 4;
            }
            else if (keliY == 1)
            {
                orientationX = keliX;
                oriantationY = 5;
            }
             else if (keliY == 2)
            {
                orientationX = keliX;
                oriantationY = 6;
            }
             else if (keliY == 3)
            {
                orientationX = keliX;
                oriantationY = 4;
                cout << "Den xwraei edw." << endl;
                keliX = 9;
            }
             else if (keliY == 4)
            {
                orientationX = keliX;
                oriantationY = 0;
            }
            else if (keliY == 5)
            {
                orientationX = keliX;
                oriantationY = 1;
            }
             else if (keliY == 6)
            {
                orientationX = keliX;
                oriantationY = 2;
            }
        }
    }
    else if (prosanatolism == 1 )
    {
        if(keliX == 0)
        {
            if (keliY == 0)
            {
                oriantationY = keliY;
                orientationX = 4;
            }
            else if (keliY == 1)
            {
                oriantationY = keliY;
                orientationX = 4;
            }
            else if (keliY == 2)
            {
                oriantationY = keliY;
                orientationX = 4;
            }
            else if (keliY == 3)
            {
                oriantationY = keliY;
                orientationX = 4;
            }
            else if (keliY == 4)
            {
                oriantationY = keliY;
                orientationX = 4;
            }
            else if (keliY == 5)
            {
                oriantationY = keliY;
                orientationX = 4;
            }
            else if (keliY == 6)
            {
                oriantationY = keliY;
                orientationX = 4;
            }
        }
        else if(keliX == 1)
        {
            if (keliY == 0)
            {
                oriantationY = keliY;
                orientationX = 5;
            }
            else if (keliY == 1)
            {
                oriantationY = keliY;
                orientationX = 5;
            }
            else if (keliY == 2)
            {
                oriantationY = keliY;
                orientationX = 5;
            }
            else if (keliY == 3)
            {
                oriantationY = keliY;
                orientationX = 5;
            }
            else if (keliY == 4)
            {
                oriantationY = keliY;
                orientationX = 5;
            }
            else if (keliY == 5)
            {
                oriantationY = keliY;
                orientationX = 5;
            }
            else if (keliY == 6)
            {
                oriantationY = keliY;
                orientationX = 5;
            }
        }
        else if(keliX == 2)
        {
            if (keliY == 0)
            {
                oriantationY = keliY;
                orientationX = 6;
            }
            else if (keliY == 1)
            {
                oriantationY = keliY;
                orientationX = 6;
            }
            else if (keliY == 2)
            {
                oriantationY = keliY;
                orientationX = 6;
            }
            else if (keliY == 3)
            {
                oriantationY = keliY;
                orientationX = 6;
            }
            else if (keliY == 4)
            {
                oriantationY = keliY;
                orientationX = 6;
            }
            else if (keliY == 5)
            {
                oriantationY = keliY;
                orientationX = 6;
            }
            else if (keliY == 6)
            {
                oriantationY = keliY;
                orientationX = 6;
            }
        }
        else if(keliX == 3)
        {
            if (keliY == 0)
            {
                oriantationY = keliY;
                orientationX = 4;
                cout << "Den xwraei edw." << endl;
                keliX = 9;
            }
            else if (keliY == 1)
            {
                oriantationY = keliY;
                orientationX = 4;
                cout << "Den xwraei edw." << endl;
                keliX = 9;
            }
            else if (keliY == 2)
            {
                oriantationY = keliY;
                orientationX = 4;
                cout << "Den xwraei edw." << endl;
                keliX = 9;
            }
            else if (keliY == 3)
            {
                oriantationY = keliY;
                orientationX = 4;
                cout << "Den xwraei edw." << endl;
                keliX = 9;
            }
            else if (keliY == 4)
            {
                oriantationY = keliY;
                orientationX = 4;
                cout << "Den xwraei edw." << endl;
                keliX = 9;
            }
            else if (keliY == 5)
            {
                oriantationY = keliY;
                orientationX = 4;
                cout << "Den xwraei edw." << endl;
                keliX = 9;
            }
            else if (keliY == 6)
            {
                oriantationY = keliY;
                orientationX = 4;
                cout << "Den xwraei edw." << endl;
                keliX = 9;
            }
        }
        else if(keliX == 4)
        {
            if (keliY == 0)
            {
                oriantationY = keliY;
                orientationX = 0;
            }
            else if (keliY == 1)
            {
                oriantationY = keliY;
                orientationX = 0;
            }
            else if (keliY == 2)
            {
                oriantationY = keliY;
                orientationX = 0;
            }
            else if (keliY == 3)
            {
                oriantationY = keliY;
                orientationX = 0;
            }
            else if (keliY == 4)
            {
                oriantationY = keliY;
                orientationX = 0;
            }
            else if (keliY == 5)
            {
                oriantationY = keliY;
                orientationX = 0;
            }
            else if (keliY == 6)
            {
                oriantationY = keliY;
                orientationX = 0;
            }
        }
        else if(keliX == 5)
        {
            if (keliY == 0)
            {
                oriantationY = keliY;
                orientationX = 1;
            }
            else if (keliY == 1)
            {
                oriantationY = keliY;
                orientationX = 1;
            }
            else if (keliY == 2)
            {
                oriantationY = keliY;
                orientationX = 1;
            }
            else if (keliY == 3)
            {
                oriantationY = keliY;
                orientationX = 1;
            }
            else if (keliY == 4)
            {
                oriantationY = keliY;
                orientationX = 1;
            }
            else if (keliY == 5)
            {
                oriantationY = keliY;
                orientationX = 1;
            }
            else if (keliY == 6)
            {
                oriantationY = keliY;
                orientationX = 1;
            }
        }
        else if(keliX == 6)
        {
            if (keliY == 0)
            {
                oriantationY = keliY;
                orientationX = 2;
            }
            else if (keliY == 1)
            {
                oriantationY = keliY;
                orientationX = 2;
            }
            else if (keliY == 2)
            {
                oriantationY = keliY;
                orientationX = 2;
            }
            else if (keliY == 3)
            {
                oriantationY = keliY;
                orientationX = 2;
            }
            else if (keliY == 4)
            {
                oriantationY = keliY;
                orientationX = 2;
            }
            else if (keliY == 5)
            {
                oriantationY = keliY;
                orientationX = 2;
            }
            else if (keliY == 6)
            {
                oriantationY = keliY;
                orientationX = 2;
            }
        }
    }


    if(keliX == orientationX)
    {

        if (keliY > oriantationY)
        {
            for (int allYs = oriantationY; allYs <= keliY; allYs++)
            {
                if(a.boardPlay[keliX][allYs].getType() == 2)
                    noShipHere = 1;
            }
        }
        else if (oriantationY > keliY)
        {
            for (int allYs = keliY; allYs <= oriantationY; allYs++)
            {
                if(a.boardPlay[keliX][allYs].getType() == 2)
                    noShipHere = 1;
            }
        }

    }
    else if (keliY == oriantationY)
    {
        if(keliX > orientationX)
        {
            for (int allXs = orientationX; allXs <= keliX; allXs++)
            {
                if(a.boardPlay[allXs][keliY].getType() == 2)
                    noShipHere = 1;
            }
        }
        else if (orientationX > keliX)
        {
            for (int allXs = keliX; allXs <= orientationX; allXs++)
            {
                if(a.boardPlay[allXs][keliY].getType() == 2)
                    noShipHere = 1;
            }
        }


    }


    while(keliX < 0 || keliX > 6 || keliY < 0 || keliY > 6 || typeOfTileStarting != 1 || noShipHere == 1){
            noShipHere = 0;
        cout << "Edwses lathos suntetagmenes prospathise pali. " << endl;
        if (typeOfTileStarting == 2)
            cout << "Oooops another ship here." << endl;
    cin >> keliX >> keliY;
    typeOfTileStarting = a.boardPlay[keliX][keliY].getType();

    cout << "Twra dwse mou kai prosanatolismo. " << endl;
    cout << "Dwse mou '0' gia horizontal alliws '1' gia vertical prosanatolismo. " << endl;
    cin >> prosanatolism;
    while(prosanatolism < 0 || prosanatolism > 1){
        cout << "Edwses lathos prosanatolismo prospathise pali. " << endl;
        cin >> prosanatolism;
    }

    if (prosanatolism == 0)
    {
        if(keliX == 0)
        {
            if (keliY == 0)
            {
                orientationX = keliX;
                oriantationY = 4;
            }
            else if (keliY == 1)
            {
                orientationX = keliX;
                oriantationY = 5;
            }
             else if (keliY == 2)
            {
                orientationX = keliX;
                oriantationY = 6;
            }
             else if (keliY == 3)
            {
                orientationX = keliX;
                oriantationY = 4;
                cout << "Den xwraei edw." << endl;
                keliX = 9;
            }
             else if (keliY == 4)
            {
                orientationX = keliX;
                oriantationY = 0;
            }
            else if (keliY == 5)
            {
                orientationX = keliX;
                oriantationY = 1;
            }
             else if (keliY == 6)
            {
                orientationX = keliX;
                oriantationY = 2;
            }
        }
        else if (keliX == 1)
        {
            if (keliY == 0)
            {
                orientationX = keliX;
                oriantationY = 4;
            }
            else if (keliY == 1)
            {
                orientationX = keliX;
                oriantationY = 5;
            }
             else if (keliY == 2)
            {
                orientationX = keliX;
                oriantationY = 6;
            }
             else if (keliY == 3)
            {
                orientationX = keliX;
                oriantationY = 4;
                cout << "Den xwraei edw." << endl;
                keliX = 9;
            }
             else if (keliY == 4)
            {
                orientationX = keliX;
                oriantationY = 0;
            }
            else if (keliY == 5)
            {
                orientationX = keliX;
                oriantationY = 1;
            }
             else if (keliY == 6)
            {
                orientationX = keliX;
                oriantationY = 2;
            }
        }
        else if (keliX == 2)
        {
            if (keliY == 0)
            {
                orientationX = keliX;
                oriantationY = 4;
            }
            else if (keliY == 1)
            {
                orientationX = keliX;
                oriantationY = 5;
            }
             else if (keliY == 2)
            {
                orientationX = keliX;
                oriantationY = 6;
            }
             else if (keliY == 3)
            {
                orientationX = keliX;
                oriantationY = 4;
                cout << "Den xwraei edw." << endl;
                keliX = 9;
            }
             else if (keliY == 4)
            {
                orientationX = keliX;
                oriantationY = 0;
            }
            else if (keliY == 5)
            {
                orientationX = keliX;
                oriantationY = 1;
            }
             else if (keliY == 6)
            {
                orientationX = keliX;
                oriantationY = 2;
            }
        }
        else if (keliX == 3)
        {
            if (keliY == 0)
            {
                orientationX = keliX;
                oriantationY = 4;
            }
            else if (keliY == 1)
            {
                orientationX = keliX;
                oriantationY = 5;
            }
             else if (keliY == 2)
            {
                orientationX = keliX;
                oriantationY = 6;
            }
             else if (keliY == 3)
            {
                orientationX = keliX;
                oriantationY = 4;
                cout << "Den xwraei edw." << endl;
                keliX = 9;
            }
             else if (keliY == 4)
            {
                orientationX = keliX;
                oriantationY = 0;
            }
            else if (keliY == 5)
            {
                orientationX = keliX;
                oriantationY = 1;
            }
             else if (keliY == 6)
            {
                orientationX = keliX;
                oriantationY = 2;
            }
        }
        else if (keliX == 4)
        {
            if (keliY == 0)
            {
                orientationX = keliX;
                oriantationY = 4;
            }
            else if (keliY == 1)
            {
                orientationX = keliX;
                oriantationY = 5;
            }
             else if (keliY == 2)
            {
                orientationX = keliX;
                oriantationY = 6;
            }
             else if (keliY == 3)
            {
                orientationX = keliX;
                oriantationY = 4;
                cout << "Den xwraei edw." << endl;
                keliX = 9;
            }
             else if (keliY == 4)
            {
                orientationX = keliX;
                oriantationY = 0;
            }
            else if (keliY == 5)
            {
                orientationX = keliX;
                oriantationY = 1;
            }
             else if (keliY == 6)
            {
                orientationX = keliX;
                oriantationY = 2;
            }
        }
        else if (keliX == 5)
        {
            if (keliY == 0)
            {
                orientationX = keliX;
                oriantationY = 4;
            }
            else if (keliY == 1)
            {
                orientationX = keliX;
                oriantationY = 5;
            }
             else if (keliY == 2)
            {
                orientationX = keliX;
                oriantationY = 6;
            }
             else if (keliY == 3)
            {
                orientationX = keliX;
                oriantationY = 4;
                cout << "Den xwraei edw." << endl;
                keliX = 9;
            }
             else if (keliY == 4)
            {
                orientationX = keliX;
                oriantationY = 0;
            }
            else if (keliY == 5)
            {
                orientationX = keliX;
                oriantationY = 1;
            }
             else if (keliY == 6)
            {
                orientationX = keliX;
                oriantationY = 2;
            }
        }
        else if (keliX == 6)
        {
           if (keliY == 0)
            {
                orientationX = keliX;
                oriantationY = 4;
            }
            else if (keliY == 1)
            {
                orientationX = keliX;
                oriantationY = 5;
            }
             else if (keliY == 2)
            {
                orientationX = keliX;
                oriantationY = 6;
            }
             else if (keliY == 3)
            {
                orientationX = keliX;
                oriantationY = 4;
                cout << "Den xwraei edw." << endl;
                keliX = 9;
            }
             else if (keliY == 4)
            {
                orientationX = keliX;
                oriantationY = 0;
            }
            else if (keliY == 5)
            {
                orientationX = keliX;
                oriantationY = 1;
            }
             else if (keliY == 6)
            {
                orientationX = keliX;
                oriantationY = 2;
            }
        }
    }
    else if (prosanatolism == 1 )
    {
        if(keliX == 0)
        {
            if (keliY == 0)
            {
                oriantationY = keliY;
                orientationX = 4;
            }
            else if (keliY == 1)
            {
                oriantationY = keliY;
                orientationX = 4;
            }
            else if (keliY == 2)
            {
                oriantationY = keliY;
                orientationX = 4;
            }
            else if (keliY == 3)
            {
                oriantationY = keliY;
                orientationX = 4;
            }
            else if (keliY == 4)
            {
                oriantationY = keliY;
                orientationX = 4;
            }
            else if (keliY == 5)
            {
                oriantationY = keliY;
                orientationX = 4;
            }
            else if (keliY == 6)
            {
                oriantationY = keliY;
                orientationX = 4;
            }
        }
        else if(keliX == 1)
        {
            if (keliY == 0)
            {
                oriantationY = keliY;
                orientationX = 5;
            }
            else if (keliY == 1)
            {
                oriantationY = keliY;
                orientationX = 5;
            }
            else if (keliY == 2)
            {
                oriantationY = keliY;
                orientationX = 5;
            }
            else if (keliY == 3)
            {
                oriantationY = keliY;
                orientationX = 5;
            }
            else if (keliY == 4)
            {
                oriantationY = keliY;
                orientationX = 5;
            }
            else if (keliY == 5)
            {
                oriantationY = keliY;
                orientationX = 5;
            }
            else if (keliY == 6)
            {
                oriantationY = keliY;
                orientationX = 5;
            }
        }
        else if(keliX == 2)
        {
            if (keliY == 0)
            {
                oriantationY = keliY;
                orientationX = 6;
            }
            else if (keliY == 1)
            {
                oriantationY = keliY;
                orientationX = 6;
            }
            else if (keliY == 2)
            {
                oriantationY = keliY;
                orientationX = 6;
            }
            else if (keliY == 3)
            {
                oriantationY = keliY;
                orientationX = 6;
            }
            else if (keliY == 4)
            {
                oriantationY = keliY;
                orientationX = 6;
            }
            else if (keliY == 5)
            {
                oriantationY = keliY;
                orientationX = 6;
            }
            else if (keliY == 6)
            {
                oriantationY = keliY;
                orientationX = 6;
            }
        }
        else if(keliX == 3)
        {
            if (keliY == 0)
            {
                oriantationY = keliY;
                orientationX = 4;
                cout << "Den xwraei edw." << endl;
                keliX = 9;
            }
            else if (keliY == 1)
            {
                oriantationY = keliY;
                orientationX = 4;
                cout << "Den xwraei edw." << endl;
                keliX = 9;
            }
            else if (keliY == 2)
            {
                oriantationY = keliY;
                orientationX = 4;
                cout << "Den xwraei edw." << endl;
                keliX = 9;
            }
            else if (keliY == 3)
            {
                oriantationY = keliY;
                orientationX = 4;
                cout << "Den xwraei edw." << endl;
                keliX = 9;
            }
            else if (keliY == 4)
            {
                oriantationY = keliY;
                orientationX = 4;
                cout << "Den xwraei edw." << endl;
                keliX = 9;
            }
            else if (keliY == 5)
            {
                oriantationY = keliY;
                orientationX = 4;
                cout << "Den xwraei edw." << endl;
                keliX = 9;
            }
            else if (keliY == 6)
            {
                oriantationY = keliY;
                orientationX = 4;
                cout << "Den xwraei edw." << endl;
                keliX = 9;
            }
        }
        else if(keliX == 4)
        {
            if (keliY == 0)
            {
                oriantationY = keliY;
                orientationX = 0;
            }
            else if (keliY == 1)
            {
                oriantationY = keliY;
                orientationX = 0;
            }
            else if (keliY == 2)
            {
                oriantationY = keliY;
                orientationX = 0;
            }
            else if (keliY == 3)
            {
                oriantationY = keliY;
                orientationX = 0;
            }
            else if (keliY == 4)
            {
                oriantationY = keliY;
                orientationX = 0;
            }
            else if (keliY == 5)
            {
                oriantationY = keliY;
                orientationX = 0;
            }
            else if (keliY == 6)
            {
                oriantationY = keliY;
                orientationX = 0;
            }
        }
        else if(keliX == 5)
        {
            if (keliY == 0)
            {
                oriantationY = keliY;
                orientationX = 1;
            }
            else if (keliY == 1)
            {
                oriantationY = keliY;
                orientationX = 1;
            }
            else if (keliY == 2)
            {
                oriantationY = keliY;
                orientationX = 1;
            }
            else if (keliY == 3)
            {
                oriantationY = keliY;
                orientationX = 1;
            }
            else if (keliY == 4)
            {
                oriantationY = keliY;
                orientationX = 1;
            }
            else if (keliY == 5)
            {
                oriantationY = keliY;
                orientationX = 1;
            }
            else if (keliY == 6)
            {
                oriantationY = keliY;
                orientationX = 1;
            }
        }
        else if(keliX == 6)
        {
            if (keliY == 0)
            {
                oriantationY = keliY;
                orientationX = 2;
            }
            else if (keliY == 1)
            {
                oriantationY = keliY;
                orientationX = 2;
            }
            else if (keliY == 2)
            {
                oriantationY = keliY;
                orientationX = 2;
            }
            else if (keliY == 3)
            {
                oriantationY = keliY;
                orientationX = 2;
            }
            else if (keliY == 4)
            {
                oriantationY = keliY;
                orientationX = 2;
            }
            else if (keliY == 5)
            {
                oriantationY = keliY;
                orientationX = 2;
            }
            else if (keliY == 6)
            {
                oriantationY = keliY;
                orientationX = 2;
            }
        }
    }



    if(keliX == orientationX)
    {

        if (keliY > oriantationY)
        {
            for (int allYs = oriantationY; allYs <= keliY; allYs++)
            {
                if(a.boardPlay[keliX][allYs].getType() == 2)
                    noShipHere = 1;
            }
        }
        else if (oriantationY > keliY)
        {
            for (int allYs = keliY; allYs <= oriantationY; allYs++)
            {
                if(a.boardPlay[keliX][allYs].getType() == 2)
                    noShipHere = 1;
            }
        }

    }
    else if (keliY == oriantationY)
    {
        if(keliX > orientationX)
        {
            for (int allXs = orientationX; allXs <= keliX; allXs++)
            {
                if(a.boardPlay[allXs][keliY].getType() == 2)
                    noShipHere = 1;
            }
        }
        else if (orientationX > keliX)
        {
            for (int allXs = keliX; allXs <= orientationX; allXs++)
            {
                if(a.boardPlay[allXs][keliY].getType() == 2)
                    noShipHere = 1;
            }
        }


    }


    }


    cout << "KeliX: " << keliX << endl;
    cout << "Keliy: " << keliY << endl;
    cout << "OrientationX: " << orientationX << endl;
    cout << "OrientationY: " << oriantationY << endl;

    forthShip.placeShipAlone(keliX, keliY, orientationX, oriantationY, a.boardPlay, true);

    Battleship fifthShip;

    cout << "To pempto ploio einai to Battleship me 4 theseis." << endl;
    cout << "Dwse mou to KELI ENARKSHS (dld to x, y syntetagmenes). Prosoxh oi syntetagmenes prepei na einai mesa sta oria dld apo 0 ews 6 kai tpt allo." << endl;
    cin >> keliX >> keliY;
    typeOfTileStarting = a.boardPlay[keliX][keliY].getType();
    cout << "Twra dwse mou kai prosanatolismo. " << endl;
    cout << "Dwse mou '0' gia horizontal alliws '1' gia vertical prosanatolismo. " << endl;
    cin >> prosanatolism;
    while(prosanatolism < 0 || prosanatolism > 1){
        cout << "Edwses lathos prosanatolismo prospathise pali. " << endl;
        cin >> prosanatolism;
    }

    if (prosanatolism == 0)
    {
        if(keliX == 0)
        {
            if (keliY == 0)
            {
                orientationX = keliX;
                oriantationY = 3;
            }
            else if (keliY == 1)
            {
                orientationX = keliX;
                oriantationY = 4;
            }
             else if (keliY == 2)
            {
                orientationX = keliX;
                oriantationY = 5;
            }
             else if (keliY == 3)
            {
                orientationX = keliX;
                oriantationY = 6;
            }
             else if (keliY == 4)
            {
                orientationX = keliX;
                oriantationY = 1;
            }
            else if (keliY == 5)
            {
                orientationX = keliX;
                oriantationY = 2;
            }
             else if (keliY == 6)
            {
                orientationX = keliX;
                oriantationY = 3;
            }
        }
        else if (keliX == 1)
        {
            if (keliY == 0)
            {
                orientationX = keliX;
                oriantationY = 3;
            }
            else if (keliY == 1)
            {
                orientationX = keliX;
                oriantationY = 4;
            }
             else if (keliY == 2)
            {
                orientationX = keliX;
                oriantationY = 5;
            }
             else if (keliY == 3)
            {
                orientationX = keliX;
                oriantationY = 6;
            }
             else if (keliY == 4)
            {
                orientationX = keliX;
                oriantationY = 1;
            }
            else if (keliY == 5)
            {
                orientationX = keliX;
                oriantationY = 2;
            }
             else if (keliY == 6)
            {
                orientationX = keliX;
                oriantationY = 3;
            }
        }
        else if (keliX == 2)
        {
            if (keliY == 0)
            {
                orientationX = keliX;
                oriantationY = 3;
            }
            else if (keliY == 1)
            {
                orientationX = keliX;
                oriantationY = 4;
            }
             else if (keliY == 2)
            {
                orientationX = keliX;
                oriantationY = 5;
            }
             else if (keliY == 3)
            {
                orientationX = keliX;
                oriantationY = 6;
            }
             else if (keliY == 4)
            {
                orientationX = keliX;
                oriantationY = 1;
            }
            else if (keliY == 5)
            {
                orientationX = keliX;
                oriantationY = 2;
            }
             else if (keliY == 6)
            {
                orientationX = keliX;
                oriantationY = 3;
            }
        }
        else if (keliX == 3)
        {
            if (keliY == 0)
            {
                orientationX = keliX;
                oriantationY = 3;
            }
            else if (keliY == 1)
            {
                orientationX = keliX;
                oriantationY = 4;
            }
             else if (keliY == 2)
            {
                orientationX = keliX;
                oriantationY = 5;
            }
             else if (keliY == 3)
            {
                orientationX = keliX;
                oriantationY = 6;
            }
             else if (keliY == 4)
            {
                orientationX = keliX;
                oriantationY = 1;
            }
            else if (keliY == 5)
            {
                orientationX = keliX;
                oriantationY = 2;
            }
             else if (keliY == 6)
            {
                orientationX = keliX;
                oriantationY = 3;
            }
        }
        else if (keliX == 4)
        {
            if (keliY == 0)
            {
                orientationX = keliX;
                oriantationY = 3;
            }
            else if (keliY == 1)
            {
                orientationX = keliX;
                oriantationY = 4;
            }
             else if (keliY == 2)
            {
                orientationX = keliX;
                oriantationY = 5;
            }
             else if (keliY == 3)
            {
                orientationX = keliX;
                oriantationY = 6;
            }
             else if (keliY == 4)
            {
                orientationX = keliX;
                oriantationY = 1;
            }
            else if (keliY == 5)
            {
                orientationX = keliX;
                oriantationY = 2;
            }
             else if (keliY == 6)
            {
                orientationX = keliX;
                oriantationY = 3;
            }
        }
        else if (keliX == 5)
        {
            if (keliY == 0)
            {
                orientationX = keliX;
                oriantationY = 3;
            }
            else if (keliY == 1)
            {
                orientationX = keliX;
                oriantationY = 4;
            }
             else if (keliY == 2)
            {
                orientationX = keliX;
                oriantationY = 5;
            }
             else if (keliY == 3)
            {
                orientationX = keliX;
                oriantationY = 6;
            }
             else if (keliY == 4)
            {
                orientationX = keliX;
                oriantationY = 1;
            }
            else if (keliY == 5)
            {
                orientationX = keliX;
                oriantationY = 2;
            }
             else if (keliY == 6)
            {
                orientationX = keliX;
                oriantationY = 3;
            }
        }
        else if (keliX == 6)
        {
           if (keliY == 0)
            {
                orientationX = keliX;
                oriantationY = 3;
            }
            else if (keliY == 1)
            {
                orientationX = keliX;
                oriantationY = 4;
            }
             else if (keliY == 2)
            {
                orientationX = keliX;
                oriantationY = 5;
            }
             else if (keliY == 3)
            {
                orientationX = keliX;
                oriantationY = 6;
            }
             else if (keliY == 4)
            {
                orientationX = keliX;
                oriantationY = 1;
            }
            else if (keliY == 5)
            {
                orientationX = keliX;
                oriantationY = 2;
            }
             else if (keliY == 6)
            {
                orientationX = keliX;
                oriantationY = 3;
            }
        }
    }
    else if (prosanatolism == 1 )
    {
        if(keliX == 0)
        {
            if (keliY == 0)
            {
                oriantationY = keliY;
                orientationX = 3;
            }
            else if (keliY == 1)
            {
                oriantationY = keliY;
                orientationX = 3;
            }
            else if (keliY == 2)
            {
                oriantationY = keliY;
                orientationX = 3;
            }
            else if (keliY == 3)
            {
                oriantationY = keliY;
                orientationX = 3;
            }
            else if (keliY == 4)
            {
                oriantationY = keliY;
                orientationX = 3;
            }
            else if (keliY == 5)
            {
                oriantationY = keliY;
                orientationX = 3;
            }
            else if (keliY == 6)
            {
                oriantationY = keliY;
                orientationX = 3;
            }
        }
        else if(keliX == 1)
        {
            if (keliY == 0)
            {
                oriantationY = keliY;
                orientationX = 4;
            }
            else if (keliY == 1)
            {
                oriantationY = keliY;
                orientationX = 4;
            }
            else if (keliY == 2)
            {
                oriantationY = keliY;
                orientationX = 4;
            }
            else if (keliY == 3)
            {
                oriantationY = keliY;
                orientationX = 4;
            }
            else if (keliY == 4)
            {
                oriantationY = keliY;
                orientationX = 4;
            }
            else if (keliY == 5)
            {
                oriantationY = keliY;
                orientationX = 4;
            }
            else if (keliY == 6)
            {
                oriantationY = keliY;
                orientationX = 4;
            }
        }
        else if(keliX == 2)
        {
            if (keliY == 0)
            {
                oriantationY = keliY;
                orientationX = 5;
            }
            else if (keliY == 1)
            {
                oriantationY = keliY;
                orientationX = 5;
            }
            else if (keliY == 2)
            {
                oriantationY = keliY;
                orientationX = 5;
            }
            else if (keliY == 3)
            {
                oriantationY = keliY;
                orientationX = 5;
            }
            else if (keliY == 4)
            {
                oriantationY = keliY;
                orientationX = 5;
            }
            else if (keliY == 5)
            {
                oriantationY = keliY;
                orientationX = 5;
            }
            else if (keliY == 6)
            {
                oriantationY = keliY;
                orientationX = 5;
            }
        }
        else if(keliX == 3)
        {
            if (keliY == 0)
            {
                oriantationY = keliY;
                orientationX = 6;
            }
            else if (keliY == 1)
            {
                oriantationY = keliY;
                orientationX = 6;
            }
            else if (keliY == 2)
            {
                oriantationY = keliY;
                orientationX = 6;
            }
            else if (keliY == 3)
            {
                oriantationY = keliY;
                orientationX = 6;
            }
            else if (keliY == 4)
            {
                oriantationY = keliY;
                orientationX = 6;
            }
            else if (keliY == 5)
            {
                oriantationY = keliY;
                orientationX = 6;
            }
            else if (keliY == 6)
            {
                oriantationY = keliY;
                orientationX = 6;
            }
        }
        else if(keliX == 4)
        {
            if (keliY == 0)
            {
                oriantationY = keliY;
                orientationX = 1;
            }
            else if (keliY == 1)
            {
                oriantationY = keliY;
                orientationX = 1;
            }
            else if (keliY == 2)
            {
                oriantationY = keliY;
                orientationX = 1;
            }
            else if (keliY == 3)
            {
                oriantationY = keliY;
                orientationX = 1;
            }
            else if (keliY == 4)
            {
                oriantationY = keliY;
                orientationX = 1;
            }
            else if (keliY == 5)
            {
                oriantationY = keliY;
                orientationX = 1;
            }
            else if (keliY == 6)
            {
                oriantationY = keliY;
                orientationX = 1;
            }
        }
        else if(keliX == 5)
        {
            if (keliY == 0)
            {
                oriantationY = keliY;
                orientationX = 2;
            }
            else if (keliY == 1)
            {
                oriantationY = keliY;
                orientationX = 2;
            }
            else if (keliY == 2)
            {
                oriantationY = keliY;
                orientationX = 2;
            }
            else if (keliY == 3)
            {
                oriantationY = keliY;
                orientationX = 2;
            }
            else if (keliY == 4)
            {
                oriantationY = keliY;
                orientationX = 2;
            }
            else if (keliY == 5)
            {
                oriantationY = keliY;
                orientationX = 2;
            }
            else if (keliY == 6)
            {
                oriantationY = keliY;
                orientationX = 2;
            }
        }
        else if(keliX == 6)
        {
            if (keliY == 0)
            {
                oriantationY = keliY;
                orientationX = 3;
            }
            else if (keliY == 1)
            {
                oriantationY = keliY;
                orientationX = 3;
            }
            else if (keliY == 2)
            {
                oriantationY = keliY;
                orientationX = 3;
            }
            else if (keliY == 3)
            {
                oriantationY = keliY;
                orientationX = 3;
            }
            else if (keliY == 4)
            {
                oriantationY = keliY;
                orientationX = 3;
            }
            else if (keliY == 5)
            {
                oriantationY = keliY;
                orientationX = 3;
            }
            else if (keliY == 6)
            {
                oriantationY = keliY;
                orientationX = 3;
            }
        }
    }


    if(keliX == orientationX)
    {

        if (keliY > oriantationY)
        {
            for (int allYs = oriantationY; allYs <= keliY; allYs++)
            {
                if(a.boardPlay[keliX][allYs].getType() == 2)
                    noShipHere = 1;
            }
        }
        else if (oriantationY > keliY)
        {
            for (int allYs = keliY; allYs <= oriantationY; allYs++)
            {
                if(a.boardPlay[keliX][allYs].getType() == 2)
                    noShipHere = 1;
            }
        }

    }
    else if (keliY == oriantationY)
    {
        if(keliX > orientationX)
        {
            for (int allXs = orientationX; allXs <= keliX; allXs++)
            {
                if(a.boardPlay[allXs][keliY].getType() == 2)
                    noShipHere = 1;
            }
        }
        else if (orientationX > keliX)
        {
            for (int allXs = keliX; allXs <= orientationX; allXs++)
            {
                if(a.boardPlay[allXs][keliY].getType() == 2)
                    noShipHere = 1;
            }
        }


    }


    while(keliX < 0 || keliX > 6 || keliY < 0 || keliY > 6 || typeOfTileStarting != 1 || noShipHere == 1){
            noShipHere = 0;
        cout << "Edwses lathos suntetagmenes prospathise pali. " << endl;
        if (typeOfTileStarting == 2)
            cout << "Oooops another ship here." << endl;
    cin >> keliX >> keliY;
    typeOfTileStarting = a.boardPlay[keliX][keliY].getType();

    cout << "Twra dwse mou kai prosanatolismo. " << endl;
    cout << "Dwse mou '0' gia horizontal alliws '1' gia vertical prosanatolismo. " << endl;
    cin >> prosanatolism;
    while(prosanatolism < 0 || prosanatolism > 1){
        cout << "Edwses lathos prosanatolismo prospathise pali. " << endl;
        cin >> prosanatolism;
    }

    if (prosanatolism == 0)
    {
        if(keliX == 0)
        {
            if (keliY == 0)
            {
                orientationX = keliX;
                oriantationY = 3;
            }
            else if (keliY == 1)
            {
                orientationX = keliX;
                oriantationY = 4;
            }
             else if (keliY == 2)
            {
                orientationX = keliX;
                oriantationY = 5;
            }
             else if (keliY == 3)
            {
                orientationX = keliX;
                oriantationY = 6;
            }
             else if (keliY == 4)
            {
                orientationX = keliX;
                oriantationY = 1;
            }
            else if (keliY == 5)
            {
                orientationX = keliX;
                oriantationY = 2;
            }
             else if (keliY == 6)
            {
                orientationX = keliX;
                oriantationY = 3;
            }
        }
        else if (keliX == 1)
        {
            if (keliY == 0)
            {
                orientationX = keliX;
                oriantationY = 3;
            }
            else if (keliY == 1)
            {
                orientationX = keliX;
                oriantationY = 4;
            }
             else if (keliY == 2)
            {
                orientationX = keliX;
                oriantationY = 5;
            }
             else if (keliY == 3)
            {
                orientationX = keliX;
                oriantationY = 6;
            }
             else if (keliY == 4)
            {
                orientationX = keliX;
                oriantationY = 1;
            }
            else if (keliY == 5)
            {
                orientationX = keliX;
                oriantationY = 2;
            }
             else if (keliY == 6)
            {
                orientationX = keliX;
                oriantationY = 3;
            }
        }
        else if (keliX == 2)
        {
            if (keliY == 0)
            {
                orientationX = keliX;
                oriantationY = 3;
            }
            else if (keliY == 1)
            {
                orientationX = keliX;
                oriantationY = 4;
            }
             else if (keliY == 2)
            {
                orientationX = keliX;
                oriantationY = 5;
            }
             else if (keliY == 3)
            {
                orientationX = keliX;
                oriantationY = 6;
            }
             else if (keliY == 4)
            {
                orientationX = keliX;
                oriantationY = 1;
            }
            else if (keliY == 5)
            {
                orientationX = keliX;
                oriantationY = 2;
            }
             else if (keliY == 6)
            {
                orientationX = keliX;
                oriantationY = 3;
            }
        }
        else if (keliX == 3)
        {
            if (keliY == 0)
            {
                orientationX = keliX;
                oriantationY = 3;
            }
            else if (keliY == 1)
            {
                orientationX = keliX;
                oriantationY = 4;
            }
             else if (keliY == 2)
            {
                orientationX = keliX;
                oriantationY = 5;
            }
             else if (keliY == 3)
            {
                orientationX = keliX;
                oriantationY = 6;
            }
             else if (keliY == 4)
            {
                orientationX = keliX;
                oriantationY = 1;
            }
            else if (keliY == 5)
            {
                orientationX = keliX;
                oriantationY = 2;
            }
             else if (keliY == 6)
            {
                orientationX = keliX;
                oriantationY = 3;
            }
        }
        else if (keliX == 4)
        {
            if (keliY == 0)
            {
                orientationX = keliX;
                oriantationY = 3;
            }
            else if (keliY == 1)
            {
                orientationX = keliX;
                oriantationY = 4;
            }
             else if (keliY == 2)
            {
                orientationX = keliX;
                oriantationY = 5;
            }
             else if (keliY == 3)
            {
                orientationX = keliX;
                oriantationY = 6;
            }
             else if (keliY == 4)
            {
                orientationX = keliX;
                oriantationY = 1;
            }
            else if (keliY == 5)
            {
                orientationX = keliX;
                oriantationY = 2;
            }
             else if (keliY == 6)
            {
                orientationX = keliX;
                oriantationY = 3;
            }
        }
        else if (keliX == 5)
        {
            if (keliY == 0)
            {
                orientationX = keliX;
                oriantationY = 3;
            }
            else if (keliY == 1)
            {
                orientationX = keliX;
                oriantationY = 4;
            }
             else if (keliY == 2)
            {
                orientationX = keliX;
                oriantationY = 5;
            }
             else if (keliY == 3)
            {
                orientationX = keliX;
                oriantationY = 6;
            }
             else if (keliY == 4)
            {
                orientationX = keliX;
                oriantationY = 1;
            }
            else if (keliY == 5)
            {
                orientationX = keliX;
                oriantationY = 2;
            }
             else if (keliY == 6)
            {
                orientationX = keliX;
                oriantationY = 3;
            }
        }
        else if (keliX == 6)
        {
           if (keliY == 0)
            {
                orientationX = keliX;
                oriantationY = 3;
            }
            else if (keliY == 1)
            {
                orientationX = keliX;
                oriantationY = 4;
            }
             else if (keliY == 2)
            {
                orientationX = keliX;
                oriantationY = 5;
            }
             else if (keliY == 3)
            {
                orientationX = keliX;
                oriantationY = 6;
            }
             else if (keliY == 4)
            {
                orientationX = keliX;
                oriantationY = 1;
            }
            else if (keliY == 5)
            {
                orientationX = keliX;
                oriantationY = 2;
            }
             else if (keliY == 6)
            {
                orientationX = keliX;
                oriantationY = 3;
            }
        }
    }
    else if (prosanatolism == 1 )
    {
        if(keliX == 0)
        {
            if (keliY == 0)
            {
                oriantationY = keliY;
                orientationX = 3;
            }
            else if (keliY == 1)
            {
                oriantationY = keliY;
                orientationX = 3;
            }
            else if (keliY == 2)
            {
                oriantationY = keliY;
                orientationX = 3;
            }
            else if (keliY == 3)
            {
                oriantationY = keliY;
                orientationX = 3;
            }
            else if (keliY == 4)
            {
                oriantationY = keliY;
                orientationX = 3;
            }
            else if (keliY == 5)
            {
                oriantationY = keliY;
                orientationX = 3;
            }
            else if (keliY == 6)
            {
                oriantationY = keliY;
                orientationX = 3;
            }
        }
        else if(keliX == 1)
        {
            if (keliY == 0)
            {
                oriantationY = keliY;
                orientationX = 4;
            }
            else if (keliY == 1)
            {
                oriantationY = keliY;
                orientationX = 4;
            }
            else if (keliY == 2)
            {
                oriantationY = keliY;
                orientationX = 4;
            }
            else if (keliY == 3)
            {
                oriantationY = keliY;
                orientationX = 4;
            }
            else if (keliY == 4)
            {
                oriantationY = keliY;
                orientationX = 4;
            }
            else if (keliY == 5)
            {
                oriantationY = keliY;
                orientationX = 4;
            }
            else if (keliY == 6)
            {
                oriantationY = keliY;
                orientationX = 4;
            }
        }
        else if(keliX == 2)
        {
            if (keliY == 0)
            {
                oriantationY = keliY;
                orientationX = 5;
            }
            else if (keliY == 1)
            {
                oriantationY = keliY;
                orientationX = 5;
            }
            else if (keliY == 2)
            {
                oriantationY = keliY;
                orientationX = 5;
            }
            else if (keliY == 3)
            {
                oriantationY = keliY;
                orientationX = 5;
            }
            else if (keliY == 4)
            {
                oriantationY = keliY;
                orientationX = 5;
            }
            else if (keliY == 5)
            {
                oriantationY = keliY;
                orientationX = 5;
            }
            else if (keliY == 6)
            {
                oriantationY = keliY;
                orientationX = 5;
            }
        }
        else if(keliX == 3)
        {
            if (keliY == 0)
            {
                oriantationY = keliY;
                orientationX = 6;
            }
            else if (keliY == 1)
            {
                oriantationY = keliY;
                orientationX = 6;
            }
            else if (keliY == 2)
            {
                oriantationY = keliY;
                orientationX = 6;
            }
            else if (keliY == 3)
            {
                oriantationY = keliY;
                orientationX = 6;
            }
            else if (keliY == 4)
            {
                oriantationY = keliY;
                orientationX = 6;
            }
            else if (keliY == 5)
            {
                oriantationY = keliY;
                orientationX = 6;
            }
            else if (keliY == 6)
            {
                oriantationY = keliY;
                orientationX = 6;
            }
        }
        else if(keliX == 4)
        {
            if (keliY == 0)
            {
                oriantationY = keliY;
                orientationX = 1;
            }
            else if (keliY == 1)
            {
                oriantationY = keliY;
                orientationX = 1;
            }
            else if (keliY == 2)
            {
                oriantationY = keliY;
                orientationX = 1;
            }
            else if (keliY == 3)
            {
                oriantationY = keliY;
                orientationX = 1;
            }
            else if (keliY == 4)
            {
                oriantationY = keliY;
                orientationX = 1;
            }
            else if (keliY == 5)
            {
                oriantationY = keliY;
                orientationX = 1;
            }
            else if (keliY == 6)
            {
                oriantationY = keliY;
                orientationX = 1;
            }
        }
        else if(keliX == 5)
        {
            if (keliY == 0)
            {
                oriantationY = keliY;
                orientationX = 2;
            }
            else if (keliY == 1)
            {
                oriantationY = keliY;
                orientationX = 2;
            }
            else if (keliY == 2)
            {
                oriantationY = keliY;
                orientationX = 2;
            }
            else if (keliY == 3)
            {
                oriantationY = keliY;
                orientationX = 2;
            }
            else if (keliY == 4)
            {
                oriantationY = keliY;
                orientationX = 2;
            }
            else if (keliY == 5)
            {
                oriantationY = keliY;
                orientationX = 2;
            }
            else if (keliY == 6)
            {
                oriantationY = keliY;
                orientationX = 2;
            }
        }
        else if(keliX == 6)
        {
            if (keliY == 0)
            {
                oriantationY = keliY;
                orientationX = 3;
            }
            else if (keliY == 1)
            {
                oriantationY = keliY;
                orientationX = 3;
            }
            else if (keliY == 2)
            {
                oriantationY = keliY;
                orientationX = 3;
            }
            else if (keliY == 3)
            {
                oriantationY = keliY;
                orientationX = 3;
            }
            else if (keliY == 4)
            {
                oriantationY = keliY;
                orientationX = 3;
            }
            else if (keliY == 5)
            {
                oriantationY = keliY;
                orientationX = 3;
            }
            else if (keliY == 6)
            {
                oriantationY = keliY;
                orientationX = 3;
            }
        }
    }



    if(keliX == orientationX)
    {

        if (keliY > oriantationY)
        {
            for (int allYs = oriantationY; allYs <= keliY; allYs++)
            {
                if(a.boardPlay[keliX][allYs].getType() == 2)
                    noShipHere = 1;
            }
        }
        else if (oriantationY > keliY)
        {
            for (int allYs = keliY; allYs <= oriantationY; allYs++)
            {
                if(a.boardPlay[keliX][allYs].getType() == 2)
                    noShipHere = 1;
            }
        }

    }
    else if (keliY == oriantationY)
    {
        if(keliX > orientationX)
        {
            for (int allXs = orientationX; allXs <= keliX; allXs++)
            {
                if(a.boardPlay[allXs][keliY].getType() == 2)
                    noShipHere = 1;
            }
        }
        else if (orientationX > keliX)
        {
            for (int allXs = keliX; allXs <= orientationX; allXs++)
            {
                if(a.boardPlay[allXs][keliY].getType() == 2)
                    noShipHere = 1;
            }
        }


    }


    }


    cout << "KeliX: " << keliX << endl;
    cout << "Keliy: " << keliY << endl;
    cout << "OrientationX: " << orientationX << endl;
    cout << "OrientationY: " << oriantationY << endl;

    fifthShip.placeShipAlone(keliX, keliY, orientationX, oriantationY, a.boardPlay, true);

    for(int x = 0; x<7; x++){
        for(int y = 0; y<7; y++){
            boardPlay[x][y].setType(a.boardPlay[x][y].getType());
            //cout <<  a.boardPlay[x][y].getType();
        }
     }


//----------------------------------------------------------------------------------------------------------------------------------------------------
}

bool Board::allShipsSunk(Board a)
{
    int shipsStillAlive = 0;
    for(int x = 0; x<7; x++){
        for(int y = 0; y<7; y++){
            if(a.boardPlay[x][y].getType() == 2)
                shipsStillAlive++;
        }
     }

     cout << "Your ships alive: " << shipsStillAlive << endl;

     int shipsStillAliveOp = 0;
    for(int x = 0; x<7; x++){
        for(int y = 0; y<7; y++){
            if(a.boardPlayOpponent[x][y].getType() == 2)
                shipsStillAliveOp++;
        }
     }

     cout << "Opponent ships alive: " << shipsStillAliveOp << endl;

     if(shipsStillAlive == 0 || shipsStillAliveOp == 0){
            if(shipsStillAlive == 0){
            cout << "Opponent winner! " << endl;
            return 1;
            }
            else{
            cout << "You are the winner! " << endl;
            return 1;
            }
        exit(0);

            }
            return 0;
}


