#include <iostream>
using namespace std;

int main()
{
	int testCases;
	cin >> testCases;

	while (testCases--)
	{
		int sum = 0, min = 100, tmp;
		for (int i = 0; i < 7; ++i)
		{
			cin >> tmp;
			if (!(tmp % 2))
			{
				sum += tmp;
				if (tmp < min)
				{
					min = tmp;
				}
			}
		}
		cout << sum << ' ' << min << '\n';
	}
}