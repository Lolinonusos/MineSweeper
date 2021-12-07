#pragma once

#include <iostream>
#include <string>
#include <vector>

class Menu {
public:

	// Contain the options
	std::vector <std::vector<std::string>> menuing{{" ", "Play"}, // Play
												   {" ", "Manage Names"}, // Create or delete user names
												   {" ", "Highscores"}, // Highscores
												   {" ", "Close"} }; // Close program

	/*Menu() {

	}*/


	void menu(); // All menu stuffs
	
	void lookAtScores();

	//float getSomething() const { return something; } // Lese privat 
	//float setSomething(float value) { something = value; } // Ta ut og potensielt endre variabelen

private:


	//float something{};
};

