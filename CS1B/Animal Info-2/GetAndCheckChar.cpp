/*************************************************************************
 * AUTHOR           : Andrew Daniels & Erick Lopez                       *
 * STUDENT ID       : 759892   		 & 265400                            *
 * LAB #12          : Intro to Object-Oriented Programming               *
 * CLASS            : CS1B                                               *
 * SECTION          : MW - 2:00 PM                                       *
 * DUE DATE         : 02 December 2013                                   *
 *************************************************************************/

// Required Headers : iostream, string
// Function Calls   : <none>

#include "header.h"

/*************************************************************************
 *  FUNCTION GetAndCheckChar
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
 *    charPrompt   : A prompt message.
 *    charError    : An error message.
 *    validInputs  : A string of valid characters.
 *
 *  POST-CONDITIONS
 *
 *    This function error-checks and returns a character input
 *    in upper-case to the calling function.
 *
 *  RETURNS: An error-checked character.
 *
 *************************************************************************/

char GetAndCheckChar( string charPrompt,    // IN & OUT - A prompt message.
		              string charError,     // IN & OUT - An error message.
		              string validInputs )  // INPUT    - A string of valid
                                            //            characters.
{
	char characterInput;  // IN & OUT - An input character.
	bool invalidInput;    // PROCESS  - Indicates that the input
	                      //            is invalid.
	                      //            (Negative condition.)
	unsigned int index;   // PROCESS  - A character array index.

	// Runs repeatedly, asking for input and error-checking as long as
	// the invalid-input variable remains true, indicating that
	// the input is not valid.
	do
	{

		// INPUT - Prompts the user for a character input using a prompt
		//         message passed by the calling function.
		cout << charPrompt;
		cin.get(characterInput);
		cin.ignore(1000, '\n');

		// PROCESSING  - Changes the input character to upper-case.
		characterInput = toupper(characterInput);

		// PROCESSING  - Initializes the processing variables.
		index          = 0;
		invalidInput   = true;

		// PROCESSING  - Error checks the input character by comparing it
		//               against every element in the character array that
		//               is passed in by the calling function. It will
		//               exit once the index reaches one less than the
		//               array size, minus the null terminator (SIZE - 2),
		//               or once a valid match is found.
		while (index < validInputs.size() && invalidInput)
		{
			// Compares the input character against an element in the
			// array and assigns the result to the variable.
			invalidInput = characterInput != validInputs[index];

			// Increments the array index for each character mismatch.
			if (invalidInput)
			{
				index = index + 1;
			}
		}

		// OUTPUT - Outputs an error message.
		if (invalidInput)
		{
		    cout << charError;
		}
	}
	while(invalidInput);

	return characterInput;
}
