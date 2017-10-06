#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int pointsUser = 0;
	int pointsBatman = 0;
	int userInput = 0;

	cout << "You vs Batman" << endl;
	cout << "1-10 how strong are you" << endl;
	cin >> userInput;

	if (userInput > 7)
	{
		pointsUser = pointsUser + 1;
	}
	else
	{
		pointsBatman = pointsBatman + 1;
	}
	cout << "Planner?" << endl;
	cin >> userInput;
	if (userInput <= 8)
	{
		pointsBatman = pointsBatman + 1;
	}
	else
	{
		pointsUser = pointsUser + 1;
	}
	char userYN;
	cout << "Gaint flying bats?" << endl;
	cin >> userYN;
	if (userYN != 'n')
	{
		pointsBatman = pointsBatman + 1;
	}
	else
	{
		pointsUser = pointsUser + 1;
	}
	if (pointsUser <= pointsBatman)
	{
		cout << "You would lose" << endl;
	}
	else
	{
		cout << "You might not die" << endl;
	}

	return 0;
}