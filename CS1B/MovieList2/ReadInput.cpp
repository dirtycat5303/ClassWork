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
 * Function ReadInput
 * -----------------------------------------------------------------------
 * This function will read the input from a external input file. It will
 * store the title of a movie, lead Actor, support actor, genre, alternative
 * genre, year, rating, and the synopsis. All information will be stored
 * in a linked list of structs.
 * ------------------------------------------------------------------------
 * Preconditions -
 * 		head 	 - A linked list must be initialized
 * 		inFile	 - A variable of type ifstream must be initialized
 * Postcondition -
 * 	head		 - The head will contain the address of the linked list
 *************************************************************************/
MovieInfo* ReadInput( MovieInfo* head,	  //IN - keeps the first item on
										  //	 the list
					  ifstream   &inFile) //IN - input File variable
{
	MovieInfo*  movie;		//IN&CALC - pointer created to be used to store
							// 			all movie information

	movie = new MovieInfo; //Dynamically allocating memory for a variable
						   //called movie


	// Filling in information in the struct
	while (inFile && movie!= NULL)
	{
		getline(inFile,movie->title);
		getline(inFile,movie->leadActor);
		getline(inFile,movie->suppActor);
		getline(inFile,movie->genre);
		getline(inFile,movie->AltGenre);
		inFile >> movie->year;
		inFile >> movie->rating;
		inFile.ignore(1000,'\n');
		getline(inFile,movie->synopsis);
		inFile.ignore(1000,'\n');
		movie->next = head;

		// pointing the head to the new item
		head = movie;
		movie = new MovieInfo;
	}


	// deleting the variable
	delete movie;

	//Returning the head
	return head;

	cin.ignore(numeric_limits<streamsize>::max(),'\n');

}



