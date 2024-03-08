#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;

	vector<vector<int>> matrix(n, vector<int>(m, 0));
	vector<vector<vector<int>>> dp(n, vector<vector<int>>(m, vector<int>(3, 1000))); // 0 왼쪽, 1 가운데, 2 오른쪽
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			cin >> matrix[i][j];
		}
	}

	for (int i = 0; i < m; ++i)
	{
		dp[0][i][0] = dp[0][i][1] = dp[0][i][2] = matrix[0][i];
	}

	for (int i = 1; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			if (j != 0)
			{
				dp[i][j][0] = matrix[i][j] + min(dp[i - 1][j - 1][1], dp[i - 1][j - 1][2]);
			}

			dp[i][j][1] = matrix[i][j] + min(dp[i - 1][j][0], dp[i - 1][j][2]);


			if (j != m - 1)
			{
				dp[i][j][2] = matrix[i][j] + min(dp[i - 1][j + 1][0], dp[i - 1][j + 1][1]);
			}
		}
	}

	int ans = 1000;
	for (int i = 0; i < m; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			ans = min(ans, dp[n - 1][i][j]);
		}
	}

	cout << ans;
}