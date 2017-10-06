#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int userSelection; 

	while (true)
	{
		cout << "To See Something Pick a Number" << endl;
		cout << "(1)" << endl; 
		cout << "(2)" << endl;
		cout << "(3)" << endl;

		cin >> userSelection;

		if (userSelection == 1)
		{
			cout << "To See More Pick A Letter" << endl;
			cout << " 1. (a)" << endl;
			cout << " 2. (b)" << endl;
			cout << " 3. (c)" << endl;
			
			cout << "Enter 0 to Exit" << endl;
			cin >> userSelection;
			if (userSelection == 0)
			{
				continue;
			}
			if (userSelection == 1)
			{
				cout << "you have a face" << endl;
			}
			if (userSelection == 2)
			{
				cout << "you wasted money" << endl;
			}
			if (userSelection == 3)
			{
				cout << "you arent really here" << endl;
			}
		}
		if (userSelection == 2)
		{
			cout << "Pick a Bigger Number" << endl;
			cout << " 1. (5)" << endl;
			cout << " 2. (6)" << endl;
			cout << " 3. (7)" << endl;

			cout << "Enter 0 to Exit" << endl;
			cin >> userSelection;
			if (userSelection == 0)
			{
				continue;
			}
			if (userSelection == 1)
			{
				cout << "you have a face" << endl;
			}
			if (userSelection == 2)
			{
				cout << "you wasted money" << endl;
			}
			if (userSelection == 3)
			{
				cout << "you arent really here" << endl;
			}
		
		}
		if (userSelection == 3)
		{
			cout << "Pick a Color And See Truth" << endl;
			cout << " 1. Red " << endl;
			cout << " 2. Blue" << endl;
			cout << " 3. Yellow" << endl;

			cout << "Enter 0 to Exit" << endl;
			cin >> userSelection;
			if (userSelection == 0)
			{
				continue;
			}
			if (userSelection == 1)
			{
				cout << "you have a face" << endl;
			}
			if (userSelection == 2)
			{
				cout << "you wasted money" << endl;
			}
			if (userSelection == 3)
			{
				cout << "you arent really here" << endl;
			}
			
		}
		if (userSelection == 4)
		{
			break;
		}

	}
	return 0;
}