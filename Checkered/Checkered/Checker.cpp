#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (i % 2 == 0)
			{
				if (j % 2 == 0)
					cout << 'x';
				else
					cout << ' ';
			}
			else
			{
				if (j % 2 == 1)
					cout << 'x';
				else
					cout << ' ';
			}
			
		}
		cout << endl;
	}
	return 0;
}