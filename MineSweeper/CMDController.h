#pragma once

#include <string>
#include <vector>

class CMDController {
public:

	void drawBoard(std::vector <std::vector <std::string>>, int, int);

	int move(int&, int&, bool&, int); // Decide position

	//class Menu* someMenuPtr{}; // Dette er å forward declare, man sier ifra at det kommer en class eller funksjon av denne typen
private:

};

