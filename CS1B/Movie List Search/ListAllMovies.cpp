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
 *	Function ListAllMovies
 * -----------------------------------------------------------------------
 *  This function will output the complete list of all the movies in the
 *  the linked list
 * -----------------------------------------------------------------------
 * Preconditions:
 * 		head 	- A struct of type MovieInfo must have been initialized
 * 		outFile - a variable of type ofstream must be initialized
 * Postconditions:
 * 	Nothing, This will output the movies in the linked list.
 *************************************************************************/

void ListAllMovies (MovieInfo *head,  //IN - contains the address of the
									  // 	 stack
					ofstream &outFile)//OUT- used to output to file
{
	int counter;			//OUT - contains the movie number
	counter = 1;			//Starts the movie counter at 1


	outFile << left;
	outFile << "COMPLETE MOVIE LISTING" << endl;
	MovieListHeading(outFile);


	while(head!= NULL)
	{
		outFile << setw(9)  << counter;
		outFile << setw(51) <<CheckTitle(head->title,45);
		outFile << setw(8)  << head->year;
		outFile << setw(5)  << head->rating ;

		outFile << setw(17) <<  head->genre;
		outFile << setw(17) << head->AltGenre ;
		outFile << setw(20) << head->leadActor;

		outFile << setw(18) << head->suppActor << endl;


		//Link next item to head after it finishes outputting
		head = head->next;
		counter++;

	}



}

