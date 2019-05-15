#ifndef GAME_H_INCLUDED
#define GAME_H_INCLUDED

#include <iostream>
#include <vector>
#include <string>

#include "constants.h"
#include "room.h"
#include "player.h"
#include "item.h"

using namespace std;



class Game
{
    // the Game class holds all the information
    // the game needs to run.

private:
    vector <Room*> rooms;
    Player player;
    int score;
    bool gameIsRunning;

    bool brushedTeeth;
    bool tookShower;
    bool turnedOffFan;

    bool turnedOffAlarmClock;
    bool turnedOffTV;
    bool bakedFood;

    bool enjoyedPatio;

    // holds all items
    ItemList itemList;


    // player commands
    // these are called from doNextTurn()
    void commandGo(string);
    void commandLook();
    void commandScore();
    void commandRestart();
    // item commands
    void commandExamine(string);
    void commandInventory();
    void commandGet(string);
    void commandDrop(string);
    void commandBrush(string);
    void commandTake(string);
    void commandTurnOn(string);
    void commandTurnOff(string);
    void commandSet(string);
    void commandBake(string);
    void commandEnjoy(string);
public:
    Game();
    ~Game();
    void startGame(); // set up the game
    void gameOver();  // end message and cleanup
    bool isRunning(); // tells us if there is to be a next turn
    void doNextTurn(); // get user input and process it

    int getScore();





};


#endif // GAME_H_INCLUDED
