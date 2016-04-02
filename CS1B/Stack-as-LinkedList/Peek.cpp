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
 * FUNCTION Peek
 * ________________________________________________________________________
 * This function outputs the first name, gender, and age in a list.
 * ________________________________________________________________________
 * PRE-CONDITIONS
 * 		listHead : The top of a linked list must be previously defined.
 *
 * POST-CONDITIONS
 * 		This function will output the first entry in a list, or tell the
 * 		user there is no one in the list.
 *
 * RETURNS: Nothing.
 *************************************************************************/

void Peek(PersonInfo *listHead) // IN   - The top of the linked list.
{
	const int WIDTH = 8;        // CALC - Formatting width.

	// Outputs information from the top of the stack,
	// provided the stack is not empty.
	if(listHead != NULL)
	{
		cout <<  left;
		cout << "PEEKING at\n";
		cout <<  setw(WIDTH) << "Name:"   << listHead->name   << endl;
		cout <<  setw(WIDTH) << "Gender:" << listHead->gender << endl;
		cout <<  setw(WIDTH) << "Age:"    << listHead->age    << endl;
		cout <<  right;
	}
	else
	{
		cout << "There is nobody to PEEK at!" << endl;
	} // end IF
}
