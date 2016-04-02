/*************************************************************************
 * AUTHOR           : Andrew Daniels , Mahroo Mahmoodi                   *
 * STUDENT ID       : 759892   		 , 276471                            *
 * LAB #9		    : Implementing a Stack                     	         *
 * CLASS            : CS1B                                               *
 * SECTION          : MW - 10:00 AM                                      *
 * DUE DATE         : 28 October 2013                                    *
 *************************************************************************/

// Required Headers : ios, iostream, limits, string
// Function Calls   : <none>

#include "header.h"

/*************************************************************************
 *  FUNCTION GetAndCheckCharacter
 *________________________________________________________________________
 *
 *  This function prompts the user for a character input and returns it
 *      to the calling function in upper-case after error checking.
 *      If the input does not match one of the characters sent by the
 *      calling function, it will output an error message and prompt the
 *      user for a new character - returns a character.
 *________________________________________________________________________
 *
 *  PRE-CONDITIONS - All must be predefined by the calling function.
 *
 *    CHAR_PRMPT      : A prompt message.
 *    CHAR_ERROR      : An error message.
 *    SIZE            : The size of an array.
 *    CHARACTER_ARR[] : An array of characters for error-check comparison.
 *
 *  POST-CONDITIONS
 *
 *    This function error-checks and returns a character input
 *    in upper-case to the calling function.
 *
 *  RETURNS: A character after error-checking.
 *
 *************************************************************************/

char GetAndCheckCharacter
  ( const string CHAR_PRMPT,       // INPUT    - A prompt message.
    const string CHAR_ERROR,       // INPUT    - An error message.
    const int    SIZE,             // INPUT    - The size of an array.
    const char   CHARACTER_ARR[] ) // INPUT    - An array of characters
								   //            for error-check
								   //            comparison.
{
	char characterInput;           // IN & OUT - An input character.
	bool invalidInput;             // PROCESS  - Indicates that the input
	                               //            is invalid.
	                               //            (Negative condition.)
	int  index;                    // PROCESS  - A character array index.

	// Runs repeatedly, asking for input and error-checking as long as
	// the invalid-input variable remains true, indicating that
	// the input is not valid.
	do
	{
		// Prompts the user for a character input using a prompt
		// message passed by the calling function.
		cout << CHAR_PRMPT;
		cin.get(characterInput);
		cin.ignore(numeric_limits<streamsize>::max(), '\n');

		// Changes the input character to upper-case.
		characterInput = toupper(characterInput);

		// The loop control variables are initialized here.
		index          = 0;
		invalidInput   = true;

		// Error checks the input character by comparing it against every
		// element in the character array that is passed in by the calling
		// function. It will exit once the index reaches one less than the
		// array size, minus the null terminator (SIZE - 2), or once
		// a valid match is found.
		while (index <= SIZE - 2 && invalidInput)
		{
			// Compares the input character against an element in the
			// array and assigns the result to the variable.
			invalidInput = characterInput != CHARACTER_ARR[index];

			// Increments the array index for each character mismatch.
			if (invalidInput)
			{
				index = index + 1;
			}
		}

		// Outputs an error message.
		if (invalidInput)
		{
		    cout << CHAR_ERROR;
		}
	}
	while (invalidInput);

	return characterInput;
}
