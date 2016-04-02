/*************************************************************************
 * AUTHOR           : Andrew Daniels & Erick Lopez                       *
 * STUDENT ID       : 759892   		 & 265400                            *
 * LAB #12          : Intro to Object-Oriented Programming               *
 * CLASS            : CS1B                                               *
 * SECTION          : MW - 2:00 PM                                       *
 * DUE DATE         : 02 December 2013                                   *
 *************************************************************************/

// Required Headers : iomanip, iostream
// Function Calls   : <none>

#include "header.h"

/*************************************************************************
 *  FUNCTION DataTableHeading
 *_______________________________________________________________________
 *
 *  This function outputs the column headings for a data table.
 *
 *  	Note: This is currently using the Animal object class.
 *_______________________________________________________________________
 *
 *  PRE-CONDITIONS: None.
 *
 *  POST-CONDITIONS
 *
 *    This function will output the column headings for a data table.
 *
 *  RETURNS: Nothing.
 *
 *************************************************************************/

void DataTableHeading()
{
	/*********************************************************************
	 * CONSTANTS
	 * -----------------------------------------------------------------
	 * PROCESSING
	 * -----------------------------------------------------------------
	 *
	 * TYPE_WIDTH    : The animal type width.
	 * NAME_WIDTH    : The name width.
	 * AGE_WIDTH     : The age width.
	 * VALUE_WIDTH   : The value width.
	 * VALUE_CENTER  : The value required to center the 'value'
	 *                 heading above the field lines.
	 *
	 * -----------------------------------------------------------------
	 * OUTPUT
	 * -----------------------------------------------------------------
	 *
	 * LINE_CHAR    : A line separator character.
	 *
	 *********************************************************************/

	const int  TYPE_WIDTH    = 11;
	const int  NAME_WIDTH    = 15;
	const int  AGE_WIDTH     =  4;
	const int  VALUE_WIDTH   = 12;
	const int  VALUE_CENTER  =  8;

	const char LINE_CHAR     = '-';

	// Output statements for the column names.
	cout << left;
	cout << "\n ";
	cout << setw(TYPE_WIDTH)   << "ANIMAL"
		 << setw(NAME_WIDTH)   << "NAME"
	     << setw(AGE_WIDTH)    << "AGE"
	     << right
		 << setw(VALUE_CENTER) << "VALUE" << "\n ";

	// Output statements for the lines under the column names.
	cout << setfill(LINE_CHAR)
		 << setw(TYPE_WIDTH)   << " "
		 << setw(NAME_WIDTH)   << " "
		 << setw(AGE_WIDTH)    << " "
		 << setw(VALUE_WIDTH)  << " " << endl;
	cout << setfill(' ');
}
