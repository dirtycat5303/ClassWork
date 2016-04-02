/*************************************************************************
 * AUTHOR     : Eric Lopez & Sean Millet
 * STUDENT ID : 245600 & 876517
 * LAB #4     : Introduction to Arrays
 * CLASS      : CS1B
 * SECTION    : MW: 10:00 - 11:50
 * DUE DATE   : 9/16/13
 ************************************************************************/

#include "myheader.h"

/*************************************************************************
 * Introduction to Arrays
 * _______________________________________________________________________
 *
 * This program will obtain names from user, and allow to search how many
 * 		instances are there. Then, the program will output the result.
 * _______________________________________________________________________
 *
 * INPUT:
 * 		name		:	Name
 * 		nameSearch	:	Searched name
 * _______________________________________________________________________
 *
 * OUTPUT:
 *		instances	:	Numbers of instance
 *		nameSearch	:	Searched name
 *
 ************************************************************************/

int main()
{
	/********************************************************************
	 * CONSTANTS
	 * ------------------------------------------------------------------
	 * PROGRAM_NAME		: Program's Name
	 * PROGRAM_TYPE		: Program's type
	 * PROGRAM_NUM		: Program's Number
	 * ARRAY_NUM		: Total Amount of Array
	 ********************************************************************/

	const string	PROGRAM_NAME	= "Introduction to Arrays";
	const string	PROGRAM_TYPE	= "Lab";
	const int		PROGRAM_NUM		= 4;
	const int		ARRAY_NUM		= 10;

	// Variable
	string 	name[ARRAY_NUM];		// IN & CALC - Name
	string 	nameSearch;				// IN & OUT - Searched name
	int 	instances;				// CALC & OUT - Numbers of instance

	// OUTPUT - Output header
//	PrintHeader(PROGRAM_NAME, PROGRAM_TYPE, PROGRAM_NUM);

	// INPUT - Prompt user and obtain names
	GetNames(name, ARRAY_NUM);
	cout << endl;

	// Clean input buffer
	cin.ignore(1000, '\n');

	// IN - Prompt user and get search item
	cout << "Who do you want to search for (enter done and exit)? ";
	getline(cin, nameSearch);
	if (!(cin >> nameSearch))
	{
		cin.clear();
		cin.ignore(1000,'\n');
	}
	// CALC - Check if user wants to quit program
	while (nameSearch != "done")
	{
		// CALC - Search for instances
		instances = SearchNames(name, nameSearch, ARRAY_NUM);

		// OUT - Output the search result
		OutputResult(instances, nameSearch);

		// IN - Prompt user and get search item
		cout << "Who do you want to search for (enter done and exit)? ";
		getline(cin, nameSearch);
	}

	// OUT - Output the final statement
	cout << endl;
	cout << "Thank you for using my program.";

	return 0;
}
