/*************************************************************************
 * AUTHOR           : Andrew Daniels & Erick Lopez                       *
 * STUDENT ID       : 759892   		 & 265400                            *
 * LAB #12          : Intro to Object-Oriented Programming               *
 * CLASS            : CS1B                                               *
 * SECTION          : MW - 2:00 PM                                       *
 * DUE DATE         : 02 December 2013                                   *
 *************************************************************************/

#include "header.h"
#include "Animal.h"

/*************************************************************************
 *  Sheep and Pig Values
 *_______________________________________________________________________
 *
 *  This program records the names, ages, and monetary values of three
 *      animals: Fluffy, Maa, and Babe, and allows the user to change
 *      and display their attributes, except for their names.
 *_______________________________________________________________________
 *
 *	INPUTS:
 *
 *    command       : A menu item.
 *    animalObject  : An animal object (enumerated option).
 *    inputAge      : An age input from the user.
 *    inputValue    : A monetary value input from the user.
 *
 *	OUTPUTS:
 *
 *	  Animal.type   : An animal's type.
 *	  Animal.name   : An animal's name.
 *	  Animal.age    : An animal's age.
 *	  Animal.value  : An animal's value.
 *
 *************************************************************************/

int main()
{
	/*********************************************************************
	 * CONSTANTS
	 * -----------------------------------------------------------------
	 * AS_NAME        : The assignment name.
	 * AS_NUM         : The assignment number.
	 * AS_TYPE        : The assignment type (ASSIGNMENT or LAB).
	 *
	 * MENU_MIN       : The minimum value for any menu option.
	 * INIT_MENU_MAX  : The maximum value for the initial menu.
	 * MAIN_MENU_MAX  : The maximum value for the main menu.
	 * REVAL_MENU_MAX : The maximum value for the value-changing menus
	 *                  (CHANGE AGE and CHANGE VALUE).
	 * AGE_MAX        : The maximum age for an animal.
	 * VALUE_MAX      : The maximum value for an animal.
	 *
	 * REINIT_PROMPT  : A confirmation prompt.
	 * ERROR_MESSAGE  : An error message for Y or N.
	 *
	 *********************************************************************/

	const string  AS_NAME        =  "Intro to Object-Oriented Programming";
	const int     AS_NUM         =  12;
	const char    AS_TYPE        =  'L';

	const int     MENU_MIN       =   0;
	const int     INIT_MENU_MAX  =   1;
	const int     MAIN_MENU_MAX  =   4;
	const int     REVAL_MENU_MAX =   3;
	const int     AGE_MAX        =  10;
	const float   VALUE_MAX      =  400000;

	const string  REINIT_PROMPT  =
			"\n Are you sure you want to reinitialize (Y/N)? ";
	const string  ERROR_MESSAGE  =  "\n **** Please input Y or N ****\n";

	MenuItem      command;       // IN   - A menu item.
	AnimalName    animalObject;  // IN   - An animal object.
	string        menuString;    // PROC - An action menu given as
	                             //        a string.
	bool          valuesChanged; // PROC - Indicates that the attribute
	                             //        values have changed.

	int           inputAge;      // IN   - An age input from the user.
	float         inputValue;    // IN   - A monetary value input
	                             //        from the user.

	Animal        fluffy;        // PROC - Animal named FLUFFY
	Animal        maa; 			 // PROC - Animal named MAA
	Animal 		  babe;			 // PROC - Animal named BABE
	Animal       *animalPtr;	 // PROC - An Animal pointer

	// OUTPUT     - Outputs the class heading.
	PrintHeader(cout, AS_NAME, AS_TYPE, AS_NUM);

	// PROCESSING - Initializes the 'value changed' condition to false.
	valuesChanged = false;

	// PROCESSING - Assigns the user menu to a string.
	menuString    = CreateMenu(DEFAULT);

	// INPUT      - Error-checks and inputs an menu option.
	command       = MenuItem( GetAndCheckInt( menuString,
											  MENU_MIN, INIT_MENU_MAX ) );
	// Run until user selects exit
	while(command != EXIT)
	{
		// Checks user choice and runs the method based on user input
		switch(command)
		{
		                        // PROC - Initializes the attributes of
		                        //        each animal.
			case INITIALIZE   :

				if(valuesChanged)
				{
					switch(GetAndCheckChar(REINIT_PROMPT,
							               ERROR_MESSAGE, "YN"))
					{
						case 'Y' : cout << "\n Initializing Fluffy, Maa,"
					                    <<   " and Babe...\n";
							    fluffy.SetInitialValues("Sheep", "Fluffy",
													    1, 15000.00);
							    maa.SetInitialValues("Sheep", "Maa",
												     3, 16520.35);
							    babe.SetInitialValues("Pig", "Babe",
													  2, 10240.67);
							    valuesChanged = false;
							    break;
						case 'N' : cout << "\n The animals have not been"
							            << " initialized.\n";
					            break;
					}
				}
				else
				{
					cout << "\n Initializing Fluffy, Maa, and"
					     <<   " Babe...\n";
					fluffy.SetInitialValues("Sheep", "Fluffy",
											1, 15000.00);
					maa.SetInitialValues("Sheep", "Maa",
										 3, 16520.35);
					babe.SetInitialValues("Pig", "Babe",
										  2, 10240.67);
				    valuesChanged = false;
				}

							    break;

							    // OUTPUT - Displays the attributes of
							    //          each animal.
			case DISPLAY      : DataTableHeading();
							    fluffy.Display();
							    maa.Display();
							    babe.Display();
							    break;

							    // PROC - Creates the Change Age menu.
			case CHANGE_AGE   : menuString = CreateMenu(AGE);

				// INPUT - Error checks input and assigns correct
				// enumerated type into animalObject
				animalObject  = AnimalName( GetAndCheckInt
											( menuString, MENU_MIN + 1,
											  REVAL_MENU_MAX ) - 1 );

				// PROC - Selects the right animal being chosen by the user
				switch(animalObject)
				{
					case FLUFFY : animalPtr = &fluffy;
								  break;
					case MAA    : animalPtr = &maa;
								  break;
					case BABE   : animalPtr = &babe;
								  break;
				}
				// INPUT - Error checks and inputs the correct value into
				// inputAge
				inputAge = GetAndCheckInt( "\n NEW AGE: ",
										       0, AGE_MAX );

				// OUTPUT - Tells the user that the animal's age
				// has changed.
				cout << "\n Changing " << animalPtr->GetName()
					 << "\'s age to "  << inputAge << " ...\n";

				// PROC - Changing animal age
				(*animalPtr).ChangeAge(inputAge);

			    valuesChanged = true;

				// Ends CHANGE_AGE case
				break;

			    				// PROC - Creates the Change Value menu.
			case CHANGE_VALUE : menuString = CreateMenu(VALUE);

				// INPUT - Error checks input and assigns correct
				// enumerated type into animalObject
				animalObject  = AnimalName( GetAndCheckInt
											( menuString, MENU_MIN + 1,
											  REVAL_MENU_MAX ) - 1 );

				// PROC - Selects the right animal being chosen by the user
				switch(animalObject)
				{
					case FLUFFY : animalPtr = &fluffy;
								  break;
					case MAA    : animalPtr = &maa;
								  break;
					case BABE   : animalPtr = &babe;
								  break;
				}

				// INPUT - Error checks and inputs the correct value into
				// inputValue
				inputValue = GetAndCheckFloat( "\n NEW VALUE: ",
											       0, VALUE_MAX );

				// OUTPUT - Tells the user that the animal's value
				// has changed.
				cout << "\n Changing "  << animalPtr->GetName()
					 << "\'s value to " << setprecision(2) << fixed
					 << inputValue      << " ...\n";

				// PROC - Changing animal value
				(*animalPtr).ChangeValue(inputValue);

			    valuesChanged = true;

				// Ends CHANGE_VALUE case
				break;

			default : break;
		}

		// PROCESSING - Assigns the user menu to a string.
		menuString    = CreateMenu(MAIN);

		// INPUT - Error-checks and inputs an menu option.
		command  = MenuItem( GetAndCheckInt( menuString,
											 MENU_MIN,   MAIN_MENU_MAX ) );
	}

	// OUTPUT    - Indicates that the program is ending and waits for the
	//             user to press enter.
	cout << "\n The program will now exit. Press Enter.";
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

    return 0;
}
