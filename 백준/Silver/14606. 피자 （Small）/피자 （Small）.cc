#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n;
	cin >> n;

	vector<int> dp(n + 1, 0);
	dp[1] = 0;
	dp[2] = 1;

	for (int i = 3; i <= n; ++i)
	{
		dp[i] = i / 2 * (i - i / 2) + dp[i / 2] + dp[i - i / 2];
	}
	cout << dp[n];
}