/*************************************************************************
 * AUTHOR           : Andrew Daniels , Mahroo Mahmoodi                   *
 * STUDENT ID       : 759892   		 , 276471                            *
 * LAB #9		    : Implementing a Stack                     	         *
 * CLASS            : CS1B                                               *
 * SECTION          : MW - 10:00 AM                                      *
 * DUE DATE         : 28 October 2013                                    *
 *************************************************************************/

// Required Headers : iostream
// Function Calls   : IsEmpty

#include "header.h"

/**************************************************************************
 * FUNCTION Size
 * ________________________________________________________________________
 * This function outputs how many nodes are in the linked list.
 * ________________________________________________________________________
 * PRE-CONDITIONS
 * 		listHead : The top of the linked list must be previously defined.
 *
 * POST-CONDITIONS
 * 		This function only outputs the number of elements to the console.
 *
 * RETURNS: Nothing.
 *************************************************************************/

void Size(PersonInfo *listHead) // IN - The top of the linked list.
{
	int         nodes;  // CALC - A counter variable for nodes in the list.
	PersonInfo *perPtr; // CALC - A list pointer variable.

	// The processing variables are initialized here.
	nodes     = 0;
	perPtr    = listHead;

	// Counts the number of nodes in the list, provided the list
	// is not empty.
	if (listHead != NULL)
	{
		// The stack is assumed to have at least one node in it.
		nodes  = 1;

		// The number of nodes in the stack is counted until the pointer
		// reaches NULL.
		while(perPtr->next != NULL)
		{
			nodes  = nodes + 1;
			perPtr = perPtr->next;
		}// end WHILE
	}// end IF

	// Outputs the number of nodes (people) in the stack.
	switch(nodes)
	{
		case 0  : cout << "Nobody is on the stack!\n";
				  break;
		case 1  : cout << "There is one person on the stack.\n";
				  break;
		default : cout << "There are " << nodes
				       << " people on the stack.\n";
				  break;
	}// end SWITCH
}
