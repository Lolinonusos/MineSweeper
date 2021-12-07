#include "Menu.h"

//#include <iostream>
#include <string>
//#include <vector>
#include <fstream>

#include "CMDController.h"


void Menu::menu(int& choice) {

	CMDController* forTheMenu{}; // Forward declarer
	
	std::cout << menuing.size();

	int y = 0;
	int x = 0;
	bool selected = false;

	while (selected == false) {
		system("cls");

		std::cout << "Welcome to" << std::endl;
		std::cout << "MineSweeper" << std::endl; // Make cool like the connect-four menu

		
		std::cout << std::endl;
		std::cout << "Use 'w' and 's' to move up or down, press SPACE or ENTER to confirm highlighted option." << std::endl;
		/* Jeg debugga
		std::cout << menuing.size() << std::endl;
		std::cout << menuing.at(1).size() << std::endl;*/


		forTheMenu->drawBoard(/*std::vector <std::vector<char>>  Do not include this part, I am not sure why tho, but whatever*/menuing, y, x);

		forTheMenu->move(y, x, selected, menuing.size());

		// Makes sure you can only move up and down in this menu
		if (x != 0) {
			x = 0;
		}

		//std::cout << "Bruh is: " << bruh << std::endl << "Cunt is: " << cunt << std::endl;
		if (selected == true) {
			switch (y) {
			case 0:
				std::cout << "Play" << std::endl;
				choice = 0;
				break;
			case 1:
				std::cout << "Manage Names" << std::endl;
				choice = 1;
				break;
			case 2:
				std::cout << "Highscores" << std::endl;
				choice = 2;
				break;
			case 3:
				std::cout << "Close" << std::endl;
				choice = 3;
				break;

			default:
				break;
			}




		
		}

	}

}

void Menu::lookAtScores() {

}
