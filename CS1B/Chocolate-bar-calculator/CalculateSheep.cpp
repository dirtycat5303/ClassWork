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
 * FUNCTION CalculateSheep
 * ____________________________________________________________________
 * This function calculates the number of bars that each sheep shall
 * 		receive. The maximun amount sheep can get is 4 bars
 *_____________________________________________________________________
 * PRE-CONDITIONS
 *
 * 		sheepNum: The amount of sheep the user input. Must be
 * 		          previously assigned.
 * 		chocBar : The amount of chocolate that the user input.
 * 				  Must be previously assigned.
 *
 * POST-CONDITIONS
 * 		This function will calculate how much chocolate each sheep should
 * 			get and returns how much chocolate they should receive
 * 			distributed evenly.
 ***********************************************************************/
int CalculateSheep(int sheepNum,  // CALC - Number of sheep that was input.

					int chocBar)  // CALC - Number of chocolate that was
                                  //        input.
{
	int sheepGet;                 // OUT - The number of chocolate each
	                              //       sheep shall receive.


	if(sheepNum!=0)
	{
	sheepGet = chocBar / sheepNum;

		if (sheepGet > 4)
		{
			sheepGet = 4;
		}
	}
	else
	{
		sheepGet=0;
	}

	return sheepGet;
}


