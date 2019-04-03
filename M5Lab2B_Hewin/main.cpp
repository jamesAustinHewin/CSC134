#include <iostream>

using namespace std;

/** Number of Rooms */
const int NUMBER_OF_ROOMS = 5;

int main()
{
    /** Names of Rooms */
    string names[NUMBER_OF_ROOMS];
    /** Descriptions of Rooms */
    string descriptions[NUMBER_OF_ROOMS];
    /** Room exits */
    string exits[NUMBER_OF_ROOMS];

    names[0] = "bathroom";               // Bathroom => Room 0
    names[1] = "bedroom";                // Bedroom => Room 1
    names[2] = "livingroom";             // LivingRoom => Room 2
    names[3] = "kitchen";                // Kitchen => Room 3
    names[4] = "patio";                  // Patio => Room 4

    descriptions[0] = "This is the bathroom";     // Bathroom => Room 0
    descriptions[1] = "This is the bedroom";      // Bedroom => Room 1
    descriptions[2] = "This is the livingroom";   // LivingRoom => Room 2
    descriptions[3] = "This is the kitchen";      // Kitchen => Room 3
    descriptions[4] = "This is the patio";        // Patio => Room 4

    exits[0] = "s";
    exits[1] = "ne";
    exits[2] = "wse";
    exits[3] = "w";
    exits[4] = "n";

    cout << "Room" << "\t\t" << "Description" << "\t\t\t" << "Exits" << endl;
    cout << "******************************************************************" << endl;
    cout << names[0] << "\t" << descriptions[0] << "\t\t" << exits[0] << endl << endl;
    cout << names[1] << "\t\t" << descriptions[1] << "\t\t" << exits[1] << endl << endl;
    cout << names[2] << "\t" << descriptions[2] << "\t\t" << exits[2] << endl << endl;
    cout << names[3] << "\t\t" << descriptions[3] << "\t\t" << exits[3] << endl << endl;
    cout << names[4] << "\t\t" << descriptions[4] << "\t\t" << exits[4] << endl << endl;
    cout << "******************************************************************";
    return 0;
}
