/*************************************************************************
 * AUTHOR #1     : Morgan Heaslet
 * AUTHOR #2	 : Erick Lopez
 * STUDENT ID #1 : 889647
 * STUDENT ID #2 : 265400
 * LAB #6        : Structs
 * CLASS         : CS1B
 * SECTION:      : MW 10AM
 * DUE DATE      : 10/02/2013
 ************************************************************************/

/*************************************************************************
 *
 * FUNCTION OutputInfoToFile
 * _______________________________________________________________________
 * This function will print the information regarding a searched person to
 * an output file (name, ID, and balance).
 * _______________________________________________________________________
 * PRE-CONDITIONS
 * 		oFile           : Name of output file has to be previously defined
 * 		person          : The struct has to be previously defined
 * 		searchNameIndex : The searched name index has to be previously
 * 						  defined
 * 		AR_SIZE         : Size of array has to be previously defined
 *
 * POST-CONDITIONS
 * 		This function will return the index of the found element
 ************************************************************************/

#include "myHeader.h"

void OutputInfoToFile(ofstream& oFile,		    // IN - Name of input file
					  PersonInfo person[],		// IN - Person info struct
					  int searchNameIndex,		// IN - Index of found name
				      const int AR_SIZE)		// IN - Size of array
{

	// OUTPUT - Outputs name, ID, and balance to output file
	oFile << left;
	oFile << fixed << setprecision(2);
	oFile << setw(9)  << person[searchNameIndex].id;
	oFile << setw(27) << person[searchNameIndex].name;
	oFile << "$";
	oFile << right << setw(10) << person[searchNameIndex].balance;
	oFile << endl;
}
