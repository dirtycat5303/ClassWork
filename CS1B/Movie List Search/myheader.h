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

//Used to store the information of the movie
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
// Used to store the user's options
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

/*************************************************************************
* PrintHeader
* -----------------------------------------------------------------------
* This function will output the class heading, checking if the assignment
*  is a lab	or an assignment.
* -----------------------------------------------------------------------
 *************************************************************************/
void PrintHeader (string asName,		//In	  - name of assignment
				  char   asType,		//IN	  - type of assignment
				  int    asNum,			//IN	  - assignment number
				  ostream& outType);    //OUT     - type of output,either
										//          console or outFile.

/*************************************************************************
 * Function ReadInput
 * -----------------------------------------------------------------------
 * This function will read the input from a external input file. It will
 * store the title of a movie, lead Actor, support actor, genre, alternative
 * genre, year, rating, and the synopsis. All information will be stored
 * in a linked list of structs.
 * ------------------------------------------------------------------------
 *************************************************************************/
MovieInfo *ReadInput( MovieInfo* head,	  //IN - keeps the first item on
										  //	 the list
					  ifstream   &inFile);//IN - input File variable

/*************************************************************************
 * Function WordWrap
 * ----------------------------------------------------------------------
 * This program will take a string and word wrap it if its to long for the
 * max length inputed by the user.
 * -----------------------------------------------------------------------
 *************************************************************************/
void WordWrap(string    phrase,		//OUT&PROSS- phrase user wants
									//           word wrapped
			  int       maxLength,	//PROSS	   - maximum phrase length
			  ofstream  &outFile);  //OUT      - output file variable

/*************************************************************************
 * CheckTitle
 * ----------------------------------------------------------------------
 * This function will take a string and word wrap it if its to long for the
 * max length inputed by the user, at the end it will add ellipsis "...".
 * -----------------------------------------------------------------------
 *************************************************************************/
string CheckTitle(string   title,     //OUT&PROSS- title user wants word
									//			 wrapped
				int      maxLength);//PROSS	   - maximum phrase length

/*************************************************************************
 *	Function GetFilesNames
 * -----------------------------------------------------------------------
 * 	This function will get and open both the output file and the input
 * 	file. It will ask the user for a name or if the user wants they can just
 * 	enter the letter "d" to use the default names
 * 	----------------------------------------------------------------------
 *************************************************************************/
void GetFileNames( ifstream &inFile, 	//IN - opens input file
				   ofstream &outFile, 	//IN - opens output file
				   string   fileType);	//IN - stores what type of file it is

/*************************************************************************
 *	Function ListAllMovies
 * -----------------------------------------------------------------------
 *  This function will output the complete list of all the movies in the
 *  the linked list
 * -----------------------------------------------------------------------
 *************************************************************************/
void ListAllMovies (MovieInfo *head,   //IN - contains the address of the
									   // 	 stack
					ofstream &outFile);//OUT- used to output to file

/*************************************************************************
 * Function OutputToFile
 * -----------------------------------------------------------------------
 * This function will output the movies information to an output file, it
 * will ouput the name, the year, the main actors, ratings, the plot and
 * the rating.
 * -----------------------------------------------------------------------
 *************************************************************************/
void OutputToFile(MovieInfo* head,		//IN&OUT  - keeps the first item on
		  	  	  	  	  	  	  	  	//	        the list
				  ofstream   &outFile);	//OUT     - output file variable

/*************************************************************************
 * Function SearchLinkedList
 * -----------------------------------------------------------------------
 *	This function will get the menu choice picked by the user, and will
 *	choose which is the right input and output to give to the user then it
 *	will keep outputting the item if it was found in the list. This
 *	function will give the user feedback whether the item was found, not
 *	found, and how many of the items were found.
 * -----------------------------------------------------------------------
 *************************************************************************/
void SearchLinkedList(MovieInfo *head,    //IN - contains the address of the
										  //     movies
					  Menu      item,     //IN- contains what the user wants
					  	  	  	  	  	  //    to search for
					  ofstream  &outFile);//OUT-variable used to output to
										  //    file

/*************************************************************************
 * Function IntErrorCheck
 * -----------------------------------------------------------------------
 * This function will promp the user and check if the correct input was
 * input. If its not, then it will output two different error messages
 * -----------------------------------------------------------------------
 *************************************************************************/
int IntErrorCheck(string prompt,      //OUT - prompt should be passed in
				  string errorOne,    //OUT - first error should be passed in
				  string errorTwo,    //OUT - second error should be passed in
				  int    upperBounds, //PROS - highest value of input
				  int    lowerBounds);//PROS - lowest value of input

/*************************************************************************
 * Function EnumToString
 * -----------------------------------------------------------------------
 * 	This function will get a variable of type enum and then it will
 * 	assign the correct string corresponding to the enum
 * 	----------------------------------------------------------------------
 *************************************************************************/
string EnumToString(Menu menuChoice);// IN - will be used to store the
									 // 		corresponding string in the
									 //		variable type

/*************************************************************************
 * Function MovieListHeading
 * -----------------------------------------------------------------------
 *	This function will output the heading of the list to the output file
 * -----------------------------------------------------------------------
 *************************************************************************/
void MovieListHeading(ofstream &outFile);// Out - used to output to file

#endif /* MYHEADER_H_ */
