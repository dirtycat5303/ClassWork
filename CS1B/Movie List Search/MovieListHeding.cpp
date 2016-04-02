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
 * Function MovieListHeading
 * -----------------------------------------------------------------------
 *	This function will output the heading of the list to the output file
 * -----------------------------------------------------------------------
 * Preconditions:
 * 	outFile		- a variable of type ofstream must be initialized
 * Postconditions:
 * Nothing, this function only ouputs the heading of the list
 *************************************************************************/

void MovieListHeading(ofstream &outFile) // Out - used to output to file
{

	outFile << left;
	outFile << setw(9)  << "MOVIE #";
	outFile << setw(50) << "TITLE";
	outFile << setw(6)  << "YEAR";
	outFile << setw(8)  << "RATING";
	outFile << setw(17) << "GENRE";
	outFile << setw(17) << "ALT GENRE";
	outFile << setw(20) << "LEAD ACTOR";
	outFile << setw(18) << "SUPPORTING ACTOR" << endl;
	outFile << setfill('-') << setw(7)  << "-" ;
	outFile << setw(50) << "- " ;
	outFile << setw(6)  << "- " ;
	outFile << setw(8)  << "- " ;
	outFile << setw(17) << "- " ;
	outFile << setw(17) << "- " ;
	outFile << setw(20) << "- " ;
	outFile << setw(18) << "- " << setfill(' ') << endl;
//	outFile << right;

}
