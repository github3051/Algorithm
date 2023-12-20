#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n,m;
	cin >> n >>m;



	vector<vector<long long>> dp(n + 1, vector<long long>(m + 1, 1));
	for (int i = 2; i <= n; ++i)
	{
		for (int j = 2; j <= m; ++j)
		{
			dp[i][j] = (dp[i - 1][j] + dp[i][j - 1] + dp[i-1][j-1])%1'000'000'007;
		}
	}


	cout << dp[n][m];
}