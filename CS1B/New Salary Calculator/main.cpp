/*************************************************************************
 *  AUTHOR		 : Erick Lopez
 *  STUDEN ID    : 245600
 *  ASSIGNMENT #0: 1
 *  CLASS        : CS1B
 *  SECTION      : MW: 10:00 - 11:50
 *  DUE DATE     : 8/19/13
 *  *********************************************************************/
#include <iostream>
#include <iomanip>
using namespace std;
/*************************************************************************
 *
 * NEW SALARY
 * _______________________________________________________________________
 *  This program will obtain the user's first name, current annual salary
 *  and a percent increase due on that salary. This program will CALCULATE,
 *  STORE, and OUTPUT the new annual salary, new monthly salary and the
 *  retroactive pay due.
 *  ______________________________________________________________________
 *  INPUTS:
 *  	userName         : User's name
 *  	currentAnnSal    : The salary they have now
 *  	percentIncrease  : Percent increase due on that salary
 *
 *  OUPUTS:
 *  	newAnnualSal     : OUT & CALC-The salary the user will have
 *  					   after increase
 *		monthlySal       : OUT & CALC-The monthly salary user will have
 *		retroPayDue      : OUT & CALC-The difference between what they
 *						   should have received had they gotten
 *						   their raise on Jan.1
 * **********************************************************************/


int main()
{
	/*********************************************************************
	 * CONSTANTS
	 * -------------------------------------------------------------------
	 * USED FOR CLASS HEADING - ALL WILL BE OUTPUT
	 * -------------------------------------------------------------------
	 * PROGRAMMER  : Programmer's Name
	 * CLASS       : Student's Course
	 * SECTION     : Class Days and Times
	 * LAB_NUM     : Lab Number (Might be assignment)
	 * LAB_NAME    : Title of the Lab
	 * *******************************************************************
	 */
	const char PROGRAMMER[30] = "Erick Lopez";
	const char CLASS[5]       = "CS1B";
	const char SECTION [25]   = "MW: 10:00a - 11:50a";
	const int  LAB_NUM        = 1;
	const char LAB_NAME [25]  = "Basic Input / Output";

	//OUTPUT - Class Heading
	cout << left;
	cout << "***********************************************************";
	cout << "\n*    PROGRAMMED BY : " << PROGRAMMER;
	cout << "\n*    " << setw(14) << "CLASS" <<": " << CLASS;
	cout << "\n*    " << setw(14) << "SECTION" << ": "<< SECTION;
	cout << "\n*    ASSIGNMENT #" <<setw(2) << LAB_NUM << ": " << LAB_NAME;
	cout << "\n*********************************************************";
	cout << "**\n\n";
	cout << right;

/************************************************************************
 * CONSTANTS
 * LETTER_AMMOUNT  -INPUT-Max amount of characters in a
 * MONTHS          -CALC-Months in the year
 * MONTHS_PASSED   -CALC-Amount of time for retroactive pay
 *
 ************************************************************************/
	const int LETTER_AMMOUNT = 25;
	const int MONTHS         = 12;
	const int MONTHS_PASSED  = 6 ;

	char userName[25];			//INP & OUT-Stores the user name
	int currentAnnSal;			//INP & CALC-Current annual salary of user
	float percentIncrease;		//INP & CALC-Percent increase of salary
	float newAnnualSal;			//OUT & CALC-New annual Salary
	float monthlySal;			//OUT & CALC-New monthlySalary
	float retroPayDue;			//OUT & CALC-Retroactive pay due on salary

//for loop will ask the user 3 times and will wait for the user to press
//enter before moving to the next
	for(int count = 1; count <=3; count++)
	{
//INPUT- asking the user for its name current salary and pay increase
	cout << left;
	cout << setw(29) << "What is your name?";
	cin.getline(userName, LETTER_AMMOUNT);

	cout << setw(29) << "What is your current salary?";
	cin  >> currentAnnSal;

	cout << setw(29) << "What is your pay increase?";
	cin  >> percentIncrease;
	cin.ignore(10000,'\n');
	cout << endl;



/*PROSESSING
 * -multiplies the percent increase by the current salary and adds it to
 *  the current salary to figure out the new salary
 *
 * -divides the new salary by 12 to figure out the new monthly salary
 *
 * -divides the difference of the new and old salary by 12 months then
 *  multiplies the result by the months passed
 */
    newAnnualSal = currentAnnSal +( currentAnnSal* percentIncrease);

    monthlySal   = (newAnnualSal/MONTHS);

    retroPayDue  = ((newAnnualSal-currentAnnSal)/MONTHS)* MONTHS_PASSED;

/*
 *OUTPUT
 *   Tells the user their new salary, new monthly salary and the retro
 *   pay
 */
    cout << right;
    cout << userName << "\'s SALARY INFORMATION" << endl;
    cout << setw(10) << "New Salary";
    cout << setw(19) << "Monthly Salary";
    cout << setw(20) << "Retroactive Pay" << endl;


    cout << right;
    cout << fixed << setprecision(2);
    cout << setw(10)  << newAnnualSal;
    cout << setw(19)  << monthlySal;
    cout << setw(20)  << retroPayDue << endl << endl;

    cout << "<Press enter to continue>";
    cin.get();
    cout << endl << endl;

	} //for loop ends

// sets the alignment to left again
	cout << left;
	return 0;
}
