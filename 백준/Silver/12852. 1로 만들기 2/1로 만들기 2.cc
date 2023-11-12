#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;


int main()
{
	int n;
	cin >> n;

	vector<int> dp(n + 1, 0);


	//for (int i = n; i > 1; --i)
	//{
	//	if (i % 3 == 0)
	//	{
	//		dp[i / 3] = min(dp[i] + 1, dp[i / 3]);
	//	}
	//	else if (i % 2 == 0)
	//	{
	//		dp[i / 2] = min(dp[i] + 1, dp[i / 2]);
	//	}

	//	dp[i - 1] = min(dp[i] + 1, dp[i - 1]);
	//}

	for (int i = 2; i <= n; i++)
	{
		dp[i] = dp[i - 1] + 1;
		if (i % 2 == 0) dp[i] = min(dp[i], dp[i / 2] + 1);
		if (i % 3 == 0) dp[i] = min(dp[i], dp[i / 3] + 1);
	}

	cout << dp[n] << '\n';

	int idx = n;
	vector<int> output = { idx };
	while (true)
	{
		if (idx == 1)
		{
			break;
		}

		if (idx%3 == 0 && dp[idx / 3] == dp[idx] - 1)
		{
			idx /= 3;
			output.emplace_back(idx);
		}
		else if (idx%2 == 0 && dp[idx / 2] == dp[idx] - 1)
		{
			idx /= 2;
			output.emplace_back(idx);
		}
		else if (idx -1 > 0 && dp[idx - 1] == dp[idx] - 1)
		{
			idx -= 1;
			output.emplace_back(idx);
		}
	}

	for (int i = 0; i <= dp[n]; ++i)
	{
		cout << output[i] << ' ';
	}
}