#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;

		int ans = 0;
		for (int i = 1; i <= n; ++i)
		{
			if (n % i == 0)
			{
				ans += 1;
			}
		}
		cout << n << ' ' << ans << '\n';
	}
}