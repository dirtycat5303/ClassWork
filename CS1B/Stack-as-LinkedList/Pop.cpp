/*************************************************************************
 * AUTHOR           : Andrew Daniels , Mahroo Mahmoodi                   *
 * STUDENT ID       : 759892   		 , 276471                            *
 * LAB #9		    : Implementing a Stack                     	         *
 * CLASS            : CS1B                                               *
 * SECTION          : MW - 10:00 AM                                      *
 * DUE DATE         : 28 October 2013                                    *
 *************************************************************************/

// Required Headers : iomanip, iostream
// Function Calls   : <none>

#include "header.h"

/**************************************************************************
 * FUNCTION Pop
 * ________________________________________________________________________
 * This function removes a node from the top of a list after outputting
 * the node's contents to the user.
 * ________________________________________________________________________
 * PRE-CONDITIONS
 * 		listHead : The top of the linked list must be previously defined.
 *
 * POST-CONDITIONS
 * 		This function will remove a node from the top of a list after
 * 		outputting the node's information.
 *
 * RETURNS: The head of the new list.
 *************************************************************************/

PersonInfo *Pop(PersonInfo *listHead) // IN   - The top of the linked list.
{
	const int 	WIDTH = 8;            // CALC - Formatting width.

	PersonInfo *perPtr; 			  // CALC - New pointer being used
	                                  //        to add to the list.

	// Provided the stack is not empty, Information from the top of
	// the stack will be output to the user, and the memory reserved for
	// it will be removed from the stack.
	if(listHead != NULL)
	{
		perPtr = listHead;

		cout <<  left;
		cout << "POPPING\n";
		cout <<  setw(WIDTH) << "Name:"   << perPtr->name   << endl;
		cout <<  setw(WIDTH) << "Gender:" << perPtr->gender << endl;
		cout <<  setw(WIDTH) << "Age:"    << perPtr->age    << endl;
		cout <<  right;

		listHead = perPtr -> next;
		delete perPtr;
	}
	else
	{
		cout << "Can\'t POP from an empty stack!" << endl;
	} // end IF

	return listHead;
}
