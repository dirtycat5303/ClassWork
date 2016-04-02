/*************************************************************************
 * AUTHOR     : Eric Lopez & Sean Millet
 * STUDENT ID : 245600 & 876517
 * LAB #4     : Introduction to Arrays
 * CLASS      : CS1B
 * SECTION    : MW: 10:00 - 11:50
 * DUE DATE   : 9/16/13
 ************************************************************************/

//This file is called myheader.h
#ifndef MYHEADER_H_
#define MYHEADER_H_

//Preprocessor directives
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

/*************************************************************************
 * Print Header:
 *
 * 		This function will receive program name, program type, and program
 * 		number. Then it outputs the header.
 * 		- It returns nothing
 ************************************************************************/
void PrintHeader(const string	PROGRAM_NAME,		// IN - Program name
				 const string	PROGRAM_TYPE,		// IN - Program type
				 const int 		PROGRAM_NUM);		// IN - Program number

/*************************************************************************
 * Get Names:
 *
 * 		This function will obtain names, and store back the data by passing
 * 		by reference.
 * 		- It returns nothing
 ************************************************************************/
void GetNames(string 	name[],				// IN - Name
              const int ARRAY_NUM);			// IN - Amounts of array

/*************************************************************************
 * Search Names:
 *
 * 		This function will search the name.
 * 		- It returns numbers of instance
 ************************************************************************/
int SearchNames(const string 	name[],			// IN - Name
				const string 	nameSearch,		// IN - Searched name
				const int 		ARRAY_NUM);		// IN - Amounts of array

/*************************************************************************
 * OutputResult:
 *
 * 		This function will output the search result.
 * 		- It returns nothing.
 ************************************************************************/
void OutputResult(const int 	instances,	   // IN - Numbers of instance
				  const string 	nameSearch);   // IN - Searched name



#endif /* MYHEADER_H_ */
