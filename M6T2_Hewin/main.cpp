#include <iostream>
#include <vector>
#include <string>

#include "room.h"
#define NUM_ROOMS 5

using namespace std;

int main()
{
    string names[] = {"BathRoom", "BedRoom", "LivingRoom", "Kitchen", "Patio"};

    string descriptions[] = {"This is the BathRoom",
                             "This is the BedRoom",
                             "This is the LivingRoom",
                             "This is the Kitchen",
                             "This is the Patio"};

    vector<Room*> rooms(NUM_ROOMS);

    Room* playerLoc;


    for (int i=0; i < NUM_ROOMS; i++) {
        rooms[i] = new Room();
        rooms[i]->name = names[i];
        rooms[i]->description = descriptions[i];
    }

    rooms[0]-> south = rooms[1];

    rooms[1]-> north = rooms[0];
    rooms[1]-> east = rooms[2];

    rooms[2]-> west = rooms[1];
    rooms[2]-> south = rooms[4];
    rooms[2]-> east = rooms[3];

    rooms[3]-> west = rooms[2];

    rooms[4]-> north = rooms[2];

    // list all rooms
    for (int i=0; i < NUM_ROOMS; i++) {
        cout << "Next room:" << endl;
        cout << rooms[i]->printInfo() << endl << endl;
    }

    // Patio to LivingRoom to Patio
    playerLoc = rooms[4];
    cout << playerLoc->printInfo() << endl;

    playerLoc = rooms[4]->north;
    cout << playerLoc->printInfo() << endl;

    playerLoc = rooms[2]->south;
    cout << playerLoc->printInfo() << endl;
    return 0;
}
