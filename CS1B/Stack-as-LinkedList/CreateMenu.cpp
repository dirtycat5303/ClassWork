/*************************************************************************
 * AUTHOR           : Andrew Daniels , Mahroo Mahmoodi                   *
 * STUDENT ID       : 759892   		 , 276471                            *
 * LAB #9		    : Implementing a Stack                     	         *
 * CLASS            : CS1B                                               *
 * SECTION          : MW - 10:00 AM                                      *
 * DUE DATE         : 28 October 2013                                    *
 *************************************************************************/

// Required Headers : sstring, string
// Function Calls   : <none>

#include "header.h"

/**************************************************************************
 * FUNCTION CreateMenu
 * ________________________________________________________________________
 * This function creates a stack menu for the user.
 * ________________________________________________________________________
 * PRE-CONDITIONS
 * 		<none>
 *
 * POST-CONDITIONS
 * 		This function will create a stack menu and return it as
 * 		a single string.
 *
 * RETURNS: The menu as a string.
 *************************************************************************/

string CreateMenu()
{
	ostringstream ss; // An output stringstream variable.

	// The statements outputting the menu to the stringstream.
	ss << "1 --- Add a person (PUSH)\n"
	   << "2 --- Remove a person (POP)\n"
	   << "3 --- Is the stack empty? (ISEMPTY)\n"
	   << "4 --- Who is on top? (PEEK)\n"
	   << "5 --- How many people are there? (SIZE)\n"
	   << "0 --- to EXIT\n";

	// Converts the menu output to a string and returns it.
	return ss.str();
}
