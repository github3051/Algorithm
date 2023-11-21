#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
	int n, testCases;
	cin >> n >> testCases;

	vector<vector<int>> arr(n, vector<int>(n, 0));
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			cin >> arr[i][j];
		}
	}

	vector<vector<int>> dp(n, vector<int>(n, 0));
	dp[0][0] = arr[0][0];
	for (int i = 1; i < n; ++i)
	{
		dp[0][i] = dp[0][i - 1] + arr[0][i];
		dp[i][0] = dp[i - 1][0] + arr[i][0];
	}

	for (int i = 1; i < n; ++i)
	{
		for (int j = 1; j < n; ++j)
		{
			dp[i][j] = dp[i][j - 1] + dp[i - 1][j] - dp[i - 1][j - 1] + arr[i][j];
		}
	}

	int sRow, sColumn, dRow, dColumn; //start, destination
	while (testCases--)
	{
		cin >> sRow >> sColumn >> dRow >> dColumn;
		if (sRow == 1 && sColumn == 1)
		{
			cout << dp[dRow - 1][dColumn - 1] << '\n';
		}
		else if (sRow == 1)
		{
			cout << dp[dRow - 1][dColumn - 1] - dp[dRow - 1][sColumn - 2] << '\n';
		}
		else if (sColumn == 1)
		{
			cout << dp[dRow - 1][dColumn - 1] - dp[sRow - 2][dColumn - 1] << '\n';
		}
		else
		{
			cout << dp[dRow - 1][dColumn - 1] - dp[dRow - 1][sColumn - 2] - dp[sRow - 2][dColumn - 1] + dp[sRow - 2][sColumn - 2] << '\n';
		}
	}
}