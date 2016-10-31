#include "Player.h"

Player::Player(std::string x)
{
	player = x;
	peice = player == "X" ? "| X " : "| O ";
}

bool Player::move(Board& board)
{
	do {
		
		do { // Only accpets values between 1-9

			std::cout << "\nPlayer " << player << " enter position: ";
			std::cin >> in;

		} while (!(in < 0 && in > 9));

		row = in > 3 && in < 7 ? 3 : 1;                    // Sets row
		row = in > 6 && in < 10 ? 5 : row;

		col = in == 2 || in == 5 || in == 8 ? 1 : 0;       // Sets Column 
		col = in == 3 || in == 6 || in == 9 ? 2 : col;

	} while (board.board[row][col] == "| X " || board.board[row][col] == "| O ");

	board.board[row][col] = peice;  // Convert position from board into the peice
	system("cls");                 // Clears everything in the window
	board.displayBoard();         // Display Board

	return winner(board); // Checks if this player has won
}

bool Player::winner(Board& board)
{
	for (int x = 1; x < 6; x += 2)
	{
		if (board.board[1][x == 1 ? 0 : x - 2] == peice && board.board[3][x == 1 ? 0 : x - 2] == peice && board.board[5][x == 1 ? 0 : x - 2] == peice || // Horizontal
			board.board[x][0] == peice && board.board[x][1] == peice && board.board[x][2] == peice || // Verical
			board.board[1][x - 1] == peice && board.board[3][1] == peice && board.board[5][x == 1 ? 2 : 0] == peice) // Diagonal
		{
			std::cout << "\nPlayer " << player << " has won\n";
			return true;
		}
	}
	return false;
}
