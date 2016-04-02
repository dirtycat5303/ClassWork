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
 *Function ENQUEUE
 * -----------------------------------------------------------------------
 * This Function will add a new item to the end of the list. It will create
 * a new pointer and point it to what head is pointing to, then point head
 * to the new pointer.
 * -----------------------------------------------------------------------
 *  PRE-CONDITIONS
 * 		head : The top of the linked list
 * 		tail : The end of the linked list
 *
 * POST-CONDITIONS
 * 		Returns -> head
 * 		This function will add a name to the tail of the linked list.
 ************************************************************************/

people* enqueue (people* head, 		//PROSS- first element of the list
				 people *&tail)		//PROSS- last element of the list
{
	people* peoplePtr;		//PROSS - pointer of new item in list
	char    tempGen;		//PROSS	- Stores gender so it can be capitalized
	int     rightNumber;	//PROSS	- evaluates the right age
	bool 	invalid;		//PROSS	- boolian variable


	invalid = false;
	peoplePtr = new people; //Allocating space for new pointer


	//prompting user for adding a person
	cout << left;
	cout << "Who would you like to add?" <<endl;
	cout << setw(14) << "Enter Name:";
	getline(cin,peoplePtr->name);

	//Do While Loop - error checking for the gender
	do
	{
		cout << setw(14) << "Enter Gender:";
		cin.get(tempGen);
		cin.ignore(numeric_limits<streamsize>::max(),'\n');

		if(toupper (tempGen)!= 'M' && toupper (tempGen) != 'F')
		{
			cout << "Incorrect input, enter \'M\' or \'F\' for gender\n\n";

			invalid = true;
		}
		else
		{
			peoplePtr->gender = tempGen ;
			invalid = false;
		}
	}while(invalid);

	//Error checking for the age
	rightNumber =  IntErrorCheck ("Enter age:    ",
			"**** The number   is an invalid entry ****",
			"**** Please input a number between 0 and 100 ****",
			100,0);
	peoplePtr->age = rightNumber;


	if(isEmpty(head,tail))
	{
		peoplePtr->next = head;
		tail = peoplePtr;
		head = peoplePtr;

	}
	else
	{
		peoplePtr->next = tail->next;
		tail->next = peoplePtr;

		tail       = tail->next;
		peoplePtr = NULL;
	}
	//delete peoplePtr;
	cout << endl;

	return head;
}
