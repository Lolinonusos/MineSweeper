#include "Board.h"

#include <iostream>
#include <vector>

void Board::drawBoard(std::vector <std::vector <char>>vectorBoard) {
	// change i and j variables to something functional
	for (unsigned int i = 0; i < vectorBoard.size(); i++) {
		for (unsigned int j = 0; j < vectorBoard.at(i).size(); j++) {
			std::cout << vectorBoard[i][j];
		}
		std::cout << std::endl;
	}
}