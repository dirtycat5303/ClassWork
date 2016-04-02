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
 * AddAndSortNode
 * 		adds a People Node to the list in alphabetical order
 *
 * 	RETURNS
 * 		new head
 ****************************************************/
PeopleNode* AddAndSortNode(PeopleNode* head, PeopleNode *newNode)
{
	//VARIABLES
	PeopleNode* search;

	//INITIALIZATION
	search = head;

	if (IsEmpty(head))
	{
		//Empty
		head = newNode;
	}
	else if (head->name > newNode->name)
	{
		//First
		newNode->next = head;
		head->prev = newNode;
		head = newNode;
	}
	else
	{
		//Search
		while (search->next != NULL && search->name < newNode->name)
		{
			search = search->next;
		}
		if (search->name < newNode->name)
		{
			//Last
			newNode->next = NULL;
			newNode->prev = search;
			search->next = newNode;
		}
		else
		{
			//Middle
			newNode->next = search;
			newNode->prev = search->prev;
			search->prev->next = newNode;
			search->prev = newNode;
		}
	}
	return head;
}
