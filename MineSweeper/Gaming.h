#pragma once

#include <vector>

class Gaming {
public:

	void gamingMenu(int); // Cointain all the other functions
	unsigned int difficulty(); // Decide the size of the board and amount of bombs
	void setNumberOfBombs();
	
	void placeBombs(); // Hides bombs 

	//float getSomething() const { return something; } // Lese privat 
	//float setSomething(float value) { something = value; } // Ta ut og potensielt endre variabelen

private:
	//float something{};

	int numberOfBombs{};
	unsigned int boardSize{}; // Decide the size of the board through the difficulty
	char tile{};

};

