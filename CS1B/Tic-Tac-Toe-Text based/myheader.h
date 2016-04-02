/*************************************************************************
 *  AUTHOR		 : Erick Lopez
 *  STUDEN ID    : 245600
 *  ASSIGNMENT #5: Multi-Dimensional Arrays - Tic Tac Toe
 *  CLASS        : CS1B
 *  SECTION      : MW: 10:00 - 11:50
 *  DUE DATE     : 10/01/13
 *  *********************************************************************/

#ifndef AS5_H_
#define AS5_H_

#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
using namespace std;
/************************************************************************
* CONSTANTS
* -----------------------------------------------------------------------
* NUM_COLS - IN & CALC - sets the number of columns
* NUM_ROW  - IN & CALC - sets the number of rows
* ***********************************************************************/
int const NUM_COLS = 3;
int const NUM_ROW  = 3;


/*************************************************************************
 *OutIstruct
 * This function outputs instructions to the users. There are no input or
 * output parameters for this function as it only displays text to the
 * screen.
 *
 * Returns: nothing
 * Displays the instructions to user
 ************************************************************************/
void OutputInstruct();


/************************************************************************
 *InitBoard
 *	This function initializes each spot in the board to a space ' '.
 *
 *RETURNS: Board initialized with all spaces
 ************************************************************************/
void InitBoard( char boardAr[][NUM_COLS]); //OUT -tic tac toe board


/*************************************************************************
* DisplayBoard
* This function outputs the tic tac toe board including the tokens
* played in the proper format (as described below).
*
*      1        2         3
*    [1][1] | [1][2] | [1][3]
*           |        |
* 1         |        |
*           |        |
*    --------------------------
*    [2][1] | [2][2] | [2][3]
*           |        |
* 2         |        |
*           |        |
*     --------------------------
*    [3][1] | [3][2] | [3][3]
*           |        |
* 3         |        |
*           |        |
*
* RETURNS: nothing
* 	outputs the current state of the board
 ************************************************************************/
void DisplayBoard(   const char boardAr[][3]); // IN - tic tac toe board


/*************************************************************************
 * GetPlayers
 * 	This function prompts the user and gets the input for the players'
 *  names. playerX will always contain the name of the player that is
 *  using the X token. PlayerO will always contain the name of the player
 *  that is using the O token.
 * RETURNS: the players names through the variables playerX and playerO.
 ************************************************************************/
void GetPlayers(string& playerX,  //OUT - player X's name
			 	string& playerO); //OUT - player O's name


/*************************************************************************
 * GetAndCheckInp
 * 	This function verifies where the user wants to play in is valid. They
 * 	must type in the row, column. The function will obtain the input and
 * 	verify if the row & column # are within range and the spot is not taken.
 *************************************************************************/
void GetAndCheckInp (char   boardAr[][NUM_COLS], //
					 char   token,
					 string playerX,
					 string playerO);


/*************************************************************************
 * SwitchToken
 * 	This function switches the active player.
 * 	It takes in a parameter representing the current player's token as
 * 	a character value (either an X or O) and returns the opposite.
 * 	For example, if this function receives an X it returns an O.
 * 	IF it receives and O it returns an X
 ************************************************************************/
char SwitchToken (char token); // In - current player's token ('X' or 'O')


/*************************************************************************
 *CheckWin
 *This function checks to see if either player has run. Once it is possible
 *for a win condition to exist, this should run after each palyer makes a
 *play.
 *
 *RETURNS the character value of the player that won or that value that
 *	indicates a tie.
 ************************************************************************/
char CheckWin(const char boardAr[][NUM_COLS]);


/*************************************************************************
 * OutputWinner
 * 	This function receives as input a character indicating which player won
 * 	or if the game was a tie and outputs an appropriate message. This
 * 	function does not return anything as it simply outputs the appropriate
 * 	to the screen.
 *
 * 	Return: nothing
 * 		Displays the winner's name
 ************************************************************************/
void OutputWinner (char whoWon,		//IN - represents the winner or a value
									// 	   indicating a tied game.
				   string playerX,  //OUT - player X's name.
				   string playerO); //OUT - player X's name.


/*************************************************************************
 * This function displays the class heading of the program. It receives
 * 	a program name, program type and program number and outputs the
 * 	corresponding information.
 *
 * 	Return: nothing
 * 		Displays the class heading
 ************************************************************************/
void PrintHeader(string	programName,		// IN - Program name
		  	  	 string	programType,		// IN - Program type
		  	  	 int	programNumber);  	// IN - Program numb


#endif /* AS5_H_ */
