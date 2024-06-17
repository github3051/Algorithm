#include <iostream>
using namespace std;

int main()
{
	int testCases;
	cin >> testCases;

	while (testCases--)
	{
		int d;
		cin >> d;

		for (int i = 100; i >= 0; --i)
		{
			if (i*(i + 1) <= d)
			{
				cout << i << '\n';
				break;
			}
		}
	}
}