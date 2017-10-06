#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;


int main()
{
	cout << "Learn the Future" << endl;
	cout << "Type out answers fully" << endl << endl;
	cout << "What is your name" << endl;
	string charName;
	getline(cin, charName);
	cout << "Hello " << charName << endl;
	cout << "What color do you feel closet to today" << endl;
	string userColor;
	getline(cin, userColor);


	cout << userColor << " Hmmmm I see" << endl;
	cout << "What is the best pet?" << endl;
	string userPet;
	getline(cin, userPet);

	cout << "I am not fond of " << userPet << " but okay" << endl;

	int userNumbers[4];
	cout << "Enter your favorite numbers" << endl;
	for (int i = 0; i < 1; i++)
	{
		cin >> userNumbers[i];
	}
}