/*************************************************************************
 *  AUTHOR		 : Erick Lopez
 *  STUDEN ID    : 245600
 *  ASSIGNMENT #3: Functions
 *  CLASS        : CS1B
 *  SECTION      : MW: 10:00 - 11:50
 *  DUE DATE     : 9/11/13
 *  *********************************************************************/
#include "myheader.h"
/************************************************************************
* CalcSalesTax
* -----------------------------------------------------------------------
* This function will calculate the discount of the whole amount depending
*  on the month the transaction was made.It will get the month and the
*  amount.
* -----------------------------------------------------------------------
*	Preconditions -
*		countyf  - The county code where purchased has to be defined
*		amount   - The amount before discount has to be defined
*		discount - Discount has to be defined
*	PostConditions -
*		amount   - the amount will be subtracted by discount
*		salesTaxf-
* ***********************************************************************/

float CalcSalesTax(char& countyf,   //IN - County of transaction
			       float amount,    //IN - Amount of transaction
				   float discount)  //IN - Discount of transaction

{

	float salesTaxf;                //OUT-keeps sales tax

	amount -= discount;
	countyf = toupper(countyf);

	//Check what the county code is
	switch (countyf)
	{
		case 'O': salesTaxf = (amount*.0775);
		break;
		case 'S': salesTaxf = amount*.0825;
		break;
		case 'L': salesTaxf = amount*.0800;
		break;
	}

	return salesTaxf;
}
