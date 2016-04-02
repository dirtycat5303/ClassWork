/*************************************************************************
 * AUTHOR           : Andrew Daniels , Mahroo Mahmoodi                   *
 * STUDENT ID       : 759892   		 , 276471                            *
 * LAB #9		    : Implementing a Stack                     	         *
 * CLASS            : CS1B                                               *
 * SECTION          : MW - 10:00 AM                                      *
 * DUE DATE         : 28 October 2013                                    *
 *************************************************************************/

// Required Headers : iomanip, ios, iostream, limits, sstream, string
// Function Calls   : <none>

#include "header.h"

/*************************************************************************
 *  FUNCTION GetAndCheckCommandInt
 *________________________________________________________________________
 *
 *  This function prompts the user for the index of a menu item and
 *      returns it to the calling function after error checking.
 *      If the input is not within the bounds sent by the calling
 *      function, it will output an error message and prompt the
 *      user for a new value - returns an integer value.
 *________________________________________________________________________
 *
 *  PRE-CONDITIONS - All must be predefined by the calling function.
 *
 *    INT_PRMPT     : A prompt message.
 *    INT_ERROR     : An error message.
 *    DEFAULT       : A default input.
 *    LOWER_BOUND   : A lower bound.
 *    UPPER_BOUND   : An upper bound.
 *
 *    Note: A default value of 1337 for either bound parameter will
 *		    disable that bound, allowing the input value to bypass
 *		    that check.
 *
 *  POST-CONDITIONS
 *
 *    This function error-checks and returns a floating point value
 *    to the calling function.
 *
 *  RETURNS: An integer after error-checking.
 *
 *************************************************************************/

float GetAndCheckCommandInt
  ( const string INT_PRMPT,    // INPUT    - A prompt message.
    const string INT_ERROR,    // INPUT    - An error message.
    const int    DEFAULT,      // INPUT    - A default input.
    const int    LOWER_BOUND,  // INPUT    - A lower bound.
    const int    UPPER_BOUND ) // INPUT    - An upper bound.
{
	float inputFloat;          // IN & OUT - An input floating point value.
	bool  validInput;          // PROC     - Indicates that the input
	                           //            is valid.
	ostringstream ss;          // PROC     - Output stringstream variable.

	// The input variable is initialized in case input from the user
	// is unsuccessful.
	validInput = true;

	// Prompts the user for a numeric input using a prompt
	// message passed by the calling function.
	cout << INT_PRMPT;

	// Error-checks and prevents character inputs. The inputs variable
	// will be given a default value, and the boolean variable will be
	// changed to indicate that this check has processed.
	if(!(cin >> inputFloat))
	{
		cin.clear();
		inputFloat = DEFAULT;
		validInput = false;
	}

	// Clears the input buffer.
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	// This check will be bypassed if a character has been extracted
	// from the input buffer, (the above check).
	if(validInput)
	{
		// Sets a lower bound and an upper bound for valid input, each
		// based on whether it has been activated by the calling function.
		if(LOWER_BOUND != 1337)
		{
			validInput  = validInput && (inputFloat >= LOWER_BOUND);
		}
		if(UPPER_BOUND != 1337)
		{
			validInput  = validInput && (inputFloat <= UPPER_BOUND);
		}

		// Outputs a carefully formatted error message.
		if(!validInput)
		{
			ss   << setprecision(2);
			ss   << "The number " << inputFloat
				 << " is an invalid entry";

			cout << left     << "\n**** " << setw(INT_ERROR.length())
				 << ss.str() << " ****";
		}
	}

	// Outputs a general error message.
	if(!validInput)
	{
		cout << "\n**** " << INT_ERROR << " ****";
	}

	return inputFloat;
}
