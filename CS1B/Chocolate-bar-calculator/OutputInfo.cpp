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
 * FUNCTION OutputInfo
 * ____________________________________________________________________
 * This function outputs the amount of chocolate left over and the
 * 		amount of chocolate each sheep gets.
 *_____________________________________________________________________
 * PRE-CONDITIONS
 *
 * 		chocLeft: The amount of chocolate left over.
 * 		sheepGet: The amount of chocolate each sheep gets.
 *
 * POST-CONDITIONS
 * 		This function will output the chocolate left over and the amount
 * 			of chocolate each sheep gets and returns nothing.
 ***********************************************************************/

void OutputInfo(int chocLeft,   // OUT - The amount of chocolate left.

				int sheepGet)   // OUT - The amount of chocolate each sheep
                                //       gets.
{
	cout << "The amount of chocolate left over is: " << chocLeft;
	cout << endl;
	cout <<"the amount of chocolate each sheep should receive is: ";
	cout << sheepGet << endl<< endl;
}
