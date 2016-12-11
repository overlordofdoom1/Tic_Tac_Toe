#ifndef BOARD_H // Create gaurd so that Board.h isn't
#define BOARD_H // included more than once, in series

#include <string>
#include <iostream>

class Board {

public:

	std::string board[7][4] = {
		{ "-------------" },
		{ "| 1 ", "| 2 ",  "| 3 ", "|" },
		{ "----+---+----" },
		{ "| 4 ", "| 5 ",  "| 6 ", "|" },
		{ "----+---+----" },
		{ "| 7 ", "| 8 ",  "| 9 ", "|" },
		{ "-------------" }
	};

	void displayBoard() const; // Displays the board[2D Array]

};

#endif // For def: BOARD_H
