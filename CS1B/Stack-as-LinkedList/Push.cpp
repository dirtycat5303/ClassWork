/*************************************************************************
 * AUTHOR           : Andrew Daniels , Mahroo Mahmoodi                   *
 * STUDENT ID       : 759892   		 , 276471                            *
 * LAB #9		    : Implementing a Stack                     	         *
 * CLASS            : CS1B                                               *
 * SECTION          : MW - 10:00 AM                                      *
 * DUE DATE         : 28 October 2013                                    *
 *************************************************************************/

// Required Headers : iomanip, ios, iostream, limits, sstring, string
// Function Calls   : GetAndCheckCharacter

#include "header.h"

/**************************************************************************
 * FUNCTION Push
 * ________________________________________________________________________
 * This function adds a name, a gender, and an age to the top of the list.
 * ________________________________________________________________________
 * PRE-CONDITIONS
 * 		listHead : The top of a linked list.
 *
 * POST-CONDITIONS
 * 		This function will add a new node to the top of a linked list,
 * 		containing a person's name, gender, and age, given by the user.
 *
 * RETURNS: The head of the new list.
 *************************************************************************/

PersonInfo *Push(PersonInfo *listHead) // IN - The top of the linked list.
{
	/*********************************************************************
	 * CONSTANTS - Processing
	 * -----------------------------------------------------------------
	 * WIDTH     : A formatting width.
	 *
	 * ERROR     : An error message.
	 * SIZE      : The size of an array.
	 * GENDERS[] : An array containing the characters 'M' and 'F'.
	 *********************************************************************/

	const int      WIDTH         =  14;

	const string   ERROR         =
			       "\n**** Please enter an 'M' or an 'F' ****\n\n";
	const int      SIZE          =  3;
	const char     GENDERS[SIZE] = "MF";

	PersonInfo    *perPtr;       // CALC - new pointer being used to add
	                             //        to the list
	ostringstream  ss;           // CALC - An output stringstream variable,
	                             //        (used for formatting).
	string         genderPrompt; // OUT  - A gender prompt message.

	// Allocates memory for a new node.
	perPtr = new PersonInfo;

	// Prompts for and inputs a name.
	cout <<  left;
	cout << "Who would you like to add?\n\n";
	cout <<  setw(WIDTH) << "Enter Name:";
	getline(cin, perPtr->name);

	// Formats the prompt message for gender input.
	ss << left
	   << setw(WIDTH) << "Enter Gender:"
	   << right;
	genderPrompt = ss.str();

	// Calls a function to get and check a character for gender.
	perPtr->gender = GetAndCheckCharacter(genderPrompt, ERROR,
			                              SIZE,         GENDERS);

	// Prompts for an age.
	cout <<  setw(WIDTH) << "Enter Age:";
	cin  >>  perPtr->age;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	cout <<  right;

	// The new node is added to the top of the list.
	perPtr->next = listHead;
	listHead     = perPtr;

	return listHead;
}
