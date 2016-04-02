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
 * Search Names
 * _______________________________________________________________________
 *
 * 		This function will allow user input the name that user wants to
 * 		search.
 * 		- It returns instances
 * _______________________________________________________________________
 *
 * PRE-CONDITION:
 * 		name		:	Names has to be previously declare as array and
 * 						assigned with strings.
 * 		ARRAY_NUM	:	Numbers of array has to be previously defined as
 * 						constant and assigned with integer.
 *
 * POST-CONDITION:
 *		The function will outputs searching result.
 *
 * RETURN:
 * 		Nothing
 ************************************************************************/
int SearchNames(const string 	name[],			// IN - Names
				const string 	nameSearch,		// IN - Searched name
				const int 		ARRAY_NUM)		// IN - Amounts of array
{

	int index;				// CALC - Index used in for-loop
	int instances;			// CALC & OUT - Number of instance

	// CALC - Initialize counter
	instances = 0;

	// CALC - Searching names
	for (index = 0; index < ARRAY_NUM; index++)
	{

		if(nameSearch == name[index])
		{
			instances++;
		}
	}

	return instances;
}
