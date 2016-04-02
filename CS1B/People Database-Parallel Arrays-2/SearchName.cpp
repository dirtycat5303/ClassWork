/*************************************************************************
 *  AUTHOR		 : Erick Lopez
 *  STUDEN ID    : 245600
 *  ASSIGNMENT #4: Parallel Arrays
 *  CLASS        : CS1B
 *  SECTION      : MW: 10:00 - 11:50
 *  DUE DATE     : 9/16/13
 *  *********************************************************************/
#include "myheader.h"

/*************************************************************************
 * SearchName
 * ----------------------------------------------------------------------
 * This function will search for an item in the array and it will return
 * the index at which it was found. The item has to be passed in
 * by the calling function. It will tell the user in the console if the
 * item was found or not.
 * ----------------------------------------------------------------------
 * Preconditions :
 * 	itemsArr   - Array of strings must be initialized by the calling
 * 		         function
 * 	AR_SIZEF   - Array of ints must be initialized by  the calling
 * 				 function
 * 	searchItem - A item to find must be passed in
 * Postconditions :
 * 	index 	   - This variable will be returned and will contain the index
 * 				 at which the item was found
 ************************************************************************/
int SearchName(string itemsArr[],	//IN & CALC - array of strings
			   const int ARR_SIZE,  //IN & CALC - array size
			   string searchItem)	//IN & CALC - Item searching for
{
	int index; 					    //CALC & OUT- Store the index at which
									//			  which the item was found
	bool found;						//CALC      - Used to see if item was
									//			  found
	//Declaration Section
	found = false;
	index = 0;

		// While-loop will will loop until it reaches the end of array or
		// it finds the item
		while(index < ARR_SIZE && !found )
		{
			if (itemsArr[index] == searchItem)
			{
				found = true;
			}
			else
			{
				index++;
			}
		}//Ends While-Loop

		// If-Else statement will tell user if item was found or not
		if(index < ARR_SIZE)
		{
			cout << "Found." << endl;
		}
		else
		{
			cout << searchItem <<" was not found." << endl;
		}//Ends If-Else statement

		return index;
}
