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
 * CheckTitle
 * ----------------------------------------------------------------------
 * This function will take a string and word wrap it if its to long for the
 * max length inputed by the user.
 * -----------------------------------------------------------------------
 * Preconditions:
 * 	title		- A string needs to be initialized and contain a string
 * 	maxLength	- User should state what is the max length
 * 	outFile  	- Variable of type ofstream must be initialized
 *
 * Postconditions:
 * 	Nothing, its an output function. It outputs the string wordWrapped
 ************************************************************************/
string CheckTitle(string   title,     //OUT&PROSS- title user wants word
									//			 wrapped
				int      maxLength) //PROSS	   - maximum phrase length

{
	string newWord;			//OUT 	- stores character by character of the
							//		  title
	string newPhrase;		//OUT	- will store newWords and a space


	if(title.length()> maxLength)
	{


	//Checks character by character
	for(int index = 0; index < title.size(); index++)
	{
		if( title[index] != ' ' )
		{
			newWord = newWord + title[index];
		}
		else
		{
			//If word and new phrase length are bigger than max length
			// it will output the phrase
			if(newWord.size() + newPhrase.size() > maxLength)
			{
				title = newPhrase + "...";
				newPhrase.clear();
			}
			newPhrase = newPhrase + newWord + ' ';
			newWord.clear();
		}
	}
	}

	//Checks if phrase and word are bigger than length. If so, it will
	//output  "..."
	return title;

}

