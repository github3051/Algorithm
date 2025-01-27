#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<pair<int, int>> apex(n);
	for (int i = 0; i < n; ++ i)
	{
		cin >> apex[i].first >> apex[i].second;
	}

	int ans = 0;
	for (int i = 1; i < n; ++i)
	{
		if (apex[i].first ^ apex[i - 1].first)
		{
			ans += abs(apex[i].first - apex[i - 1].first);
		}
		else
		{
			ans += abs(apex[i].second - apex[i - 1].second);
		}
	}
	ans += ( apex[n-1].first^apex[0].first ? abs(apex[n-1].first - apex[0].first) : abs(apex[n-1].second - apex[0].second));
	cout << ans;
}