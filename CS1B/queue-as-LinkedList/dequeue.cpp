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
 *	Function DEQUEUE
 * -----------------------------------------------------------------------
 * This function will remove the front item in the list.
 * It will create a new pointer and point it to head, then reassign head to
 * the next element and finally deallocate the pointer so the item will
 * be deleted. This function will first check if the list contains at
 * least one item. If not, then it will output to the user that the list is
 * empty.
 * -----------------------------------------------------------------------
 * PRE-CONDITIONS
 * 		head : The top of the linked list
 *
 * POST-CONDITIONS
 * 		Returns -> head
 * 		This function will remove a name from the head of the list.
 ************************************************************************/

people* dequeue (people *head, 	//PROSS	- fist element of the list
				 people *&tail) //PROSS	- last element of the list
{
	people *peoplePtr;			//PROSS - pointer will point to the item
								//		  in front of the list

	//Will only delete the item if the list has at least one item
	if (!isEmpty(head,tail))
	{
		peoplePtr = new people;

		cout << left;
		cout << "DEQUEUING:" <<endl;
		cout << setw(8)   << "Name: "   << head->name   <<endl;
		cout << setw(8)   << "Gender: " << head->gender <<endl;
		cout << setw(8)   << "Age: "    << head->age    <<endl;
		peoplePtr = head;
		head      = peoplePtr->next;

		if(peoplePtr->next == NULL)
		{
			tail = NULL;
		}
		delete peoplePtr;

	}
	else
	{
		cout<< "Can't DEQUEUE from an empty list!" << endl << endl;

	}
	cout << endl;

	return head;
}

