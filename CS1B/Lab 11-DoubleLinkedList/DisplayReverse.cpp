/*************************************************************************
 * AUTHORS		: Alec Boroff & Erick Lopez
 * STUDENT ID	: 874370 & 265400
 * Lab #11		: Creating an Ordered List
 * CLASS		: CS 1B
 * SECTION		: MW 10:00
 * DUE DATE		: November 18, 2013
 *************************************************************************/
# include "header.h"
/*****************************************************
 * DisplayReverse
 * 		displays entire list in reverse
 *
 * 	RETURNS
 * 		nothing
 ****************************************************/
void DisplayReverse(PeopleNode* head)
{
	//VARIBLES
	PeopleNode * tail;
	tail = head;
	int count;

	//INITIALIZATION
	count = 1;
	if(IsEmpty(head))
	{
		cout << "Can't display an empty list" << endl;
	}
	else
	{
		//HEAD OOUTPUT
		cout << setw(4) << "#" << setw(8) << "NAME" << setw(30) << "GENDER";
		cout << setw(6) << "AGE" << endl;
		cout << setfill('-') << setw(7) << '-' << " " << setw(25) << '-';
		cout << "  " << setw(8) << '-' << " " << setw(5) << '-';
		cout << setfill(' ') << endl;
		cout << right;

		//Find tail to traverse through list
		while(tail->next != NULL)
		{
			tail = tail->next;
		}

		while (tail != NULL)
		{
			//INDIVIDUAL PEOPLE OUTPUT
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
