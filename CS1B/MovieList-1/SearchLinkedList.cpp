/*************************************************************************
 *  AUTHOR		 : Erick Lopez
 *  STUDEN ID    : 245600
 *  ASSIGNMENT #7: Searching Linked List
 *  CLASS        : CS1B
 *  SECTION      : MW: 10:00 - 11:50
 *  DUE DATE     : 11/03/13
 *  *********************************************************************/
#include "myheader.h"

void SearchLinkedList(MovieInfo *head, Menu item, ofstream &outFile)
{
	MovieInfo *itemPtr;
	itemPtr = head;
	string stringKey;
	int    intKey;
	int counter;
	counter= 0;

	cout << left;
	switch(item)
	{
		case TITLESEARCH:
			cout << "\nWhich title are you looking for? ";
			getline(cin,stringKey);
			cout << "\nSearching for movie " << stringKey << endl ;
			break;
		case GENRESEARCH:
			cout << "\nWhat genre are you looking for? ";
			getline(cin, stringKey);
			cout << "\nSearching for genre " << stringKey << endl ;
			break;
		case ACTORSEARCH:
			cout << "\nWhat actor are you looking for? ";
			getline(cin, stringKey);
			cout << "\nSearching for the actor " << stringKey << endl ;
			break;

		case YEARSEARCH:
//			cout << "\nWhat year are you looking for? ";
//			cin >> intKey;

			intKey = IntErrorCheck("\nWhat year are you looking for? ",
							  "**** The number is an invalid entry ****",
							  "**** Please input a number between 1878 and 3000",3000,1878);

			cout << "\nSearching for the year" << endl;
			break;
		case RATINGSEARCH:
			cout << "\nWhat rating are you looking for? ";
			cin  >> intKey;
			cout << "\nSearching for the rating"  << endl ;
			break;
	}

//	if()
//	{
//		outFile << setw(9)  << "MOVIE #";
//		outFile << setw(50) << "TITLE";
//		outFile << setw(6)  << "YEAR";
//		outFile << setw(8)  << "RATING";
//		outFile << setw(17) << "GENRE";
//		outFile << setw(17) << "ALT GENRE";
//		outFile << setw(20) << "LEAD ACTOR";
//		outFile << setw(18) << "SUPPORTING ACTOR" << endl;
//	}

	while(itemPtr != NULL)
	{


		if(stringKey == itemPtr->genre
		|| stringKey == itemPtr->AltGenre
		|| stringKey == itemPtr->leadActor
		|| stringKey == itemPtr->suppActor
		|| intKey == itemPtr->rating
		|| intKey == itemPtr->year)
		{
			outFile << setw(9) << counter + 1;
			outFile << setw(51) <<CheckTitle(itemPtr->title,45);
			outFile << setw(8) << itemPtr->year;
			outFile << setw(5) << itemPtr->rating ;

			outFile << setw(17) <<  itemPtr->genre;
			outFile << setw(17) << itemPtr->AltGenre ;
			outFile <<  setw(20) << itemPtr->leadActor;

			outFile <<  setw(18) << itemPtr->suppActor << endl;
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
			counter++;
		}

		itemPtr = itemPtr->next;
	}

	if(counter > 0)
	{
		cout << "";
		if (item == TITLESEARCH)
		{
		cout <<"Found the movie \""<< stringKey << "\"";

		}
		else if(item == GENRESEARCH)
		{
			cout << "Found "<< counter  << " movies for the genre " << stringKey;
		}
		else if (item == ACTORSEARCH)
		{
			cout << "Found "<< counter << " movies for the actor " << stringKey;
		}
		else if (item == YEARSEARCH)
		{
			cout << "Found "<< counter << " movies for the year " << intKey;
		}
		else if (item == RATINGSEARCH)
		{
			cout << "Found "<< counter << " movies for the rating " << intKey;
		}
		cout << "!"<< endl << endl;

	}
	else
	{
		cout << "Sorry, ";
		if (item == TITLESEARCH)
		{
		cout <<"the movie \""<< stringKey << "\" was not found "  << endl;

		}
		else if(item == GENRESEARCH)
		{
			cout << "no movies for the genre, " << stringKey <<" were found" << endl;
		}
		else if (item == ACTORSEARCH)
		{
			cout << "no movies for the actor" << stringKey << " were found" << endl;
		}
		else if (item == YEARSEARCH)
		{
			cout << " no movies for the year" << intKey << " were found" << endl;
		}
		else if (item == RATINGSEARCH)
		{
			cout << "no movies for the year "<< intKey << " were found;" << endl;
		}

	}
}
