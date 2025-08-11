#include <iostream>
using namespace std;

int main()
{
	while (true)
	{
		int n, m;
		cin >> n >> m;

		if (n == 0 && m == 0)
			break;

		int ans = 0;
		for (int i = 0; i < n; ++i)
		{
			int tmp;
			cin >> tmp;
			ans += (tmp > m / n ? m / n : tmp);
		}
		cout << ans << '\n';
	}
}