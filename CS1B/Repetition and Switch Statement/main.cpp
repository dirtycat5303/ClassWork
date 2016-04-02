/*************************************************************************
 *  AUTHOR		 : Erick Lopez
 *  STUDEN ID    : 245600
 *  ASSIGNMENT #2: Repetition & Switch Statement
 *  CLASS        : CS1B
 *  SECTION      : MW: 10:00 - 11:50
 *  DUE DATE     : 9/4/13
 *  *********************************************************************/
#include <iomanip>
#include <iostream>
using namespace std;
/*************************************************************************
 *
 * REPETITION & SWITCH STATEMENT
 * _______________________________________________________________________
 * 	This program will obtain the letter grades as input from a user, then
 * 	converts each letter grade into grade points. It will total all the
 * 	grade points and output the total grade points and the grade point
 * 	average when the user enters an 'X'.
 *  ______________________________________________________________________
 *  INPUTS:  grade         - Stores the grade the user enters and it's
 *  						 changed to grade points
 *  OUPUTS:	 gradeSum      - Stores the total grade points
 *  		 gradePointAvrg- The average of all grades inputed
 *  		 inputCounter  - Stores the total number of valid inputs
 *
 * **********************************************************************/

int main ()
{
/*************************************************************************
  * CONSTANTS
  * ---------------------------------------------------------------------
  * USED FOR CLASS HEADING - ALL WILL BE OUTPUT
  * ---------------------------------------------------------------------
  * PROGRAMMER  : Programmer's Name
  * CLASS       : Student's Course
  * SECTION     : Class Days and Times
  * LAB_NUM     : Lab Number (Might be assignment)
  * LAB_NAME    : Title of the Lab
  * ---------------------------------------------------------------------
  * OTHER CONSTANTS
  * letterA     : Stores letter A
  * letterB		: Stores letter B
  * letterC		: Stores letter C
  * letterD		: Stores letter D
  * letterF		: Stores letter F
  * letterX		: Stores letter X
  * ---------------------------------------------------------------------
  * *********************************************************************/
	const char PROGRAMMER[30] = "Erick Lopez";
	const char CLASS[5]       = "CS1B";
	const char SECTION [25]   = "MW: 10:00a - 11:50a";
	const int  LAB_NUM        = 2;
	const char LAB_NAME [30]  = "Repetition & Switch Statement";

	const char LETTER_A        = 'A';
	const char LETTER_B        = 'B';
	const char LETTER_C        = 'C';
	const char LETTER_D        = 'D';
	const char LETTER_F        = 'F';
	const char LETTER_X        = 'X';

//Variables
	char  grade;		  //INP  & CALC   Stores the grade the user inputs
	float gradePointAvrg; //CALC & OUTPUT Stores the grade point average
	int   gradeSum;		  //CALC          Total sum of grade points
	int   inputCounter;   //CALC & OUT	  Total sum of valid inputs
	int   count;	      //Used in for loop to run the program 3 times
	bool validInputs;     //INP, CALC & OUTPUT returns true or false
						  //depending on valid input for grade

//Initializing section
	gradeSum     =0;
	inputCounter =0;

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

//For-loop will make the program run 3 times
	for( count=1; count <=3; count++ )
	{
		cout << "TEST #" << count << ':' << endl << endl;


//Do-while loop will check if  grade entered is valid('X' counts as valid)
		do
		{

		cout << "\tEnter Letter Grade(enter 'X' to exit)";
		cin.get(grade);
		grade = toupper(grade);
		cin.ignore(1000,'\n');

		validInputs  = (grade != LETTER_A && grade != LETTER_B &&
				        grade != LETTER_C && grade != LETTER_D &&
				        grade != LETTER_F && grade != LETTER_X);

//Tells user to enter only valid letter grades
			if ( validInputs)
			{

				cout <<"\n\tInvalid letter Grade, please try again\n";
				cout << endl;
			}
//Do-while loop ends
		} while( validInputs);

//While-loop checks if input is not an x
			while (grade != LETTER_X)
			{

//Will add 1 every time user enters valid value
			inputCounter++;

//Switch statement will add proper value of letter grade go gradeSum
				switch(grade)
					{
					case LETTER_A : gradeSum += 4;
					break;
					case LETTER_B: gradeSum += 3;
					break;
					case LETTER_C: gradeSum += 2;
					break;
					case LETTER_D: gradeSum += 1;
					break;
					}

//Do-while loop will check if  grade entered is valid('X' counts as valid)
			do
			{

			cout << "\tEnter Letter Grade(enter 'X' to exit)";
			cin.get(grade);
			grade = toupper(grade);
			cin.ignore(1000,'\n');

			validInputs  = (grade != LETTER_A && grade != LETTER_B &&
			        	    grade != LETTER_C && grade != LETTER_D &&
			                grade != LETTER_F && grade != LETTER_X);

//Tells user to enter only valid letter grades
				if ( validInputs)
				{

					cout <<"\n\tInvalid letter Grade, please try again\n";
			        cout << endl;
				}

//Do-while loop ends
			} while( validInputs);

//While-loop ends [while (grade != 'X')]
			}

//While-loop prevents dividing by 0
			while (inputCounter > 0)
			{
//Calculates the grade point average
			gradePointAvrg = float(gradeSum)/inputCounter;

//OUTPUT
			cout << left;
			cout << fixed;
			cout << setprecision(2);
			cout << setw(20) << "\nTotal Grade Points:" << gradeSum ;
			cout << endl;
			cout << setw(5)  << "GPA:" << gradePointAvrg << endl << endl;
			cout << endl;
// Restarts the counter
			inputCounter = 0;
// Restarts the accumulator
			gradeSum     = 0;
			}

//For-loop ends [for( count=1; count <=3; count++)]
	}

return 0;
}
