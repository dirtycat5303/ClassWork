/*************************************************************************
 *  AUTHOR		 : Erick Lopez
 *  STUDEN ID    : 245600
 *  ASSIGNMENT #7: Searching Linked List
 *  CLASS        : CS1B
 *  SECTION      : MW: 10:00 - 11:50
 *  DUE DATE     : 11/03/13
 *  *********************************************************************/
#include "myheader.h"

int ErrorCheckingMenu(string prompt,string errorOne,string errorTwo)
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
			cout<< errorOne <<endl <<endl;
			validInput=true;
		}
		else if (menuInput < 0 || menuInput > 6)
		{
			cin.clear();
			cout << errorTwo << endl << endl;
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

