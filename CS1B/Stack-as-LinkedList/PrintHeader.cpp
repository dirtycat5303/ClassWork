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

/*************************************************************************
* FUNCTION PrintHeader
*_________________________________________________________________________
* This function receives an assignment name, type
* and number then outputs the appropriate header
* - returns nothing.
*_________________________________________________________________________
* PRE-CONDITIONS
* 		output : An outstream variable has to be previously defined.
* 		asName : Assignment Name has to be previously defined.
* 		asType : Assignment Type has to be previously defined.
* 		asNum  : Assignment Number has to be previously defined.
*
* POST-CONDITIONS
* 		This function will output the class heading.
*
* RETURNS: Nothing.
**************************************************************************/

void PrintHeader(ostream &output,       // An outstream variable.
				 string   asName, 		// Assignment name.
				 char 	  asType, 		// Assignment type:
							    		//   (LAB or ASSIGNMENT).
				 int 	  asNum) 		// Assignment number.
{
	output << left;
	output <<"*******************************************************\n";
	output << "* PROGRAMMED BY : Andrew Daniels, Mahroo Mahmoodi";
	output << "\n* " << setw(14) << "STUDENT ID" << ": 759892, 276471";
	output << "\n* " << setw(14) << "CLASS"
		                         << ": CS1B -> MW - 10:00-12:00";
	output << "\n* ";

	// If asType is 'L' then the type is LAB else is ASSIGNMENT.
	if (toupper(asType) == 'L')
	{
		output << "LAB #" << setw(9);
	}
	else
	{
		output << "ASSIGNMENT #" << setw(2);
	}
	output << asNum << ": " << asName;
	output << "\n*******************************************************"
		   << "\n\n";
	output << right;
}

