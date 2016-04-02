/*************************************************************************
 * AUTHORS		: Alec Boroff & Erick Lopez
 * STUDENT ID	: 874370 & 265400
 * Lab #11		: Creating an Ordered List
 * CLASS		: CS 1B
 * SECTION		: MW 10:00
 * DUE DATE		: November 18, 2013
 *************************************************************************/
#include "header.h"

/*************************************************************************
 * Clear
 * 		clears the list. Lets the user know who is being cleared and when
 * 		the list is cleared.
 *
 * 	RETURNS
 * 		nothing
 * -----------------------------------------------------------------------
 * Preconditions
 * 	head	- a list must be created
 * Posconditions
 * 	None
 *************************************************************************/
void Clear(PeopleNode *head)
{
	PeopleNode * removePtr;	//OUT - contains item being removed
	
	if(!IsEmpty(head)) //Will only run if list is not empty 
	{
		cout << "CLEARING LIST:" << endl;

		while (head != NULL)//Will run untill there is no one else in list
		{
			cout << "Removing " << head->name << "!" << endl;
			removePtr = head;
			head      = head->next;
			delete removePtr;
		}
		cout << endl <<  "The list has been cleared!" << endl << endl;
	}
	else
	{
		cout << endl <<  "The list has been CLEARED!" << endl << endl;
	}
}
