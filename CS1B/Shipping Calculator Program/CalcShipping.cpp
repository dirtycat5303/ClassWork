/*************************************************************************
 *  AUTHOR		 : Erick Lopez
 *  STUDEN ID    : 245600
 *  ASSIGNMENT #3: Functions
 *  CLASS        : CS1B
 *  SECTION      : MW: 10:00 - 11:50
 *  DUE DATE     : 9/11/13
 *  *********************************************************************/

#include "myheader.h"

/*************************************************************************
 * CalcShipping
 * ----------------------------------------------------------------------
 * This function will calculate and return the cost of the shipping
 * depending on the weight
 * ----------------------------------------------------------------------
 * 	Preconditions -
*		pounds - Weight of package has to be defined
*	PostConditions -
*		shipAmount - Store the shipping rate
 ************************************************************************/
float CalcShipping(int pounds)   //IN  - weight of the package
{
	int const FLAT_WEIGHT = 25;	 //IN  - Weight of flat rate
	float const FLAT_RATE = 5.00;//IN  - Flat rate

	float shipAmount;			 //OUT - stores cost of shipping
								 //	     depending on weight

	//Calculates shipping cost depending on weight
	if(pounds <= FLAT_WEIGHT)
	{
		shipAmount = FLAT_RATE;
	}
	else if(pounds <=50)
	{
		pounds-=FLAT_WEIGHT;
		shipAmount = (pounds*.10)+ FLAT_RATE;
	}
	else
	{
		pounds-=50;
		shipAmount = (pounds*.07)+ FLAT_RATE;
	}
	return shipAmount;
}
