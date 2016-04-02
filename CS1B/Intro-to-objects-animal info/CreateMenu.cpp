/*************************************************************************
 * AUTHOR           : Andrew Daniels & Erick Lopez                       *
 * STUDENT ID       : 759892   		 & 265400                            *
 * LAB #12          : Intro to Object-Oriented Programming               *
 * CLASS            : CS1B                                               *
 * SECTION          : MW - 2:00 PM                                       *
 * DUE DATE         : 02 December 2013                                   *
 *************************************************************************/

// Required Headers : sstring, string
// Function Calls   : <none>

#include "header.h"

/*************************************************************************
 *  FUNCTION CreateMenu
 *_______________________________________________________________________
 *
 *  This function creates a list menu for the user - the type of menu
 *      depending on the type being passed in.
 *_______________________________________________________________________
 *
 *  PRE-CONDITIONS
 *
 *    type : An enumerated menu type must be previously defined.
 *
 *  POST-CONDITIONS
 *
 * 	  This function will create a list menu and return it as
 * 	  a single string.
 *
 *  RETURNS: The menu as a string.
 *
 *************************************************************************/

string CreateMenu(MenuType type) // INPUT - An enumerated menu type.
{
	ostringstream ss; // PROCESS - An output stringstream variable.

	ss << endl;

	// Outputs a numbered menu. Will output a different menu depending
	// on the menu type.
	if(int(type) < int(AGE))
	{
		// The output statements for either the initialization menu
		// or the main menu.
		ss << " 1 - Initialize Animals\n";

		// Will output the statements for the main menu
		// if it is called for.
		if(type == MAIN)
		{
			ss << " 2 - Change Age\n"
			   << " 3 - Change Value\n"
			   << " 4 - Display\n";
		}

		ss << " 0 - Exit\n"
		   << " Enter Selection: ";
	}
	else
	{
		// The output statements for either the age
		// or the value changing menu.
		ss << " CHANGE ";

		// Decides on the type of prompt depending on whether the user
		// wants to change the age or value of an animal.
		switch(type)
		{
			case AGE   : ss << "AGE:";
								break;
			case VALUE : ss << "VALUE:";
								break;
			default    :        break;
		}

		ss << endl
	       << " 1 - Fluffy\n"
		   << " 2 - Maa\n"
		   << " 3 - Babe\n"
		   << " Select the animal you'd like to change: ";
	}

	// Converts the menu output to a string and returns it.
	return ss.str();
}
