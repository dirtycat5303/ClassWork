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
 * Display
 * 		displays entire list in a table format. Will let the user know if 
 * 		the there is nothing to display(No one is on the list)
 *
 * 	RETURNS
 * 		nothing
 *-------------------------------------------------------------------------
 *Preconditions
 * head		- a list must be created
 *Postconditions
 *	Nothing
 *************************************************************************/
void Display(PeopleNode* head) 
{
	int count;	//OUT - number of items
	count = 1;
					
	if(IsEmpty(head))//Will not run if the list is empty
	{
		cout << "Can't display an empty list" << endl;
	}
	else
	{
		//Displays table heading
		cout << setw(4) << "#" << setw(8) << "NAME" << setw(30) << "GENDER";
		cout << setw(6) << "AGE" << endl;
		cout << setfill('-') << setw(7) << '-' << " " << setw(25) << '-';
		cout << "  " << setw(8) << '-' << " " << setw(5) << '-';
		cout << setfill(' ') << endl;
		cout << right;

		while (head != NULL)// Will run untill the last item is NULL
		{
			cout << setw(4) << count;
			cout << left;
			cout << "    " << setw(30) << head->name <<setw(7);
			cout << head->gender << head->age << endl;
			cout << right;
			count++;
			head = head->next;
		}
		cout << endl;
	  }
}
