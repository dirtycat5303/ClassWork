/*************************************************************************
 * AUTHORS		: Alec Boroff & Erick Lopez
 * STUDENT ID	: 874370 & 265400
 * Lab #11		: Creating an Ordered List
 * CLASS		: CS 1B
 * SECTION		: MW 10:00
 * DUE DATE		: November 18, 2013
 *************************************************************************/
# include "header.h"

int main() {
	PrintHeader("Creating an Ordered List", 'L', 11);

	//ENUM DECLERATION
	enum Selection {
		EXIT, CREATE, DISPLAY, DISPLAY2, ISEMPTY, SEARCH, REMOVE, CLEAR
	};

	//VARIABLES
	string key;
	PeopleNode *head;
	PeopleNode *tail;
	int input;
	int error;

	//INITILIZATION
	head = NULL;
	tail = NULL;
	Selection menu;

	do { // while (menu != EXIT);
		menu = (Selection) IntErrorCheck("Enter a command (0 to exit): ",
				"\n**** The Number  is an invalid entry",
				"**** Please Enter a number between 0 and 7 ****",
				7,0);
		cout << endl;

		switch (menu) {
		case EXIT:
			break;
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
			if (IsEmpty(head)) {
				cout << "Yes, the list is empty." << endl << endl;
			} else {
				cout << "No, the list is NOT empty." << endl << endl;
			}
			break;
		case SEARCH:
			if(!IsEmpty(head))
			{
				cout << "Who would you like to search for? ";
				PeopleNode * temp;
				getline(cin, key);
				cout << endl << "Searching for " << key << "..." << endl;
				temp = Search(head, key);

				if (temp == NULL) {
					cout << "I'm sorry, \"" << key << "\" was NOT found!" << endl;;
				} else {
					cout << endl <<  "Name:     " << temp->name << endl;
					cout << "Gender:   " << temp->gender << endl;
					cout << "Age:      " << temp->age << endl;
				}
			}
			else
			{
				cout << "Can't search an empty list" << endl;
			}

			break;
		case REMOVE:
			head = Remove(head);
			break;
		case CLEAR:
			Clear(head);
			head = NULL;
			tail = NULL;
			break;
		}
	} while (menu != EXIT);

	return 0;
}
