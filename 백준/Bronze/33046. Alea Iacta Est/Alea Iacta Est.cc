#include <iostream>
using namespace std;

int main() 
{
	int ans = 1;
	for (int i = 0; i < 2; ++i)
	{
		int dice1, dice2;
		cin >> dice1 >> dice2;
		int sumDice = dice1 + dice2;
		for (int j = 0; j < sumDice-1; ++j)
		{
			ans += 1;
			if (ans > 4)
			{
				ans = 1;
			}
		}
	}
	cout << ans;
}