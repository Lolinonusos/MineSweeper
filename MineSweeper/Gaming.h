#pragma once



class Gaming {
public:
	unsigned int difficulty{};

	//float getSomething() const { return something; } // Lese privat 
	//float setSomething(float value) { something = value; } // Ta ut og potensielt endre variabelen

private:
	//float something{};

	unsigned int boardSize{};

	void placeMines();

};

