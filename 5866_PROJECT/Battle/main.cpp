#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <ctime>
#include "Tile.h"
#include "Ship.h"
#include "Board.h"
#include "Destroyer.h"
#include "Battleship.h"
#include "Cruiser.h"
#include "Player.h"
using namespace std;

int *getInput();
int *getRandInput();
char getOrienation();
bool randomPlace();

int main()
{
    int a, playerPlacement;
    Board theBoard;

    Player you;
    Player computer;

    cout << "Player do you want to place your ships alone? 1 for NO, 0 for Yes." << endl;
    cin >> playerPlacement;
    if(playerPlacement == 1){
    you.placeAllShips(theBoard, &theBoard, 0);
    }
    else if (playerPlacement == 0){
        you.placeAllShipsAlone(theBoard, &theBoard, 0);
    }



    computer.placeAllShips(theBoard, &theBoard, 1);
    theBoard.drawboards(theBoard);

    bool sunkShips = theBoard.allShipsSunk(theBoard);
    for(int x =0; x <=2; x++)
    {
        if(sunkShips == 1)
            exit(0);
        int *manualInput = getInput();
        int aa,bb;
        aa =  manualInput[0];
        bb =  manualInput[1];
        cout << "The numbers that you gave are: " << manualInput[0] << manualInput[1] << endl;
        you.fire(theBoard, &theBoard,  aa, bb, 0);


        int *autoInput = getRandInput();
        int cc, dd;
        cc =  autoInput[0];
        dd =  autoInput[1];
        cout << "The numbers that you gave are: " << autoInput[0] << autoInput[1] << endl;
        computer.fire(theBoard, &theBoard, cc, dd, 1);


        sunkShips = theBoard.allShipsSunk(theBoard);
        theBoard.drawboards(theBoard);
    }
    sunkShips = theBoard.allShipsSunk(theBoard);

cout << "Your stats: " << endl;
you.getStats();

cout << "Opponent stats: " << endl;
computer.getStats();


    return 0;
}

int *getInput()
{
    int firstInput, secondInput;
    int *allInput = new int[2];
    cout << "Dwse mou 2 times xwrismenes me keno gia na parw syntetagmenes kai na einai entws oriwn dld to x,y na einai apo 0 ews 4. " << endl;
    cin >> firstInput >> secondInput;

    while(firstInput < 0 || firstInput > 6 || secondInput < 0 || secondInput > 6 )
    {
        cout << "Edwses lathos times, prospathise pali" << endl;
        cout << "Dwse mou 2 times xwrismenes me keno gia na parw syntetagmenes kai na einai entws oriwn dld to x,y na einai apo 0 ews 4. " << endl;
        cin >> firstInput >> secondInput;
    }

    allInput[0] = firstInput;
    allInput[1] = secondInput;

        return allInput;
}

int *getRandInput()
{
    int firstInput, secondInput;
    int *allInput = new int[2];

    allInput[0] = rand() % 6;
    allInput[1] = rand() % 6;

    return allInput;
}

char getOrienation()
{
    char readLetter;
    cout << "Dwse mou H-Orientation.Horizontal alliws dwse mou V-Orientation.Vertical. " << endl;
    cin >> readLetter;

    return readLetter;
}

bool randomPlace()
{
    char readLetter;
    cout << "Give me a letter Y-true, or N-false. " << endl;
    cin >> readLetter;

    if (readLetter == 'Y' || readLetter == 'y')
        return true;
    else
        return false;
}
