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
* DisplayBoard
* -----------------------------------------------------------------------
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
* -----------------------------------------------------------------------
*	Preconditions -
*		boardAr[][] - a multidimensional  array of 3x3 need to be
*					  initialized
*	PostConditions -
*		boardAr[][] - contains the current state of the board
*
* ***********************************************************************/
void DisplayBoard(const char boardAr[][NUM_COLS]) // IN - tic tac toe board
{
	int row;
	int column;

	system("cls");

	//Outputs the column number
	cout << setw(10) << "1" << setw(8) << "2" << setw(9) << "3\n";
	for (row = 0; row < NUM_ROW; row++)
	{

		//Outputs the row and column number
		cout << setw(7) << "[" << row+1 << "][1] | " << "[" << row+1;
		cout << "][2] | " << "[" << row+1 << "][3]" << endl;
		cout << setw(14) << "|" << setw(9) << "|" << endl;

			for (column = 0; column < NUM_COLS; column++)
			{

				switch(column)
				{
					//Outputs the rows number and what is located in
					//the first column
					case 0: cout << row + 1 << setw(9);
							cout <<	boardAr[row][column] << setw(4) << "|";
							break;
					//Outputs the contents of column two
					case 1: cout << setw(4) << boardAr[row][column];
							cout << setw(5) << "|";
							break;
					//Outputs the contents of column three
					case 2: cout << setw(4) << boardAr[row][column] << endl;
							break;
					//Outputs error message if columns is grater than 3
					default: cout <<"ERROR!\n\n";
				}
			}
			cout << setw(14)<< "|" << setw(10) << "|\n";

		//Outputting the line only twice
		if (row != 2)
		{
			cout << setw(32) << "--------------------------\n";
		}
	}
	cout << endl << endl;
}
