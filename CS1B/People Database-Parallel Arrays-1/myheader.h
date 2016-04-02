/*************************************************************************
 *  AUTHOR		 : Erick Lopez
 *  STUDEN ID    : 245600
 *  ASSIGNMENT #4: Parallel Arrays
 *  CLASS        : CS1B
 *  SECTION      : MW: 10:00 - 11:50
 *  DUE DATE     : 9/18/13
 *  *********************************************************************/

//This file is called myheader.h
#ifndef MYHEADER_H_
#define MYHEADER_H_

//Preprocessor directives
#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
using namespace std;

//Functions
/*************************************************************************
 * Fucntion SearchName
 * ----------------------------------------------------------------------
 * This function will search for an item in the array and it will return
 * the index at which it was found. The item has to be passed in
 * by the calling function. It will tell the user in the console if the
 * item was found or not.
 ************************************************************************/
int SearchName(string 	 itemsArr[],	//IN & CALC - array of strings
			   const int ARR_SIZE,  	//IN & CALC - array size
			   string 	 searchItem);	//IN & CALC - Item searching for
/*************************************************************************
 *  Function ReadInputs
 * -----------------------------------------------------------------------
 * 	This function will read in all the student information from an input
 * 	file.The name, Id number and the amount of money they owe. All of this
 * 	will be stored in arrays.
 ************************************************************************/
void ReadInputs( string 	stringsAr[],//IN - Stores strings
				 int    	idsAr[],    //IN - Stores ints
				 float    	debtsAr[], 	//IN - Stores float
				 const int 	ARR_SIZE, 	//IN - Stores the array size
				 ifstream 	&inFile);  	//IN - Input  file

/************************************************************************
*  Function PrintHeader
* -----------------------------------------------------------------------
* It will output the class heading, checking if the assignment is a lab
* 	or an assignment.
*************************************************************************/
void PrintHeader (ofstream& outFile);	//IN & OUT - The filename the user
										// 			 will output to.

/*************************************************************************
 * Function PrintTOutput
 * -----------------------------------------------------------------------
 * This function will print the information regarding a person, for this
 * program it will be a name, ID number, and a debt owed depending on the
 * index it was found.
 * ----------------------------------------------------------------------
 ************************************************************************/
void PrintToOutput(string stringArray[], //IN - Stores strings
				   int intArray[],		 //IN - Stores ints
				   float floatArray[],	 //IN - Stores float
				   const int ARR_SIZE,	 //IN - Stores the array size
				   int index,			 //IN - Stores index of item being
				   	   	   	   	   	   	 //     outputed
				   ofstream &oFile);		 //OUT- Output file


#endif /* MYHEADER_H_ */
