/*************************************************************************
 *  AUTHOR		 : Erick Lopez
 *  STUDEN ID    : 245600
 *  ASSIGNMENT #6: Movie List - Intro to Linked List
 *  CLASS        : CS1B
 *  SECTION      : MW: 10:00 - 11:50
 *  DUE DATE     : 10/16/13
 *  *********************************************************************/
#include "myheader.h"

/*************************************************************************
 * Function ReadInput
 * -----------------------------------------------------------------------
 * This function will read the input from a external input file. It will
 * store the title of the movie, lead Actor, support actor, genre, alternative
 * genre, year, rating, and the sypnopsis. All information will be stored
 * in a struct.
 * ------------------------------------------------------------------------
 * Preconditions -
 * 		head 	 - A linked list must be initialized
 * Postcondition -
 * 	head		 - The head will contain the adress of the linked list
 *************************************************************************/
MovieInfo* ReadInput( MovieInfo* head)
{
	ifstream    inFile;		//IN      - file used in the function
	string      inFileName; //IN      - name of file the user will enter
	MovieInfo*  movie;		//IN&CALC - pointer created to be used to store
							// 			all movie information

	movie = new MovieInfo; //Dynamically allocating memory for a variable
						   //called movie

	//Asking user for the name of the input file or use default
	cout << "Enter the name of the input file (Enter 'D' to use default) : ";
	getline(cin, inFileName);

	//Checking if the user wants to use default file/Opening file
	if(inFileName == (toupper(inFileName[0])) )
	{
		inFile.open("InputFile.txt");
	}
	else
	{
		inFile.open(inFileName.c_str());
	}

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

	//Closing the file
	inFile.close();
	return head;

}



