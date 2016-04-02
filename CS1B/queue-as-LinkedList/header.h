/*************************************************************************
 * AUTHOR           : Erick Lopez , Mahroo Mahmoodi
 * STUDENT ID       : 265400   	  , 276471
 * LAB #9		    : Implementing a Queue
 * CLASS            : CS1B
 * SECTION          : MW - 10:00 AM
 * DUE DATE         : 06 November 2013
 *************************************************************************/

#ifndef LAB9_H_
#define LAB9_H_


#include <iostream>
#include <iomanip>
#include <limits>
#include <math.h>
#include <ios>

using namespace std;

struct people
{
	string  name;
	char    gender;
	int     age;
	people *next;
};

enum NewMenu
{
	QUIT,
	ENQUEUE,
	DEQUEUE,
	ISEMPTY,
	FRONT,
	SIZE,
	CLEAR_QUEUE
};

/*************************************************************************
 * PrintHeader
 * --------------------------------------------------------
 * USED FOR CLASS HEADING - ALL WILL BE OUTPUT
 * --------------------------------------------------------
 * PRE-CONDITIONS
 * 		PROGRAMMER : Programmer's Name
 * 		CLASS      : Student's course
 * 		SECTION    : Class Days and Times
 * 		LAB_NUM    : Lab Number (specific to this lab)
 *		LAB_NAME   : Title of the lab
 *
 * POST-CONDITIONS
 * 		This function will output the class heading.
 ************************************************************************/

void PrintHeader();

/*************************************************************************
 * Function ENQUEUE
 * -----------------------------------------------------------------------
 * This Function will add a new item to the end of the list. It will create
 * a new pointer and point it to what head is pointing to, then point head
 * to the new pointer
 * -----------------------------------------------------------------------
 *  PRE-CONDITIONS
 * 		head : The top of the linked list
 * 		tail : The end of the linked list
 *
 * POST-CONDITIONS
 * 		Returns -> head
 * 		This function will add a name to the tail of the linked list.
 * ***********************************************************************/
people* enqueue (people* head, 		//PROSS- first element of the list
				 people *&tail);	//PROSS- last element of the list

/*************************************************************************
 *	Function DEQUEUE
 * -----------------------------------------------------------------------
 * This function will remove the front item in the list.
 * It will create a new pointer and point it to head, then reassign head to
 * the next element and finally deallocate the pointer so the item will
 * be deleted. This function will first check if the list contains at
 * least one item. If not, then it will output to the user that the list is
 * empty.
 * -----------------------------------------------------------------------
 * PRE-CONDITIONS
 * 		head : The top of the linked list
 * 		tail : The end of the linked list
 *
 * POST-CONDITIONS
 * 		Returns -> head
 * 		This function will remove a name from the head of the list.
* ***********************************************************************/
people* dequeue (people *head, 		//PROSS	- fist element of the list
				 people *&tail); 	//PROSS	- last element of the list


/*************************************************************************
 *	Function IntErrorCheck
 * -----------------------------------------------------------------------
 * This function checks to see if the user entered the proper choice
 *  for the menu
 * -----------------------------------------------------------------------
 * PRE-CONDITIONS
 * 		menuItem : input being error checked
 *
 * POST-CONDITIONS
 * 		Returns -> menuItem
 * 		This function will run until a valid integer is inputed
* ***********************************************************************/
int IntErrorCheck(string prompt,      //OUT  - prompt should be passed in
				  string errorOne,    //OUT  - first error should be passed in
				  string errorTwo,    //OUT  - second error should be passed in
				  int    upperBounds, //PROS - highest value of input
				  int    lowerBounds);//PROS - lowest value of input

/*************************************************************************
 *	Function isEmpty
 * -----------------------------------------------------------------------
 * This function will let the user know if the stack is empty or how many
 * people it contains. It will check if head equals NULL
 * -----------------------------------------------------------------------
 * PRE-CONDITIONS
 * 		head : The top of the linked list
 * 		tail : The end of the linked list
 *
 * POST-CONDITIONS
 * 		This function returns whether or not the list is empty
* ***********************************************************************/
bool isEmpty (people *head,	//PROSS	- first element of the list
			  people *tail); //PROSS	- last element of the list

/*************************************************************************
 *	Function FRONT
 * -----------------------------------------------------------------------
 * This function will let the user examine the item in the top of the list
 * It will check if the list is empty first, if it is, it will let the user know
 * -----------------------------------------------------------------------
 * PRE-CONDITIONS
 * 		head : The top of the linked list
 * 		tail : The end of the linked list
 *
 * POST-CONDITIONS
 * 		No return.
 * 		This function only outputs the number of elements to the console
* ***********************************************************************/
void front (people *head,		//PROSS	- first element of the list
			people *tail);		//PROSS	- last element of the list

/*************************************************************************
 *	Function SIZE
 * -----------------------------------------------------------------------
 * This function will let the user know how many items are in the list.
 * The function creates a new pointer and keeps switching it until the
 * pointers points to NULL
 * -----------------------------------------------------------------------
 * PRE-CONDITIONS
 * 		head : The top of the linked list
 * 		tail : The end of the linked list
 *
 * POST-CONDITIONS
 * Nothing	- 	It lets the user know how many items are in the list
* ***********************************************************************/
void    size (people *head,		//PROSS	- first element of the list
			  people *tail); 	//PROSS	- last element of the list



/*************************************************************************
 *	Function ClearQueue
 * -----------------------------------------------------------------------
 * This function will clear all the data in the list
 * -----------------------------------------------------------------------
 * * PRE-CONDITIONS
 * 		head : The top of the linked list
 * 		tail : The end of the linked list
 *
 *
 * POST-CONDITIONS
 * 		Returns -> head
 * 		This function will remove a all data from the list.
* ***********************************************************************/
people *ClearQueue(people *head,		//PROSS	- first element of the list
				   people *&tail);		//PROSS	- last element of the list


#endif /* LAB9_H_ */
