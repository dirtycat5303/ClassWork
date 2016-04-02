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
 * IsEmpty
 * 		determines whether head is pointing to null.
 *
 * 	RETURNS
 * 		true if list is empty and false if it its not.
 *------------------------------------------------------------------------
 * Preconditions
 * 	head 	- a list must be created 
 * Postconditions
 * 	Nothing
 *************************************************************************/
bool IsEmpty(PeopleNode *head) //PROSS - Adress of first item in the 
							   //        oredered list
{
	return head == NULL;
}
