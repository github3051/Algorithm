#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n, k;
	cin >> n >> k;
	vector<int> coin(n, 0);
	for (int i = 0; i < n; ++i)
	{
		cin >> coin[i];
	}

	vector<int> dp(k + 1, -1);
	dp[0] = 0;
	for (int i = 0; i < n; ++i)
	{
		for (int j = coin[i]; j <= k; ++j)
		{
			if (dp[j - coin[i]] == -1)
			{
				
			}
			else if(dp[j] == -1)
			{
				dp[j] = dp[j - coin[i]] + 1;
			}
			else
			{
				dp[j] = min(dp[j], dp[j - coin[i]] + 1);
			}
		}
	}

	cout << dp[k];
}