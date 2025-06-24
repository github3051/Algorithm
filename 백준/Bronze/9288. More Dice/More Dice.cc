#include <iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	for (int i = 1; i <= t; ++i)
	{
		cout << "Case " << i << ":\n";
		int n;
		cin >> n;
		for (int j = 1; j <= 6; ++j)
		{
			for (int k = j; k <= 6; ++k)
			{
				if (j + k == n)
				{
					cout << '(' << j << ',' << k << ")\n";
				}
			}
		}
	}
}