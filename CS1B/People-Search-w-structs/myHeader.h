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

#ifndef MYHEADER_H_
#define MYHEADER_H_

// PRE-PROCESSOR DIRECTIVES

#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
using namespace std;

struct PersonInfo
{
	string name;			// Account holder's name
	int id;					// Account holder's ID
	float balance;			// Account holder's balance

};

// PROTOTYPES

/*************************************************************************
 * 	PrintHeaderPartner
 * 	 	This function receives an assignment name, type, number and
 * 		partner name then outputs the appropriate header
 * 		- returns nothing -> This will output the class heading.
 ************************************************************************/
void PrintHeaderPartner (string asName,      // IN - Assignment name
				  	  	 char asType,	     // IN - Assignment type
				  	  	  	  	  		     // (Lab or Assignment)
				  	  	 int asNum,		     // IN - Assignment number
				  	  	 string partner);    // IN - Partner name

/*************************************************************************
 * 	PrintHeaderOutputFile
 * 		This function receives an assignment name, type and number then
 * 		outputs the appropriate header to an output file
 * 		- returns nothing -> This will output the class heading.
 ************************************************************************/
void PrintHeaderOutputFile (string asName,	    // IN - Assignment name
				            char asType,	    // IN - Assignment type
				            					// (Lab or Assignment)
				            int asNum,          // IN - Assignment number
				            string partner,		// IN - Partner's name
				            ofstream &oFile);   // IN - Name of output file

/*************************************************************************
 * 	InputArrays
 * 		This function receives an array and the name of an input file,
 *	 	and propagates the array using the data provided in the file.
 * 		- returns propagated array by reference
 ************************************************************************/
void InputStruct(string inputFile,		    // IN - Name of input file
				 PersonInfo person[],		// IN - Person info struct
				 const int AR_SIZE);		// IN - Size of array

/*************************************************************************
 * 	SearchStringArray
 * 		This function searches an array for a given string, and returns the
 * 		index of element if found.
 * 		- returns index
 ************************************************************************/
int SearchStringArray (PersonInfo person[],	 // IN - Array name
					   const int AR_SIZE,	 // IN - Array size
					   string searchItem);   // IN - Item to be searched

/*************************************************************************
 * 	SearchStringArray
 * 		This function searches an array for a given string, and returns the
 * 		of element if found.
 * 		- returns index
 ************************************************************************/
void OutputInfoToFile(ofstream& oFile,		    // IN - Name of input file
					  PersonInfo person[],		// IN - Person info struct
					  int searchNameIndex,		// IN - Index of found name
				      const int AR_SIZE);		// IN - Size of array

#endif /* MYHEADER_H_ */
