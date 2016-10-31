#include "Board.h"

void Board::displayBoard() const
{
	for (int row = 0; row < 7; row++) // Row of the 2D array
		for (int col = 0; col < 4; col++) // Column of the 2D array
			std::cout << board[row][col];
}