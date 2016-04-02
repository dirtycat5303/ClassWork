/*************************************************************************
 * AUTHOR     : Christopher Anderson & Erick Lopez
 * STUDENT ID : 847233 & 265400
 * LAB #8     : Testing
 * CLASS      : 10:00 am
 * SECTION    : CS1B
 * DUE DATE   : 10/09/13
 * ***********************************************************************/
#include "myheader.h"

void CheckInput(int sheepNum)
{
	bool invalid;
	if(!(cin >> sheepNum))
		{
		cout << "Please enter a sheep number greater than or equal to 0";
		cin.clear();

		cin.ignore(numeric_limits<streamsize>::max(), '\n');

		}


}
