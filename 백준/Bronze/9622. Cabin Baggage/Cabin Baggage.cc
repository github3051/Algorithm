#include <iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	int ans = 0;
	while (t--)
	{
		double h, w, l, wt;
		cin >> h >> w >> l >> wt;

		if ((wt <= 7) && ((h <= 56 && w <= 45 && l <= 25) || (h + w + l <= 125)))
		{
			cout << 1 << '\n';
			ans += 1;
		}
		else
			cout << 0 << '\n';
	}
	cout << ans;
}