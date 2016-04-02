/*************************************************************************
 *  AUTHOR		 : Erick Lopez
 *  STUDEN ID    : 245600
 *  ASSIGNMENT #4: Parallel Arrays
 *  CLASS        : CS1B
 *  SECTION      : MW: 10:00 - 11:50
 *  DUE DATE     : 9/18/13
 *  *********************************************************************/
#include "myheader.h"

/*************************************************************************
 * Function OutputToFile
 * -----------------------------------------------------------------------
 * This function will output the movies information to an output file.
 * -----------------------------------------------------------------------
 * Preconditions:
 * 		head	- A linked list must be initialized
 * Postconditions:
 * 		None, It outputs the information in the linked list.
 ************************************************************************/

void OutputToFile(MovieInfo* head)
{
	int counter;			//OUT - contains the movie number
	counter = 1;			//Starts the movie counter at 1
	ofstream outFile;
	MovieInfo* moviePtr;
	outFile.open("OFile.txt");

	while(head != NULL)
	{
		outFile << left;
		outFile << setw(75) << setfill('*') << '*' << setfill(' ') << endl;
		outFile << "MOVIE #: " << setw(9) << counter;

		outFile  <<"Title: "<< head->title << endl;
		outFile << setw(75) << setfill('-') << '-' << setfill(' ') << endl;
		outFile << "Year: "  << setw(12) << head->year;
		outFile << "Rating: " << head->rating << endl;
		outFile << setw(75) << setfill('-') << '-' << setfill(' ') << endl;
		outFile << setw(18) << "Leading Actor:"<< setw(25) << head->leadActor;
		outFile << "Genre 1: " << head->genre << endl;
		outFile << "Supporting Actor: " << setw(25) << head->suppActor;
		outFile << "Genre 2: "<< head->AltGenre << endl;
		outFile << setw(75) << setfill('-') << '-' << setfill(' ') << endl;
		outFile << "PLOT:" << endl;

		outFile << head->synopsis << endl;
		outFile << setw(75) << setfill('*') << '*' << setfill(' ') << endl;
		outFile << endl << endl;

		//Link next item to head after it finishes outputting
		head = head->next;
		counter++;

	}
	outFile.close();
}



