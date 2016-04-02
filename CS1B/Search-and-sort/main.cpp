/************************************************************
* PROGRAMMED BY : Erick Lopez & Gojko Lojpur
* STUDENT ID    : 245600 & 368589
* CLASS         : CS1B
* SECTION       : MW 10:00AM - 11:50AM
* Lab #5        : Binary Search
************************************************************/
#include "myHeader.h"

int main()
{
  const int AR_SIZE = 8;		//IN,CALC - Array size
  int numbersArray[AR_SIZE] ={4,1,7,12,8,13,9,21};	//IN,CALC - Array of ints
  int index;					//IN,CALC - Array location
  int numberToFind;

  ArrayOutput(numbersArray, AR_SIZE);
  for (int i = 0; i<4;i++)
   {

   cout << "\nEnter an integer to search for:";
   cin  >> numberToFind;

   	  index = SequentialSearch( numbersArray, AR_SIZE, numberToFind);
   	  if (index< AR_SIZE)
   	  {
   	  cout << "The integer " << numberToFind <<" was found in #" <<
   			  index << '.' << endl;
   	  }
   	  else
   	  {
   		  cout << numberToFind << " was not found!";
   	  }
   	}

  cout << "\nPerforming Insertion Sort!"<< endl;

  insertionSort(numbersArray, AR_SIZE);

  ArrayOutput(numbersArray, AR_SIZE);

  for (int i = 0; i<4;i++)
   {

   cout << "\nEnter an integer to search for:";
   cin  >> numberToFind;

   	  index = SequentialSearch( numbersArray, AR_SIZE, numberToFind);
   	  if (index< AR_SIZE)
   	  {
   	  cout << "The integer " << numberToFind <<" was found in #" <<
   			  index << '.' << endl;
   	  }
   	  else
   	  {
   		  cout << numberToFind << " was not found!"<< endl;
   	  }
   	}
}



