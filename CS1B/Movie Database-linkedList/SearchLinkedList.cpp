/*************************************************************************
 *  AUTHOR		 : Erick Lopez
 *  STUDEN ID    : 245600
 *  ASSIGNMENT #7: Searching Linked List
 *  CLASS        : CS1B
 *  SECTION      : MW: 10:00 - 11:50
 *  DUE DATE     : 11/03/13
 *  *********************************************************************/
#include "myheader.h"

void SearchLinkedList(MovieInfo *head, Menu item, ofstream outFile)
{
	MovieInfo *itemPtr;
	itemPtr = head;
	string stringKey;
	int    intKey;
	int counter;

	cout << left;
	switch(toupper(item))
			{
			case TITLESEARCH:
				cout << "What title are you looking for? ";
				getline(cin,stringKey);
				break;
			case GENRESEARCH:
				cout << "What genre are you looking for? ";
				getline(cin, stringKey);
				break;
			case ACTORSEARCH:
				cout << "What actor are you looking for? ";
				getline(cin, stringKey);
				break;

			case YEARSEARCH:
				cout << "What year are you looking for? ";
				cin  >> intKey;
				break;
			case RATINGSEARCH:
				cout << "What rating are you looking for? ";
				cin  >> intKey;
				break;
			}
	while(itemPtr != NULL)
	{
		if(  stringKey == itemPtr->genre
				  || stringKey == itemPtr->AltGenre
			      || stringKey == itemPtr->leadActor
			      || stringKey == itemPtr->suppActor
			      || intKey == itemPtr->rating
			      || intKey == itemPtr->year)
		{
			cout << setw(9) << counter + 1;
			cout << setw(51) <<CheckTitle(itemPtr->title,45);
			cout << setw(8) << itemPtr->year;
			cout << setw(5) << itemPtr->rating ;

			cout << setw(17) <<  itemPtr->genre;
			cout << setw(17) << itemPtr->AltGenre ;
			cout <<  setw(20) << itemPtr->leadActor;

			cout <<  setw(18) << itemPtr->suppActor << endl;
			counter++;
		}
		else if(stringKey == itemPtr->title)
		{

			outFile << left << endl << endl;
			outFile << setw(75) << setfill('*') << '*' << setfill(' ') << endl;
			outFile  <<"Title: ";

			outFile << setw(51) << CheckTitle(itemPtr->title,50);

			outFile << endl;
			outFile << setw(75) << setfill('-') << '-' << setfill(' ') << endl;
			outFile << "Year: "  << setw(12) << itemPtr->year;
			outFile << "Rating: " << itemPtr->rating << endl;
			outFile << setw(75) << setfill('-') << '-' << setfill(' ') << endl;
			outFile << setw(18) << "Leading Actor:"<< setw(25) << itemPtr->leadActor;
			outFile << "Genre 1: " << itemPtr->genre << endl;
			outFile << "Supporting Actor: " << setw(25) << itemPtr->suppActor;
			outFile << "Genre 2: "<< itemPtr->AltGenre << endl;
			outFile << setw(75) << setfill('-') << '-' << setfill(' ') << endl;
			outFile << "PLOT:" << endl;

			WordWrap(itemPtr->synopsis,75, outFile);
			outFile << setw(75) << setfill('*') << '*' << setfill(' ') << endl;
			outFile << endl << endl;
		}
		itemPtr = itemPtr->next;
	}

	if(counter == 0)
	{
		cout<< "Not Found" << endl;
	}
}
