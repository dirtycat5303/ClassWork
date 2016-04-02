/*************************************************************************
 * AUTHORS		: Alec Boroff & Erick Lopez
 * STUDENT ID	: 874370 & 265400
 * Lab #11		: Creating an Ordered List
 * CLASS		: CS 1B
 * SECTION		: MW 10:00
 * DUE DATE		: November 18, 2013
 *************************************************************************/
# include "header.h"
/*************************************************************************
 *
 * FUNCTION PrintHeader
 *_________________________________________________________________________
 * This function receives an assignment name, type and number then outputs
 *   the appropriate header
 *
 *   - returns nothing.
 *_________________________________________________________________________
 * PRE-CONDITIONS
 * 	   asName: Assignment Name has to be previously defined
 * 	   asType: Assignment Type has to be previously defined
 * 	   asNum : Assignment Number has to be previously defined
 *
 * POST-CONDITIONS
 * 		This function will output the class heading.
 *
 *************************************************************************/
void PrintHeader(string asName,	// INPUT - assignment Name
				 char asType,	// INPUT - assignment type
								//		   (LAB or ASSIGNMENT)
				 int asNum)		// INPUT - assignment number

{
	//top line boarder
	cout << "**************************************************\n";

	//2nd line programmer title
	cout << "* Programmed by    :   Alec Boroff & Erick Lopez" << endl;

	//3rd line student id and number
	cout << setw(14) << left << "* Student ID" << "     :   874370 & 265400";
	cout <<	endl;

	//4th line class code and class days
	cout << left << setw(16) << "* Class" << "   :   CS1B MW 10-11:50am" << endl;

	//5th line selector assignment type
	if (toupper(asType) == 'L')
	{
		cout << "* LAB #" << setw(9);
	}
	else
	{
		cout << "* ASSIGNMENT #" << setw(2);
	}

	cout << asNum << "   :   " << asName << endl;

	//bottom line
	cout << "**************************************************\n\n";
	cout << right;
}
