/*************************************************************************
 *  AUTHOR		 : Erick Lopez
 *  STUDEN ID    : 245600
 *  ASSIGNMENT #4: Parallel Arrays
 *  CLASS        : CS1B
 *  SECTION      : MW: 10:00 - 11:50
 *  DUE DATE     : 9/18/13
 *  *********************************************************************/
#include "myheader.h"

/*************************************************************************
 *  ReadInputs
 * -----------------------------------------------------------------------
 * 	This function will read in all the student information from an input
 * 	file.The name, Id number and the amount of money they owe. All of this
 * 	will be stored in arrays.
 * 	----------------------------------------------------------------------
 * 	  Preconditions :
 * 		stringArray  - This array of strings has to be initialized
 * 		intArray	 - This array of ints has to be initialized
 * 		floatArrray  - This array of bools has to be initialized
 * 		ARR_SIZE     - This constant has to be initialized
 * 		inFile		 - An input file has to be given
 * 	  Postconditions :
 * 	  	stringArray  - Array will contain strings
 * 	  	intArray     - Array will contain ints
 * 	  	floatArray   - Array will contain floats
 ************************************************************************/

void ReadInputs( string 	stringsAr[],//IN - Stores strings
				 int    	idsAr[],    //IN - Stores ints
				 float    	debtsAr[], 	//IN - Stores float
				 const int 	ARR_SIZE, 	//IN - Stores the array size
				 ifstream 	&inFile)  	//IN - Input  file
{
	int index;
	index = 0;

	//While-loop will stop when it reaches the end of the file or when
	// it reaches the end of the array
	while(inFile && index < ARR_SIZE)
	{
		getline(inFile,stringsAr[index]);
		inFile >> idsAr[index];
		inFile >> debtsAr[index];
		inFile.ignore(1000,'\n');
		++index;

	}
}
