/*************************************************************************
 * AUTHOR           : Erick Lopez , Mahroo Mahmoodi
 * STUDENT ID       : 265400   	  , 276471
 * LAB #9		    : Implementing a Queue
 * CLASS            : CS1B
 * SECTION          : MW - 10:00 AM
 * DUE DATE         : 06 November 2013
 *************************************************************************/

#include "header.h"


/**********************************************************
 *  IMPLEMENTING A QUEUE
 *---------------------------------------------------------
 * This program is used to take people's age, name, and
 * gender and put them into a list which can be added to and
 * removed from, as well as checked for size, and if its
 * empty, and clear all the list
 * ________________________________________________________
 * Inputs and Outputs
 *---------------------------------------------------------
 *INPUT -  name
 *INPUT    age
 *INPUT    gender
 *
 *OUTPUT - name
 *OUTPUT   age
 *OUTPUT   gender
 *OUTPUT   size
 *OUTPUT   if empty
 **********************************************************/
int main ()
{
	people *head;			//IN,PROSS - first element of the list
	people *tail;			//IN,PROSS - last element of the list
	NewMenu CommandMenu;	//IN- contains enum menu options
	int     menuChoice;		//IN- stores user menu choice
	bool    quit;			//IN- leaves the loop
	bool 	emptyList;		//IN,PROSS - checks if the list is empty

	//initializations
	head 	  = NULL;		  //initializes list to NULL
	tail 	  = head;		  //initializes last element to the fist (empty list)
	quit  	  = false;		  //initializes program loop
	emptyList = false;		  //initializes empty list

	//outputs assignment header
	PrintHeader ();

	// outputs the menu options
	while (!quit)
	{
		cout << left
	         << setw(12) << "1 - ENQUEUE (Add a person)\n"
			 << setw(12) << "2 - DEQUEUE (Remove a person)\n"
			 << setw(12) << "3 - ISEMPTY (Is the queue empty?)\n"
			 << setw(12) << "4 - FRONT   (Who is in front?)\n"
			 << setw(12) << "5 - SIZE    (How many people are there?)\n"
			 <<"6 - Clear the Queue\n"
			 << "0 - EXIT\n\n";

		// gets menu command from user and checks for valid input
		menuChoice = IntErrorCheck ("Enter a command? ",
									"\n**** The number  is an invalid entry",
									"**** Please input a number between 0 and 6 ****\n",
									6,0);

		//menu functionality
		cout<< endl;
		CommandMenu= NewMenu(menuChoice); //assigns user menu
										  //input to the enum type

		switch (CommandMenu)
		{
		case ENQUEUE:
		{
			head = enqueue (head, tail);
			break;
		}
		case DEQUEUE:
		{
			head = dequeue (head,tail);
			break;
		}
		case ISEMPTY:
		{
			emptyList = isEmpty (head,tail);
			if (emptyList)
			{
				cout << "Yes, the QUEUE is empty\n\n";
			}
			else
			{
				cout << "The QUEUE is NOT empty\n\n";
			}
			break;
		}
		case FRONT:
		{
			front (head, tail);
			break;
		}
		case SIZE:
		{
			size (head, tail);
			break;
		}
		case CLEAR_QUEUE:
		{
			head = ClearQueue(head,tail);
			break;
		}
		case QUIT:
		{
			quit = true;
			cout << "Thanks for using my program!(:";
			break;
		}
	}
	}
	return 0;
}
