/*************************************************************************
 * AUTHOR           : Erick Lopez , Mahroo Mahmoodi
 * STUDENT ID       : 265400   	  , 276471
 * LAB #9		    : Implementing a Queue
 * CLASS            : CS1B
 * SECTION          : MW - 10:00 AM
 * DUE DATE         : 06 November 2013
 *************************************************************************/
#include "header.h"

/*************************************************************************
 * Function IntErrorCheck
 * -----------------------------------------------------------------------
 * This function will prompt the user and check if the correct input was
 * input. If its not, then it will output two different error messages
 * -----------------------------------------------------------------------
 * PRE-CONDITIONS
 * 		prompt		 - The prompt must be passed in
 * 		errorOne	 - The first error must be passed in
 * 		errorTwo	 - The second error must be passed in
 * 		upperBounds	 - The highest input the user can input must be passed in
 * 		lowerBounds	 - The lowest input the user can input must be passed in
 *
 * POST-CONDITIONS
 *  	Returns -> menuIput	 - The correct input will be sent back
 *************************************************************************/

int IntErrorCheck(string prompt,     //OUT 	- prompt should be passed in
				  string errorOne,   //OUT 	- first error should be passed in
				  string errorTwo,   //OUT 	- second error should be passed in
				  int    upperBounds,//PROS - highest value of input
				  int    lowerBounds)//PROS - lowest value of input
{
	bool validInput; 	//PROSS - loop will exit when this is is false
	double  menuInput;	//OUT   - stores the users input

	validInput = false; // initial state of the boolean so it wont exit


	cout << left;
	do{
		cout << prompt;


		if(!(cin >> menuInput ))
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(),'\n');
			cout << endl << errorTwo << endl <<endl;
			validInput=true;
		}
		else if (menuInput < lowerBounds || menuInput > upperBounds)
		{
			cin.clear();

			cout << errorOne.substr(0,17) << menuInput;
			cout << right << errorOne.substr(17 ,41)
				 << setw(10-int (log10 (menuInput))) << " ****"
		         << endl << errorTwo << endl;

			validInput = true;
		}
		else
		{
			validInput= false;
			cin.ignore(numeric_limits<streamsize>::max(),'\n');

		}
	}while(validInput);

	return menuInput;

}

