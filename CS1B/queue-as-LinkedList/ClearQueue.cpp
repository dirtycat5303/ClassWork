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
 *	Function ClearQueue
 * -----------------------------------------------------------------------
 * This function will clear all the data in the list
 * -----------------------------------------------------------------------
 * * PRE-CONDITIONS
 * 		head : The top of the linked list
 * 		tail : The end of the linked list
 *
 *
 * POST-CONDITIONS
 * 		Returns -> head
 * 		This function will remove a all data from the list.
* ***********************************************************************/

people *ClearQueue(people *head,		//PROSS	- first element of the list
				   people *&tail)		//PROSS	- last element of the list
{
	people *peoplePtr;
	cout << left;

	if(head == NULL)
	{
		cout << "The QUEUE is ALREADY  clear!\n\n";
	}
	else
	{
		cout << "CLEARING...\n";
		while (head != NULL)
		{

			peoplePtr = head;
			cout     << peoplePtr->name;
			head      = peoplePtr->next;
			if(peoplePtr->next == NULL)
			{
				tail = NULL;
			}
			delete peoplePtr;
			cout <<endl;
		}
		cout << "\nThe QUEUE has been CLEARED!" << endl << endl;
	}

	return head;

}
