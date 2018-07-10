#include <iostream>
#include "Tile.h"
#include "Ship.h"
#include "Board.h"
#include "Player.h"
using namespace std;

Player::Player(){}
Player::~Player(){}

void Player::placeAllShipsAlone(Board a, Board *z, int x)
{
    a.placeAllShipsAlone(a,x);
    //a.drawboards(a);
    for(int x = 0; x<7; x++){
        for(int y = 0; y<7; y++){
            z->boardPlay[x][y].setType(a.boardPlay[x][y].getType());
        }
     }
//-----------------------------------------------------------------------------------------------
}

void Player::placeAllShips(Board a, Board *z, int x)
{
    //pairnei parametro x gia na doume an exoume paikth h upologisth
    if(x == 0){
    a.placeAllShips(a, x);
    for(int x = 0; x<7; x++){
        for(int y = 0; y<7; y++){
            z->boardPlay[x][y].setType(a.boardPlay[x][y].getType());
            //cout <<"asdasdasd" << endl;

            //cout <<  a.boardPlay[x][y].getType();
        }
     }
    }
    else if (x == 1)
    {
        a.placeAllShips(a, x);
    for(int x = 0; x<7; x++){
        for(int y = 0; y<7; y++){
            z->boardPlayOpponent[x][y].setType(a.boardPlayOpponent[x][y].getType());
            //cout <<  a.boardPlayOpponent[x][y].getType();
        }
     }
    }

}

void Player::fire(Board a, Board *boa, int z, int k, int player)
{
    if(player == 0){



    int x,y;
    x = z;
    y = k;

    sumFires++;
    cout <<  a.boardPlayOpponent[x][y].getType() << endl << endl;
    if(a.boardPlayOpponent[x][y].getType() == 1){
         a.boardPlayOpponent[x][y].setType(4);
         boa->boardPlayOpponent[x][y].setType(a.boardPlayOpponent[x][y].getType());
        sumMisses++;}
    else if(a.boardPlayOpponent[x][y].getType() == 2){
        a.boardPlayOpponent[x][y].setType(3);
         boa->boardPlayOpponent[x][y].setType(a.boardPlayOpponent[x][y].getType());
        sumSuccessfulFires++;}
     else if(a.boardPlayOpponent[x][y].getType() == 3){
            repeats++;
        sumAlreadyHit++;}
    else if(a.boardPlayOpponent[x][y].getType() == 4){
        repeats++;
        sumAlreadyMisses++;}
    }
    else if( player == 1)
    {


    int x,y;
    x = z;
    y = k;

    sumFires++;
    cout <<  a.boardPlay[x][y].getType() << endl << endl;
    if(a.boardPlay[x][y].getType() == 1){
             a.boardPlay[x][y].setType(4);
         boa->boardPlay[x][y].setType(a.boardPlay[x][y].getType());
        sumMisses++;}
    else if(a.boardPlay[x][y].getType() == 2){
            a.boardPlay[x][y].setType(3);
         boa->boardPlay[x][y].setType(a.boardPlay[x][y].getType());
        sumSuccessfulFires++;}
    else if(a.boardPlay[x][y].getType() == 3){
            repeats++;
        sumAlreadyHit++;}
    else if(a.boardPlay[x][y].getType() == 4){
        repeats++;
        sumAlreadyMisses++;}
    }

}

void Player::getStats()
{
     cout << "Fires: " << sumFires << endl;
    cout << "Hits: " << sumSuccessfulFires << endl;
    cout << "Misses: " << sumMisses << endl;
    cout << "Already hits: " << sumAlreadyHit << endl;
    cout << "Already misses: " << sumAlreadyMisses << endl;
    cout << "Repeats: " << repeats << endl;
}


