/*************************************************************************
 * AUTHOR     : Christopher Anderson & Erick Lopez
 * STUDENT ID : 847233 & 265400
 * LAB #8     : Testing
 * CLASS      : 10:00 am
 * SECTION    : CS1B
 * DUE DATE   : 10/09/13
 * ***********************************************************************/
#include "myheader.h"

/***********************************************************************
 *
 * FUNCTION PrintHeader
 * ____________________________________________________________________
 * This function receives the assignment name, type, and number then
 * 		outputs the users name, student id, class, assignment name, type
 * 		and number.
 * ____________________________________________________________________
 * PRE-CONDITIONS
 * 		asName: Assignment name must be previously defined.
 * 		asType: Assignment type must be previously defined.
 * 		asNum : Assignment number must be previously defined.
 *
 * POST-CONDITIONS
 * 		This function will output the class header.
 ***********************************************************************/
void PrintHeader(const string asName,    // OUT - Name of the lab
		         int asNum,              // OUT - Lab Number

                 char asType)            // OUT - Assignment type
{
	cout << left;
	cout << "******************************************************\n";
	cout << "* PROGRAMMED BY : Christopher Anderson & Erick Lopez";
	cout << "\n* " << setw(14) << "STUDENT ID" << ": 847233 & 265400";
	cout << "\n* " << setw(14) << "CLASS" << ": CS1B --> MW - 10a-11:50a";
	cout << "\n* " ;
	if (toupper(asType) == 'L')
	{
	cout << "LAB #" << setw(9);
	}
	else
	{
		cout << "ASSIGNMENT #" << setw(2);
	}
	cout << asNum << ": "<< asName;
	cout << "\n******************************************************\n\n";
	cout << right;
}


