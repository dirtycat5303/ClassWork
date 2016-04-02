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
 *	Function GetFilesNames
 * -----------------------------------------------------------------------
 * 	This function will get and open both the output file and the input
 * 	file. It will ask the user for a name or if the user wants they can just
 * 	enter the letter "d" to use the default names
 * 	----------------------------------------------------------------------
 * 	Preconditions  -
 * 	inFile		- variable of type ifstream must be declared
 * 	outFile		- variable of type ofstream must be declared
 *
 * 	Postconditions -
 * 		Nothing, it gets the names and opens the files
 *************************************************************************/

void GetFileNames( ifstream &inFile, 	//IN - opens input file
				   ofstream &outFile, 	//IN - opens output file
				   string   fileType)	//IN - stores what type of file it is
{
	string fileName; // IN - stores the name of the files

	if(toupper(fileType[0]) == 'I')
	{
		//Asking user for the name of the input file or use default
		cout << "Enter the name of the input file (Enter 'D' to use default) : ";
		getline(cin, fileName);

		//Checking if the user wants to use default file/Opening file
		if((toupper(fileName[0]))=='D')
		{
			inFile.open("InputFile.txt");
		}
		else
		{
			inFile.open(fileName.c_str());
		}

	}
	else
	{
		//Asking user for the name of the outPut file or use default
		cout << "Enter the name of the outPut file (Enter 'D' to use default) : ";
		getline(cin, fileName);

		//Checking if the user wants to use default file/Opening file
		if((toupper(fileName[0])) == 'D' )
		{
			outFile.open("OutputFile.txt");
		}
		else
		{
			outFile.open(fileName.c_str());
		}
	}
}
