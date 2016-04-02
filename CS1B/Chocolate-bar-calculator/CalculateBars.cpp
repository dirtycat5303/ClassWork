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
 * FUNCTION CalculateBars
 * ____________________________________________________________________
 * This function calculates the number of bars that will be left over
 * 		after the sheep are given chocolate.
 *_____________________________________________________________________
 * PRE-CONDITIONS
 *
 * 		sheepNum: The amount of sheep the user input. Must be
 * 		          previously assigned.
 * 		chocBar : The amount of chocolate that the user input.
 * 				  Must be previously assigned.
 *
 * POST-CONDITIONS
 * 		This function will calculate how much chocolate is left over
 * 			and return the amount left over.
 ***********************************************************************/

int CalculateBars(int sheepNum,   // CALC - Number of sheep that was input.

				  int chocBar)    // CALC - Number of chocolate that was
                                  //        input.
{
	int chocLeft;                 // OUT - The amount of chocolate that
	                              //       will be left over.

	if(sheepNum!=0)
	{
		chocLeft = chocBar % sheepNum;

		if((chocBar/sheepNum) > 4)
		{
			chocLeft =chocBar-(4*sheepNum);
		}
		}
	else
	{
		chocLeft = chocBar;
	}

	return chocLeft;
}
