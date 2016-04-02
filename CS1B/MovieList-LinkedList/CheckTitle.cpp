/*************************************************************************
 *  AUTHOR		 : Erick Lopez
 *  STUDEN ID    : 245600
 *  ASSIGNMENT #6: Movie List - Intro to Linked List
 *  CLASS        : CS1B
 *  SECTION      : MW: 10:00 - 11:50
 *  DUE DATE     : 10/16/13
 *  *********************************************************************/
#include "myheader.h"

void CheckTitle(string title, int maxLength, ofstream& outFile)
{
	string newWord;
	string newPhrase;

	if (title.size() > maxLength)
	{
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
						cout  << newPhrase + "..." << endl;
						newPhrase.clear();
					}


					newPhrase = newPhrase + newWord + ' ';
					newWord.clear();
				}

			}
	}
}

