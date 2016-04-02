/************************************************************
* PROGRAMMED BY : Erick Lopez & Gojko Lojpur
* STUDENT ID    : 245600 & 368589
* CLASS         : CS1B
* SECTION       : MW 10:00AM - 11:50AM
* Lab #5        : Binary Search
************************************************************/

#ifndef MYHEADER_H_
#define MYHEADER_H_

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

void insertionSort (int array[],int AR_SIZE);
int SequentialSearch(int array[],const int AR_SIZE, int searchItem);
int BinarySearch(int array[], const int AR_SIZE, int searchItem);

void ArrayOutput(int array[], const int ARR_SIZE);


#endif /* MYHEADER_H_ */
