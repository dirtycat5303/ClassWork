/*************************************************************************
 *  AUTHOR		 : Erick Lopez
 *  STUDEN ID    : 245600
 *  ASSIGNMENT #7: Searching Linked List
 *  CLASS        : CS1B
 *  SECTION      : MW: 10:00 - 11:50
 *  DUE DATE     : 11/03/13
 *  *********************************************************************/
#include "myheader.h"

int IntErrorCheck(string prompt,string errorOne,string errorTwo, int upperBounds, int lowerBounds)
{
	bool validInput;
	validInput = false;
	int menuInput;

	do{
		cout << prompt;


		if(!(cin >> menuInput ))
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(),'\n');
			cout << errorTwo << endl <<endl;
			validInput=true;
		}
		else if (menuInput < lowerBounds || menuInput > upperBounds)
		{
			cin.clear();
			cout << errorOne.substr(0,16)<< menuInput
				 << errorOne.substr(16 ,26);
			cout << endl << errorTwo << endl;

			validInput = true;
		}
		else
		{
			validInput= false;
			cin.ignore(numeric_limits<streamsize>::max(),'\n');

		}
	}while(validInput);

	return menuInput;

}

