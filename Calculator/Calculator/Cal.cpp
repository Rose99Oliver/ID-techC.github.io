#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int operationChoice;
	cout << "1 subtraction, 2 addition, 3 divison, 4 multiply" << endl;
	cin >> operationChoice;

	double x, y;
	cout << "Enter your first number" << endl;
	cin >> x;
	cout << "Enter your second number" << endl;
	cin >> y;
	double result;
	if (operationChoice == 1)
		result = x - y;
	if (operationChoice == 2)
		result = x + y;
	if (operationChoice == 3)
		result = x / y;
	if (operationChoice == 4)
		result = x * y;
	
	cout << result;
	
	if ((int)result % 2 == 0)
		cout << "   The number is even" << endl;
	else
		cout << "   The number is odd" << endl;

	return 0;
}