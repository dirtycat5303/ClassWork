/*************************************************************************
 * AUTHOR     : Eric Lopez & Sean Millet
 * STUDENT ID : 245600 & 876517
 * LAB #4     : Introduction to Arrays
 * CLASS      : CS1B
 * SECTION    : MW: 10:00 - 11:50
 * DUE DATE   : 9/16/13
 ************************************************************************/

#include "myheader.h"

/*************************************************************************
 *
 * Print Header
 * _______________________________________________________________________
 *
 * 	This function will receive program name, program type, and program
 * 	number. Then it outputs the header.
 * 		- It returns nothing
 * _______________________________________________________________________
 *
 * PRE-CONDITION:
 * 		PROGRAM_NAME	:	Program's name has to be previously defined
 * 							and assigned with string.
 * 		PROGRAM_TYPE	:	Program's type has to be defined and
 * 							assigned with string.
 * 		PROGRAM_NUM		:	Program's number has to be previously defined
 * 		  				    and assigned with integer.
 *
 * POST-CONDITION:
 *		The function will outputs header
 *
 * RETURN:
 * 		Nothing
 ************************************************************************/
void PrintHeader(const string	PROGRAM_NAME,		// IN - Program name
		  	  	 const string	PROGRAM_TYPE,		// IN - Program type
		  	  	 const int 		PROGRAM_NUM)		// IN - Program number
{
	/*********************************************************************
	 * CONSTANTS
	 * -------------------------------------------------------------------
	 * PROGRAMMER		: Programmer's Name
	 * CLASS			: Student's Course
	 * SECTION			: Class Days and Times
	 * STUDENT_ID		: Student's ID Number
	 ********************************************************************/

	const string	PROGRAMMER	= "Eric Lopez & Sean Millet";
	const string	CLASS 		= "CS1B";
	const string	SECTION		= "MW 10:00AM - 11:50AM";
	const string	STUDENT_ID	= "245600 & 876517";

	cout << left;
	cout << "************************************************************";
	cout << "\n* PROGRAMMED BY : " << PROGRAMMER;
	cout << "\n* " << setw(14) << "STUDENT ID" << ": " << STUDENT_ID;
	cout << "\n* " << setw(14) << "CLASS" << ": " << CLASS;
	cout << "\n* " << setw(14) << "SECTION" << ": " << SECTION;
	cout << "\n* " << PROGRAM_TYPE << " #" << setw(8) << PROGRAM_NUM;
	cout << setw(3)	  << " : "   << PROGRAM_NAME;
	cout << endl;
	cout << "************************************************************";
	cout << endl << endl;
	cout << right;
}
