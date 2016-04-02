/************************************************************
* PROGRAMMED BY : Erick Lopez & Gojko Lojpur
* STUDENT ID    : 245600 & 368589
* CLASS         : CS1B
* SECTION       : MW 10:00AM - 11:50AM
* Lab #5        : Binary Search
************************************************************/
#include "myHeader.h"

/************************************************************************
 *	Binary Search
 * ----------------------------------------------------------------------
 * This program will sort an array using insertion sort, then it will
 * search for a number using sequential search.Then it will use binary
 * search and retrun the appropriate number of the index. Then it will
 * output the array to another file.
 *-----------------------------------------------------------------------
 * Inputs :
 * 	numberToFind  - Number that the user will enter to see if its in the
 * 					array.
 * 	Outputs :
 * 		index     - The index at which the number was found.
 *
 *
 ***********************************************************************/
int main()
{
  const int AR_SIZE = 8;					//IN,CALC - Array size
  int numbersArray[AR_SIZE] 				//IN,CALC - Array of ints
                 = {4,1,7,12,8,13,9,21};
  int index;								//IN,CALC - Array location
  int numberToFind;							//IN,CALc - number user wants
  	  	  	  	  	  	  	  	  	  	  	//			to find

  const char PROGRAMMER[30]="Gojko Lojpur & Erick Lopez";
  const char CLASS[5] = "CS1B";
  const char SECTION[25] = "MW: 10:00 - 11:50";
  const int LAB_NUM = 5;
  const char LAB_NAME[25] = "Binary Search";
  cout<<left;

  cout<<"**************************************************";
  cout<<"\n* PROGRAMMED BY : "<<PROGRAMMER;
  cout<<"\n* "<<setw(14) <<"CLASS"<<": "<<CLASS;
  cout<<"\n* "<<setw(14) <<"SECTION"<<": "<<SECTION;
  cout<<"\n* LAB #"<<setw(9) <<LAB_NUM <<": "<<LAB_NAME;
  cout<<"\n**************************************************\n\n";


  // calling the function that will output appropriate index
  ArrayOutput(numbersArray, AR_SIZE);
  for (int i = 0; i<4;i++)
  {

	   // asking user to unput number he/she wants to find were is located
	   cout << "\nEnter an integer to search for: ";
	   cin  >> numberToFind;

		  // giving value index to the product of this function. This
	   	  // function will find the place of searching number
		  index = SequentialSearch( numbersArray, AR_SIZE, numberToFind);
   	  if (index< AR_SIZE)
   	  {
		  cout << "The integer " << numberToFind <<" was found in #" <<
				  index << '.' << endl ;
   	  }
   	  else
   	  {
   		  cout << numberToFind << " was not found!" << endl;
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



