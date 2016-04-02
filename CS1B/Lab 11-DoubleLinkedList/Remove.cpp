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
 * Remove
 * 		Searches for and (if found) removes a PeopleNode
 * 		with a user inputed name
 *
 * 	RETURNS
 * 		updated head
 ****************************************************/
PeopleNode * Remove(PeopleNode *head)
{

	//Variable Declaration
	string key;
	PeopleNode * removePtr;
	PeopleNode *srchPtr;

	//Initialization
	srchPtr = head;

	if (!IsEmpty(head))
	{
		// I/O
		cout << "Who would you like to remove? ";
		getline(cin, key);
		cout << endl << "Searching for " << key << "..." << endl;

		if(head->name == key)
		{
			// First
			cout << "Removing " << key << "!" << endl;
			removePtr = head;
			head = head->next;
			head->prev = NULL;
			delete removePtr;
		}
		else
		{
			// Search
			while (srchPtr != NULL && srchPtr->name != key)
			{
				srchPtr = srchPtr->next;
			}
			if (srchPtr == NULL) //Key not found
			{
				cout << "I'm sorry, \"" << key << "\" was NOT found!" << endl;
			}
			else
			{
				cout << "Removing " << key << "!" << endl;
				if(srchPtr->next == NULL)
				{
					// Last
					srchPtr->prev->next = NULL;
				}
				else
				{
					// Middle
					srchPtr->next->prev = srchPtr->prev;
					srchPtr->prev->next = srchPtr->next;
				}

				delete srchPtr;
			}
		}
	}
	else // List is Empty
	{
		cout << "Can't remove from an empty list" << endl;
	}
	return head;
}
