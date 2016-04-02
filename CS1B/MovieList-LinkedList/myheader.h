/*************************************************************************
 *  AUTHOR		 : Erick Lopez
 *  STUDEN ID    : 245600
 *  ASSIGNMENT #6: Movie List - Intro to Linked List
 *  CLASS        : CS1B
 *  SECTION      : MW: 10:00 - 11:50
 *  DUE DATE     : 10/16/13
 *  *********************************************************************/
#ifndef MYHEADER_H_
#define MYHEADER_H_

//Preprocessor directives
#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
using namespace std;

struct MovieInfo
{
	string title;
	string leadActor;
	string suppActor;
	string genre;
	string AltGenre;
	int year;
	int rating;
	string synopsis;
	MovieInfo* next;
};
void PrintHeader (string asName,		//In	  - name of assignment
				  char   asType,		//IN	  - type of assignment
				  int    asNum,			//IN	  - assignment number
				  ofstream& outFile);	//IN & OUT - The filename the user
										// 			 will output to.
MovieInfo* ReadInput( MovieInfo* head);
void OutputToFile(MovieInfo* head);
void WordWrap(string phrase, int maxLength, ofstream& outFile);
void CheckTitle(string title, int maxLength, ofstream& outFile);



#endif /* MYHEADER_H_ */
