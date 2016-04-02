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
 *	Function FRONT
 * -----------------------------------------------------------------------
 * This function will let the user examine the item in the top of the list
 * It will check if the list is empty, if it is, it will let the user know
 * -----------------------------------------------------------------------
 * PRE-CONDITIONS
 * 		head : The top of the linked list
 * 		tail : The end of the linked list
 *
 * POST-CONDITIONS
 * Nothing	- 	Lets the user know who is at the front of the stack, or
 * 				if the stack is empty
 *
 ************************************************************************/

void front (people *head,		//PROSS	- first element of the list
			people *tail) 		//PROSS	- last element of the list
{
	if(!isEmpty(head,tail))
	{
		cout << "The first person in the queue is:" << endl;
		cout << setw(8) << "Name: "<< head->name << endl;
		cout << setw(8) << "Gender: " << head->gender << endl;
		cout << setw(8) << "Age: " << head->age << endl;
	}
	else
	{
		cout << "Nobody in FRONT, the queue is empty!!" << endl << endl;
	}
	cout << endl;
}

