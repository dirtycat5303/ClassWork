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
 * CalcDiscount
 * ----------------------------------------------------------------------
 * This function will calculate the discount of the whole amount depending
 * on the month the transaction was made.It will get the month and the
 * amount.
 * ----------------------------------------------------------------------
 * PreConditions
 * 	month - The month of purchased has to be defined
 * 	amount- The amount of purchase has to be defined
 * PostConditions
 * 	discount - Assigned discount depending on purchase month
 *************************************************************************/
float CalcDiscount(int month,   //IN- -Store the month number
				   float amount)//IN- Amount of the transaction


{
	float discount;		        //OUT-Will store the value of the discount
	//finds discount depending on the month purchased
	if (month <=5){
		 discount = amount * .05;
	}
	else if(month>5 && month <=8)
	{
		 discount =amount*.10;
	}
	else{
		discount = amount *.15;
	}

	return discount;
}

