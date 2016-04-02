
#ifndef SHEEP_H_
#define SHEEP_H_

#include <string>
#include <iostream>
#include "Location.h"

using namespace std;

class Sheep{
public:

	void setName(string);
	void setAge(int);
	void setLocation(Location*);

	string getName() const;
	int getAge() const;
	Location* getLocation() const;

private:
	string Name;
	int Age;
	Location* Loc;
};

#endif /* SHEEP_H_ */
