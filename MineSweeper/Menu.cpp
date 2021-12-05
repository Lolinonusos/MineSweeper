#include "Menu.h"

#include <iostream>
#include <string>
#include <vector>

#include "Board.h"
#include "CMDController.h"


void Menu::menu() {
	
	std::cout << menuing.size();
	
	char choice{};

	int bruh{};
	int cunt{};

	std::cout << "Welcome to" << std::endl;
	std::cout << "MineSweeper" << std::endl; // Make cool like the connect-four menu

	
	std::cout << std::endl;
	std::cout << "Use 'w' and 's' to move up or down, press SPACE or ENTER to confirm highlighted option, or you can use the numbers listed." << std::endl;
	
	Board* menuBoard{};
	menuBoard->drawBoard(/*std::vector <std::vector<char>>  Do not include this part, I am not sure why tho, but whatever*/menuing);

	CMDController* forTheMenu{};
	forTheMenu->move(bruh, cunt);

}
