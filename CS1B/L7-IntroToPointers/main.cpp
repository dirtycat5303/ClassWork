/*************************************************************************
* PROGRAMMED BY : Erick Lopez & Justen Wrench
* STUDENT ID    : 245600 & 715584
* CLASS         : CS1B
* SECTION       : MW 10:00AM - 11:50AM
* Lab #7        : Intro to Pointers
**************************************************************************/
#include "myHeader.h"

/*************************************************************************
 *
 * Intro to Pointers
 * _______________________________________________________________________
 *
 * This program will accept two integers from the user and finds the sum
 *  and product of these two integers. This program will loop and
 *  terminate when the user enters -999.
 * _______________________________________________________________________
 *
 * INPUTS:
 * num1   - first value the user enters
 * intPtr - references memory location of num1
 * intPtr2- temporary location of second integer
 *
 * OUTPUTS:
 *  The program will output the sum of intPtr2 and intPtr. Also the
 *   product of intPtr and intPtr2.
 *
 *************************************************************************/


int main()
{
	//Variables
	int num1;		//INPUT first integer
	int *intPtr;	//INPUT & CALC reference num1
	int *intPtr2;	//INPUT & CALC stores location for second integer

	//INTIALIZING allocating memory
	intPtr = &num1;
	intPtr2 = new int;



	if(intPtr2 == NULL)
	{
		cout << "Out of Memory!\n";
	}

	PrintHeader("Intro to Pointers", "Lab", 7);

	//INPUT gets first value
	cout << left;
	cout << setw(44) <<"Input the first value (enter -999 to exit)?";
	cin  >> *intPtr;

	//CALC & OUT
	while(*intPtr != -999) 	//Checks if first integer is valid
	{

	//INPUT gets second value
	cout << setw(43) <<"Input the second value?";
	cin  >> *intPtr2;

	//CALC & OUT outputs the sum and product of inputs
	cout << setw(17) << "\nThe sum is:"  << (*intPtr2 + *intPtr) << endl;

	cout << setw(16) << "The product is:" << (*intPtr * *intPtr2)
			<< endl << endl;

	//INPUT gets first value
	cout << setw(44) <<"Input the first value (enter -999 to exit)?";
	cin  >> *intPtr;

	}

	//Deallocating memory
	delete intPtr2;


	return 0;

}
