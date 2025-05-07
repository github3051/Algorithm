#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n, k;
	cin >> n >> k;
	vector<int> t(n + 1);
	cin >> t[0];
	int ans = 0;
	for (int i = 0; i < n; ++i)
	{
		int d;
		cin >> d;
		if (t[i] > k)
		{
			t[i + 1] = t[i] + d - abs(t[i] - k);
		}
		else if (t[i] < k)
		{
			t[i + 1] = t[i] + d + abs(t[i] - k);
		}
		else
		{

			t[i + 1] = t[i] + d;
		}
		ans += abs(t[i+1] - k);
	}
	cout << ans;
}
