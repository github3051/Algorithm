#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int x,n;
	cin >> x >> n;
	int ans = x;
	for (int i = 0; i < n; ++i)
	{
		int p;
		cin >> p;
		ans += (x - p);
	}
	cout << ans;
}