/*************************************************************************
 *  AUTHOR		 : Erick Lopez
 *  STUDEN ID    : 245600
 *  ASSIGNMENT #7: Searching Linked List
 *  CLASS        : CS1B
 *  SECTION      : MW: 10:00 - 11:50
 *  DUE DATE     : 11/03/13
 *  *********************************************************************/
#include "myheader.h"

void ListAllMovies (MovieInfo *head, ofstream &outFile)
{
	int counter;			//OUT - contains the movie number
	counter = 1;			//Starts the movie counter at 1

	MovieInfo* moviePtr;
	unsigned int const titleLength = 50;
	string newTitle;


	outFile << left;
	outFile << setw(9)  << "MOVIE #";
	outFile << setw(50) << "TITLE";
	outFile << setw(6)  << "YEAR";
	outFile << setw(8)  << "RATING";
	outFile << setw(17) << "GENRE";
	outFile << setw(17) << "ALT GENRE";
	outFile << setw(20) << "LEAD ACTOR";
	outFile << setw(18) << "SUPPORTING ACTOR" << endl;


	outFile << setfill('-') << setw(7)  << "-" ;
	outFile << setw(50) << "- " ;
	outFile << setw(6)  << "- " ;
	outFile << setw(8)  << "- " ;
	outFile << setw(17) << "- " ;
	outFile << setw(17) << "- " ;
	outFile << setw(20) << "- " ;
	outFile << setw(18) << "- " << setfill(' ') << endl;

	while(head!= NULL)
	{
		outFile << setw(9) << counter;
		outFile << setw(51) <<CheckTitle(head->title,45);




		outFile << setw(8) << head->year;
		outFile << setw(5) << head->rating ;

		outFile << setw(17) <<  head->genre;
		outFile << setw(17) << head->AltGenre ;
		outFile <<  setw(20) << head->leadActor;

		outFile <<  setw(18) << head->suppActor << endl;


		//Link next item to head after it finishes outputting
		head = head->next;
		counter++;
	}

}

