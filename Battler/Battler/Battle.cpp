#include "stdafx.h"
#include <string>
#include <iostream>
#include <time.h>
using namespace std;

int main()
{
	srand(time(NULL));

	int playerHP = 20;
	int enemyHP = 20; 

	int attackDamage = 4;
	int attackHitchance = 50;

	while (true)
	{
		int choicePlayer;
		int hitRoll = rand() % 100;

		cout << "Pick an attack" << endl;
		cout << "(1) Sleep" << endl;
		cout << "(2) Control" << endl;
		cout << "(3) Fire Ball" << endl;

		cin >> choicePlayer;

		switch (choicePlayer)
		{
		case 1:
			cout << "You cast a sleep spell" << endl;
			break;
		case 2:
			cout << "You take control of the battle" << endl;
			break;
		case 3:
			cout << "You shot fire everywhere" << endl;
			break;
		default:
			cout << "You tripped and are laugh at" << endl;
		}
		if (attackHitchance[choicePlayer - 1] < hitRoll)
		{
			cout << "You hit him" << endl;
			enemyHP = attackDamage[choicePlayer - 1]
		}
		int enemyChoice = rand() % 3; choicePlayer;

		switch (enemyChoice)
		{
		case 0:
			cout << "Your enemy is immune" << endl;
			break;
		case 1:
			cout << "Your enemy attempts to run at you" << endl;
			break;
		case 2:
			cout << "Your enemy falls to the ground" << endl;
			break;
		}
	}
	
	return 0;
}
