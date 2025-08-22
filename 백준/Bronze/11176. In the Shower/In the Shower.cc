#include <iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int e, n;
		cin >> e >> n;
		int ans = 0;
		for (int i = 0; i < n; ++i)
		{
			int tmp;
			cin >> tmp;
			if (tmp > e)
				ans += 1;
		}
		cout << ans << '\n';
	}
}