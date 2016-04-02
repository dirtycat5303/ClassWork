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
* SwitchToken
* -----------------------------------------------------------------------
 * 	This function switches the active player.
 * 	It takes in a parameter representing the current player's token as
 * 	a character value (either an X or O) and returns the opposite.
 * 	For example, if this function receives an X it returns an O.
 * 	IF it receives and O it returns an X
* -----------------------------------------------------------------------
*	Preconditions -
*		token      - must be previously initialized
*	PostConditions -
*		token      - gets the opposite character they had.
*
* ***********************************************************************/
char SwitchToken (char token) // In - current player's token ('X' or 'O')
{
	if (token=='X')
	{
		token='O';
	}
	else
	{
		token='X';
	}
	return token;
}
