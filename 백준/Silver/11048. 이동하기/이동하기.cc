#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;

	vector<vector<int>> board(n, vector<int>(m, 0));
	vector<vector<int>> dp = board;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			cin >> board[i][j];
		}
	}

	dp[0][0] = board[0][0];
	for (int i = 1; i < n; ++i)
	{
		dp[i][0] += dp[i-1][0] + board[i][0];
	}
	for (int i = 1; i < m; ++i)
	{
		dp[0][i] += dp[0][i-1]+ board[0][i];
	}

	for (int i = 1; i < n; ++i)
	{
		for (int j = 1; j < m; ++j)
		{
			if (dp[i - 1][j] > dp[i][j - 1])
			{
				dp[i][j] = dp[i - 1][j] + board[i][j];
			}
			else
			{
				dp[i][j] = dp[i][j - 1] + board[i][j];
			}
		}
	}

	cout << dp[n - 1][m - 1];
}