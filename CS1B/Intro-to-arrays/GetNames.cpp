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
 * Get Names
 * _______________________________________________________________________
 *
 * 		This function will obtain names, and store back the data by
 * 		passing by reference.
 * 		- It returns nothing
 *________________________________________________________________________
 *
 * PRE-CONDITION:
 * 		name	:	Name has to be previously declare as array.
 *
 * POST-CONDITION:
 *		The function will obtain names from user and store them.
 *
 * RETURN:
 * 		Nothing
 ************************************************************************/
void GetNames(string 	name[],			// IN - Names
			  const int ARRAY_NUM)		// IN - Amounts of array
{
	int nameCount;		// CALC & OUT - name counter

	// CALC - Initialize name counter
	nameCount = 0;

	// IN - Input names
	for (int count = 0; count < ARRAY_NUM; count++)
	{
		nameCount++;

		cout << "Enter name #" << nameCount << ": ";
		cin  >> name[count];
	}
}
