#include <iostream>
using namespace std;

int CalculateScore(const char& c)
{
	if (c == 'K')
	{
		return 0;
	}
	else if (c == 'P')
	{
		return 1;
	}
	else if (c == 'N')
	{
		return 3;
	}
	else if (c == 'B')
	{
		return 3;
	}
	else if (c == 'R')
	{
		return 5;
	}
	else if (c == 'Q')
	{
		return 9;
	}
	else if (c == '.')
	{
		return 0;
	}
	else if (c == 'k')
	{
		return 0;
	}
	else if (c == 'p')
	{
		return -1;
	}
	else if (c == 'n')
	{
		return -3;
	}
	else if (c == 'b')
	{
		return -3;
	}
	else if (c == 'r')
	{
		return -5;
	}
	else if (c == 'q')
	{
		return -9;
	}
}

int main()
{
	char c;
	int score = 0;
	for (int i = 0; i < 8; ++i)
	{
		for (int j = 0; j < 8; ++j)
		{
			cin >> c;
			score += CalculateScore(c);
		}
	}

	cout << score;
}