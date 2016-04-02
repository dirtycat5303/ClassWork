/*************************************************************************
 * AUTHOR        : Morgan Heaslet
 * STUDENT ID    : 889647
 * ASSIGNMENT #5 : Multi-Dimensional Arrays
 * CLASS         : CS1B
 * SECTION:      : MW 10AM
 * DUE DATE      : 10/02/2013
 ************************************************************************/

/*************************************************************************
 *
 * FUNCTION GetAndCheckInp
 * _______________________________________________________________________
 * This function receives the tic-tac-toe board array, the token of the
 * current player, and the names of both players. It then prompts the
 * current player (by name) for their move, and error-checks the chosen
 * move. If valid, the current player's token is placed in the board array.
 * _______________________________________________________________________
 * PRE-CONDITIONS
 * 		boardAr : The game board has to be previously defined
 * 		token   : The token has to be previously defined
 * 		playerX : First player's name has to be previously defined
 * 		playerO : Second player's name has to be previously defined
 *
 * POST-CONDITIONS
 * 		This function will place the current player's token on their chosen
 * 		place on the game board (by placing it in the board array)
 ************************************************************************/

#include "TicTacHeader.h"

void GetAndCheckInp(char boardAr[][NUM_COLS],  // IN/OUT - Game board
					char token,			       // IN - Player's token
					string playerX,			   // IN - Player X's name
					string playerO)			   // IN - Player O's name
{
	int row;							// Row chosen by player
	int col;							// Column chosen by player
	bool invalidRow;					// True if invalid row
	bool invalidCol;					// True if invalid column
	bool invalidMove;					// True if invalid move

	do
	{
		// INPUT - Receives player's move
		if(token == 'X')
		{
			cout << playerX;
		}
		else
		{
			cout << playerO;
		}

		cout << "'s turn! What's your play?: ";
		cin  >> row;
		cin  >> col ;

		row = row - 1;
		col = col - 1;

		invalidRow = row >= NUM_ROWS || row < 0;
		invalidCol = col >= NUM_COLS || col < 0;
		invalidMove = invalidRow || invalidCol || boardAr[row][col] != ' ';

		// PROCESSING - Checks if move is valid
		if(invalidMove)
		{
			cin.clear();
			cin.ignore(1000,'\n');

			if(invalidRow && invalidCol)
			{
				cout << "Invalid row and column: Enter a row between 1 ";
				cout << "and " << NUM_ROWS - 1 << " and column between 1 ";
				cout << "and " << NUM_COLS - 1 << ".\n\n";
			}
			else if(invalidRow)
			{
				cout << "Invalid row: Enter a row between 1 and ";
				cout << NUM_ROWS << ".\n\n";
			}
			else if(invalidCol)
			{
				cout << "Invalid column: Enter a column between 1 and ";
				cout << NUM_COLS << ".\n\n";
			}
			else
			{
				cout << "Invalid move: Location already taken.\n\n";
			}
		} // end if(invalidMove)

	}while(invalidMove);

	// PROCESSING - Adds player token to game board
	boardAr[row][col] = token;

	cin.ignore(1000,'\n');
}
