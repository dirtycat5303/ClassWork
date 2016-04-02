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
 * WordWrap
 * ----------------------------------------------------------------------
 * This program will take a string and word wrap it if its to long for the
 * max length inputed by the user.
 * -----------------------------------------------------------------------
 * Preconditions:
 * 	phrase		- A string needs to be initialized and contain a string
 * 	maxLength	- User should state what is the max length until it word
 * 				  wraps
 * 	outFile  	- Variable of type ofstream must be initialized
 *
 * Postconditions:
 * 	Nothing, its an output function. It outputs the string wordWrapped
 ************************************************************************/

void WordWrap(string    phrase,		//OUT&PROSS- phrase user wants
									//           word wrapped
			  int       maxLength,	//PROSS	   - maximum phrase length
			  ofstream  &outFile)	//OUT      - output file variable
{
	string newWord;			//OUT 	- stores character by character of the
							//		  phrase
	string newPhrase;		//OUT	- will store newWords and a space

	//Checks character by character
	for(int index = 0; index < phrase.size(); index++)
	{
		if( phrase[index] != ' ' )
		{
			newWord = newWord + phrase[index];
		}
		else
		{
			//If word and new phrase length are bigger than max length
			// it will output the phrase
			if(newWord.size() + newPhrase.size() > maxLength)
			{
				outFile << newPhrase << endl;
				newPhrase.clear();
			}
			newPhrase = newPhrase + newWord + ' ';
			newWord.clear();
		}
	}

	//Checks if phrase and word are bigger than length. If so, it will
	//output in a new line the last word.
	outFile << newPhrase;
	if((newPhrase.size() + newWord.size()) > maxLength)
	{
		outFile << endl;
		outFile << newWord << endl;
	}
	else
	{
		outFile << newWord << endl;
	}
	}

