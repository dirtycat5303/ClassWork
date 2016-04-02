/*************************************************************************
 *  AUTHOR		 : Erick Lopez
 *  STUDEN ID    : 245600
 *  ASSIGNMENT #7: Searching Linked List
 *  CLASS        : CS1B
 *  SECTION      : MW: 10:00 - 11:50
 *  DUE DATE     : 11/03/13
 *  *********************************************************************/
#include "myheader.h"

void GetFileNames( ifstream &inFile, ofstream &outFile, string fileType)
{
	string fileName;

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
