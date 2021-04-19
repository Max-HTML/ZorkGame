#include <iostream>

using namespace std;
#include "ZorkUL.h"

int main(int argc, char argv[]) {
	ZorkUL temp;
	temp.play();
	return 0;
}

ZorkUL::ZorkUL() {
	createRooms();
}

void ZorkUL::createRooms()  {
    Room *prison, *police_Station, *armory, *security_Checkpoint, *tram, *military_Base, *airfield, *helipad;

    prison = new Room("Prison");
        prison->addItem(new Item("x", 1, 11));
        prison->addItem(new Item("y", 2, 22));
    police_Station = new Room("Police Station");
        police_Station->addItem(new Item("xx", 3, 33));
        police_Station->addItem(new Item("yy", 4, 44));
    armory = new Room("Armory");
    security_Checkpoint = new Room("Security Checkpoint");
    tram = new Room("Tram");
    military_Base = new Room("Military Base");
    airfield = new Room("Airfield");
    helipad = new Room("Helipad");

//             (N, E, S, W)
    prison->setExits(NULL, NULL, police_Station, NULL);
    police_Station->setExits(prison, security_Checkpoint, armory, NULL);
    armory->setExits(police_Station, NULL, NULL, NULL);
    security_Checkpoint->setExits(military_Base, tram, NULL, police_Station);
    tram->setExits(military_Base, NULL, NULL, security_Checkpoint);            //<----Problem here as there
    military_Base->setExits(airfield, NULL , tram, security_Checkpoint);       //is no NE or SE option!!!!!
    airfield->setExits(helipad, NULL, military_Base, NULL);
    helipad->setExits(NULL, NULL, airfield, NULL);


        currentRoom = prison;
}

/**
 *  Main play routine.  Loops until end of play.
 */
void ZorkUL::play() {
	printWelcome();

	// Enter the main command loop.  Here we repeatedly read commands and
	// execute them until the ZorkUL game is over.

	bool finished = false;
	while (!finished) {
		// Create pointer to command and give it a command.
		Command* command = parser.getCommand();
		// Pass dereferenced command and check for end of game.
		finished = processCommand(*command);
		// Free the memory allocated by "parser.getCommand()"
		//   with ("return new Command(...)")
		delete command;
	}
	cout << endl;
	cout << "end" << endl;
}

void ZorkUL::printWelcome() {
	cout << "start"<< endl;
	cout << "info for help"<< endl;
	cout << endl;
	cout << currentRoom->longDescription() << endl;
}

/**
 * Given a command, process (that is: execute) the command.
 * If this command ends the ZorkUL game, true is returned, otherwise false is
 * returned.
 */
bool ZorkUL::processCommand(Command command) {
	if (command.isUnknown()) {
		cout << "invalid input"<< endl;
		return false;
	}

	string commandWord = command.getCommandWord();
	if (commandWord.compare("info") == 0)
		printHelp();

	else if (commandWord.compare("map") == 0)
		{
        cout << "                                                   *ESCAPE!*             N   " << endl;
        cout << "                                                   [Helipad]             |   " << endl;
        cout << "                                                       |              W--*--E" << endl;
        cout << "                                                       |                 |   " << endl;
        cout << "                                                   [Airfield]            S   " << endl;
        cout << "                                                       |                     " << endl;
        cout << "                                                       |                     " << endl;
        cout << "                                                       |                     " << endl;
        cout << "                                                       |                     " << endl;
        cout << "                                                       |                     " << endl;
        cout << "    [Prison]                                    [Military Base]              " << endl;
        cout << "        |                                      /       |                     " << endl;
        cout << "        |                                     /        |                     " << endl;
        cout << "[Police Station] ------ [Security Checkpoint]          |                     " << endl;
        cout << "        |                                     \\        |                    " << endl;
        cout << "        |                                      \\       |                    " << endl;
        cout << "    [Armory]                                    \\      |                    " << endl;
        cout << "                                                 \\     |                    " << endl;
        cout << "                                                  \\    |                    " << endl;
        cout << "                                                   \\   |                    " << endl;
        cout << "                                                    [Tram]                   " << endl;
		}

	else if (commandWord.compare("go") == 0)
		goRoom(command);

    else if (commandWord.compare("take") == 0)
    {
       	if (!command.hasSecondWord()) {
		cout << "incomplete input"<< endl;
        }
        else
         if (command.hasSecondWord()) {
        cout << "you're trying to take " + command.getSecondWord() << endl;
        int location = currentRoom->isItemInRoom(command.getSecondWord());
        if (location  < 0 )
            cout << "item is not in room" << endl;
        else
            cout << "item is in room" << endl;
            cout << "index number " << + location << endl;
            cout << endl;
            cout << currentRoom->longDescription() << endl;
        }
    }

    else if (commandWord.compare("put") == 0)
    {

    }
    /*
    {
    if (!command.hasSecondWord()) {
		cout << "incomplete input"<< endl;
        }
        else
            if (command.hasSecondWord()) {
            cout << "you're adding " + command.getSecondWord() << endl;
            itemsInRoom.push_Back;
        }
    }
*/
    else if (commandWord.compare("quit") == 0) {
		if (command.hasSecondWord())
			cout << "overdefined input"<< endl;
		else
			return true; /**signal to quit*/
	}
	return false;
}
/** COMMANDS **/
void ZorkUL::printHelp() {
	cout << "valid inputs are; " << endl;
	parser.showCommands();

}

void ZorkUL::goRoom(Command command) {
	if (!command.hasSecondWord()) {
		cout << "incomplete input"<< endl;
		return;
	}

	string direction = command.getSecondWord();

	// Try to leave current room.
	Room* nextRoom = currentRoom->nextRoom(direction);

	if (nextRoom == NULL)
		cout << "underdefined input"<< endl;
	else {
		currentRoom = nextRoom;
		cout << currentRoom->longDescription() << endl;
	}
}

string ZorkUL::go(string direction) {
	//Make the direction lowercase
	//transform(direction.begin(), direction.end(), direction.begin(),:: tolower);
	//Move to the next room
	Room* nextRoom = currentRoom->nextRoom(direction);
	if (nextRoom == NULL)
		return("direction null");
	else
	{
		currentRoom = nextRoom;
		return currentRoom->longDescription();
	}
}
