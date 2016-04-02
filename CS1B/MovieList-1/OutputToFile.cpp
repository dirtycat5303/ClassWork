/*************************************************************************
 *  AUTHOR		 : Erick Lopez
 *  STUDEN ID    : 245600
 *  ASSIGNMENT #7: Searching Linked List
 *  CLASS        : CS1B
 *  SECTION      : MW: 10:00 - 11:50
 *  DUE DATE     : 11/03/13
 *  *********************************************************************/
#include "myheader.h"

/*************************************************************************
 * Function OutputToFile
 * -----------------------------------------------------------------------
 * This function will output the movies information to an output file.
 * -----------------------------------------------------------------------
 * Preconditions:
 * 		head	- A linked list must be initialized
 * 		outFile	- A varible of type ofstream must be initialized
 * Postconditions:
 * 		None, It outputs the information in the linked list.
 ************************************************************************/

void OutputToFile(MovieInfo* moviePtr,		//IN&OUT  - keeps the first item on
		  	  	  	  	  	  	  	  	//	        the list
				  ofstream   &outFile)	//OUT     - output file variable
{


	int const titleLength = 50;

		outFile << left;
		outFile << setw(75) << setfill('*') << '*' << setfill(' ') << endl;
		outFile  <<"Title: ";

		cout << setw(51) << CheckTitle(moviePtr->title,titleLength);

		outFile << endl;
		outFile << setw(75) << setfill('-') << '-' << setfill(' ') << endl;
		outFile << "Year: "  << setw(12) << moviePtr->year;
		outFile << "Rating: " << moviePtr->rating << endl;
		outFile << setw(75) << setfill('-') << '-' << setfill(' ') << endl;
		outFile << setw(18) << "Leading Actor:"<< setw(25) << moviePtr->leadActor;
		outFile << "Genre 1: " << moviePtr->genre << endl;
		outFile << "Supporting Actor: " << setw(25) << moviePtr->suppActor;
		outFile << "Genre 2: "<< moviePtr->AltGenre << endl;
		outFile << setw(75) << setfill('-') << '-' << setfill(' ') << endl;
		outFile << "PLOT:" << endl;

		WordWrap(moviePtr->synopsis,75, outFile);
		outFile << setw(75) << setfill('*') << '*' << setfill(' ') << endl;
		outFile << endl << endl;





}



