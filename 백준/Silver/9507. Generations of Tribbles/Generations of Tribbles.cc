#include <iostream>
using namespace std;

int main()
{
	int tc;
	cin >> tc;

	long long dp[68];
	dp[0] = 1;
	dp[1] = 1;
	dp[2] = 2;
	dp[3] = 4;
	for (int i = 4; i <= 67; ++i)
	{
		dp[i] = dp[i - 4] + dp[i - 3] + dp[i - 2] + dp[i - 1];
	}

	while (tc--)
	{
		int n;
		cin >> n;
		cout << dp[n] << '\n';
	}
}