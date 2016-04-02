/*************************************************************************
 * AUTHOR           : Andrew Daniels , Mahroo Mahmoodi                   *
 * STUDENT ID       : 759892   		 , 276471                            *
 * LAB #9		    : Implementing a Stack                     	         *
 * CLASS            : CS1B                                               *
 * SECTION          : MW - 10:00 AM                                      *
 * DUE DATE         : 28 October 2013                                    *
 *************************************************************************/

// Required Headers : iostream
// Function Calls   : <none>

#include "header.h"

/**************************************************************************
 * FUNCTION IsEmpty
 * ________________________________________________________________________
 * This function checks if a linked list is empty.
 * ________________________________________________________________________
 * PRE-CONDITIONS
 * 		listHead : The top of a linked list must be previously defined.
 *
 * POST-CONDITIONS
 * 		This function outputs whether or not a list is empty.
 *
 * RETURNS: Nothing.
 *************************************************************************/

void IsEmpty(PersonInfo *listHead) // IN - The top of the linked list.
{
	// Outputs to the user whether the stack
    // is empty or not.
	if(listHead == NULL)
	{
		cout << "Yes, the stack is empty.\n";
	}
	else
	{
		cout << "The stack is NOT empty.\n";
	}// end IF
}
