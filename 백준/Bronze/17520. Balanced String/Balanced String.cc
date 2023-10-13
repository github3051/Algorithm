#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n;
	cin >> n;

	vector<int> dp(n + 1);
	dp[1] = 2;

	for (int i = 2; i <= n; ++i)
	{
		if (i % 2)
		{
			dp[i] = 2 * dp[i - 1] % 16769023;
		}
		else
		{
			dp[i] = dp[i - 1];

		}
	}
	cout << dp[n];
}