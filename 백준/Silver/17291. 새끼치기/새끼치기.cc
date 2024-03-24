#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n;
	cin >> n;

	vector<int> vec(n + 4, 0);
	vec[1] = 1;
	vec[2] = 1;

	vector<int> dp(n + 4, 0);
	dp[1] = 1;
	dp[2] = 2;
	for (int i = 3; i <= n; ++i)
	{
		if (i % 2 == 0)
		{
			dp[i] = dp[i - 1] * 2 - vec[i - 3] - vec[i - 4];
		}
		else
		{
			dp[i] = dp[i - 1] * 2;
		}

		vec[i] = dp[i - 1];
	}


	cout << dp[n];
}