#ifndef ROOM_H_INCLUDED
#define ROOM_H_INCLUDED

#include <string>
using namespace std;
/*
The Room class describes individual rooms in the game.
A room has a name, a description, a location ID,
and a series of exits which point to other rooms.
*/
class Room
{
public:
    Room();                    // default constructor
    Room(string, string, int); // name and description and locationID
    string printInfo();
    void printInstructions();

    string name;
    string description;
    int locationID;

    // exits
    Room* north;
    Room* south;
    Room* east;
    Room* west;
};

#endif // ROOM_H_INCLUDED
