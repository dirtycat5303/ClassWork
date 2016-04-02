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
 * Searching Linked List
 * -----------------------------------------------------------------------
 * This program will ask the user for an input file and output file name,
 * it will give the user the option to use default names. the user will
 * have the options to search the list by title, actors, genre, year, and
 * rating, output the whole list and exit.
 * -----------------------------------------------------------------------
 * INPUT:
 *  menuChoice - Stores what the user wants to do from the menu displayed
 *  head       - points to the first item in linked list
 * OUTPUTS:
 *
 *
 ************************************************************************/
int main()
{
	ofstream outFile;  	//IN - variable for output to file
	ifstream inFile;	//IN - variable to use the input file

	MovieInfo *head;	//IN&OUT - points to first item in list
	int menuChoice;     //IN     - stores user's option from menu
	Menu commandMenu;   //OUT    - stores user's menu option

	head    = NULL;		 //starts the linked list
//	commandMenu = OUTPUT;//sets t

	//Gets input file name and opens it
	GetFileNames(inFile,outFile,"Input");
	//Gets output file name and opens it
	GetFileNames(inFile,outFile,"Output");
	cout << endl << endl;

	//head points to the linked list
	head    = ReadInput(head,inFile);

	//Prints header to the console
	PrintHeader("Searching Linked List",'A',7,cout);

	//Prints header to the output file
	PrintHeader("Searching Linked List",'A',7,outFile);

	//Will only keep going if menu option is not EXIT
	commandMenu = TITLESEARCH;
	outFile << left;
	while(commandMenu != EXIT)
	{
			//Promts the user and checks if menuchoice is correct
			menuChoice = IntErrorCheck
					   ("DVD MENU OPTIONS\n\n"
						"1 - Output Entire List\n"
					    "2 - Title Search\n"
					    "3 - Genre Search\n"
					    "4 - Actor Search\n"
					    "5 - Year Search\n"
						"6 - Rating Search (0-9)\n"
					    "0 - EXIT\n"
						"Enter an option (0 to exit): ",
						"\n**** The number  is an invalid entry ****",
						"**** Please input a number between 0 and 6 ****\n", 6,0 );

	    //Typecasts the int to enum
		commandMenu = Menu(menuChoice);

		//Outputs the whole list
		if (commandMenu == OUTPUT)
		{
			cout << endl <<"Listing all movies!" << endl << endl;
					ListAllMovies(head, outFile);

		}
		//Searches for one item in the list
		else if (commandMenu == TITLESEARCH ||
				 commandMenu == GENRESEARCH ||
				 commandMenu == ACTORSEARCH ||
				 commandMenu == YEARSEARCH  ||
				 commandMenu == RATINGSEARCH )
		{
			SearchLinkedList(head,commandMenu, outFile);
		}

	}

	outFile << right;
	//Closes both files
	inFile.close();
	outFile.close();

	return 0;
}

