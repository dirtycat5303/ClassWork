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
 *  CONSTRUCTOR Animal
 *
 *  RETURNS: Nothing.
 *************************************************************************/
Animal::Animal()
{
	type  = "";
	name  = "";
	age   = 0;
	value = 0.0;
}

/*************************************************************************
 *  DESTRUCTOR ~Animal
 *
 *  RETURNS: Nothing.
 *************************************************************************/
Animal::~Animal() {}

/*************************************************************************
 *  METHOD SetInitialValues
 *________________________________________________________________________
 *
 *  This method assigns initial values to the attributes of an object.
 *________________________________________________________________________
 *
 *  PRE-CONDITIONS - All must be predefined by the calling function.
 *
 *    animalType   : An animal type (species).
 *    animalName   : An animal's name.
 *    animalAge    : An animal's age.
 *    animalValue  : An animal's monetary value.
 *
 *  POST-CONDITIONS
 *
 *    This method will assign a value to each attribute of an animal.
 *
 *  MUTATOR: Changes the attributes of an object.
 *
 *************************************************************************/

void Animal::SetInitialValues
				( string animalType,   // IN & PROC - An animal type.
				  string animalName,   // IN & PROC - An name.
				  int    animalAge,    // IN & PROC - An age.
				  float  animalValue ) // IN & PROC - An monetary
                                       //             value.
{

	// Assigns the values for each attribute.
	type  = animalType;
	name  = animalName;
	age   = animalAge;
	value = animalValue;
}

/*************************************************************************
 *  METHOD ChangeAge
 *________________________________________________________________________
 *
 *  This method changes the age of an object in the animal class.
 *________________________________________________________________________
 *
 *  PRE-CONDITIONS - All must be predefined by the calling function.
 *
 *    animalAge    : An animal's age.
 *
 *  POST-CONDITIONS
 *
 *    This method will assign a new value to an animal's age attribute.
 *
 *  MUTATOR: Changes the age of an animal.
 *
 *************************************************************************/

void Animal::ChangeAge(int animalAge)  // IN & PROC - An age.
{
	age = animalAge;
}

/*************************************************************************
 *  METHOD ChangeValue
 *________________________________________________________________________
 *
 *  This method changes the age of an object in the animal class.
 *________________________________________________________________________
 *
 *  PRE-CONDITIONS - All must be predefined by the calling function.
 *
 *    animalValue  : An animal's monetary value.
 *
 *  POST-CONDITIONS
 *
 *    This method will assign a new value to an animal's
 *    monetary value attribute.
 *
 *  MUTATOR: Changes the value of an animal.
 *
 *************************************************************************/

void Animal::ChangeValue(float animalValue)  // IN & PROC - A value.
{
	value = animalValue;
}

/*************************************************************************
 *  METHOD Display
 *________________________________________________________________________
 *
 *  This method displays all the attributes of an object.
 *________________________________________________________________________
 *
 *  PRE-CONDITIONS: None.
 *
 *  POST-CONDITIONS
 *
 *    This method will output a row of data on the attributes
 *    of an object.
 *
 *  ACCESSOR: Displays all the attributes of an object.
 *
 *************************************************************************/

void Animal::Display() const
{
	/*********************************************************************
	 * CONSTANTS   - All Processing
	 * -----------------------------------------------------------------
	 *
	 * TYPE_WIDTH  : The animal type width.
	 * NAME_WIDTH  : The name width.
	 * AGE_WIDTH   : The age width.
	 * VALUE_WIDTH : The value width.
	 *
	 *********************************************************************/

	const int  TYPE_WIDTH    = 11;
	const int  NAME_WIDTH    = 15;
	const int  AGE_WIDTH     =  4;
	const int  VALUE_WIDTH   = 12;

	// Forces floating point values to show two decimal place digits.
	cout << setprecision(2) << fixed;

	// Output statements for a single animal's information.
	cout << left << " ";
	cout << setw(TYPE_WIDTH)    << type
		 << setw(NAME_WIDTH)    << name
		 << right
		 << setw(AGE_WIDTH - 1) << age
		 << setw(VALUE_WIDTH)   << value << endl;
}

/*************************************************************************
 *  METHOD GetName
 *________________________________________________________________________
 *
 *  This method returns the name of an object.
 *________________________________________________________________________
 *
 *  PRE-CONDITIONS: None.
 *
 *  POST-CONDITIONS
 *
 *    This method accesses the name attribute of an object.
 *
 *  ACCESSOR: Returns the name of an object.
 *
 *************************************************************************/

string Animal::GetName() const
{
	return name;
}

