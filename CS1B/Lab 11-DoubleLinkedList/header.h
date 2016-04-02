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

struct PeopleNode{
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
/*****************************************************
 * Enque
 * 		adds a People Node to tail
 *
 * 	RETURNS
 * 		new tail
 ****************************************************/
PeopleNode * AddAndSortNode(PeopleNode* head, PeopleNode* newNode);
/*****************************************************
 * Remove
 * 		removes the PeopleNode with specified input
 *
 * 	RETURNS
 * 		updated head
 ****************************************************/
PeopleNode * Remove(PeopleNode * head);
/*****************************************************
 * Display
 * 		displays entire list
 *
 * 	RETURNS
 * 		nothing
 ****************************************************/
void Display(PeopleNode* head);
/*****************************************************
 * Display2
 * 		displays entire list
 *
 * 	RETURNS
 * 		nothing
 ****************************************************/
void DisplayReverse(PeopleNode* head);
/*****************************************************
 * IsEmpty
 * 		determines whether head is null.
 *
 * 	RETURNS
 * 		true if NULL false if not.
 ****************************************************/
bool IsEmpty(PeopleNode * head);
/*****************************************************
 * Search
 * 		finds the index of a searched item
 *
 * 	RETURNS
 * 		pointer to search location, NULL if not found
 ****************************************************/
void Search(PeopleNode * head);
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
/*****************************************************
 * ReadFromFile
 * 		populates a list bas3ed on data from Input.txt
 *
 * 	RETURNS
 * 		PeopleNode to head of constructed list
 ****************************************************/
PeopleNode * ReadFromFile(PeopleNode * head, string inputFile);
/*****************************************************
 * Clear
 * 		clears the queue
 *
 * 	RETURNS
 * 		nothing
 ****************************************************/
void Clear(PeopleNode *head);
/*****************************************************
 * IntErrorCheck
 *		get input based on bounds and displays proper
 *		 prompts until a valid input is given
 *
 * 	RETURNS
 * 		valid input
 ****************************************************/
int IntErrorCheck(string prompt,     //OUT 	- prompt should be passed in
				  string errorOne,   //OUT 	- first error should be passed in
				  string errorTwo,   //OUT 	- second error should be passed in
				  int    upperBounds,//PROS - highest value of input
				  int    lowerBounds);//PROS - lowest value of input

#endif /* HEADER_H_ */
