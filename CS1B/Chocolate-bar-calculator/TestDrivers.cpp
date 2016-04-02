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
 * FUNCTION TestDrivers
 * ____________________________________________________________________
 * This function tests calculations, and outputs the expected values
 * 		 from the program.
 *_____________________________________________________________________
 * PRE-CONDITIONS
 *
 *
 * POST-CONDITIONS
 * 		This function will output the expected output from the program.
 ***********************************************************************/
void TestDrivers()
{
	cout << "Expected Chocolate is 23 and we get: " << CalculateBars(27, 50);
	cout << endl;
	cout << "Expected amount given to sheep is 1 and we get: ";
	cout << CalculateSheep(27,50) << endl;


}
