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
 * Dequeue
 * 		removes the PeopleNode at the top of the head
 *
 * 	RETURNS
 * 		updated head
 ****************************************************/
PeopleNode * Remove(PeopleNode *head) {
	string key;
	PeopleNode * removePtr;
	PeopleNode *srchPtr;

	if (!IsEmpty(head))
	{
		cout << "Who would you like to remove? ";
		getline(cin, key);
		cout << endl << "Searching for " << key << "..." << endl;
		srchPtr = head;
		if(head->name == key)
		{
			cout << "Removing " << key << "!" << endl;
			removePtr = head;
			head = head->next;
			head->prev = NULL;
			delete removePtr;
		}
		else
		{
			while (srchPtr != NULL && srchPtr->name != key)
			{
				srchPtr = srchPtr->next;
			}
			if (srchPtr == NULL)
			{
				cout << "I'm sorry, \"" << key << "\" was NOT found!" << endl;
			}
			else
			{
				cout << "Removing " << key << "!" << endl;
				if(srchPtr->next == NULL)
				{
					srchPtr->prev->next = NULL;
				}
				else
				{
					srchPtr->next->prev = srchPtr->prev;
					srchPtr->prev->next = srchPtr->next;
				}
				delete srchPtr;
				srchPtr = NULL;
			}
		}
	}
	else
	{
		cout << "Can't remove from an empty list" << endl;
	}
	return head;
}
