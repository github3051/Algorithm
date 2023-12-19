#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	cin >> n;

	vector<vector<int>> dp(n + 1, vector<int>(n + 1, 1));
	for (int i = 1; i <= n; ++i)
	{
		for (int j = 1; j <= n; ++j)
		{
			dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
		}
	}



	cout << dp[n][n] << ' ' << n*n;
}