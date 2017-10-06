#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int hotdogsDay[7];
	double hotdogAverage = 0;

	for (int i = 0; i < 7; i++)
	{
		cout << "Enter a number of hotdogs" << i + 1 << endl; 
		cin >> hotdogsDay[i];
	}
	for (int i = 0; i < 7; i++)
	{
		hotdogAverage += hotdogsDay[i];
	}
	hotdogAverage /= 7;
		cout << "You eat " << hotdogAverage << " hotdog(s) per day" << endl; 

	return 0;
}