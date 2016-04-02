/************************************************************************
* PROGRAMMED BY : Erick Lopez & Gojko Lojpur
* STUDENT ID    : 245600 & 368589
* CLASS         : CS1B
* SECTION       : MW 10:00AM - 11:50AM
* Lab #5        : Binary Search
*************************************************************************/
# include "myHeader.h"

 void ArrayOutput(int array[], const int ARR_SIZE)
 {
	 int index;
	  for(index=0; index <ARR_SIZE; index++)
	    {
	  	  cout << "Index #" << index << setw(2) << ":";
	  	  cout << array[index]<<endl;
	    }
 }
