/*************************************************************************
 * AUTHOR #1     : Morgan Heaslet
 * AUTHOR #2	 : Erick Lopez
 * STUDENT ID #1 : 889647
 * STUDENT ID #2 : 265400
 * LAB #6        : Structs
 * CLASS         : CS1B
 * SECTION:      : MW 10AM
 * DUE DATE      : 10/02/2013
 ************************************************************************/

/*************************************************************************
 *
 * FUNCTION PrintHeaderPartner
 * _______________________________________________________________________
  * This function receives an assignment name, type, number and
 * 	partner name then outputs the appropriate header
 * 	- returns nothing -> This will output the class heading.
 * _______________________________________________________________________
 * PRE-CONDITIONS
 * 		asName  : Assignment name has to be previously defined
 * 		asType  : Assignment type has to be previously defined
 * 		asNum   : Assignment number has to be previously defined
 * 		partner : Partner name has to be previously defined
 *
 * POST-CONDITIONS
 * 		This function will output the class heading.
 ************************************************************************/

#include "myHeader.h"

void PrintHeaderPartner (string asName,    // IN - Assignment name
				  	  	 char asType,	   // IN - Assignment type
				  	  	  	  	  		   // (Lab or Assignment)
				  	  	 int asNum,		   // IN - Assignment number
				  	  	 string partner)   // IN - Partner name
{
	// OUTPUT - The class header

	cout << left;
	cout << "**********************************************************\n";
	cout << "*	PROGRAMMED BY   : Morgan Heaslet";
	cout << setw(27) << "\n*    " << "& " << partner;
	cout << "\n*	" << setw(16) << "STUDENT ID #1" << ": 889647";
	cout << "\n*	" << setw(16) << "STUDENT ID #2" << ": 265400";
	cout << "\n*	" << setw(16) << "CLASS" << ": CS1B --> ";
	cout << "MW - 10a-11:50a";
	cout << "\n*	";
	if (toupper(asType) == 'L')
	{
		cout << "LAB #" << setw(10);
	}
	else
	{
		cout << "ASSIGNMENT # " << setw(2);
	}

	cout << asNum << " : " << asName;
	cout << "\n**********************************************************";
	cout << "\n\n";
	cout << right;
}
