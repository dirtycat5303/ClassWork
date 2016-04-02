/*************************************************************************
 * AUTHOR           : Andrew Daniels & Erick Lopez                       *
 * STUDENT ID       : 759892   		 & 265400                            *
 * LAB #12          : Intro to Object-Oriented Programming               *
 * CLASS            : CS1B                                               *
 * SECTION          : MW - 2:00 PM                                       *
 * DUE DATE         : 02 December 2013                                   *
 *************************************************************************/

#ifndef HEADER_H_
#define HEADER_H_

#include <fstream>
#include <iomanip>
#include <ios>
#include <iostream>
#include <limits>
#include <sstream>
#include <string>
using namespace std;

enum MenuType                 // Type of manu that appears.
{
	DEFAULT,                  // The Initial menu (default).
	MAIN,                     // Main menu.
	AGE,                      // Change Age menu.
	VALUE,                    // Change Value menu.
};

enum MenuItem                 // Item in an action menu.
{
	EXIT,                     // Exit the program.
	INITIALIZE,               // Initialize attributes.
	CHANGE_AGE,               // Change the age of an animal.
	CHANGE_VALUE,             // Change the value of an animal.
	DISPLAY                   // Display attributes.
};

enum AnimalName               // Name of an animal.
{
	FLUFFY,
	MAA,
	BABE
};

/*************************************************************************
 *  PROTOTYPES --------------------------------------------------------  *
 *************************************************************************/

/*************************************************************************
 * PrintHeader
 * 	  This function will output the class heading.
 *
 * RETURNS: Nothing.
 *************************************************************************/
void PrintHeader(ostream &output,       // An outstream variable.
				 string   asName, 		// Assignment name.
				 char 	  asType, 		// Assignment type:
							    		//   (LAB or ASSIGNMENT).
				 int 	  asNum);		// Assignment number.

/*************************************************************************
 *  DataTableHeading
 *    This function will output the column headings for a data table.
 *
 *  RETURNS: Nothing.
 *************************************************************************/
void DataTableHeading();

/*************************************************************************
 *  CreateMenu
 * 	  This function will create a list menu and return it as
 * 	  a single string.
 *
 * RETURNS: The menu as a string.
 *************************************************************************/
string CreateMenu(MenuType type = DEFAULT);

/*************************************************************************
 *  GetAndCheckChar
 *    This function error-checks and returns a character input
 *    in upper-case to the calling function.
 *
 *  RETURNS: An error-checked character.
 *************************************************************************/
char GetAndCheckChar( string charPrompt,    // IN & OUT - A prompt message.
		              string charError,     // IN & OUT - An error message.
		              string validInputs ); // INPUT    - A string of valid
                                            //            characters.

/*************************************************************************
 *  GetAndCheckFloat
 *    This function error-checks and returns a high-precision
 *    floating point value to the calling function.
 *
 *  RETURNS: A high-precision floating point value (double)
 *           after error checking.
 *************************************************************************/
double GetAndCheckFloat( string floatPrompt,  // IN & OUT - A prompt.
	  	  	  	  	  	 double lowerBound,   // IN & OUT - A lower bound.
	  	  	  	  	  	 double upperBound ); // IN & OUT - An upper bound.

/*************************************************************************
 *  GetAndCheckInt
 *    This function error-checks and returns a long, long integer value
 *    to the calling function.
 *
 *  RETURNS: An long, long integer after error checking.
 *************************************************************************/
long long GetAndCheckInt
		( string    intPrompt,    // IN & OUT - A prompt message.
	  	  long long lowerBound,   // IN & OUT - A lower bound.
	  	  long long upperBound ); // IN & OUT - An upper bound.

/**************************************************************************
 * PrintHeader
 * 	  This function will output the class heading.
 *
 * RETURNS: Nothing.
 *************************************************************************/
void PrintHeader(ostream &output,       // An outstream variable.
				 string   asName, 		// Assignment name.
				 char 	  asType, 		// Assignment type:
							    		//   (LAB or ASSIGNMENT).
				 int 	  asNum);		// Assignment number.

#endif /* HEADER_H_ */
