#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int t;
	cin >> t;
	vector <long long > dp(2001);
	dp[0] = 1;
	for (long long i = 1; i < 2000; ++i)
	{
		dp[i] = dp[i - 1] + (i + 1) * (i + 1);
	}

	while (t--)
	{
		int n;
		cin >> n;
		cout << dp[n - 1] << '\n';
	}
}