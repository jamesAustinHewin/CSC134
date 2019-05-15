#include "room.h"
#include <iostream>
using namespace std;


Room::Room() {
    // default constructor -- be sure
    // to set name and description later
    // if you use this
    name = "Room";
    description = "A featureless room.";
    locationID = -1;

    // null pointer (zero) exits don't lead anywhere
    north = 0;
    south = 0;
    east = 0;
    west = 0;
}

Room::Room(string name, string description, int locationID) {

    this->name = name;
    this->description = description;
    this->locationID = locationID;

    north = 0;
    south = 0;
    east = 0;
    west = 0;
}

string Room::printInfo() {
    // a pretty-printed string listing of name and description.
    // will later include things like exits and items present.

    // note the next few lines are all one line of code
    // that doesn't end until the semicolon
    string endl = "\n";

    string output = name + endl
                    + description + endl;

    output += "Exits:  ";

    if(north != 0) {
        output += "north  ";
    }

    if(south != 0) {
        output += "south  ";
    }

    if(east != 0) {
        output += "east  ";
    }

    if(west != 0) {
        output += "west  ";
    }
    return output;

}

void Room::printInstructions() {
    cout << "You may use the score command or quit command in ANY room" << endl;
    switch( locationID ) {

        case 0:
            cout << endl;
            cout << "You're in the BATHROOM:" << endl;
            cout << "Valid Commands are (in sequence):" << endl;
            cout << "get toothbrush" << endl;
            cout << "get toothpaste" << endl;
            cout << "drop toothpaste" << endl;
            cout << "brush teeth" << endl;
            cout << "drop toothbrush" << endl;
            cout << "take shower" << endl;
            cout << "go <direction> where <direction> = south" << endl;
            cout << "score" << endl;
            cout << "quit" << endl;
            break;

        case 1:
            cout << endl;
            cout << "You're in the BEDROOM:" << endl;
            cout << "Valid Commands are (in sequence):" << endl;
            cout << "turnOn alarmClock" << endl;
            cout << "turnOn ceilingFan" << endl;
            cout << "set alarmClock" << endl;
            cout << "turnOff alarmClock" << endl;
            cout << "turnOff ceilingFan" << endl;
            cout << "go <direction> where <direction> = east" << endl;
            cout << "score" << endl;
            cout << "quit" << endl;
            break;

        case 2:
            cout << endl;
            cout << "You're in the LIVINGROOM:" << endl;
            cout << "Valid Commands are (in sequence):" << endl;
            cout << "turnOn television" << endl;
            cout << "turnOff television" << endl;
            cout << "go <direction> where <direction> = south or east" << endl;
            cout << "score" << endl;
            cout << "quit" << endl;
            break;

        case 3:
            cout << endl;
            cout << "You're in the KITCHEN:" << endl;
            cout << "Valid Commands are (in sequence):" << endl;
            cout << "bake <food>" << endl;
            cout << "go <direction> where <direction> = west" << endl;
            cout << "score" << endl;
            cout << "quit" << endl;
            break;

       case 4:
            cout << endl;
            cout << "You're in the PATIO:" << endl;
            cout << "Valid Commands are (in sequence):" << endl;
            cout << "enjoy <patio>" << endl;
            cout << "go <direction> where <direction> = north" << endl;
            cout << "score" << endl;
            cout << "quit" << endl;
            break;

       default:
            break;
    }

}
