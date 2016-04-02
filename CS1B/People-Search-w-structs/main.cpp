/*************************************************************************
 * AUTHOR #1     : Morgan Heaslet
 * AUTHOR #2	 : Erick Lopez
 * STUDENT ID #1 : 889647
 * STUDENT ID #2 : 265400
 * LAB #6        : Structs
 * CLASS         : CS1B
 * SECTION:      : MW 10AM
 * DUE DATE      : 10/02/2013
 ************************************************************************/

#include "myHeader.h"

/*************************************************************************
 *
 * Structs
 * _______________________________________________________________________
 * This program receives the name of an input and output file from the
 * user, propagates a struct using the information found in the input file,
 * then prompts the user to enter a name to search for. The program then
 * searches for the name, and if found, outputs the name and corresponding
 *  ID and balance to the previously given output file.
 * _______________________________________________________________________
 * INPUTS:
 *	inputFile    : Name of input file
 *	outputFile   : Name of output file
 *	searchName   : Name to search for
 *
 * OUTPUTS:
 *	person       : Struct containing names, IDs, and balances
 *	totalBalance : Total balance of searched names
 ************************************************************************/

int main()
{
   /*********************************************************************
	* CONSTANTS
	* -------------------------------------------------------------------
	* USED FOR PROGRAM - ARRAYS
	* -------------------------------------------------------------------
	* AR_SIZE    : Size of array
	********************************************************************/
	const int AR_SIZE = 10;

	ofstream oFile;				      // Output file variable

	string inputFile;				  // User-received name of input file
	string outputFile;			      // User-received name of output file
	string searchName;			      // Name to be searched for
	int searchNameIndex;			  // Index of found name
	float totalBalance;				  // Total balance of searched names

	PersonInfo person[AR_SIZE];		  // Struct containing names, IDs,
									  // and balances

	// PrintHeader - Outputs the class print header to console
	PrintHeaderPartner("Structs", 'L', 6, "Erick Lopez");

	// INPUT - Prompts user for input and output file name
	cout << left;
	cout << setw(40) << "What input file would you like to use?";
	getline(cin, inputFile);

	cout << setw(40) << "What output file would you like to use?";
	getline(cin, outputFile);
	cout << right;

	// InputStruct - This function propagates the struct
	InputStruct(inputFile, person, AR_SIZE);

	oFile.open(outputFile.c_str());

	// PrintHeaderOutputFile - Outputs the class print header to file
	PrintHeaderOutputFile("Structs",'L',6, "Erick Lopez", oFile);

	// OUTPUT - Outputs the data table to the output file
	oFile << left;
	oFile << setw(9) << "ID # " << setw(27) << "NAME" << "BALANCE DUE";
	oFile << endl << setw(9) << "----" << setw(27)
		  << "----------------------"  << "-----------" << endl;
	oFile << right;

	// INPUT - Prompts user for name to search for
	cout << "\nWho do you want to search for (enter done to exit): ";
	getline(cin, searchName);

	while (searchName != "done")
	{
		// SearchStringArray - searches the names array for the name
		// received from the user
		searchNameIndex = SearchStringArray(person, AR_SIZE,
											searchName);

		if(searchNameIndex < AR_SIZE)
		{
			cout << "Found.\n\n";

			// OutputInfoToFile - Outputs the searched name and the
			// appropriate ID and balance to the output file
			OutputInfoToFile(oFile, person, searchNameIndex, AR_SIZE);

			// CALCULATING - Accumulates total balance of searched names
			totalBalance += person[searchNameIndex].balance;
		}
		else
		{
			cout << searchName << " was not found.\n\n";
		} //end if(searchNameIndex < AR_SIZE)

		// INPUT - Prompts user for next name to search for
		cout << "Who do you want to search for (enter done to exit): ";
		getline(cin, searchName);

	}//end while (searchName != "done")

	oFile << endl << fixed << setprecision(2);
	oFile << setw(36) << "Total Balance Due: ";
	oFile << "$" << setw(10) << totalBalance;

	// OUTPUT - End of program message
	cout << endl << "Thank you for using my program.";

	oFile.close();

	return 0;
}
