#include <iostream>
#include <vector>
#include <algorithm>
#include <climits> // INT_MAX
using namespace std;


int main()
{
	int n, m;
	cin >> n >> m;

	vector<vector<int>> space(n, vector<int>(m, 0));
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			cin >> space[i][j];
		}
	}

	vector<vector<vector<int>>> dp(n + 1, vector<vector<int>>(m, vector<int>(3, 0))); // dp[0][][] 은 시작하기 전이므로 0
	for (int i = 1; i <= n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			if (j == 0)
			{
				dp[i][j][0] = min(dp[i - 1][j + 1][1], dp[i - 1][j + 1][2]) + space[i - 1][j];
				dp[i][j][1] = dp[i - 1][j][0] + space[i - 1][j];
				dp[i][j][2] = -1;
			}
			else if (j == m - 1)
			{
				dp[i][j][0] = -1;
				dp[i][j][1] = dp[i - 1][j][2] + space[i - 1][j];
				dp[i][j][2] = min(dp[i - 1][j - 1][0], dp[i - 1][j - 1][1]) + space[i - 1][j];
			}
			else
			{
				dp[i][j][0] = min(dp[i - 1][j + 1][1], dp[i - 1][j + 1][2]) + space[i - 1][j];
				dp[i][j][1] = min(dp[i - 1][j][0], dp[i - 1][j][2]) + space[i - 1][j];
				dp[i][j][2] = min(dp[i - 1][j - 1][0], dp[i - 1][j - 1][1]) + space[i - 1][j];
			}
		}
	}

	int ans = INT_MAX;
	for (int i = 0; i < m; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			if (dp[n][i][j] == -1)
			{
				continue;
			}
			ans = min(ans, dp[n][i][j]);
		}
	}
	cout << ans;
}