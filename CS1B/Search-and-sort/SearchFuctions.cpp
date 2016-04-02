/************************************************************************
* PROGRAMMED BY : Erick Lopez & Gojko Lojpur
* STUDENT ID    : 245600 & 368589
* CLASS         : CS1B
* SECTION       : MW 10:00AM - 11:50AM
* Lab #5        : Binary Search
*************************************************************************/
#include "myHeader.h"

/************************************************************************
 * Sequential Search
 * ----------------------------------------------------------------------
 * This function will search each element until the element is found then
 * it will return the index.
 * ----------------------------------------------------------------------
 *  PRE-CONDITION:
 * 		array[]    :	An array of ints should be initialized
 *
 * 		AR_SIZE	   :	The size of the array
 *
 * 		searchItem :	Item the user wants to search
 *
 * POST-CONDITION:
 *		The function will return the index of the item if found
 *
 ***********************************************************************/

int SequentialSearch(int array[],const int AR_SIZE, int searchItem)
{
	int index = 0;
	bool found = false;
	while(!found && index < AR_SIZE)
	{
		if (array[index]== searchItem)
		{
			found = true;
		}
		else
		{
			index++;
		}
	}
	return index;
}
/************************************************************************
 * BinarySearch
 * ----------------------------------------------------------------------
 * This function will search for for a number inputed by the user. This
 * function will keep dividing the ordered list until number is found.
 * ----------------------------------------------------------------------
 *  PRE-CONDITION:
 * 		array[]    :	An array of ints should be initialized
 *
 * 		AR_SIZE	   :	The size of the array
 *
 * 		searchItem :	Item the user wants to search
 *
 * POST-CONDITION:
 *		The function will return the index of the item if found
 *
 ***********************************************************************/
int BinarySearch(int array[], const int AR_SIZE, int searchItem)
{
	int bott;
	int top;
	bool found;
	int index;
	int mid;

	bott = 0;
	top  = AR_SIZE-1;
	found = false;

	while(!found && bott <= top)
	{
		mid =(bott+top)/2;

		if(array[mid]== searchItem)
		{
			found = true;

			index = mid;
		}
		else if (array[mid] < searchItem)
		{
			bott = mid +1;
		}
		else
		{
			top = mid-1;
		}
	}

 return index;
}
