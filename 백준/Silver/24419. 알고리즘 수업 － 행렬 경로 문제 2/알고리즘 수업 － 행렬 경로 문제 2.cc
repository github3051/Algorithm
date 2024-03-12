#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n;
	cin >> n;

	for (int i = 0; i < n * n; ++i)
	{
		char c;
		cin >> c;
	}

	vector<vector<int>> dp(n+1, vector<int>(n+1, 1));

	for (int i = 1; i <= n; ++i)
	{
		for (int j = 1; j <= n; ++j)
		{
			dp[i][j] = (dp[i - 1][j] + dp[i][j - 1]) % 1'000'000'007;
		}
	}

	cout << dp[n][n] << ' ' << n * n;
}