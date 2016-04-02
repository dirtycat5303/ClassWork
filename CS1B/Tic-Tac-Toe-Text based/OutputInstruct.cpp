/*************************************************************************
 *  AUTHOR		 : Erick Lopez
 *  STUDEN ID    : 245600
 *  ASSIGNMENT #5: Multi-Dimensional Arrays - Tic Tac Toe
 *  CLASS        : CS1B
 *  SECTION      : MW: 10:00 - 11:50
 *  DUE DATE     : 10/01/13
 *  *********************************************************************/
#include "myheader.h"
/*************************************************************************
 *OutIstruct

 *
 * Returns: nothing
 * 	Displays the instructions to user
 ************************************************************************/
/************************************************************************
* OutInstruct
* -----------------------------------------------------------------------
 * This function outputs instructions to the users. There are no input or
 * output parameters for this function as it only displays text to the
 * screen.
* -----------------------------------------------------------------------
*	Preconditions -
*		none- displays instructions
*
*	PostConditions -
*		none- displays instructions
*
* ***********************************************************************/
void OutputInstruct()
{
	cout << right;
	cout << setw(35);
	cout << "Tic-Tac-Toe" << endl << endl;
	cout << "This game is based in a 3x3 table of squares.\n";
	cout << "Player One and player Two will be prompted to input their \n";
	cout << "names. Player One will acquire token 'X' and player Two will\n";
	cout << "get token 'O'.\n";
	cout << "The players will be prompted to enter where they want to play\n";
	cout << "inside the 3x3 board (the row first then the column).\n";
	cout << "The first player to have 3 of their symbols in a row,\n";
	cout << "whether it is horizontally, vertically, or diagonally, is the \n";
	cout << "winner." << endl << endl;
}
