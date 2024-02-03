#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	cin >> n;

	vector<int> dp(100'001, n);
	dp[0] = 0;
	dp[1] = 1;
	dp[2] = 1;
	dp[3] = 2;
	dp[4] = 2;
	dp[5] = 1;
	dp[6] = 2;
	dp[7] = 1;

	for (int i = 8; i <= n; ++i)
	{
		dp[i] = min({ dp[i - 1] + 1,dp[i - 2] + 1,dp[i - 5] + 1,dp[i - 7] + 1 });
	}

	cout << dp[n];
}