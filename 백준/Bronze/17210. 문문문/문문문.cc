#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n, start;
	cin >> n >> start;

	if (n < 6)
	{
		for (int i = 1; i < n; ++i)
		{
			if (start == 0)
			{
				cout << (i%2 == 0 ? 0 : 1) << '\n';
			}
			else if (start == 1)
			{
				cout << (i % 2 == 0 ? 1 : 0) << '\n';
			}
		}
	}
	else
	{
		cout << "Love is open door";
	}
}