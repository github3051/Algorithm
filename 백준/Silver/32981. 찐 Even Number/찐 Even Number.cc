#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
    
	int t;
	cin >> t;

	vector<long long> dp(10'000'001, 0);
	dp[0] = 5;
	dp[1] = 20;
	for (int i = 2; i < 10'000'000; ++i)
	{
		dp[i] = (dp[i - 1] * 5) % 1'000'000'007;
	}

	while (t--)
	{
		int n;
		cin >> n;
		cout << dp[n - 1] << '\n';
	}
}