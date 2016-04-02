/*************************************************************************
 *  AUTHOR		 : Erick Lopez
 *  STUDEN ID    : 245600
 *  ASSIGNMENT #4: Parallel Arrays
 *  CLASS        : CS1B
 *  SECTION      : MW: 10:00 - 11:50
 *  DUE DATE     : 9/16/13
 *  *********************************************************************/
#include "myheader.h"

/************************************************************************
* PrintHeader
* -----------------------------------------------------------------------
* It will output the class heading, checking if the assignment is a lab
* 	or an assignment.
* -----------------------------------------------------------------------
*	Preconditions -
*		None
*	PostConditions -
*		Will ouput class heading
* ***********************************************************************/
void PrintHeader (ofstream& outFile)
{
	string asName;	//IN,CAlC & OUT - store the name of the assignment
	char asType;    //IN,CAlC & OUT - Store the type of the assignment
	   	   	   	    //  			  (A or L)
	int asNum;		//IN,CAlC & OUT - Store the number of the assignment

	// INPUT - Class Headings
	cout << setw(32) <<"Is this an Assignment or a Lab?";
	cin.get(asType);
	cin.ignore(1000,'\n');

	//Asks User if the assignment is a lab or assignment
	if(toupper(asType) == 'L')
	{
		cout << setw(24) << "What is the lab number?";
		cin  >>asNum;

		cout <<setw(22) << "What is the lab name?";
		getline(cin, asName);
	}
	else
	{
		cout << setw(31) <<"What is the assignment number?";
		cin  >> asNum;
		cin.ignore(1000,'\n');

		cout << setw(29) <<"What is the assignment name?";
		getline(cin,asName);
	}

	outFile << left;
	outFile << "**************************************************\n";
	outFile << "* PROGRAMMED BY : Erick Lopez";
	outFile << "\n* " << setw(14) << "STUDENT ID" << ": 265400";
	outFile << "\n* " << setw(14) << "CLASS CS1B" << ": MW - 10:00 - 11:50";
	outFile << "\n* " ;

	if (asType =='L')
	{
		outFile << "LAB #" << setw(9);
	}
	else
	{
		outFile << "ASSIGNMENT #" << setw(2);
	}
	outFile << asNum << ": " << asName;
	outFile << "\n**************************************************\n\n";
	outFile <<	right;
}
