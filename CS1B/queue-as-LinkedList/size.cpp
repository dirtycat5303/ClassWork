/*************************************************************************
 * AUTHOR           : Erick Lopez , Mahroo Mahmoodi
 * STUDENT ID       : 265400   	  , 276471
 * LAB #9		    : Implementing a Queue
 * CLASS            : CS1B
 * SECTION          : MW - 10:00 AM
 * DUE DATE         : 06 November 2013
 *************************************************************************/
#include "header.h"
/*************************************************************************
 *	Function size
 * -----------------------------------------------------------------------
 * This function will let the user know how many items are in the list.
 * The function creates a new pointer and keeps switching it until the
 * pointers points to NULL
 * -----------------------------------------------------------------------
 * PRE-CONDITIONS
 * 		head : The top of the linked list
 * 		tail : The end of the linked list
 *
 * POST-CONDITIONS
 * Nothing	- 	It lets the user know how many items are in the list
 *
 ************************************************************************/

void    size (people *head,		//PROSS	- first element of the list
			  people *tail) 	//PROSS	- last element of the list
{
	int    counter;		//PROSS&OUT	- changes every time the pointer points
						// 			  to a new item
	people *peoplePtr;	//PROSS		- pointer will point to different items
	peoplePtr = head;	//Pointer points to first item in stack
	counter   = 0;		//Counter begins

	//Loop will only work while the pointer doesn't point to the last item
	while (peoplePtr != NULL)
	{
		//Pointer changes item pointing to
		peoplePtr = peoplePtr->next;
		counter++;
	}
	if (counter == 1)
	{
		cout << "There is one person on the queue.";
	}
	else if (counter == 0)
	{
		cout << "Nobody is on the queue!";
	}
	else
	{
		cout << "There are " <<counter << " people in the queue";
	}
	cout << endl << endl;
	delete peoplePtr;
}
