/*************************************************************************
 *  AUTHOR		 : Erick Lopez
 *  STUDEN ID    : 245600
 *  ASSIGNMENT #6: Movie List - Intro to Linked List
 *  CLASS        : CS1B
 *  SECTION      : MW: 10:00 - 11:50
 *  DUE DATE     : 10/16/13
 *  *********************************************************************/
/*************************************************************************
 *  AUTHOR		 : Erick Lopez
 *  STUDEN ID    : 245600
 *  ASSIGNMENT #7: Searching Linked List
 *  CLASS        : CS1B
 *  SECTION      : MW: 10:00 - 11:50
 *  DUE DATE     : 11/03/13
 *  *********************************************************************/
#include "myheader.h"

/************************************************************************
* PrintHeader
* -----------------------------------------------------------------------
* It will output the class heading, checking if the assignment is a lab
* 	or an assignment.
* -----------------------------------------------------------------------
*	Preconditions -
*		None
*	PostConditions -
*		Will ouput class heading
* ***********************************************************************/
void PrintHeader (string asName,		//In	  - name of assignment
				  char   asType,		//IN	  - type of assignment
				  int    asNum,			//IN	  - assignment number
				  ofstream& outFile)	//IN & OUT - The filename the user
										// 			 will output to.
{

	outFile << left;
	outFile << "**************************************************\n";
	outFile << "* PROGRAMMED BY : Erick Lopez";
	outFile << "\n* " << setw(14) << "STUDENT ID" << ": 265400";
	outFile << "\n* " << setw(14) << "CLASS CS1B" << ": MW - 10:00 - 11:50";
	outFile << "\n* " ;

	if (asType =='L')
	{
		outFile << "LAB #" << setw(9);
	}
	else
	{
		outFile << "ASSIGNMENT #" << setw(2);
	}
	outFile << asNum << ": " << asName;
	outFile << "\n**************************************************\n\n";
	outFile <<	right;
}
