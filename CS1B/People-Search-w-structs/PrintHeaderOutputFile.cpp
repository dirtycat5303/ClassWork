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
 * FUNCTION PrintHeaderOutputFile
 * _______________________________________________________________________
 * This function receives an assignment name, type and number then outputs
 * the appropriate header to an output file - returns nothing.
 * _______________________________________________________________________
 * PRE-CONDITIONS
 * 	 asName     : Assignment name has to be previously defined
 * 	 asType     : Assignment type has to be previously defined
 * 	 asNum      : Assignment number has to be previously defined
 * 	 outputFile : The name of the output file has to be previously defined
 *
 * POST-CONDITIONS
 * 	 This function will output the class heading.
 ************************************************************************/

#include "myHeader.h"

void PrintHeaderOutputFile (string asName,	    // IN - Assignment name
				            char asType,	    // IN - Assignment type
				            					// (Lab or Assignment)
				            int asNum,          // IN - Assignment number
				            string partner,		// IN - Partner's name
				            ofstream &oFile)    // IN - Output file
{
	// OUTPUT - The class header

	oFile << left;
	oFile << "**********************************************************\n";
	oFile << "*	PROGRAMMED BY   : Morgan Heaslet";
	oFile << setw(27) << "\n*    " << "& " << partner;
	oFile << "\n*	" << setw(16) << "STUDENT ID #1" << ": 889647";
	oFile << "\n*	" << setw(16) << "STUDENT ID #2" << ": 265400";
	oFile << "\n*	" << setw(16) << "CLASS" << ": CS1B --> ";
	oFile << "MW - 10a-11:50a";
	oFile << "\n*	";
	if (toupper(asType) == 'L')
	{
		oFile << "LAB #" << setw(10);
	}
	else
	{
		oFile << "ASSIGNMENT # " << setw(2);
	}

	oFile << asNum << " : " << asName;
	oFile << "\n**********************************************************";
	oFile << "\n\n";
	oFile << right;
}
