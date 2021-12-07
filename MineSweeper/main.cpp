//#include <Windows.h>

//#include <iostream>
//#include <vector>
//#include <string>

//#include <ctime>


#include "Menu.h" // Menu
#include "CMDController.h" // Movement
#include "Gaming.h"
// Game functions



// Global
void clearCin();

int main() {
	
	Menu* newMenu = new Menu(); // creates a new object of the menu class
	CMDController* forTheMenu = new CMDController(); // Everything "basic" related to arrays and vectors, like moving and drawing
	Gaming* nowWereGaming = new Gaming();

	int choice = 0;

	while (choice != 3) {
		newMenu->menu(choice); // Calls the specific function in a class for specified object
		switch (choice) {
		case 0:
			nowWereGaming;
			break;
		case 1:

			break;
		case 2:

			break;
		case 3:

			break;
		default:
			break;
		}

	}
	return 0;
}

void clearCin() {
	std::cin.clear();
	std::cin.ignore(32767, '\n');
}