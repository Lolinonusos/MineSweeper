#include "Declarations.h" // All declerations go here

#include <Windows.h>

#include <iostream>
#include <conio.h>
#include <vector>
#include <string>
#include <fstream>
#include <ctime>


#include "Menu.h" // Menu
#include "Board.h" // Board/ menu, sizes and spaces
#include "CMDController.h" // Movement

// Game functions



// Global
void clearCin();

int main() {
	
	Menu* newMenu = new Menu(); // creates a new object of the menu class
	Board* menuBoard = new Board(); // Draw menu, maybe some other stuff too
	CMDController* forTheMenu = new CMDController(); // Same as above, this one will be used for moving in the menu only


	newMenu->menu(); // Calls the specifiec function in a class for specified object

}


void clearCin() {
	std::cin.clear();
	std::cin.ignore(32767, '\n');
}