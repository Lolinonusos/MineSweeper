//#include <Windows.h>

//#include <iostream>
//#include <vector>
//#include <string>
//#include <fstream>
//#include <ctime>


#include "Menu.h" // Menu
#include "CMDController.h" // Movement

// Game functions



// Global
void clearCin();

int main() {
	
	Menu* newMenu = new Menu(); // creates a new object of the menu class
	CMDController* forTheMenu = new CMDController(); // Everything "basic" related to arrays and vectors, like moving and drawing

	while (true) {
		newMenu->menu(); // Calls the specific function in a class for specified object


	}
	return 0;
}


void clearCin() {
	std::cin.clear();
	std::cin.ignore(32767, '\n');
}