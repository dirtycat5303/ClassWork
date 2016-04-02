/*************************************************************************
 *  AUTHOR		 : Erick Lopez
 *  STUDEN ID    : 245600
 *  ASSIGNMENT #7: Searching Linked List
 *  CLASS        : CS1B
 *  SECTION      : MW: 10:00 - 11:50
 *  DUE DATE     : 11/03/13
 *  *********************************************************************/
#include "myheader.h"

/*************************************************************************
 * Function EnumToString
 * -----------------------------------------------------------------------
 * 	This function will get a variable of type enum and then it will
 * 	assign the correct string corresponding to the enum
 * 	----------------------------------------------------------------------
 * 	Preconditions
 * 	 menuChoice - a variable of type Menu should contain a menu choice
 * 	Postconditions
 * 	 type		- a string will contain the corresponding  word
 *************************************************************************/

string EnumToString(Menu menuChoice)// IN - will be used to store the
									// 		corresponding string in the
									//		variable type
{
	string type;	//OUT - will contain the right word corresponding to
					//	    the type enum

	switch(menuChoice)
	{
	case TITLESEARCH:
		type = "title";
	break;

	case GENRESEARCH:
		type = "genre";
	break;

	case ACTORSEARCH:
		type = "actor";
	break;

	case YEARSEARCH:
		type = "year";
	break;

	case RATINGSEARCH:
		type = "rating";
	break;

	}
	return type;
}
