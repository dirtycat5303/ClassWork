/*************************************************************************
 *  AUTHOR		: Erick Lopez
 *  STUDEN ID   : 245600
 *  LAB #1      : Eclipse Tutorial
 *  CLASS       : CS1B
 *  SECTION     :MW: 10:00 - 11:50
 *  DUE DATE    : 8/19/13
 *  *********************************************************************/
#include <iostream>
#include <iomanip>
using namespace std;

/*************************************************************************
 *
 * Eclipse Tutorial
 * _______________________________________________________________________
 * This program outputs a header. It will output the information of the
 * student.
 * _______________________________________________________________________
 *	INPUT :
 *	OUTPUT:
 *		PROGRAMMER: Outputs name of the programmer
 *		CLASS     : Outputs the class
 *		SECTION   : Outputs the time of the class
 *      LAB_NUM   : Outputs the lab number
 *      LAB_NAME  : Outputs the lab name
 ************************************************************************/
int main()
{
	/*********************************************************************
	 * CONSTANTS
	 * -------------------------------------------------------------------
	 * USED FOR CLASS HEADING - ALL WILL BE OUTPUT
	 * -------------------------------------------------------------------
	 * PROGRAMMER  : Programmer's Name
	 * CLASS       : Student's Course
	 * SECTION     : Class Days and Times
	 * LAB_NUM     : Lab Number (specific to this lab)
	 * LAB_NAME    : Title of the Lab
	 * *******************************************************************/
	const char PROGRAMMER[30] = "Erick Lopez";
	const char CLASS[5]       = "CS1B";
	const char SECTION [25]   = "MW: 10:00a - 11:50a";
	const int  LAB_NUM        = 1;
	const char LAB_NAME [17]  = "Eclipse Tutorial";

	//OUTPUT - Class Heading
	cout << left;
	cout << "***********************************************************";
	cout << "\n*    PROGRAMMED BY : " << PROGRAMMER;
	cout << "\n*    " << setw(14) << "CLASS" <<": " << CLASS;
	cout << "\n*    " << setw(14) << "SECTION" << ": "<< SECTION;
	cout << "\n*    LAB #" <<setw(9) << LAB_NUM << ": " << LAB_NAME;
	cout << "\n*********************************************************";
	cout << "**\n\n";
	cout << right;

	return 0;

}
