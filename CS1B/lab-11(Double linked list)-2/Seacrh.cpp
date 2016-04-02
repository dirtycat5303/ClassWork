/*************************************************************************
 * AUTHORS		: Alec Boroff & Erick Lopez
 * STUDENT ID	: 874370 & 265400
 * Lab #11		: Creating an Ordered List
 * CLASS		: CS 1B
 * SECTION		: MW 10:00
 * DUE DATE		: November 18, 2013
 *************************************************************************/
# include "header.h"
/*****************************************************
 * Front
 * 		Outputs data of head
 *
 * 	RETURNS
 * 		nothing
 ****************************************************/
PeopleNode * Search(PeopleNode *head, string key)
{
	bool found;
	PeopleNode *srchPtr;
	found = false;
	srchPtr = head;
	while (srchPtr != NULL && !found)
	{
		if(srchPtr->name == key)
		{
			found = true;
		}
		else
		{
			srchPtr = srchPtr->next;
		}
	}

	return srchPtr;
}
