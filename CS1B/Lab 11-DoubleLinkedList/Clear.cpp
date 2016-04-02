/*************************************************************************
 * AUTHORS		: Alec Boroff & Erick Lopez
 * STUDENT ID	: 874370 & 265400
 * Lab #11		: Creating an Ordered List
 * CLASS		: CS 1B
 * SECTION		: MW 10:00
 * DUE DATE		: November 18, 2013
 *************************************************************************/
#include "header.h"

/*****************************************************
 * Clear
 * 		clears the queue
 *
 * 	RETURNS
 * 		nothing
 ****************************************************/
void Clear(PeopleNode *head)
{
	//VARIABLES
	PeopleNode * removePtr;

	if(!IsEmpty(head))
	{
		cout << "CLEARING LIST:" << endl;

		//DEALLOCATE all nodes reserving head until it is the last node
		while (head != NULL)
		{
			cout << "Removing " << head->name << "!" << endl;
			removePtr = head;
			head = head->next;
			delete removePtr;
		}
		cout << endl <<  "The list has been cleared!" << endl << endl;
	}
	else
	{
		cout << endl <<  "The list has been CLEARED!" << endl << endl;
	}
}
