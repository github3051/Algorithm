#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n;
	cin >> n;

	if (n == 0)
	{
		cout << 0 << '\n' << 0;
	}
	else if (n < 0)
	{
		vector<int> dp(-n + 1);
		dp[0] = 0;
		dp[1] = 1;
		for (int i = 2; i <= -n; ++i)
		{
			dp[i] = (dp[i - 2] - dp[i - 1]) % 1'000'000'000;
		}

		if (dp[-n] < 0)
		{
			cout << -1 << '\n' << -dp[-n];
		}
		else
		{
			cout << 1 << '\n' << dp[-n];
		}
	}
	else
	{
		vector<int> dp(n + 1);
		dp[0] = 0;
		dp[1] = 1;
		for (int i = 2; i <= n; ++i)
		{
			dp[i] = (dp[i - 1] + dp[i - 2]) % 1'000'000'000;
		}

		cout << 1 << '\n' << dp[n];
	}

}