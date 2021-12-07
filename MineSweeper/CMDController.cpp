#include "CMDController.h"

#include <iostream>
//#include <string>
//#include <vector>
#include <conio.h>

#include "Menu.h"

void CMDController::drawBoard(std::vector <std::vector <std::string>> vectorBoard, int x, int y) {
	// change i and j variables to something functional
	for (unsigned int i = 0; i < vectorBoard.size(); i++) {
		for (unsigned int j = 0; j < vectorBoard.at(i).size(); j++) {
			std::cout << vectorBoard[i][j];
		}
		std::cout << std::endl;
	}
}

// By having '&' after the ints I sent from Menu.cpp I can change them however I want here
int CMDController::move(int& x, int& y, bool& selected, int vectorSize) {

	selected = false; // Turn true when SPACE or ENTER is inputed

	char move{};

	move = _getch();

		switch (move) {
		case 'w': // Up
			y -= 1;
			if (y < 0) {
				y = vectorSize - 1;
			}
			break;
		case 'a': // Left
			x -= 1;
			if (x < 0) {
				x = vectorSize - 1;
			}
			break;
		case 's': // Down
			y += 1;
			if (y > vectorSize - 1) {
				y = 0;
			}
			break;
		case 'd': // Right
			x += 1;
			if (x > vectorSize - 1) {
				x = 0;
			}
			break;
		case 13: case 27: // Confirm
			selected = true;
			break;
		default:
			break;
		}

	return x, y, selected;
}