/*************************************************************************
 * AUTHOR           : Andrew Daniels , Mahroo Mahmoodi                   *
 * STUDENT ID       : 759892   		 , 276471                            *
 * LAB #9		    : Implementing a Stack                     	         *
 * CLASS            : CS1B                                               *
 * SECTION          : MW - 10:00 AM                                      *
 * DUE DATE         : 28 October 2013                                    *
 *************************************************************************/

#include "header.h"

/**************************************************************************
 * Implementing a Stack
 * ________________________________________________________________________
 * This program emulates a stack. A menu is provided for the user to check
 *   one of these five options (push, pop, is empty, peek and size). Push
 *   allows them to enter in a name, gender and age. Pop gives all the info
 *   from the person who is being removed. Peek shows them who is at the
 *   top of the list. Size tells them how many people are in the list. Is
 *   empty tells the user if the list is empty or not.
 * ________________________________________________________________________
 *	INPUTS:
 *	  inputNum   : A numerical input from the user.
 *
 *	OUTPUTS:
 *	  menuString : An action menu given as a string.
 *************************************************************************/

int main()
{
	/*********************************************************************
	 * CONSTANTS - Processing
	 * -----------------------------------------------------------------
	 * AS_NAME : Assignment name.
	 * AS_TYPE : Assignment type (LAB or ASSIGNMENT).
	 * AS_NUM  : Assignment number.
	 *
	 * PROMPT  : A prompt message.
	 * ERROR   : An error message.
	 * DEFAULT : A default input, the value resets the main loop structure.
	 * MIN     : A lower bound.
	 * MAX     : An upper bound.
	 *********************************************************************/

	const string AS_NAME = "Implementing a Stack";
	const char   AS_TYPE = 'L';
	const int    AS_NUM  =  9;

	const string PROMPT  = "Enter a command? ";
	const string ERROR   = "Please enter a number between 0 and 5";
	const int    DEFAULT =  6;
	const int    MIN     =  0;
	const int    MAX     =  5;

	int          inputNum;    // IN   - A numerical input from the user.
	string       menuString;  // OUT  - An action menu given as a string.
	PersonInfo  *head;		  // CALC - The head of a linked list.
	MenuItem     command;     // CALC - A menu item.

	// OUTPUT     - Outputs the class heading.
	PrintHeader(cout, AS_NAME, AS_TYPE, AS_NUM);

	// PROCESSING - Creates an empty list.
	head = NULL;

	// PROCESSING - Assigns the user menu to a string.
	menuString = CreateMenu();

	// OUTPUT     - Outputs the menu string.
	cout << menuString;

	// INPUT      - Gets and error-checks an integer for the menu.
	inputNum = GetAndCheckCommandInt(PROMPT, ERROR, DEFAULT, MIN, MAX);

	// PROCESSING - Typecasts the integer to a menu item type.
	command  = MenuItem(inputNum);

	// OUTPUT     - Indicates that the program is ending and waits for the
	//              user to press enter.
	if(command == EXIT)
	{
		cout << "\nThe program will now exit.";
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
	}

	// Will run until the user decides to exit the program,
	// indicated by the menu type.
	while(command != EXIT)
	{
		cout << endl; // New line.

		// MAIN PROCESS - Calls a function for any item in the menu
		//                to perform a specific task.
		switch(command)
		{
			case PUSH    : head = Push(head);
						   break;
			case POP     : head = Pop(head);
						   break;
			case ISEMPTY : IsEmpty(head);
						   break;
			case PEEK    : Peek(head);
						   break;
			case SIZE    : Size(head);
						   break;
			default      : break;
		}// end SWITCH

		cout << endl; // New line.

		// LOOP CONTROL UPDATES - See above.
		cout     << menuString;
		inputNum  = GetAndCheckCommandInt(PROMPT, ERROR, DEFAULT,
										  MIN,    MAX);
		command   = MenuItem(inputNum);

		if(command == EXIT)
		{
			cout << "\nThe program will now exit.";
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}
	}

    return 0;
}
