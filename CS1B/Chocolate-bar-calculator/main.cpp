/*************************************************************************
 * AUTHOR     : Christopher Anderson & Erick Lopez
 * STUDENT ID : 847233 & 265400
 * LAB #8     : Testing
 * CLASS      : 10:00 am
 * SECTION    : CS1B
 * DUE DATE   : 10/09/13
 * ***********************************************************************/
#include "myheader.h"

/*************************************************************************
 * TESTING
 * This program will ask the user to enter the amount of chocolate bars
 * and the amount of sheep. It will calculate how many chocolate bars
 * each sheep gets and how much are left over. The maximum amount of bars
 * a sheep can get is 4.
 * INPUTS
 *	chocBars 	- IN - Number of sheep being input.
 *	sheepNum	- IN - Number of chocolate being input.
 *
 * OUTPUTS
 * 	chocLeft	- OUT - Amount of chocolate left over.
 * 	sheepGet    - OUT - Amount of chocolate each sheep gets.
 *************************************************************************/
int main()
{
	const string asName = "Testing";  // OUT - Lab Name.
	char  asNum         =  8;         // OUT - Lab number.
	char asType         = 'L';        // OUT - Assignment type.


	int sheepNum;               // IN - Number of sheep being input.
	int chocBar;                // IN - Number of chocolate being input.
	int chocLeft;			    // OUT - Amount of chocolate left over.
	int sheepGet;               // OUT - Amount of chocolate each sheep gets.

	//PrintHeader - Outputs the class header.
    PrintHeader(asName, asNum, asType);

    //InputChocInfo - Receives the amount of chocolate input.
	InputChocInfo(chocBar);

	//InputSheepInfo - Receives the amount of sheep being input.
	InputSheepInfo(sheepNum);

	//CalculateBars - Calculates the amount of bars left over.
	chocLeft = CalculateBars(sheepNum,chocBar);

	//CalculateSheep - Calculates the amount of bars each sheep receives.
	sheepGet = CalculateSheep(sheepNum,chocBar);

	//OutputInfo - Outputs the amount of bars left over and the amount of
	// bars each sheep shall receive.
	OutputInfo(chocLeft,sheepGet);

	//TestDrivers - Tests the calculations and expected outputs.
	TestDrivers();
}
