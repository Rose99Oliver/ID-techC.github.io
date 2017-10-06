#include "stdafx.h"
#include <string>
#include <iostream>
using namespace std; 

int main()
{
	string meals[3][4] =
	{
		{ "Eggs", "Bacon", "Toast", "Juice" },
		{ "Sandwich", "Chips", "Soda", "Candy" },
		{ "Pasta", "Bread", "Salad", "Coke" },
	};
	cout << "Enter 9 food types 3 for each meal" << endl; 
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 4; j++)
			{
				getline(cin, meals[i][j]);
			}
		}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cout << meals[i][j] << " ";
		}
		cout << endl; 
	}
	return 0;
}