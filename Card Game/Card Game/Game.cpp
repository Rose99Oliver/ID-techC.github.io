#include "stdafx.h"
#include <iostream>
#include "Cardz.h"


int main()
{
	card deckOfCards[52];
	for (int i = 0; i < 13; i++)
	{
		deckOfCards[i].value = i + 2;
		deckOfCards[i].suit = 'S';
	}
	for (int i = 0; i < 13; i++)
	{
		deckOfCards[i+13].value = i + 2;
		deckOfCards[i+13].suit = 'D';
	}
	for (int i = 0; i < 13; i++)
	{
		deckOfCards[i+26].value = i + 2;
		deckOfCards[i+26].suit = 'C';
	}
	for (int i = 0; i < 13; i++)
	{
		deckOfCards[i+39].value = i + 2;
		deckOfCards[i+39].suit = 'H';
	}
	shuffle(deckOfCards, 52);

	card player1Hand[5];
	card player2Hand[5];
	int userChoice = 0;

	cout << "Press 1 to Play" << endl;
	cin >> userChoice;


	int topCard = 0;

	int p1Size = 0;
	int p2Size = 0;

	for (int i = 0; i < 1; i++)
	{
		player1Hand[i] = deckOfCards[topCard];
		topCard++;
		p1Size++;

		player2Hand[i] = deckOfCards[topCard];
		topCard++;
		p2Size++;
	}
	cout << "Player 1's Cards" << endl;
	for (int i = 0; i < p1Size; i++)
	{
		cout << player1Hand[i].displayCard();
		cout << endl;
	}
	cout << endl << endl << "Player 2's Cards" << endl;
	for (int i = 0; i < p2Size; i++)
	{
		cout << player2Hand[i].displayCard();
		cout << endl;
	}
	int p1Score = 0;
	for (int i = 0; i < p1Size; i++)
	{
		p1Score += player1Hand[i].value;
	}
	int p2Score = 0;
	for (int i = 0; i < p2Size; i++)
	{
		p2Score += player2Hand[i].value;
	}

	int hit = 0;
	cout << endl << "Player 1" << endl;
	cout << endl << "1) Hit or 2) Stay" << endl;
	cin >> hit; 
	if (hit = 1)
	{
		for (int i = 0; i < 1; i++)
		{
			player1Hand[i] = deckOfCards[topCard];
			topCard++;
			p1Size++;

		}
		cout << "Player 1's Cards" << endl;
		for (int i = 0; i < p1Size; i++)
		{
			cout << player1Hand[i].displayCard();
			cout << endl;
		}

	}
	else
	{
		cout << "You win" << endl;
		cout << endl << "Player 2" << endl;
	}
		

	return 0;
}

