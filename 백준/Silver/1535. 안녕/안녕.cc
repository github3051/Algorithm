#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n;
	cin >> n;

	vector<int> lost(n, 0);
	vector<int> pleasure(n, 0);
	vector<int> dp(101);

	for (int i = 0; i < n; ++i)
	{
		cin >> lost[i];
	}
	for (int i = 0; i < n; ++i)
	{
		cin >> pleasure[i];
	}


	for (int i = 0; i < n; ++i)
	{
		for (int j = 100; j >= lost[i]; --j)
		{
			dp[j] = max(dp[j], dp[j - lost[i]] + pleasure[i]);
		}
	}

	cout << dp[99];
}