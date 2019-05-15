#include <iostream>
#include "game.h"

using namespace std;

void printSummary();


int main()
{
    printSummary();

    // the primary logic of the game itself is in Game.
    Game g;
    g.startGame();

    // main game loop
    while (g.isRunning() == true)
    {
        g.doNextTurn();
    }
    g.gameOver();

    cout << endl << "You have scored " << g.getScore() << " point(s) out of 7 total points" << endl;
    return 0;
}

void printSummary()
{
    cout << "******************************************************************************************" << endl;
    cout << "Layout of the Rooms:" << endl << endl;
    cout << "BATHROOM" << endl;
    cout << "|" << endl;
    cout << "|" << endl;
    cout << "|" << endl;
    cout << "|" << endl;
    cout << "BEDROOM" << "---------------------" << "LIVINGROOM" << "--------------------------" << "KITCHEN" << endl;
    cout << "                            |" << endl;
    cout << "                            |" << endl;
    cout << "                            |" << endl;
    cout << "                            |" << endl;
    cout << "                            PATIO" << endl << endl;
    cout << "Player begins in BATHROOM; player should brush teeth and take shower to earn 2 points." << endl << endl;
    cout << "Player proceeds to BEDROOM by going SOUTH.  Time for bed.  Player should turn on the" << endl;
    cout << "alarm clock and ceiling fan and then set the alarm clock." << endl;
    cout << "In the morning, player turns off alarm clock when beeping and turns off ceiling fan." << endl;
    cout << "2 more points, you know, conserving energy." << endl << endl;
    cout << "Player proceeds to LIVINGROOM by going EAST.  Get the morning news by turning on the TV" << endl;
    cout << "for a few minutes; then turn off the TV to earn 1 point.  More conservation of energy." << endl << endl;
    cout << "Player proceeds to KITCHEN by going EAST.  Time to bake some food for breakfast!" << endl;
    cout << "You know the drill; eat a nutritious breakfast to earn 1 point." << endl << endl;
    cout << "Player proceeds to LIVINGROOM by going WEST." << endl << endl;
    cout << "Player proceeds to PATIO by going SOUTH.  It's raining outside and player can sit and relax and" << endl;
    cout << "read while listening to the rain fall and enjoying the cool breeze.  Yep, 1 more point!" << endl << endl;







    cout << "******************************************************************************************" << endl;
    cout << "******************************************************************************************" << endl << endl;
    cout << "Welcome to this Game!" << endl;
    cout << "Game consists of 5 rooms (BATHROOM, BEDROOM, LIVINGROOM, KITCHEN, PATIO)" << endl;
    cout << "You, the player, may move from room to room, and perform certain tasks within each room" << endl;
    cout << "Throughout the game, you will be provided with information as you enter each room" << endl << endl;
    cout << "Brushing Teeth - 1 pt" << endl;
    cout << "Taking Shower - 1 pt" << endl;
    cout << "Turn Off Ceiling Fan - 1 pt" << endl;
    cout << "Turn Off Alarm Clock - 1 pt" << endl;
    cout << "Turn Off TV - 1 pt" << endl;
    cout << "Baked Food in Oven - 1 pt" << endl;
    cout << "Enjoyed Patio (Reading while listening to rain) - 1 pt" << endl;

    cout << "******************************************************************************************" << endl << endl;
}
