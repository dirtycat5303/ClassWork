/*************************************************************************
 * AUTHOR #1     : Morgan Heaslet
 * AUTHOR #2	 : Erick Lopez
 * STUDENT ID #1 : 889647
 * STUDENT ID #2 : 265400
 * LAB #6        : Structs
 * CLASS         : CS1B
 * SECTION:      : MW 10AM
 * DUE DATE      : 10/02/2013
 ************************************************************************/

/*************************************************************************
 *
 * FUNCTION SearchStringArray
 * _______________________________________________________________________
 * This function searches an array for a given string, and returns the
 * index of element if found.
 * _______________________________________________________________________
 * PRE-CONDITIONS
 * 		person     : The struct has to be previously defined
 * 		AR_SIZE    : The array size has to be previously defined
 * 		searchItem : The item being searched has to be previously defined
 *
 * POST-CONDITIONS
 * 		This function will return the index of the found element
 ************************************************************************/

#include "myHeader.h"

int SearchStringArray (PersonInfo person[],	 // IN - Array name
					   const int AR_SIZE,	 // IN - Array size
					   string searchItem)	 // IN - Item to be searched
{
	int index;							 // Array index
	bool found;							 // True if searched item is found

	index = 0;
	found = false;

	// PROCESSING - Searches array for item
	while(index < AR_SIZE && !found)
	{
		if(person[index].name == searchItem)
		{
			found = true;
		}
		else
		{
			index++;
		} //end if (namesAr[index] == searchItem)
	} //end while(index < AR_SIZE || !found)

	return index;
}
