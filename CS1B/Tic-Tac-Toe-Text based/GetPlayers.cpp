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
* GetPlayers
* -----------------------------------------------------------------------
 * This function prompts the user and gets the input for the players'
 *  names. playerX will always contain the name of the player that is
 *  using the X token. PlayerO will always contain the name of the player
 *  that is using the O token.
 * RETURNS: the players names through the variables playerX and playerO.
* -----------------------------------------------------------------------
*	Preconditions -
*		PlayerX  - Player X needs to be defined
*		PlayerO  - Player O needs to be defined
*	PostConditions -
*		PlayerX  - Will contain the name of player X
*		PlayerO  - Will contain the name of player O
* ***********************************************************************/
void GetPlayers(string& playerX, //OUT - player X's name
			 	string& playerO) //OUT - player O's name
{
	cout << left;
	cout << endl;
	cout << setw(19) << "Player with the X?";
	getline(cin,playerX);

	cout << setw(19) << "Player with the O?";
	getline(cin,playerO);
	cout << right;
}
