/*************************************************************************
 * AUTHOR     : Christopher Anderson & Erick Lopez
 * STUDENT ID : 847233 & 265400
 * LAB #8     : Testing
 * CLASS      : 10:00 am
 * SECTION    : CS1B
 * DUE DATE   : 10/09/13
 * ***********************************************************************/

#ifndef MYHEADER_H_
#define MYHEADER_H_

#include <iostream>
#include <iomanip>
#include <limits>
#include <ios>
using namespace std;

/************************************************************************
 *  PrintHeader
 * 	This function receives the users assignment or lab name, number, and
 * 	outputs their name, student ID, assignment or lab name, and number.
 ************************************************************************/
void PrintHeader(const string asName, // OUT - Outputs lab or assign name.
		         int asNum,           // OUT - Outputs lab or assign number.

                 char asType);        // OUT - Outputs assignment type
                                      //       (LAB or ASSIGNMENT)

/************************************************************************
 *  InputChocInfo
 * 	This function receives the amount of chocolate that will be input
 * 	from the user and returns nothing.
 ************************************************************************/
void InputChocInfo(int& chocBar);  // IN - Amount of chocolate the user
                                   //      will input.
/************************************************************************
 *  InputSheepInfo
 * 	This function receives the amount of sheep the user will input and
 * 	returns nothing.
 ************************************************************************/
void InputSheepInfo(int& sheepNum); // IN - Number of sheep that will be input

/************************************************************************
 *  CalculateBars
 * 	This function calculates the amount of bars that are left over
 * 	and returns the value.
 ************************************************************************/
int CalculateBars(int sheepNum,    // CALC - Amount of sheep user input

				  int chocBar);    // CALC - Amount of chocolate user input

/************************************************************************
 *  CalculateSheep
 * 	This function calculates the amount of chocolate each sheep shall
 * 	receive and returns the value.
 ************************************************************************/
int CalculateSheep(int sheepNum,  // CALC - Number of sheep that was input

				   int chocBar);  // CALC - Number of bars that was input

/************************************************************************
 *  OutputInfo
 * 	This function receives the amount of chocolate left over and the
 * 	amount of chocolate each sheep receives and outputs them to the
 * 	screen.
 ************************************************************************/
void OutputInfo(int chocLeft, // OUT - Number of chocolate left over.

		  		int sheepGet); // OUT - Number of chocolate each sheep
                               //       receives.

/************************************************************************
 *  TestDrivers
 * 	This function tests the calculations of the functions CalculateSheep
 * 	and CalculateBars and outputs the expected output.
 ************************************************************************/
void TestDrivers();



#endif /* MYHEADER_H_ */
