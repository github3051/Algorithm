#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;

		bool* room = new bool[n+1];
		fill_n(room, n + 1, true);
		for (int i = 2; i <= n; ++i)
		{
			for (int j = 1; j * i <= n; ++j)
			{
				//cout << i * j << '\n';
				room[i * j] = !room[i * j];
			}
		}

		int ans = 0;
		for (int i = 1; i <= n; ++i)
		{
			if (room[i])
			{
				ans += 1;
			}
		}
		cout << ans << '\n';
		delete[] room;
	}
}