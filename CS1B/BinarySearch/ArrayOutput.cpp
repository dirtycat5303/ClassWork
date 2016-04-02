/************************************************************************
* PROGRAMMED BY : Erick Lopez & Gojko Lojpur
* STUDENT ID    : 245600 & 368589
* CLASS         : CS1B
* SECTION       : MW 10:00AM - 11:50AM
* Lab #5        : Binary Search
*************************************************************************/
# include "myHeader.h"
/************************************************************************
 * ArrayOutput
 * ----------------------------------------------------------------------
 * This function will output the whole array
 * ----------------------------------------------------------------------
 *  PRE-CONDITION:
 * 		array[]    :	An array of ints should be initialized
 *
 * 		AR_SIZE	   :	The size of the array
 *
 * POST-CONDITION:
 *		The function will output the array
 *
 ***********************************************************************/
// Outputs the array
 void ArrayOutput(int array[], 			//OUT- array of ints
		 	 	  const int ARR_SIZE)	//OUT- array size
 {
	 int index;
	 // goes trough array and outputs indexes
	  for(index=0; index <ARR_SIZE; index++)
	    {
	  	  cout << "Index #" << index << setw(2) << ":";
	  	  cout << array[index]<<endl;
	    }
 }
