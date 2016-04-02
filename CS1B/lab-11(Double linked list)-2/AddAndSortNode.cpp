/*************************************************************************
 * AUTHORS		: Alec Boroff & Erick Lopez
 * STUDENT ID	: 874370 & 265400
 * Lab #11		: Creating an Ordered List
 * CLASS		: CS 1B
 * SECTION		: MW 10:00
 * DUE DATE		: November 18, 2013
 *************************************************************************/
# include "header.h"
/*************************************************************************
 * AddAndSortNode
 * 		adds a People Node to where is suppose to go in alphabetical order
 *
 * 	RETURNS
 * 		new head
 *------------------------------------------------------------------------
 *Preconditions 
 *	head	- a list must be created
 *	newNode - an item must be created to add to list
 *Postconditions
 * head		- the list will contain a new item
 *************************************************************************/
PeopleNode* AddAndSortNode(PeopleNode *head,   //IN&OUT - contains a list 
						   PeopleNode *newNode)//IN&OUT - contains new node
											   // 		  to be sorted
{
	PeopleNode *search; //PROSS- Node will search for item less than newNode
	search    = head;   //node will point at the first item

	if(IsEmpty(head))//if list is empty it will add to head
	{
		head = newNode;
	}
	else if(head->name > newNode->name)//points new item before the first 
									   //item
	{
		newNode->next = head;   								
		head->prev    = newNode;
		head          = newNode;
	}
	else
	{	
		 //Will stop when search is less than item or when it reaches the
		 //last item
		 while(search->next != NULL && search->name < newNode->name)
		 {
			 search = search->next;
		 }
		 if(search->name < newNode->name)//Adding to the last item 
		 {
		  newNode->next = NULL;
		  newNode->prev = search;
		  search->next = newNode;
		 }
		 else//Adding to the middle
		 {
		  newNode->next = search;
		  newNode->prev = search->prev;
		  search->prev->next = newNode;
		  search->prev = newNode;
		 }
	}

	return head;
}
