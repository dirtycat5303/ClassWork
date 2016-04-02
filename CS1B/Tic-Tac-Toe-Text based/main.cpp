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
 * Tic-Tac-Toe
 * -----------------------------------------------------------------------
 *This program will provide the user with instructions on how to play
 *	Tic-Tac-Toe and enter data. The player is given an option to exit
 *	out after the instructions are given. This first player will be assigned
 *	to the token 'X', the second player with token 'O'. The program will
 *	then prompt the user to enter their move but specifying a row and a
 *	column.The program will check if someone has won and if that is the
 *	case it will output who is the winner. players will be given the option
 *	to play again. If that is the case they will be prompt if they want to
 *	re-enter their names or keep the same ones.
 *	---------------------------------------------------------------------
 *	INPUTS -
 *		response			- IN & CALC - stores response if user wants to
 *										  play
 *		changeNameResponse  - IN & CALC - sores response if user wants to
 *										  change names
 * OUTPUTS-
 * 		OutputInstruct		- outputs instructions to the user
 * 		GetPlayers			- prompts the user for player's name
 ************************************************************************/

int main()
{
	char   boardAr[NUM_ROW][NUM_COLS];  // IN&CALC - board of the game
	char   token;						// IN&CALC - contains a token
	string player1;						// IN&CALC - player X's name
	string player2;						// IN&CALC - player O's name
	int    counter;						// CALC    - counter of loop
	char   whoWon;						// IN&CALC - contains dummy variable
	char   response;					// IN&CALC - gets if user wants to
										// 			 play again
	char   changeNamesResponse;			//IN&CALC  - user response if they
										// 			 want to play again

	//Prints header of the assignment
//	PrintHeader("MultyDimnesional Array","Assignment",5);

	//Outputs instructions
	 OutputInstruct();

	// gives the user the option to exit
	cout <<"Would you like to play? ";
	cin.get(response);
	response = toupper(response);
	cin.ignore(1000,'\n');

	// If user wants to play then gets the names
	if(response== 'Y')
	{
		GetPlayers(player1,player2);
		counter = 0;
	}

	// If user wants to play it proceeds to play the game
	while(response =='Y')
	{
		token='X';	// Initializes token to X so player 1 will always get
					// token X
		whoWon='Z';	// gives whoWon a dummy variable which is a CLV

		//Only ask user to change names after it has played once
		if(counter >0)
		{
			cout <<"\nDo you want to change names?";
			cin.get(changeNamesResponse);
			cin.ignore(1000,'\n');
			changeNamesResponse = toupper(changeNamesResponse);
			counter = 0;

			// If they want to change names, prompt the user for new
			if (changeNamesResponse =='Y')
			{
				GetPlayers(player1,player2);
			}
		}

		//initializes the board to spaces.
		InitBoard(boardAr);
		cout << endl;

		//Displays the board containing nothing so the user can play in any
		// spot
		DisplayBoard(boardAr);

		//Checks if input is valid
		GetAndCheckInp(boardAr,token,player1,player2);

		//Runs the loop while whoWon contains dummy value and counter
		//doesn't pass maximum plays
		while(whoWon == 'Z' && counter < 8)
		{
			//Counts how many times players have played
			counter++;

			//Switches token to let the other player choose a play
			token = SwitchToken(token);

			//Displays board with new play
			DisplayBoard(boardAr);

			//Checks if play is valid
			GetAndCheckInp(boardAr,token,player1,player2);

			//Starts checking if someone won only after 4 plays
			if(counter >= 3)
				{
					whoWon = CheckWin(boardAr);
				}
		}

		//After the maximum plays have been reached or someone won it
		//displays board again
		DisplayBoard(boardAr);

		//Outputs who the winner of the match is
		OutputWinner( whoWon, player1, player2);

		//Prompts the user if they want to play again
		cout <<"Do you want to play again? ";
		cin.get(response);
		response = toupper(response);

		// resets whoWon
		whoWon= 'Z';
		cin.ignore(1000,'\n');

	}

	//Thanks the player for plaing if they want to play agian
	cout << endl << endl;
	cout << setw(35) << "Thanks for playing!";

	return 0;
}
