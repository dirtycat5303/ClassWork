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
 *	Function isEmpty
 * -----------------------------------------------------------------------
 * This function will let the user know if the stack is empty or how many
 * people it contains. It will check if head equals NULL
 * -----------------------------------------------------------------------
 * PRE-CONDITIONS:
 * 		head : The top of the linked list
 * 		tail : The end of the linked list
 *
 * POST-CONDITIONS:
 * This function returns whether or not the list is empty.
 ************************************************************************/

bool isEmpty (people *head,	//PROSS	- first element of the list
			  people *tail) //PROSS	- last element of the list
{
	bool isEmpty;

	if (head == NULL && tail == NULL)
	{
		isEmpty = true;
	}
	else
	{
		isEmpty = false;
	}

	return isEmpty;
}


