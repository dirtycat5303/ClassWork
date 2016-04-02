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
 * GetSalesInfo
 * ----------------------------------------------------------------------
 *	This function will ask the user for a receipt number, the date of
 *	 purchase, the county code it was purchased, the amount owed, and the
 *	 weight of the package
 * ----------------------------------------------------------------------
 * 	Preconditions -
*		reciptNumf - Will need to be initialized
*		monthf     - Will need to be initialized
*		dayf       - Will need to be initialized
*		yearf      - Will need to be initialized
*		code       - Will need to be initialized
*		amountf    - Will need to be initialized
*		weightf    - Will need to be initialized
*	PostConditions - Will need to be initialized
*		This function will as the user for all the information
*		and all values will have the information since its passed by
*		reference.
 ************************************************************************/

void GetSalesInfo(int&   reciptNumf,// OUT- Store the receipt number
				  int&   monthf,    // OUT- Store the month of purchase
				  int&   dayf,      // OUT- Store the day of purchase
				  int&   yearf,	    // OUT- Store the year of purchase
				  char&  code,	    // OUT- Store the county code
				  float& amountf,   // OUT- Store the amount of purchase
				  int&   weightf)   // OUT- Store the weight of package
{
	cout << left;
	cout << setw(34) << "Please Enter your Account Number:";
	cin  >>reciptNumf;

	cout << setw(28) << "Please Enter the Sales Date." << endl;
	cout << setw(13) << "Enter Month:";
	cin  >> monthf;

	cout << setw(11) << "Enter Day:";
	cin  >> dayf;

	cout << setw(12) << "Enter Year:";
	cin  >> yearf;
	cin.ignore(1000,'\n');

	cout << setw(30) << "Please Enter the County Code:";
	cin.get(code);
	cin.ignore(1000,'\n');

	cout << setw(31) <<"Please Enter the Sales Amount:";
	cin  >>amountf;

	cout << setw(25) << "Please Enter the Weight:";
	cin  >> weightf;
	cin.ignore(1000,'\n');


}
