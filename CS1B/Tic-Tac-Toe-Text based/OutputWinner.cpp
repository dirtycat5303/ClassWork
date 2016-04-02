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
* OutputWinner
* -----------------------------------------------------------------------
 * 	This function receives as input a character indicating which player won
 * 	or if the game was a tie and outputs an appropriate message. This
 * 	function does not return anything as it simply outputs the appropriate
 * 	to the screen.
* -----------------------------------------------------------------------
*	Preconditions -
*		whoWon		- needs to be initialized and contain a token
*		playerX		- contains player X's name
*		playerO		- contains player O's name
*	PostConditions -
*		nothing- Displays the winner of the match
*
* ***********************************************************************/
void OutputWinner (char whoWon,		//IN - represents the winner or a value
									// 	   indicating a tied game.
				   string playerX,  //OUT - player X's name.
				   string playerO)  //OUT - player X's name.
{
	if(whoWon == 'X')
	{
		cout << setw(35) << playerX<< " won the match" << endl;
	}
	else if(whoWon =='O')
	{
		cout << setw(35) << playerO<< " won the match" << endl;
	}
	else
	{
		cout << setw(35) << "It's a tie" << endl << endl;
	}
}
