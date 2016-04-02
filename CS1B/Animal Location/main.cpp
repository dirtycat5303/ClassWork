#include <string>
#include <iomanip>
#include <iostream>
#include "Sheep.h"
#include "Location.h"

using namespace std;

int main()
{
	int age;
	Location * loc;
	Location * Farm;
	Sheep white;
	Sheep black;

	Farm->X = 0;
	Farm->Y = 0;

	black.setName("Black");

	cout << "How old is the the black sheep?";
	cin >> age;
	black.setAge(age);

	cout <<"Where is the sheep located?";

	cin  >> loc->X >>loc->Y;

	black.setLocation(loc);

	black.setName("White");

	cout << "How old is the the white sheep?";
	cin >> age;
	white.setAge(age);

	cout <<"Where is the sheep located?";
	cin  >> loc->X >>loc->Y;
	white.setLocation(loc);

	cout << white.getName() << " is " << wh


	cout << "White's distance from the farm is " << white.getLocation()->getDistance(Farm) << endl;
	cout << "Black's distance from the farm is " << black.getLocation()->getDistance(Farm) << endl;
	return 0;
}

void IO(Sheep sheep)
{
	int age;
		Location * loc;
		Location * Farm;

		Farm->X = 0;
		Farm->Y = 0;

		sheep.setName("Black");

		cout << "How old is the the black sheep?";
		cin >> age;
		sheep.setAge(age);

		cout <<"Where is the sheep located?";

		cin  >> loc->X >>loc->Y;

		sheep.setLocation(loc);


		cout << sheep.getName() << " is " << wh


		cout << "White's distance from the farm is " << white.getLocation()->getDistance(Farm) << endl;
		return 0;
}


