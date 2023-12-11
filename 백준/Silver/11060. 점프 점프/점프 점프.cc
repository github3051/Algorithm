#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int> arr(n, 0);
	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}

	vector<int> dp(n, -1);
	dp[0] = 0;

	for (int i = 0; i < n; ++i)
	{
		if (dp[i] == -1)
		{
			break;
		}

		for (int j = 1; j <= arr[i]; ++j)
		{
			if (i + j >= n)
			{
				break;
			}

			if (dp[i+j] == -1)
			{
				dp[i+j] = dp[i] + 1;
			}
			else
			{
				dp[i + j] = min(dp[i + j], dp[i] + 1);
			}
		}
	}

	cout << dp[n - 1];
}