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

MovieInfo* ReadInput( MovieInfo* head);
void OutputToFile(MovieInfo* head);
void WordWrap(string phrase, int maxLenght);


#endif /* MYHEADER_H_ */
