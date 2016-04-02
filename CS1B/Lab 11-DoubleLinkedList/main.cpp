/*************************************************************************
 * AUTHORS		: Alec Boroff & Erick Lopez
 * STUDENT ID	: 874370 & 265400
 * Lab #11		: Creating an Ordered List
 * CLASS		: CS 1B
 * SECTION		: MW 10:00
 * DUE DATE		: November 18, 2013
 *************************************************************************/
# include "header.h"

int main()
{
	PrintHeader("Creating an Ordered List", 'L', 11);

	//ENUM DECLERATION
	enum Selection
	{
		EXIT,
		CREATE,
		DISPLAY,
		DISPLAY2,
		ISEMPTY,
		SEARCH,
		REMOVE,
		CLEAR
	};

	//VARIABLES
	string key;
	PeopleNode *head;

	//INITILIZATION
	head = NULL;
	Selection menu;

	do // while (menu != EXIT);
	{
		//Get Input and Error Check... Cast to Selection Enum type
		menu = (Selection) IntErrorCheck("Enter a command (0 to exit): ",
				"\n**** The Number  is an invalid entry",
				"**** Please Enter a number between 0 and 7 ****",
				7,0);
		cout << endl;

		switch (menu)
		{
		case EXIT:
			break; //0 Exit
		case CREATE:
			head = ReadFromFile(head, "Input.txt");
			break;
		case DISPLAY:
			Display(head);
			break;
		case DISPLAY2:
			DisplayReverse(head);
			break;
		case ISEMPTY:
			if (IsEmpty(head))
			{
				cout << "Yes, the list is empty." << endl << endl;
			}
			else
			{
				cout << "No, the list is NOT empty." << endl << endl;
			}
			break;
		case SEARCH:
			Search(head);
			break;
		case REMOVE:
			head = Remove(head);
			break;
		case CLEAR:
			Clear(head);
			head = NULL;
			break;
		}
	}
	while (menu != EXIT);

	return 0;
}
