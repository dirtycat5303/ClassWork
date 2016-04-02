/*************************************************************************
 *  AUTHOR		 : Erick Lopez
 *  STUDEN ID    : 245600
 *  ASSIGNMENT #3: Functions
 *  CLASS        : CS1B
 *  SECTION      : MW: 10:00 - 11:50
 *  DUE DATE     : 9/11/13
 *  *********************************************************************/

//This file is called myheader.h
#ifndef MYHEADER_H_
#define MYHEADER_H_

//Preprocessor directives
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

//Prototypes
/************************************************************************
* Function PrintHeader
* -----------------------------------------------------------------------
* it will output the class heading, checking if the assignment is a lab
* or an assignment.
* ***********************************************************************/
void PrintHeader ();

/************************************************************************
 * Function CalcDiscount
 * ----------------------------------------------------------------------
 * This function will calculate the discount of the whole amount depending
 * on the month the transaction was made.It will get the month and the
 * amount.
 *************************************************************************/
float CalcDiscount(int month,    //IN- -Store the month number
				   float amount);//IN- Amount of the transaction

/*************************************************************************
 * Funtion CalcSalesTax
 * ----------------------------------------------------------------------
 * This function will calculate the amount after discount and return the
 * sales tax of a transaction depending where they are located
 *************************************************************************/
float CalcSalesTax(char& countyf,   //IN - County of transaction
			       float amount,    //IN - Amount of transaction
				   float discount);  //IN - Discount of transaction

/*************************************************************************
 * Function CalcShipping
 * ----------------------------------------------------------------------
 * This function will calculate and return the cost of the shipping
 * depending on the weight
 ************************************************************************/
float CalcShipping(int pounds); //IN  - weight of the package

/*************************************************************************
 * Function GetSalesInfo
 * ----------------------------------------------------------------------
 *	This function will ask the user for a receipt number, the date of
 *	 purchase, the county code it was purchased, the amount owed, and the
 *	 weight of the package
 ************************************************************************/
void GetSalesInfo(int&   reciptNumf,// OUT- Store the receipt number
				  int&   monthf,    // OUT- Store the month of purchase
				  int&   dayf,      // OUT- Store the day of purchase
				  int&   yearf,	    // OUT- Store the year of purchase
				  char&  code,	    // OUT- Store the county code
				  float& amountf,   // OUT- Store the amount of purchase
				  int&   weightf);  // OUT- Store the weight of package

/*************************************************************************
 * Function GetSalesInfo
 * ----------------------------------------------------------------------
 *	This function will ask the user for a receipt number, the date of
 *	 purchase, the county code it was purchased, the amount owed, and the
 *	 weight of the package
 ************************************************************************/
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
				   float shippingf); // OUT- Will be output and used to
									// calculate final amount

#endif /* MYHEADER_H_ */
