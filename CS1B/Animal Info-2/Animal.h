/*************************************************************************
 * AUTHOR           : Andrew Daniels & Erick Lopez                       *
 * STUDENT ID       : 759892   		 & 265400                            *
 * LAB #12          : Intro to Object-Oriented Programming               *
 * CLASS            : CS1B                                               *
 * SECTION          : MW - 2:00 PM                                       *
 * DUE DATE         : 02 December 2013                                   *
 *************************************************************************/

#ifndef ANIMAL_H_
#define ANIMAL_H_

#include "header.h"

class Animal
{
	public:

/*************************************************************************
 *  CONSTRUCTOR Animal
 *
 *  RETURNS: Nothing.
 *************************************************************************/
		Animal();

/*************************************************************************
 *  DESTRUCTOR ~Animal
 *
 *  RETURNS: Nothing.
 *************************************************************************/
		~Animal();

/*************************************************************************
 *  SetInitialValues
 *    This method will assign a value to each attribute of an animal.
 *
 *  MUTATOR: Changes the attributes of an object.
 *************************************************************************/
		void SetInitialValues(string animalType,   // IN & PROC - An type.
				              string animalName,   // IN & PROC - An name.
							  int    animalAge,    // IN & PROC - An age.
							  float  animalValue); // IN & PROC - A value.


/*************************************************************************
 *  ChangeAge
 *    This method will assign a new value to an animal's age attribute.
 *
 *  MUTATOR: Changes the age of an animal.
 *************************************************************************/
		void ChangeAge(int animalAge);             // IN & PROC - An age.

/*************************************************************************
 *  ChangeValue
 *    This method will assign a new value to an animal's
 *    monetary value attribute.
 *
 *  MUTATOR: Changes the value of an animal.
 *************************************************************************/
		void ChangeValue(float animalValue);       // IN & PROC - A value.

/*************************************************************************
 *  Display
 *    This method will output a row of data on the attributes
 *    of an object.
 *
 *  ACCESSOR: Displays all the attributes of an object.
 *************************************************************************/
		void Display() const;

/*************************************************************************
 *  GetName
 *    This method accesses the name attribute of an object.
 *
 *  ACCESSOR: Returns the name of an object.
 *************************************************************************/
		string GetName() const;

	private:
		string type;      // An animal type.
		string name;      // An animal name.
		int    age;       // An animal's age.
		float  value;     // An animal's value.
};

class Sheep: public Animal
{
	public:
		G

};



#endif /* ANIMAL_H_ */
