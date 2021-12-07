#include "Gaming.h"

#include <iostream>


void Gaming::gamingMenu(int) {

	



	std::cout << "Select size of the board: ";



	std::cout << "Select the density of bombs: ";
	setNumberOfBombs();

	std::cout << "Run will look like this:";
	// Draw the board here
	std::cout << std::endl << "/// " << numberOfBombs << " BOMBS" << " ///" << std::endl;

	if (true) { // vector is more than 0 then run this

		std::cout << "Select a profile: ";
	}



}

void Gaming::setNumberOfBombs() {
	unsigned int decision = 1;

	std::cin >> decision;

	numberOfBombs = decision;
}