#include <iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int l, r, s, ans = 1;
		cin >> l >> r >> s;

		for (int i = 1; ; ++i)
		{
			s = s + i * (i % 2 == 0 ? -1 : 1);
			ans += 1;
			if (s == l || s == r)
			{
				break;
			}
		}
		cout << ans << '\n';
	}
}