/*************************************************************************
 * AUTHOR     : Eric Lopez
 * STUDENT ID : 245600
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
 * 		programName	   :	Program's name has to be previously defined
 * 							and assigned with string.
 * 		programType	   : 	Program's type has to be defined and
 * 							assigned with string.
 * 		programNumber  :	Program's number has to be previously defined
 * 		  				    and assigned with integer.
 *
 * POST-CONDITION:
 *		The function will outputs header
 *
 * RETURN:
 * 		Nothing
 ************************************************************************/
void PrintHeader2(string	programName,		// IN - Program name
		  	  	 string	programType,		// IN - Program type
		  	  	 int	programNumber)		// IN - Program number
{

	cout << left;
	cout << "**************************************************\n";
	cout << "* PROGRAMMED BY : Erick Lopez";
	cout << "\n* " << setw(14) << "STUDENT ID" << ": 265400";
	cout << "\n* " << setw(14) << "CLASS CS1B" << ": MW - 10:00 - 11:50";
	cout << "\n* " ;

	if (programType =="Lab")
	{
		cout << "LAB #" << setw(9);
	}
	else
	{
		cout << "ASSIGNMENT #" << setw(2);
	}
	cout << programNumber << ": " << programName;
	cout << "\n**************************************************\n\n";
	cout <<	right;
}


