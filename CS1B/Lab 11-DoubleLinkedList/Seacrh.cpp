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
 * Search
 * 		Searches for a user inputed PeopleNode by name.
 * 		If found displays data on person.
 *
 * 	RETURNS
 * 		nothing
 ****************************************************/
void Search(PeopleNode *head)
{
	//VARIABLE DECLERATION
	bool found;
	string key;
	PeopleNode *srchPtr;

	//INITIALIZATION
	found = false;
	srchPtr = head;

	if (!IsEmpty(head)) //Can't search any empty list
	{
		//INPUT PROMPT
		cout << "Who would you like to search for? ";
		getline(cin, key);
		cout << endl << "Searching for " << key << "..." << endl;

		//SEARCH
		while (srchPtr != NULL && !found)
		{
			if (srchPtr->name == key)
			{
				cout << endl << "Name:     " << srchPtr->name << endl;
				cout << "Gender:   " << srchPtr->gender << endl;
				cout << "Age:      " << srchPtr->age << endl;
				found = true;
			}
			else
			{
				srchPtr = srchPtr->next;
			}
		}

		if (!found) //Search Key not in the list
		{
			cout << "I'm sorry, \"" << key << "\" was NOT found!" << endl;
		}
	}
	else //List is Empty
	{
		cout << "Can't search an empty list" << endl;
	}
}
