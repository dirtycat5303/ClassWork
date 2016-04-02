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
* CheckWIn
* -----------------------------------------------------------------------
 *This function checks to see if either player has run. Once it is possible
 *for a win condition to exist, this should run after each palyer makes a
 *play.
* -----------------------------------------------------------------------
*	Preconditions -
*		boardAr[][] -  a multidimensional  array of 3x3 need to be
*					   initialized
*	PostConditions -
*		whoWon 		- It will contain the token if 3 of the same are found
*
* ***********************************************************************/
char CheckWin(const char boardAr[][NUM_COLS]) // IN - tic tac toe board
{
	char whoWon;		// OUT -  contains the token if 3 of the same are
						//        found, else it returns the token Z;
	whoWon = 'Z';		// sets who won to a dummy value

	if(boardAr[0][0] == boardAr[0][1] && boardAr[0][0]!=' ' &&
	   boardAr[0][0]==  boardAr[0][2])
	{
			whoWon = boardAr[0][2];
	}
	else if( boardAr[0][0]== boardAr[1][0] && boardAr[0][0]!=' ' &&
			 boardAr[0][0]== boardAr[2][0])
	{
			whoWon = boardAr[2][0];
	}
	else if( boardAr[0][1] == boardAr[1][1] && boardAr[0][1]!=' ' &&
			 boardAr[0][1] == boardAr[2][1])
	{
			whoWon = boardAr[2][1];
	}
	else if ( boardAr[0][2]== boardAr[1][2] && boardAr[0][2]!=' ' &&
			  boardAr[0][2] == boardAr[2][2])
	{
			whoWon =  boardAr[2][2];
	}
	else if ( boardAr[1][0]== boardAr[1][1] && boardAr[1][0]!=' ' &&
			  boardAr[1][0] == boardAr[1][2])
	{
			whoWon =  boardAr[1][2];
	}
	else if ( boardAr[2][0]== boardAr[2][1] && boardAr[2][0]!=' ' &&
			  boardAr[2][0] == boardAr[2][2])
	{
		whoWon =  boardAr[2][2];
	}
	else if ( boardAr[0][0]== boardAr[1][1] && boardAr[0][0]!=' '&&
			  boardAr[0][0] == boardAr[2][2])
	{
		whoWon =  boardAr[2][2];
	}
	else if ( boardAr[0][2]== boardAr[1][1] && boardAr[0][2]!=' '&&
			  boardAr[0][2] == boardAr[2][0])
	{
		whoWon =  boardAr[2][0];
	}
	return whoWon;
}
