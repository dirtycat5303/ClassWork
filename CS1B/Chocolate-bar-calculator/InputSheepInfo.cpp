/*************************************************************************
 * AUTHOR     : Christopher Anderson & Erick Lopez
 * STUDENT ID : 847233 & 265400
 * LAB #8     : Testing
 * CLASS      : 10:00 am
 * SECTION    : CS1B
 * DUE DATE   : 10/09/13
 * ***********************************************************************/
#include "myheader.h"

/***********************************************************************
 *
 * FUNCTION InputSheepInfo
 * ____________________________________________________________________
 * This function receives the amount of sheep that wil be input from
 * 		the user. It will output and error message and prompt the user
 * 		again if the number input is invalid.
 *_____________________________________________________________________
 * PRE-CONDITIONS
 *
 * 		sheepNum: The amount of sheep that the user will input.
 *
 * POST-CONDITIONS
 * 		This function will have the number of sheep input assigned
 * 			and returns nothing.
 ***********************************************************************/

void InputSheepInfo(int& sheepNum)  // IN - The amount of sheep to be input.
{
	bool valid;                     // CALC - Determines if an input is
	                                //        valid or not.
	do{

		cout << "Please enter sheep amount: ";
		valid=(cin >> sheepNum);
		cout << endl;

		// Outputs an error message if number is invalid.
		if(!valid || (sheepNum < 0))
			{
				cout << "Invalid value " << endl;
				cout << "Please enter a sheep number greater than 0";
				cout << endl;
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');

			}
	}while(!valid || (sheepNum<0));

	cin.ignore(numeric_limits<streamsize>::max(), '\n');
}
