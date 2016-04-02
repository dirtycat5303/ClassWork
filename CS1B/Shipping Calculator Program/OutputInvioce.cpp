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
* OutputInvoice
* -----------------------------------------------------------------------
* It will output the information of the sale: the receipt number, the
* county it was purchased, the date, the final amount, the discount, tax
* and shipping price.
* -----------------------------------------------------------------------
*	Preconditions -
*		accNumber - receipt # needs to be previously defined
*		codef     - county cone needs to be previously defined
*		dayf      - day of purchase needs to be previously defined
*		monthf    - month of purchase needs to be previously defined
*		amountf   - amount of purchase needs to be previously defined
*		discountf - discount of purchase needs to be previously defined
*		taxf      - amount of tax needs to be previously defined
*		shippingf - shipping cost neees to be defined
*	PostConditions -
*		Will output the information of the sale
* ***********************************************************************/

void OutputInvoice(int   accNumber, // OUT- Will output account number
				   char& codef,     // OUT- Will be used to see county
				   int   dayf,      // OUT- Will be used to output date
				   int   monthf,    // OUT- Will be used to output date
				   int   yearf,     // OUT- Will be used to output date
				   float amountf,   // OUT- Will be used to calculate final
				   	   	   	   	   	//   	amount
				   float discountf, // OUT- Will be output and used to
				   	   	   	   	    //      calculate final amount
				   float taxf,      // OUT- Will be output and used to
				   	   	   	   	    //      calculate final amount
				   float shippingf) // OUT- Will be output and used to
									// calculate final amount

{
	float totalAmount = (amountf-discountf) + taxf + shippingf;
	cout << left;
	cout << setw(5) << "\nACCOUNT NUMBER";
	cout << right;

	cout << setw(34)<< "COUNTY"<< endl;
	cout << right;
	cout << setw(9)<< accNumber;


	// Will ouput the correct county depending on the county codde
	switch(codef)
	{
	case 'O': cout << setw(43) << "Orange County"  << endl <<endl;
	break;
	case 'S': cout << setw(44) <<  "San Diego County" << endl <<endl;
	break;
	case 'L': cout << setw(45) << "Los Angeles County"  << endl <<endl;
	break;
	}
	cout << left;

	cout << setw(14)  << "DATE OF SALE:" << monthf << "/"
		 << dayf << "/" << yearf << endl << endl<< endl;
	cout << fixed;
	cout << setprecision(2);
	cout << setw(19)  <<"SALE AMOUNT:" << "$";
	cout << setw(8)   << right;
	cout << amountf   << endl;
	cout << left;
	cout << setw(19)  <<"DISCOUNT:"    << "$";
	cout << setw(8);
	cout << right;
	cout << discountf << endl;
	cout << left;
	cout << setw(19)  << "SALES TAX:"  << "$";
	cout << setw(8)   << right;
	cout << taxf      << endl;
	cout << left;
	cout << setw(19)  << "SHIPPING:"   << "$";
	cout << setw(8)   << right;
	cout << shippingf << endl;
	cout << left;
	cout << setw(19)  << "TOTAL DUE:"  << "$";
	cout << setw(8)   << right;
	cout << totalAmount;
	cout << right;


}




