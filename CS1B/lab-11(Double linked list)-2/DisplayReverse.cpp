/*************************************************************************
 * AUTHORS		: Alec Boroff & Erick Lopez
 * STUDENT ID	: 874370 & 265400
 * Lab #11		: Creating an Ordered List
 * CLASS		: CS 1B
 * SECTION		: MW 10:00
 * DUE DATE		: November 18, 2013
 *************************************************************************/
# include "header.h"
/*************************************************************************
 * DisplayReverse
 * 		displays entire list in reverse order. Lets the user know if the
 * 		list is empty
 * 	RETURNS
 * 		nothing
 *------------------------------------------------------------------------
 * Preconditions
 * 	head	- A list must be created
 * Postconditions
 * 	Nothing
 *************************************************************************/
void DisplayReverse(PeopleNode* head) 
{
	PeopleNode * tail; //OUT- Tracking the last item so it can be displayed
	int          count;//OUT- Displays the number of items
	tail  = head; 	  //Points to the first item
	count = 1; 		 
	
	if(IsEmpty(head))//Will only run when the list is not empty
	{
		cout << "Can't display an empty list" << endl;
	}
	else
	{	
		//Displays table heading
		cout << setw(4) << "#" << setw(8) << "NAME" << setw(30) << "GENDER";
		cout << setw(6) << "AGE" << endl;
		cout << setfill('-') << setw(7)   << '-' << " " << setw(25) << '-';
		cout << "  "    << setw(8)        << '-' << " " << setw(5)  << '-';
		cout << setfill(' ') << endl;
		cout << right;

		while(tail->next != NULL)//Finding the last item
		{
			tail = tail->next;
		}
		while (tail != NULL)//Running backwards untill it finds the first 
							//item
		{
			cout << setw(4) << count;
			cout <<  left;
			cout << "    " << setw(30) << tail->name <<setw(7);
			cout << tail->gender << tail->age << endl;
			cout << right;
			count++;
			tail = tail->prev;
		}
	cout << endl;
	}

}
