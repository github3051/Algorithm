#include <iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	int idx = 1;
	while (t--)
	{
		int a, b;
		cin >> a >> b;
		int ans = 0;
		cout << "Case #" << idx << ": ";

		for (int i = 1; i * i * i <= b; ++i)
		{
			if (i * i * i >= a)
				ans += 1;
		}

		cout << ans << '\n';
		idx += 1;
	}
}