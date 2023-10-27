#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;

	int dp[2][46];
	dp[0][1] = 0;
	dp[0][2] = 1;
	dp[1][1] = 1;
	dp[1][2] = 1;

	for (int i = 3; i <= n; ++i)
	{
		dp[0][i] = dp[0][i - 2] + dp[0][i - 1];
		dp[1][i] = dp[1][i - 2] + dp[1][i - 1];
	}

	cout << dp[0][n] << ' ' << dp[1][n];

}