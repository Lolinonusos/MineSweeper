#pragma once

#include <iostream>
#include <string>
#include <vector>

class Menu {
public:
	std::vector <std::vector<std::string>> menuing; // Contain the options
	Menu() {
		// Pushing options into the menu vector
		menuing.push_back(std::vector <std::string>(' ', "Play")); // Play
		menuing.push_back(std::vector <std::string>(' ', "Manage Names")); // Create or delete user names
		menuing.push_back(std::vector <std::string>(' ', "Highscores")); // Highscores
		menuing.push_back(std::vector <std::string>(' ', "Close")); // Close program
	}


	void menu(); // All menu stuffs
	
	//float getSomething() const { return something; } // Lese privat 
	//float setSomething(float value) { something = value; } // Ta ut og potensielt endre variabelen

private:


	//float something{};
};

