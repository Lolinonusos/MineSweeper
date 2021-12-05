#pragma once

#include <iostream>
#include <vector>

class Menu {
public:
	std::vector <std::vector<char>> menuing; // Contain the options
	Menu() {
		// Pushing options into the menu vector
		menuing.push_back(std::vector <char>(2, ' ')); // Play
		menuing.push_back(std::vector <char>(2, ' ')); // Create or delete user names
		menuing.push_back(std::vector <char>(2, ' ')); // Highscores
		menuing.push_back(std::vector <char>(2, ' ')); // Close program
	}


	void menu(); // All menu stuffs
	
	//float getSomething() const { return something; } // Lese privat 
	//float setSomething(float value) { something = value; } // Ta ut og potensielt endre variabelen

private:


	//float something{};
};

