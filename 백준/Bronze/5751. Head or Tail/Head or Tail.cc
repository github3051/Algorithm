#include <iostream>
#include <vector>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n;
	while (cin >> n)
	{
		if (n == 0)
		{
			break;
		}

		int m = 0, j = 0;
		for (int i = 0; i < n; ++i)
		{
			int coin;
			cin >> coin;
			if (coin == 0)
			{
				m += 1;
			}
			else
			{
				j += 1;
			}
		}

		cout << "Mary won " << m << " times and John won " << j << " times\n";
	}
}