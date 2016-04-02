/************************************************************
* PROGRAMMED BY : Erick Lopez & Gojko Lojpur
* STUDENT ID    : 245600 & 368589
* CLASS         : CS1B
* SECTION       : MW 10:00AM - 11:50AM
* Lab #5        : Binary Search
************************************************************/
#include "myHeader.h"
/************************************************************************
 * insertionSort
 * ----------------------------------------------------------------------
 * This function will sort the array. It wil go through the array only
 * once. Sorts the first two and compare it to the rest. It will get the
 * biggest at the end
 * ----------------------------------------------------------------------
 *  PRE-CONDITION:
 * 		array[]    :	An array of ints should be initialized
 *
 * 		AR_SIZE	   :	The size of the array
 *
 * POST-CONDITION:
 *		The function will sort the array
 *
 ***********************************************************************/
void insertionSort (int array[],int AR_SIZE)
{
	// variable initialization
   int j = 0, key = 0 ;
   for (int index = 1; index < AR_SIZE; ++index )
   {
	   key = array[index];
	   j = index-1;

	   // Will compare two first values and keep doing it until
	   // the biggest reaches the highest index value
	   while(j >= 0 && array [j] > key  )
	   {
		   array [ j + 1 ] = array[ j ];
		   j -= 1;
	   }
	   array[ j+1 ] = key;
   }
}




