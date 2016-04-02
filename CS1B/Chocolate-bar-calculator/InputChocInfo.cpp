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
 * FUNCTION InputChocInfo
 * ____________________________________________________________________
 * This function receives the number of chocolate being input
 * 		from the user. It will output an error message and prompt
 * 		the user again if the number is invalid.
 *_____________________________________________________________________
 * PRE-CONDITIONS
 *
 * 		chocBar: The amount of chocolate that the user will input.
 *
 * POST-CONDITIONS
 * 		This function will have the number of chocolate input assigned
 * 			and returns nothing.
 ***********************************************************************/

void InputChocInfo(int& chocBar)
{
	bool valid;
	do{

	cout << "Please enter chocolate bar amount: ";
	valid = ( cin>> chocBar);

	// Outputs an error message if number is invalid.
	if(!valid || chocBar<0)
		{
			cout << "Invalid value " << endl;
			cout << "Please enter a chocolate amount greater than or equal to 0";
			cout << endl;

			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');


		}

	}while(!valid || chocBar<0);

	cin.ignore(numeric_limits<streamsize>::max(), '\n');
}


