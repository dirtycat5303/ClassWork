/*************************************************************************
 *  AUTHOR		 : Erick Lopez
 *  STUDEN ID    : 245600
 *  ASSIGNMENT #7: Searching Linked List
 *  CLASS        : CS1B
 *  SECTION      : MW: 10:00 - 11:50
 *  DUE DATE     : 11/03/13
 *  *********************************************************************/
#include "myheader.h"

/*************************************************************************
 * Function IntSearch
 * -----------------------------------------------------------------------
 * This function will output the movies information to an output file.
 * -----------------------------------------------------------------------
 * Preconditions:
 * 		head	- A linked list must be initialized
 * 		outFile	- A varible of type ofstream must be initialized
 * Postconditions:
 * 		None, It outputs the information in the linked list.
 ************************************************************************/
int IntSearch(MovieInfo *head, int intKey)
{
	MovieInfo *intPtr;
	intPtr = head;
	int counter;
	counter = 0;

	while(intPtr != NULL)
	{
		if( intKey == intPtr->rating
		  || intKey == intPtr->year)
		{
			cout << setw(9) << counter + 1;
			cout << setw(51) <<CheckTitle(intPtr->title,45);
			cout << setw(8) << intPtr->year;
			cout << setw(5) << intPtr->rating ;

			cout << setw(17) <<  intPtr->genre;
			cout << setw(17) << intPtr->AltGenre ;
			cout <<  setw(20) << intPtr->leadActor;

			cout <<  setw(18) << intPtr->suppActor << endl;
			counter++;
		}
		intPtr = intPtr->next;
	}
return counter;
}
