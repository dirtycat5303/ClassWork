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
int StringSearch(MovieInfo* head, string stringKey)
{
	MovieInfo *stringPtr;
	stringPtr = head;
	int counter;
	counter = 0;

		while(stringPtr != NULL)
		{
			if(  stringKey == stringPtr->genre
					  || stringKey == stringPtr->AltGenre
				      || stringKey == stringPtr->leadActor
				      || stringKey == stringPtr->suppActor)
			{
				cout << setw(9) << counter + 1;
				cout << setw(51) <<CheckTitle(stringPtr->title,45);
				cout << setw(8) << stringPtr->year;
				cout << setw(5) << stringPtr->rating ;

				cout << setw(17) <<  stringPtr->genre;
				cout << setw(17) << stringPtr->AltGenre ;
				cout <<  setw(20) << stringPtr->leadActor;

				cout <<  setw(18) << stringPtr->suppActor << endl;
				counter++;
			}
			stringPtr = stringPtr->next;
		}
	return counter;
}
