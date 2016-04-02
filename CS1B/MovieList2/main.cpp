/*************************************************************************
 *  AUTHOR		 : Erick Lopez
 *  STUDEN ID    : 245600
 *  ASSIGNMENT #7: Searching Linked List
 *  CLASS        : CS1B
 *  SECTION      : MW: 10:00 - 11:50
 *  DUE DATE     : 11/03/13
 *  *********************************************************************/
#include "myheader.h"

int main()
{
	ofstream outFile;
	ifstream inFile;		//IN      - file used in the function

	string inFileName;		//IN      - name of file the user will enter
	string outFileName;

	MovieInfo *head;
//	MovieInfo *headPtr;
	bool validMenuChoice;
	int menuChoice;
	Menu commandMenu;
	bool quit;
	quit = false;

	head    = NULL;
	commandMenu = OUTPUT;

	GetFileNames(inFile,outFile,"Input");
	GetFileNames(inFile,outFile,"Output");

	head    = ReadInput(head,inFile);

//	PrintHeader("Searching Linked List",'A',7,cout);
//	PrintHeader("Searching Linked List",'A',7,outFile);

	while(commandMenu != EXIT)
	{
//		do
//		{
			cout << "DVD MENU OPTIONS"       << endl << endl;
			cout << "1 - Output Entire List" << endl;
			cout << "2 - Title Search"       << endl;
			cout << "3 - Genre Search"       << endl;
			cout << "4 - Actor Search"       << endl;
			cout << "5 - Year Search"        << endl;
			cout << "6 - Rating Search (0-9)"<< endl;
			cout << "0 - EXIT"               << endl;




			menuChoice = ErrorCheckingMenu
					   ("Enter an option (0 to exit): ",
						"**** The number  is an invalid entry ****",
						"**** Please input a number between 0 and 6 ****", 6,0 );
//		}while();
		if(menuChoice > 0)
		{
		commandMenu = Menu(menuChoice);
		}
		if (commandMenu == OUTPUT && menuChoice >0)
		{
			cout << endl <<"Listing all movies!" << endl << endl;
					ListAllMovies(head, outFile);

		}
		else
			if (commandMenu ==	TITLESEARCH ||
				 commandMenu == GENRESEARCH ||
				 commandMenu == ACTORSEARCH ||
				 commandMenu == YEARSEARCH ||
				 commandMenu == RATINGSEARCH )
		{
			SearchLinkedList(head,commandMenu, outFile);
		}

	}
	cout <<"Done reading File";
	cout << "Done outputting File";

	inFile.close();
	outFile.close();



	return 0;
}

