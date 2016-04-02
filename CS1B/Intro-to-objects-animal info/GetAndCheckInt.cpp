/*************************************************************************
 * AUTHOR           : Andrew Daniels & Erick Lopez                       *
 * STUDENT ID       : 759892   		 & 265400                            *
 * LAB #12          : Intro to Object-Oriented Programming               *
 * CLASS            : CS1B                                               *
 * SECTION          : MW - 2:00 PM                                       *
 * DUE DATE         : 02 December 2013                                   *
 *************************************************************************/

// Required Headers : ios, iostream, limits, string
// Function Calls   : <none>

#include "header.h"

/*************************************************************************
 *  FUNCTION GetAndCheckInt
 *_______________________________________________________________________
 *
 *  This function prompts the user for a number value and
 *      returns it to the calling function after error checking.
 *      If the input is not within the bounds sent by the calling
 *      function, it will output an error message and prompt the
 *      user for a new value - returns a long, long integer.
 *
 *      Note: This function handles very large numeric values.
 *_______________________________________________________________________
 *
 *  PRE-CONDITIONS - All must be predefined by the calling function.
 *
 *    intPrompt    : A prompt message.
 *    lowerBound   : A lower bound on valid integers.
 *    upperBound   : An upper bound on valid integers.
 *
 *  POST-CONDITIONS
 *
 *    This function error-checks and returns a long, long integer value
 *    to the calling function.
 *
 *  RETURNS: An long, long integer after error checking.
 *
 *************************************************************************/

long long GetAndCheckInt
		( string    intPrompt,    // IN & OUT - A prompt message.
	  	  long long lowerBound,   // IN & OUT - A lower bound.
	  	  long long upperBound )  // IN & OUT - An upper bound.
{
	long long inputInt;    // IN & OUT - An input integer (very long).
	bool      validInput;  // PROCESS  - Indicates valid input.
	                       //            (Positive condition.)

	// Runs repeatedly, asking for input and error-checking as long as
	// the error variable remains true, indicating that the input is
	// not valid.
	do
	{
		// The input variable is initialized in case input from the user
		// is unsuccessful.
		validInput = true;

		// Prompts the user for an integer input using a prompt
		// message passed by the calling function.
		cout << intPrompt;

		// Error-checks and prevents character inputs. Input failure
		// due to character input will send an error message to the user,
		// and the boolean variable will be changed to indicate that this
		// check has found invalid input.
		if(!(cin >> inputInt))
		{
			// Outputs an error message indicating that something other
			// than a number is being entered and has failed to input.
			cout << "\n **** " << "Please enter a NUMBER between "
				 << lowerBound << " and " << upperBound << " ****\n";

			cin.clear();
			validInput = false;
		}

		// Clears the input buffer.
		cin.ignore(numeric_limits<streamsize>::max(), '\n');

		// This check will be bypassed if a character has been extracted
		// from the input buffer, (the above check).
		if(validInput)
		{
			// Sets a lower bound and an upper bound for valid input.
			validInput = validInput && (inputInt >= lowerBound)
					                && (inputInt <= upperBound);

			// Outputs a range error message and a general error message.
			if(!validInput)
			{
				string rangeError;  // OUT  - A range error message.
				string genralError; // OUT  - A general error message.
				int	   errorWidth;  // PROC - The formatting width
				                    //        of an error message.
				ostringstream ss;   // PROC - An output stringstream
				                    //        variable.

				// Creates the range error message.
				ss << "The number " << inputInt
				   << " is an invalid entry";
				rangeError = ss.str();
				ss.str("");

				// Creates the general error message.
				ss << "Please enter a number between " << lowerBound
				   << " and " << upperBound;
				genralError = ss.str();
				ss.str("");

				// The longest length of either message (range or general
				// error) is used as the formatting width for both
				// messages.
				if(rangeError.length() > genralError.length())
				{
					errorWidth = rangeError.length();
				}
				else
				{
					errorWidth = genralError.length();
				}

				// Both error messages are output to the user
				// enclosed in aligned  asterisks.
				cout << left;
				cout << "\n **** " << setw(errorWidth) << rangeError
					 <<   " ****";
				cout << "\n **** " << setw(errorWidth) << genralError
					 <<   " ****\n";
				cout << right;
			}
		}
	}
	while(!validInput);

	return inputInt;
}
