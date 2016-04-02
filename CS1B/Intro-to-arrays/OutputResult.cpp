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
 *
 * Output Result
 * _______________________________________________________________________
 *
 * 		This function will output the search result: number of instances.
 * 		- It returns nothing
 * _______________________________________________________________________
 *
 * PRE-CONDITION:
 * 		instances	:	Number of instances has to be previously defined.
 * 		nameSearch	:	Searched name has to be previously defined.
 *
 * POST-CONDITION:
 *		The function will outputs searching result.
 *
 * RETURN:
 * 		Nothing
 ************************************************************************/
void OutputResult(const int 	instances,		// IN - Number of instance
				  const string 	nameSearch)		// IN - Searched name
{
	// CALC & OUT - Based on the number of instance, the program output
	//				the	result differently.
	switch (instances)
	{
	case 0	:	cout << nameSearch;
				cout << "'s name does not exist in this list.";
				cout << endl << endl;
				break;

	case 1	:	cout << "There is one instance of the name ";
				cout << nameSearch << ".";
				cout << endl << endl;
				break;

	default :	cout << "There are " << instances;
				cout << " instances of the name " << nameSearch << ".";
				cout << endl << endl;
				break;
	}
}
