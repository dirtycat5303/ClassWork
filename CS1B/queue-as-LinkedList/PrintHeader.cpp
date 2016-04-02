/*************************************************************************
 * AUTHOR           : Erick Lopez , Mahroo Mahmoodi
 * STUDENT ID       : 265400   	  , 276471
 * LAB #9		    : Implementing a Queue
 * CLASS            : CS1B
 * SECTION          : MW - 10:00 AM
 * DUE DATE         : 06 November 2013
 *************************************************************************/

#include "header.h"

void PrintHeader()
{

	/**********************************************************
	 * CONSTANTS
	 * --------------------------------------------------------
	 * USED FOR CLASS HEADING - ALL WILL BE OUTPUT
	 * --------------------------------------------------------
	 * PROGRAMMER : Programmer's Name
	 * CLASS      : Student's course
	 * SECTION    : Class Days and Times
	 * LAB_NUM    : Lab Number (specific to this lab)
	 * LAB_NAME   : Title of the lab
	 **********************************************************/
	const char PROGRAMMER [30] ="Erick Lopez";
	const char PROGRAMMER2 [30] ="Mahroo Mahmoodi";
	const char CLASS[5]        = "CS1B";
	const char SECTION[25]     = "MON-WEDS 10:00am";
	const int  LAB_NUM         = 10;
	const char LAB_NAME[24]    = "Implementing a Queue";

	cout << left;
	cout << "************************************************";
	cout << "\n* PROGRAMMED BY : " << PROGRAMMER << " & " << PROGRAMMER2;
	cout << "\n* " << setw(14) << "CLASS" << ": " << CLASS;
	cout << "\n* " << setw(14) << "SECTION" << ": " << SECTION;
	cout << "\n* LAB #" << setw(9) << LAB_NUM << ": " << LAB_NAME;
	cout << "\n************************************************\n\n";
}



