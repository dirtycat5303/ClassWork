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
* This function will output the class heading, checking if the assignment
*  is a lab	or an assignment.
* -----------------------------------------------------------------------
*	Preconditions -
*		None
*	PostConditions -
*		Will ouput class heading
* ***********************************************************************/
void PrintHeader (string asName,		//In	  - name of assignment
				  char   asType,		//IN	  - type of assignment
				  int    asNum,			//IN	  - assignment number
				  ostream& outType)	    //OUT     - type of output,either
										//          console or outFile.
{

	outType << left;
	outType << "**************************************************\n";
	outType << "* PROGRAMMED BY : Erick Lopez";
	outType << "\n* " << setw(14) << "STUDENT ID" << ": 265400";
	outType << "\n* " << setw(14) << "CLASS CS1B" << ": MW - 10:00 - 11:50";
	outType << "\n* " ;

	if (asType =='L')
	{
		outType << "LAB #" << setw(9);
	}
	else
	{
		outType << "ASSIGNMENT #" << setw(2);
	}
	outType << asNum << ": " << asName;
	outType << "\n**************************************************\n\n";
	outType <<	right;
}
