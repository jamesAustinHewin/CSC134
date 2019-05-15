#include "game.h"

Game::Game()
{
    // create the game object
    gameIsRunning = false; // not ready to play until we start game
    brushedTeeth = false;
    tookShower = false;
    turnedOffFan = false;

    turnedOffAlarmClock = false;
    turnedOffTV = false;
    bakedFood = false;

    enjoyedPatio = false;

    vector<Room*> rooms(NUM_ROOMS);
    this->rooms = rooms;

}

Game::~Game()
{
    // destructor -- clean up any heap memory
}

void Game::startGame()
{


    cout << "Starting game" << endl;
    gameIsRunning = true;
    score = 0;
    // populate the room list
        string names[] = {"BathRoom","BedRoom","LivingRoom","Kitchen","Patio"};
        string descriptions[] = {"This is the BathRoom - has toothbrush and toothpaste",
                             "This is the BedRoom - has ceiling fan and alarm clock",
                             "This is the LivingRoom - has television",
                             "This is the Kitchen - has refrigerator and oven/stove",
                             "This is the Patio - it's raining outside!!!"};

    // totally optional but helps
    const int BATHROOM = 0;
    const int BEDROOM = 1;
    const int LIVINGROOM = 2;
    const int KITCHEN = 3;
    const int PATIO = 4;

    int locationIDs[] = {BATHROOM, BEDROOM, LIVINGROOM, KITCHEN, PATIO};

    // example of room creation

    for (int i = 0; i < NUM_ROOMS; i++) {
        rooms[i] = new Room(names[i], descriptions[i], locationIDs[i]);
    }

    // connect the rooms together
    rooms[BATHROOM]->south = rooms[BEDROOM];

    rooms[BEDROOM]->north = rooms[BATHROOM];
    rooms[BEDROOM]->east = rooms[LIVINGROOM];

    rooms[LIVINGROOM]->south = rooms[PATIO];
    rooms[LIVINGROOM]->east = rooms[KITCHEN];
    rooms[LIVINGROOM]->west = rooms[BEDROOM];

    rooms[KITCHEN]->west = rooms[LIVINGROOM];

    rooms[PATIO]->north = rooms[LIVINGROOM];

    // put player in first room
    player.location = rooms[BATHROOM];


    Item toothbrush = Item("toothbrush", "This is my toothbrush", BATHROOM);
    Item toothpaste = Item("toothpaste", "This is my toothpaste", BATHROOM);
    itemList.add(toothbrush);
    itemList.add(toothpaste);

    Item ceilingfan = Item("ceilingfan", "Ceiling Fan in BEDROOM", BEDROOM);
    Item alarmclock = Item("alarmclock", "Alarm Clock in BEDROOM", BEDROOM);
    itemList.add(ceilingfan);
    itemList.add(alarmclock);

    Item television = Item("TV", "Television in LIVINGROOM", LIVINGROOM);
    itemList.add(television);

    Item refrigerator = Item("refrigerator", "Refrigerator in KITCHEN", KITCHEN);
    Item oven_stove = Item("oven_stove", "OvenStove in KITCHEN", KITCHEN);
    itemList.add(refrigerator);
    itemList.add(oven_stove);

    // tell player where they are
    commandLook();
    player.location->printInstructions();
}


void Game::gameOver()
{
    cout << "***GAME OVER***" << endl;
    gameIsRunning = false;
}

bool Game::isRunning()
{
    return gameIsRunning;
}

int Game::getScore() {
    return score;
}

void Game::doNextTurn()
{
    // take user input
    cout << "> ";
    string verb = "";
    string noun = "";
    cin >> verb;
    if (verb == "go") {
        cin >> noun;
        commandGo(noun);
    }
    else if (verb == "quit") {
        gameIsRunning = false;
        cout << "Quitting" << endl;
    }
    else if (verb == "look") {
        //cout << "Looking" << endl;
        commandLook();
    }
    else if (verb == "score") {
        commandScore();
    }
    else if (verb == "examine") {
        cin >> noun;
        commandExamine(noun);
    }
    else if (verb == "inventory" or verb == "i") {
        commandInventory();
    }
    else if (verb == "get") {
        cin >> noun;
        commandGet(noun);
    }
    else if (verb == "drop") {
        cin >> noun;
        commandDrop(noun);
    }
    else if (verb == "brush") {
        cin >> noun;
        commandBrush(noun);
    }
    else if (verb == "take") {
        cin >> noun;
        commandTake(noun);
    }
    else if (verb == "set") {
        cin >> noun;
        commandSet(noun);
    }
    else if (verb == "turnOn") {
        cin >> noun;
        commandTurnOn(noun);
    }
    else if (verb == "turnOff") {
        cin >> noun;
        commandTurnOff(noun);
    }

    else if (verb == "bake") {
        cin >> noun;
        commandBake(noun);
    }
    else if (verb == "enjoy") {
        cin >> noun;
        commandEnjoy(noun);
    }
    else {
        cout << "I don't understand the word \"" << verb << "\". You can type help." << endl;
    }



}

// item commands: Examine, Get, Drop
void Game::commandExamine(string noun) {
    //cout << "TODO: implement examine" << endl;
    if (itemList.isItemHere(noun, player.location->locationID)) {

        // TODO: print the description of that item
        cout << itemList.getItemDescription(noun) << endl;
        cout << "It's on the floor here." << endl;
    }
    else if (itemList.isItemHere(noun, INVENTORY))
    {

        // print the description of that item
        cout << itemList.getItemDescription(noun) << endl;
        cout << "You're carrying that." << endl;
    }
    else
    {
        cout << "That is not here." << endl;
    }
}

void Game::commandInventory() {
    // list all items the player is carrying
    cout << "You check your belongings." << endl;
    itemList.printItemsInLocation(INVENTORY);
}

void Game::commandGet(string noun) {
    //cout << "TODO: implement get" << endl;
    if (itemList.isItemHere(noun, player.location->locationID)){
        // item is here
        cout << "Done." << endl;
        // change the item's locationID to INVENTORY
        itemList.updateLocation(noun, INVENTORY);
    }
    else if (itemList.isItemHere(noun, INVENTORY)){
        cout << "You're already carrying the " << noun << endl;
    }
    else {
        cout << "The " << noun << " is not here." << endl;
    }

}
void Game::commandDrop(string noun) {

    // if the item's location id is INVENTORY
    // change it to the current room
    // TODO: Check that the action is possible!

    cout << "Dropped." << endl;
    itemList.updateLocation(noun,player.location->locationID);
}

void Game::commandBrush(string noun) {

    cout << "Brushing Teeth." << endl;
    if(!brushedTeeth) {
        score++;
        brushedTeeth = true;
    }
}

void Game::commandTake(string noun) {

    cout << "Taking Shower." << endl;
    if(!tookShower) {
        score++;
        tookShower = true;
    }
}
void Game::commandSet(string noun) {

    cout << "Alarm Clock Set." << endl;
}

void Game::commandTurnOn(string noun) {

    if(noun == "alarmClock") {
        cout << "Alarm Clock Turned On" << endl;
    }
    else if(noun == "ceilingFan") {
        cout << "Ceiling Fan Turned On" << endl;
    }
    else {
        cout << "TV Turned On" << endl;
    }
}

void Game::commandTurnOff(string noun) {

    if(noun == "alarmClock") {
        cout << "Alarm Clock Turned Off" << endl;
        if(!turnedOffAlarmClock) {
            turnedOffAlarmClock = true;
            score++;
        }
    }
    else if(noun == "ceilingFan") {
        cout << "Ceiling Fan Turned Off" << endl;
        if(!turnedOffFan) {
            turnedOffFan = true;
            score++;
        }
    }
    else {
        cout << "TV Turned Off" << endl;
        if(!turnedOffTV) {
            turnedOffTV = true;
            score++;
        }
    }
}

void Game::commandBake(string noun) {

    cout << "Baking " << noun <<" in the oven" << endl;
    if(!bakedFood) {
        score++;
        bakedFood = true;
    }
}void Game::commandEnjoy(string noun) {

    cout << "Enjoying " << noun << endl;
    if(!enjoyedPatio) {
        score++;
        enjoyedPatio = true;
    }
}


void Game::commandGo(string direction) {

    // by default we are "verbose"
    // which means look after every move
    bool verbose = true;
    bool justMoved = false;
    bool illegalMove = false;

    // cout << "Trying to go: " << direction << endl;
    if (direction == "east") {
        if (player.location->east == 0) {
            illegalMove = true;
        }
        else {
            player.location = player.location->east;
            justMoved = true;
        }
    }

    else if (direction == "west")  {
        if (player.location->west == 0) {
            illegalMove = true;
        }
        else {
            player.location = player.location->west;
            justMoved = true;
        }
    }

    else if (direction == "north")  {
        if (player.location->north == 0) {
            illegalMove = true;
        }
        else {
            player.location = player.location->north;
            justMoved = true;
        }
    }

    else if (direction == "south")  {
        if (player.location->south == 0) {
            illegalMove = true;
        }
        else {
            player.location = player.location->south;
            justMoved = true;
        }
    }

    else {
        cout << "I don't know that direction" << endl;
    }

    // tell the player if the move was illegal
    if (illegalMove == true) {
        cout << "You can't go " << direction << endl;
    }

    // If we moved, and we're verbose, then look
    if (verbose == true and justMoved == true) {
        commandLook();
        player.location->printInstructions();

    }

}

void Game::commandLook() {

    // get the current room's info
    cout << player.location->printInfo();

    // get all items in this room
    itemList.printItemsInLocation(player.location->locationID);
}

void Game::commandScore() {
    cout << "Your score is: " << getScore() << endl;
}

void Game::commandRestart() {
    startGame();
}
