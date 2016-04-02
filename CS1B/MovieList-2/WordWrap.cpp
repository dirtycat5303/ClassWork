/*************************************************************************
 *  AUTHOR		 : Erick Lopez
 *  STUDEN ID    : 245600
 *  ASSIGNMENT #4: Parallel Arrays
 *  CLASS        : CS1B
 *  SECTION      : MW: 10:00 - 11:50
 *  DUE DATE     : 9/18/13
 *  *********************************************************************/
#include "myheader.h"

void WordWrap(string phrase, int maxLenght)
{
	string newPhrase;
	string newWord;
	int phraseSize;
	phraseSize = phrase.size();

	for(int index = 0; index < phraseSize; index++)
	{
		if( phrase[index] != ' ' )
		{
			newWord = newWord + phrase[index];
			cout << " Index " << index << endl << newWord<< " newWord "<< endl;
		}
		else
		{
			if(newWord.size() + newPhrase.size() > maxLenght && phrase[index]!=' ')
			{
				cout <<"NEWPHRASE "<< newPhrase << endl;
				newPhrase.clear();
				cout << "NEW PHRASE SIZE:" << newPhrase.size()<< endl;
			}

			newPhrase = newPhrase + newWord + ' ';
			newWord.clear();
		}
		cout << "END OF LOOOP " << index << ' ' << endl;
		cout <<"NEWPHASE (END) "<< newPhrase<< endl;
	}
}
