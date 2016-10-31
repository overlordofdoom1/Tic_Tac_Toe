// Tic Tac Toe - TCG

#include <iostream>
#include <string>

#include "Player.h"

int main()
{
	Board board;
	Player p1("X"), p2("O");

	std::cout << "Welcome to Tic Tac Toe";
	board.displayBoard();

	for (int x = 0; x < 6; x++)
	{
		if (p1.move(board) == 1) { break; } // Player X

		if (x == 4) // If there is no winner up until the end of the game; end game
		{
			std::cout << "\n\n\nThe match was a draw\n";
			break;
		}

		if (p2.move(board) == 1) { break; } // Player O
	}
}

