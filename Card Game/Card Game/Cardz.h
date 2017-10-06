#include <string>
#include <time.h>
#include <stdlib.h>
using namespace std;

class card
{
public:
	int value;
	char suit;

	card()
	{
		value = 0;
		suit = 'S';
	}
	card(int v, char s)
	{
		value = v;
		suit = s;
	}
	string displayCard()
	{
		string displayValue = "[";
		if (value < 11)
		{
			displayValue += to_string(value);
		}
		if (value == 11)
		{
			displayValue += "10";
		}
		if (value == 12)
		{
			displayValue += "10";
		}
		if (value == 13)
		{
			displayValue += "10";
		}
		

		displayValue += "_";
		displayValue += suit;
		displayValue += "]";
		return displayValue;
	}
};

void shuffle(card deck[], int len)
{
	srand(time(NULL));
	for (int i = 0; i < len; i++)
	{
		int r = rand() % (len - i) + i;
		card temp = deck[i];
		deck[i] = deck[r];
		deck[r] = temp;
	}
}