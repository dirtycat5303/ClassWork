/*************************************************************************
 *  AUTHOR		 : Erick Lopez
 *  STUDEN ID    : 245600
 *  ASSIGNMENT #7: Searching Linked List
 *  CLASS        : CS1B
 *  SECTION      : MW: 10:00 - 11:50
 *  DUE DATE     : 11/03/13
 *  *********************************************************************/
#ifndef MYHEADER_H_
#define MYHEADER_H_

//Preprocessor directives
#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include <ios>
#include <limits>
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

enum Menu
{
	EXIT,
	OUTPUT,
	TITLESEARCH,
	GENRESEARCH,
	ACTORSEARCH,
	YEARSEARCH,
	RATINGSEARCH,

};

void PrintHeader (string asName,		//In	  - name of assignment
				  char   asType,		//IN	  - type of assignment
				  int    asNum,			//IN	  - assignment number
				  ostream& outType);    //OUT     - type of output,either
										//          console or outFile.
MovieInfo* ReadInput( MovieInfo* head,
					  ifstream   &inFile);

void WordWrap(string phrase, int maxLength, ofstream &outFile);
string CheckTitle(string   title,     //OUT&PROSS- title user wants word
									//			 wrapped
				int      maxLength);//PROSS	   - maximum phrase length

void GetFileNames( ifstream &inFile, ofstream &outFile, string fileType);

int ErrorCheckingMenu(string prompt,string errorOne,string errorTwo,
		int upperBounds, int lowerBounds);

void ListAllMovies (MovieInfo *head, ofstream &outFile);

void OutputToFile(MovieInfo* head,		//IN&OUT  - keeps the first item on
		  	  	  	  	  	  	  	  	//	        the list
				  ofstream   &outFile);	//OUT     - output file variable

void SearchLinkedList(MovieInfo *head, Menu item, ofstream &outFile);

int IntErrorCheck(string prompt,string errorOne,string errorTwo, int upperBounds, int lowerBounds);





#endif /* MYHEADER_H_ */



