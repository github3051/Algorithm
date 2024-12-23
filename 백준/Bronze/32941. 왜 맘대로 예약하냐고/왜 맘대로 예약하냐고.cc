#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int t, x, n;
	cin >> t >> x >> n;

	for (int i = 0; i < n; ++i)
	{
		int k;
		cin >> k;
		bool isPossible = false;
		for (int j = 0; j < k; ++j)
		{
			int time;
			cin >> time;
			if (time == x)
			{
				isPossible = true;
			}
		}

		if (!isPossible)
		{
			cout << "NO";
			return 0;
		}
	}

	cout << "YES";
}