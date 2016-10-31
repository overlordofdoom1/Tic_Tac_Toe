#ifndef BOARD_H
#define BOARD_H

#include <string>
#include <iostream>

class Board {

public:

	std::string board[7][4] = {
		{ "\n\n-------------\n" },
		{ "| 1 ", "| 2 ",  "| 3 ", "|\n" },
		{ "----+---+----\n" },
		{ "| 4 ", "| 5 ",  "| 6 ", "|\n" },
		{ "----+---+----\n" },
		{ "| 7 ", "| 8 ",  "| 9 ", "|\n" },
		{ "-------------\n" }
	};

	void displayBoard() const; // Displays the board[2D Array]

};

#endif // For def: BOARD_H