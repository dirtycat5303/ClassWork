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
 * FUNCTION InputStruct
 * _______________________________________________________________________
 * This function receives an array and the name of an input file,
 * and propagates the array using the data provided in the file.
 * - returns propagated array by reference
 * _______________________________________________________________________
 * PRE-CONDITIONS
 * 		inputFile  : Name of input file has to be previously defined
 * 		person     : The struct has to be previously defined
 * 		AR_SIZE    : Size of array has to be previously defined
 *
 * POST-CONDITIONS
 * 		This function will return the index of the found element
 ************************************************************************/

#include "myHeader.h"

void InputStruct(string inputFile,		// IN - Name of input file
				 PersonInfo person[],	// IN - Account holder struct
				 const int AR_SIZE)		// IN - Size of array
{
	int index;				// Array index
	ifstream inFile;		// Input file variable

	index = 0;

	inFile.open(inputFile.c_str());

	// PROCESSING - Propagates array using input file
	while (inFile && index < AR_SIZE)
	{
		getline(inFile, person[index].name);
		inFile >> person[index].id;
		inFile >> person[index].balance;
		inFile.ignore(1000,'\n');

		index++;
	}

	inFile.close();
}
