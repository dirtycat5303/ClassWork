/*************************************************************************
 *  AUTHOR		 : Erick Lopez
 *  STUDEN ID    : 245600
 *  ASSIGNMENT #5: Multi-Dimensional Arrays - Tic Tac Toe
 *  CLASS        : CS1B
 *  SECTION      : MW: 10:00 - 11:50
 *  DUE DATE     : 10/01/13
 *  *********************************************************************/
#include "myheader.h"

/************************************************************************
* GetAndCheckInput
* -----------------------------------------------------------------------
* This function verifies where the user wants to play in is valid. They
* must type in the row, column. The function will obtain the input and
* verify if the row & column # are within range and the spot is not taken.
* -----------------------------------------------------------------------
*	Preconditions -
*		boardAr[][]  -  a multidimensional  array of 3x3 needs to be
*					    initialized
*		token 		 -  A token needs to be initialized and contain O or X
*		playerX		 -	playerX must be initialized
*		playerO		 -  playerO must be initialized
*
*	PostConditions -
*		token		 - gets token placed in the section the user wants to
*					   play
*
* ***********************************************************************/
void GetAndCheckInp (char boardAr[][NUM_COLS],  // IN - Tic Tac Toe board
					 char token, 				// IN - players token
					 string playerX,			// IN - player X's name
					 string playerO)			// IN - player O's name
{
	int row;
	int column;
	bool outOfRangeRow;
	bool outOfRangeCol;

	token=toupper(token);

	cout << left;

	do{

		//Read the user input for row and column
		cout << "Where do you want to play ";

		if(token == 'X')
		{
			cout << playerX;
		}
		else
		{
			cout << playerO;
		}
		cout << "? (Row Column) ";
		cin >> row >> column;
		cout << endl;

		outOfRangeRow =(row < 1 || row > NUM_ROW) ;
		outOfRangeCol =(column < 1 ||column > NUM_COLS);



		//Check to see if row # is valid(check range)
		if (outOfRangeRow)
		{
			cout << setw(34) << "The row is out of range (Only 1-3) " << endl;

		}
		// Check to see if column # is valid check Range
		else if (outOfRangeCol)
		{
			cout << "The column is out of range (Only 1-3) " << endl;

		}
		//Check to see if there's a token already in that space
		else if(boardAr[row-1][column-1] != ' ')
		{
			cout << "The space is occupied, choose another" << endl;
		}

	}while( outOfRangeRow || outOfRangeCol || (boardAr[row-1][column-1] != ' ') );

	cin.ignore(1000,'\n');
	//assign the token value in that space
	boardAr[row-1][column-1] = token;
	cout << right;
}
