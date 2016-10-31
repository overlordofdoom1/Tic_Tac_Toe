#ifndef PLAYER_H  // Create guard so that Player.h isn't
#define PLAYER_H  // included more than once

#include <iostream>
#include <string>
#include "Board.h"

class Player {

private:

	int in, row, col;
	std::string peice, player;

public:

	Player(std::string x);       // Sets up piece, depending on parameter
	int move(Board& board);     // Gets input and makes move, pass by refrence (address)
	bool winner(Board& board); // Checks for winner, pass by refrence (address)

};

#endif // For def: PLAYER_H

