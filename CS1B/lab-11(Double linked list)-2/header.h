/*************************************************************************
 * AUTHORS		: Alec Boroff & Erick Lopez
 * STUDENT ID	: 874370 & 265400
 * Lab #11		: Creating an Ordered List
 * CLASS		: CS 1B
 * SECTION		: MW 10:00
 * DUE DATE		: November 18, 2013
 *************************************************************************/
#ifndef HEADER_H_
#define HEADER_H_

#include <stdlib.h>
#include <iostream>
#include <iomanip>
#include <fstream>
#include <ios>
#include <string>
#include <limits>
#include <math.h>
using namespace std;

struct PeopleNode
{
	string name;
	char gender;
	int age;
	PeopleNode *next = NULL;
	PeopleNode *prev = NULL;
};

/*************************************************************************
 *
 * FUNCTION PrintHeader
 *_________________________________________________________________________
 * This function receives an assignment name, type and number then outputs
 *   the appropriate header
 *
 *   - returns nothing.
 *_________________________________________________________________________
 * PRE-CONDITIONS
 * 	   asName: Assignment Name has to be previously defined
 * 	   asType: Assignment Type has to be previously defined
 * 	   asNum : Assignment Number has to be previously defined
 *
 * POST-CONDITIONS
 * 		This function will output the class heading.
 *
 *************************************************************************/
void PrintHeader(string asName,	// INPUT - assignment Name
				 char asType,	// INPUT - assignment type
								//		   (LAB or ASSIGNMENT)
				 int asNum);	// INPUT - assignment number

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
PeopleNode* AddAndSortNode(PeopleNode *head,    //IN&OUT - contains a list 
						   PeopleNode *newNode);//IN&OUT - contains new node
											    // 		  to be sorted
/*************************************************************************
 * Remove
 * 		removes the PeopleNode with specified input
 *
 * 	RETURNS
 * 		updated head
 ************************************************************************/
PeopleNode * Remove(PeopleNode * head);
/*************************************************************************
 * Display
 * 		displays entire list in a table format. Will let the user know if 
 * 		the there is nothing to display(No one is on the list)
 *
 * 	RETURNS
 * 		nothing
 *-------------------------------------------------------------------------
 *Preconditions
 * head		- a list must be created
 *Postconditions
 *	Nothing
 *************************************************************************/
void Display(PeopleNode* head); 
/*************************************************************************
 * DisplayReverse
 * 		displays entire list in reverse order. Lets the user know if the
 * 		list is empty
 * 	RETURNS
 * 		nothing
 *------------------------------------------------------------------------
 * Preconditions
 * 	head	- A list must be created
 * Postconditions
 * 	Nothing
 *************************************************************************/
void DisplayReverse(PeopleNode* head);
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
bool IsEmpty(PeopleNode *head); //PROSS - Adress of first item in the 
							    //        oredered list
/*****************************************************
 * Search
 * 		finds the index of a searched item
 *
 * 	RETURNS
 * 		pointer to search location, NULL if not found
 ****************************************************/
PeopleNode * Search(PeopleNode * head, string key);
/*****************************************************
 * Size
 * 		determines size of stack
 *
 * 	RETURNS
 * 		size of stack
 ****************************************************/
int Size(PeopleNode * head, PeopleNode * tail);
/*****************************************************
 * Menu
 * 		outputs stack menu
 *
 * 	RETURNS
 * 		nothing
 ****************************************************/
void Menu();
/**************************************************************************
 * Function IntErrorCheck
 * -----------------------------------------------------------------------
 * This function will prompt the user and check if the correct input was
 * input. If its not, then it will output two different error messages
 * -----------------------------------------------------------------------
 * PRE-CONDITIONS
 * 		prompt		 - The prompt must be passed in
 * 		errorOne	 - The first error must be passed in
 * 		errorTwo	 - The second error must be passed in
 * 		upperBounds	 - The highest input the user can input must be passed in
 * 		lowerBounds	 - The lowest input the user can input must be passed in
 *
 * POST-CONDITIONS
 *  	Returns -> menuIput	 - The correct input will be sent back
 *************************************************************************/

int IntErrorCheck(string prompt,     //OUT 	- prompt should be passed in
				  string errorOne,   //OUT 	- first error should be passed in
				  string errorTwo,   //OUT 	- second error should be passed in
				  int    upperBounds,//PROS - highest value of input
				  int    lowerBounds);//PROS - lowest value of input


PeopleNode * ReadFromFile(PeopleNode * head, string inputFile);

/*****************************************************
 * Clear
 * 		clears the queue
 *
 * 	RETURNS
 * 		nothing
 ****************************************************/
void Clear(PeopleNode *head);


#endif /* HEADER_H_ */
