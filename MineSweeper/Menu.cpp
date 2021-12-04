#include "Menu.h"

#include <iostream>
#include <string>
#include <vector>

#include "Board.h"
#include "CMDController.h"


void Menu::menu() {
	
	menuing.push_back(std::vector <char>(2, ' '));
	
	char choice{};

	std::cout << "Welcome to" << std::endl;
	std::cout << "MineSweeper" << std::endl; // Make cool like the connect-four menu

	
	std::cout << std::endl;
	std::cout << "Use 'w' and 's' to move up or down, press SPACE or ENTER to confirm highlighted option, or you can use the numbers listed." << std::endl;
	
	Board menuBoard;
	menuBoard->drawBoard(menuing);
}
