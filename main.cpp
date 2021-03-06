// Tic Tac Toe - TCG

#include <iostream>
#include <string>

#include "Player.h"

int main() 
{
	Board board;
	Player p1("X"), p2("O");

	std::cout << "Welcome to Tic Tac Toe\n\n";
	board.displayBoard();

	for (int moveCount = 0; moveCount < 6; moveCount++) 
	{
		if (p1.move(board) == true) { break; } // Player X

		if (moveCount == 4) // If there is no winner up until the end of the game; end game
		{
			std::cout << "\n\n\nThe match was a draw\n";
			break;
		}

		if (p2.move(board) == true) { break; } // Player O
	}
}

