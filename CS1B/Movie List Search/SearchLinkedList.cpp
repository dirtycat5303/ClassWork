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
 *Function SearchLinkedList
 * -----------------------------------------------------------------------
 *	This function will get the menu choice picked by the user, and will
 *	choose which is the right input and output to give to the user then it
 *	will keep outputting the item if it was found in the list. This
 *	function will give the user feedback whether the item was found, not
 *	found, and how many of the items were found.
 * -----------------------------------------------------------------------
 * Preconditions:
 * 		head    - a linked list must be initialized
 * 		item    - a variable of type menu must be initialized
 * 		outFile - a variable of type ofstream  must be initialed
 * Postconditions:
 * 		Nothing, it will prompt the user for an item, search for it, output
 * 		it to the file, and give the user feedback
 *************************************************************************/

void SearchLinkedList(MovieInfo *head,   //IN - contains the address of the
										 //     movies
					  Menu      item,    //IN- contains what the user wants
					  	  	  	  	  	 //    to search for
					  ofstream  &outFile)//OUT-variable used to output to
										 //    file
{
	MovieInfo *itemPtr;  //IN&OUT - points to the first item of the list
						 //			so head wont get lost
	string    stringKey; //IN&OUT - stores the string the user is looking for
	int       intKey;    //IN&OUT - stores the int the user is looking for
	int       counter;   //OUT    - used to count string/int found

	itemPtr = head;		 //Makes pointer point to the first item in list
	counter= 0;          //Starts counter at 0

	cout    << left;
	outFile << left;

	//Only if the Menu item  is a string then it will put it in stringKey
	if(item == TITLESEARCH || item == GENRESEARCH || item == ACTORSEARCH)
	{
		cout << "\nWhich " << EnumToString(item) <<" are you looking for? ";
		getline(cin,stringKey);
		cout << "\nSearching for "<< EnumToString(item) <<' ' << stringKey;
		cout << endl ;
	}
	//If Menu item is an int then it checks if it is a year or rating so it
	//can output the right prompt and error messages
	else if(item == YEARSEARCH)
	{

		intKey = IntErrorCheck(
				 "\nWhat " + EnumToString(item) + " are you looking for? ",
				 "\n**** The number  is an invalid entry ****",
				 "**** Please input a number between 1878 and 3000 ****\n",
				 3000,1878);


		cout << "\nSearching for "<< EnumToString(item) <<' ' << stringKey;
		cout << endl ;

	}
	//If Menu item is a rating then it will output the right prompt and
	//error messages
	else if (item == RATINGSEARCH)
	{
		intKey = IntErrorCheck(
				"\nWhat " + EnumToString(item) + " are you looking for? ",
				 "\n**** The number  is an invalid entry ****",
				 "**** Please input a number between 0 and 9 ****",
				 9,0 );

		cout << "\nSearching for "<< EnumToString(item) <<' ' << stringKey;
		cout << endl ;
	}



	//Search will go through the whole list and output the items if found
	while(itemPtr != NULL)
	{


		//Only if keys equal the item the pointer points to it will output them
		if(((stringKey == itemPtr->genre || stringKey == itemPtr->AltGenre) && item == GENRESEARCH)
		|| ((stringKey == itemPtr->leadActor|| stringKey == itemPtr->suppActor) && item == ACTORSEARCH)
		|| (intKey == itemPtr->rating && item == RATINGSEARCH)
		|| (intKey == itemPtr->year && item == YEARSEARCH))
		{
			//Only when the is a new list it will output the movie heading
			if(counter == 0)
			{
				outFile << "Search by " << EnumToString(item) << " found:" << endl;
				MovieListHeading(outFile);

			}

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
		//If title is the same as key, it will ouput the whole movie info
		else if((stringKey == itemPtr->title)&& item == TITLESEARCH)
		{


			OutputToFile(itemPtr,outFile);
			counter++;
		}
		//Points to the next item at teh end of the loop
		itemPtr = itemPtr->next;
	}

	//If item was found it will tell the user that it was gound
	if(counter > 0)
	{
		//Will give user specific feedback
		cout << "Found ";
		if (item == TITLESEARCH)
		{
		cout <<"the movie " << stringKey;

		}
		else if( item == GENRESEARCH || item == ACTORSEARCH)
		{
			cout << counter  << " movies for the " << EnumToString(item) << ' ' << stringKey;
		}
		else
		{
			cout << counter  << " movies for the " << EnumToString(item) << ' ' << intKey;
		}

		cout << "!"<< endl << endl;

	}
	//If counter was not found it will tell the user
	else if (counter == 0)
	{
		//Will give the user specific information of what wasn't found
		cout << "Sorry, ";
		if (item == TITLESEARCH)
		{
		cout <<"the movie \""<< stringKey << "\" was not found\n"  << endl;

		}
		else if ( item == RATINGSEARCH || item == YEARSEARCH)
		{
			cout << "no movies for the " << EnumToString(item) << ", " << intKey <<" were found\n" << endl;
		}
		else
		{
			cout << "no movies for the " << EnumToString(item) << ", " << stringKey << " were found\n" << endl;
		}

	}
	//return the allignment tot he right
	cout    << right;
	outFile << right;
}
