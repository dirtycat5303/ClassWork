/*************************************************************************
 *  AUTHOR		 : Erick Lopez
 *  STUDEN ID    : 245600
 *  ASSIGNMENT #4: Parallel Arrays
 *  CLASS        : CS1B
 *  SECTION      : MW: 10:00 - 11:50
 *  DUE DATE     : 9/18/13
 *  *********************************************************************/
#include "myheader.h"

/*************************************************************************
 * Parallel Arrays
 * -----------------------------------------------------------------------
 * This program will receive as input the name of an input file and an
 * output file. It will the read in a list of names, id #'s, and balances
 * form the input file.This program then will prompt the user for a name
 * to search for, when it finds the name it will output to a file the
 * person's id #, name, and balance.The program will prompt for another
 * name until the word "done" is entered.
 *
 * Inputs :
 * 	inFileName   -	It will store the name of the file the program will
 * 					read from
 * 	outFileName  -  It will store the name of the file the program will
 * 					output to
 * 	searchItem	 -	It will store the item name the user wants to search
 * Outputs :
 * 	It will output all the information the user wants to know from the
 * 	file read
 ************************************************************************/
int main()
{
	//Declare the Input file in console
	ifstream inFile;
	ofstream outFile;

	string inFileName;	 //Variable used to store the User's input file
	string outFileName;  //Variable used to store the user's output file

	const int ARR_SIZE = 10;   // CALC      - The number of items in an
							   //			   array
	string namesAr[ARR_SIZE];  // CALC & OUT - Store names in the array
	int idsAr[ARR_SIZE];	   // CALC & OUT - Store id #'s
	float balanceAr[ARR_SIZE]; // CALC & OUT - Store the balance of the
							   //	           student
	string searchItem;		   // IN & CALC  - Stores the name the user
							   // 			   wants to search
 	int foundAt;			   // CALC       - Store the index of the item
 							   //              found

	//Declare the Input file in console
	cout << left << setw(42);
	cout << "What input file would you like to use?: ";
	getline(cin, inFileName);
	inFile.open(inFileName.c_str());

	//Declare the Output File in console
	cout << setw(42);
	cout << "What output file would you like to use?:";
	getline(cin, outFileName);
	outFile.open(outFileName.c_str());

	//Prints out the header to the output file
	PrintHeader(outFile);

	//Reads inputs from the input file
	ReadInputs ( namesAr, idsAr, balanceAr, ARR_SIZE, inFile);

	//The heading of the output File
		outFile << left;
		outFile << setw(9)  << "ID #";
		outFile << setw(25) <<"NAME"  << "BALANCE DUE";
		outFile << setw(10) << "\n----"  ;
		outFile << setw(25) << "--------------------";
		outFile << "-----------";

	//Asking user to search for a name until "done" is entered
	cout << setw(52) << "\nWho do you want to search for(enter done to exit):";
	getline(cin, searchItem);

	//While-loop will stop when user enters "done"
	while(searchItem != "done")
	{
		 // Stores the index of the item found
		 foundAt= SearchName(namesAr, ARR_SIZE, searchItem);

		 //Prints the information in the arrays to the output file
		 PrintToOutput( namesAr, idsAr, balanceAr, ARR_SIZE, foundAt,
				 	 	outFile);

		 cout << setw(52) << "\nWho do you want to search for(enter "
				             "done to exit):";
		 getline(cin, searchItem);
	}

	cout <<"\nThank you for using my program.";

	// Close files when the program is done
	inFile.close();
	outFile.close();
	return 0;
}
