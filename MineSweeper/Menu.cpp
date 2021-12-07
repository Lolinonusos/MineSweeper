#include "Menu.h"

//#include <iostream>
#include <string>
//#include <vector>


#include "CMDController.h"


void Menu::menu() {
	
	CMDController* forTheMenu{}; // Forward declarer
	
	std::cout << menuing.size();
	
	char choice{};

	int x = 0;
	int cunt = 0;
	bool selected = false;

	while (true) {
		system("cls");

		std::cout << "Welcome to" << std::endl;
		std::cout << "MineSweeper" << std::endl; // Make cool like the connect-four menu

		
		std::cout << std::endl;
		std::cout << "Use 'w' and 's' to move up or down, press SPACE or ENTER to confirm highlighted option, or you can use the numbers listed." << std::endl;
	
		forTheMenu->drawBoard(/*std::vector <std::vector<char>>  Do not include this part, I am not sure why tho, but whatever*/menuing, x, cunt);

		forTheMenu->move(x, cunt, selected, menuing.size());

		// Makes sure you can only move up and down in this menu
		if (x != 0) {
			x = 0;
		}

		//std::cout << "Bruh is: " << bruh << std::endl << "Cunt is: " << cunt << std::endl;
		if (selected == true) {





		
		}
	}



}
