/*************************************************************************
 *  AUTHOR		 : Erick Lopez
 *  STUDEN ID    : 245600
 *  ASSIGNMENT #4: Parallel Arrays
 *  CLASS        : CS1B
 *  SECTION      : MW: 10:00 - 11:50
 *  DUE DATE     : 9/16/13
 *  *********************************************************************/
#include "myheader.h"

/*************************************************************************
 * PrintTOutput
 * -----------------------------------------------------------------------
 * This function will print the information regarding a person, for this
 * program it will be a name, ID number, and a debt owed depending on the
 * index it was found.
 * ----------------------------------------------------------------------
 * Preconditions :
 * 		stringArray  - This array of strings has to be initialized
 * 		intArray	 - This array of ints has to be initialized
 * 		floatArrray  - This array of bools has to be initialized
 * 		ARR_SIZE     - This constant has to be initialized
 * 		index		 - This index of the item being printed has to be
 * 					   initialized.
 * 		oFile		 - An output file has to be declared
 * Postconditions:
 *  	None         - This function will only output information and it
 *  				   will not chagne any information.
 *
 ************************************************************************/
void PrintToOutput(string stringArray[], //IN - Stores strings
				   int intArray[],		 //IN - Stores ints
				   float floatArray[],	 //IN - Stores float
				   const int ARR_SIZE,	 //IN - Stores the array size
				   int index,			 //IN - Stores index of item being
				   	   	   	   	   	   	 //     outputed
				   ofstream &oFile)		 //OUT- Output file
{
	//Statement will run if the item was in the array.
	if(index < ARR_SIZE)
		{
			oFile << left     << endl;;
			oFile << setw(9)  << intArray[index];
			oFile << setw(25) << stringArray[index];
			oFile << "$";
			oFile << right;
			oFile << fixed;
			oFile <<setw(10) << setprecision(2)  << floatArray[index];
		}
}



