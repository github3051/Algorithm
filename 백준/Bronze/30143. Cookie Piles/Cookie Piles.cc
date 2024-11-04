#include <iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, a, b;
		cin >> n >> a >> b;
		int ans = 0;
		for (int i = 0; i < n; ++i)
		{
			ans += a + i * b;
		}
		cout << ans << '\n';
	}
}