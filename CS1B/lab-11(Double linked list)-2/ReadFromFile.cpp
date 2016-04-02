/*************************************************************************
 * AUTHORS		: Alec Boroff & Erick Lopez
 * STUDENT ID	: 874370 & 265400
 * Lab #11		: Creating an Ordered List
 * CLASS		: CS 1B
 * SECTION		: MW 10:00
 * DUE DATE		: November 18, 2013
 *************************************************************************/
#include "header.h"

PeopleNode *ReadFromFile(PeopleNode* head, string fileName) {
	PeopleNode * newNode;
	ifstream inFile;
	inFile.open(fileName.c_str());
	while (inFile && (newNode = new PeopleNode)) {



		// Get Name
		getline(inFile, newNode->name);
		// Get Gender
		inFile.get(newNode->gender);
		// Get Age
		inFile >> newNode->age;
		// Clear out gender and age line
		inFile.ignore(numeric_limits<streamsize>::max(), '\n');
		// Clear out blank line
		inFile.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Adding : " << newNode->name << endl;

		// Add into correct location
		head = AddAndSortNode(head, newNode);
	}
	return head;
}
