#include "Declarations.h" // All declerations go here

#include <Windows.h>

#include <iostream>
#include <conio.h>
#include <vector>
#include <string>
#include <fstream>
#include <ctime>


#include "Menu.h"
#include "Board.h" // Contains everything related to the board

// Game functions



// Global
void clearCin();

int main() {
	
	Menu* newMenu = new Menu();
	newMenu->menu();
}



void clearCin() {
	std::cin.clear();
	std::cin.ignore(32767, '\n');
}