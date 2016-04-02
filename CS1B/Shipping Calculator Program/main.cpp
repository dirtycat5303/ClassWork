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
 * FUNCTIONS
 * ----------------------------------------------------------------------
 * This Program will get and account number, date of sale, county code,
 * 	total sale amount, shipping weight from the user. Then, it will
 * 	calculate the discount based on when it was purchased, the sales
 * 	tax depending on the location and the shipping depending on the weight.
 * 	It will output all the information entered plus all the information
 * 	calculated.
 * ----------------------------------------------------------------------
 * INPUTS:
 * 	reciptNum  - Stores the receipt number
 * 	month	   - Stores the month of purchase
 * 	day		   - Stores the day of purchase
 * 	year	   - Stores the year of purchase
 * 	countyCode - Stores the county code where it was purchased
 * 	amountDue  - Stores how much is owed
 * 	weight     - Stores the weight of package
 * OUTPUTS:
 * 	discount   - Stores discount based on when the purchase was made
 * 	shipPrice  - Stores shipping price depending on weight
 * 	salesTax   - Stores sales tax depending on location
 ************************************************************************/

int main()
{

	float amountDue;
	int   month;
	int   day;
	int   year;
	char  countyCode;
	int   weight;
	int   reciptNum;
	float discount;
	float shipPrice;
	float salesTax;
	//Will print header
	PrintHeader ();

	//Will Get sale info
	GetSalesInfo(reciptNum, month, day, year, countyCode, amountDue,
				 weight);

	//Will calculate discount
	discount= CalcDiscount(month,amountDue);

	//Will calculate shipping price
	shipPrice= CalcShipping(weight);

	//Will calculate sales Tax
	salesTax = CalcSalesTax(countyCode, amountDue, discount);

	//WIll output invoice of sale
	OutputInvoice(reciptNum, countyCode, day,  month,  year, amountDue,
				  discount, salesTax,shipPrice);

	return 0;
}
