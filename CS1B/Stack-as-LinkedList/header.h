/*************************************************************************
 * AUTHOR           : Andrew Daniels , Mahroo Mahmoodi                   *
 * STUDENT ID       : 759892   		 , 276471                            *
 * LAB #9		    : Implementing a Stack                     	         *
 * CLASS            : CS1B                                               *
 * SECTION          : MW - 10:00 AM                                      *
 * DUE DATE         : 28 October 2013                                    *
 *************************************************************************/

#ifndef HEADER_H_
#define HEADER_H_

#include <fstream>
#include <iomanip>
#include <iostream>
#include <limits>
#include <ios>
#include <sstream>
#include <string>
using namespace std;

enum MenuItem                // Item in an action menu.
{
	EXIT,                    // Exit the program.
	PUSH,                    // Add a node to the stack.
	POP,                     // Remove a node from the stack.
	ISEMPTY,                 // Indicate whether the stack is empty.
	PEEK,                    // Output the top of the stack.
	SIZE,                    // Output the number of nodes in the stack.
	RESET                    // Does nothing. (Goes back to the menu.)
};

struct PersonInfo            // Information on a movie.
{
	string      name;        // A movie title.
	char        gender;      // A leading actor.
	int         age;         // A movie's release year.

	PersonInfo *next;        // Points to the next item in a list.
};

/*************************************************************************
 *  PROTOTYPES --------------------------------------------------------  *
 *************************************************************************/

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

/**************************************************************************
 * CreateMenu
 * 	  This function will create a stack menu and return it as
 * 	  a single string.
 *
 * RETURNS: The menu as a string.
 *************************************************************************/

string CreateMenu();

/**************************************************************************
 * Push
 * 	  This function will add a new node to the top of a linked list,
 * 	  containing a person's name, gender, and age, given by the user.
 *
 * RETURNS: The head of the new list.
 *************************************************************************/

PersonInfo *Push(PersonInfo *listHead); // IN - The top of the linked list.

/**************************************************************************
 * Pop
 * 	  This function will remove a node from the top of a list after
 * 	  outputting the node's information.
 *
 * RETURNS: The head of the new list.
 *************************************************************************/

PersonInfo *Pop(PersonInfo *listHead);  // IN - The top of the linked list.

/**************************************************************************
 * IsEmpty
 * 	  This function outputs whether or not a list is empty.
 *
 * RETURNS: Nothing.
 *************************************************************************/

void IsEmpty(PersonInfo *listHead);     // IN - The top of the linked list.

/**************************************************************************
 * Peek
 *    This function will output the first entry in a list, or tell the
 *    user there is no one in the list.
 *
 * RETURNS: Nothing.
 *************************************************************************/

void Peek(PersonInfo *listHead);        // IN - The top of the linked list.

/**************************************************************************
 * Size
 *    This function only outputs the number of elements to the console.
 *
 * RETURNS: Nothing.
 *************************************************************************/

void Size(PersonInfo *listHead);        // IN - The top of the linked list.

/**************************************************************************
 *  GetAndCheckCommandInt
 *    This function error-checks and returns a floating point value
 *    to the calling function.
 *
 *  RETURNS: An integer after error-checking.
 *************************************************************************/

float GetAndCheckCommandInt
  ( const string INT_PRMPT,             // IN & OUT - A prompt message.
    const string INT_ERROR,             // IN & OUT - An error message.
    const int    DEFAULT,               // INPUT    - A default input.
    const int    LOWER_BOUND = 1337,    // INPUT    - A lower bound.
    const int    UPPER_BOUND = 1337 );  // INPUT    - An upper bound.

/**************************************************************************
 *  GetAndCheckCharacter
 *    This function error-checks and returns a character input
 *    in upper-case to the calling function.
 *
 *  RETURNS: A character after error-checking.
 *************************************************************************/

char GetAndCheckCharacter
  ( const string CHAR_PRMPT,        // IN & OUT - A prompt message.
    const string CHAR_ERROR,        // IN & OUT - An error message.
    const int    SIZE,              // INPUT    - The size of an array.
    const char   CHARACTER_ARR[] ); // INPUT    - An array of characters
								    //            for error-check
								    //            comparison.

#endif /* HEADER_H_ */
