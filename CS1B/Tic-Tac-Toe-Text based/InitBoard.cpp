/*************************************************************************
 *  AUTHOR		 : Erick Lopez
 *  STUDEN ID    : 245600
 *  ASSIGNMENT #5: Multi-Dimensional Arrays - Tic Tac Toe
 *  CLASS        : CS1B
 *  SECTION      : MW: 10:00 - 11:50
 *  DUE DATE     : 10/01/13
 *  *********************************************************************/
# include "myheader.h"


/************************************************************************
* InitBoard
* -----------------------------------------------------------------------
* 	This function initializes each spot in the board to a space ' '.
* -----------------------------------------------------------------------
*	Preconditions -
*		boarAr[][] - Multidimensional array of 3x3 must be initialized
*
*	PostConditions -
*		boarAr[][] - will contain spaces ' '.
*
* ***********************************************************************/
void InitBoard( char boardAr[][NUM_COLS]) //OUT -tic tac toe board
{
	int row;	//used to locate the row
	int column; //used to locate the column

	// Initializing board to ' ', starting with the rows.
	for(row = 0; row < NUM_ROW; row++)
	{
		for(column = 0; column < NUM_COLS; column++)
		{
		 	boardAr[row][column]= ' ';
		}
	}
}
