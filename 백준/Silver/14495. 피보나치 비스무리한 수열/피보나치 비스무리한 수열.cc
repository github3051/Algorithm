#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<long long> dp(120, 0);
	dp[1] = dp[2] = dp[3] = 1;
	for (int i = 4; i <= n; ++i)
	{
		dp[i] = dp[i - 1] + dp[i - 3];
	}
	cout << dp[n];
}