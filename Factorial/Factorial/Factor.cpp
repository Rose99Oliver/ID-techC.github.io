#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int factorial(int n);

int main()
{
	cout << "What do you want to find the factorial of?" << endl;
	int n;
	cin >> n;
	n = factorial(n);

	cout << n << endl;
	
	return 0;

}
int factorial(int n)
{
	if (n == 1 || n == 0)
		return 1;

	return n * factorial(n - 1);

}