#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	cin >> n;

	vector<int> card(n+1, 0);
	for (int i = 1; i <= n; ++i)
	{
		cin >> card[i];
	}

	vector<int> dp(n + 1,0);
	//dp[0] = 0;
	for (int i = 1; i <= n; ++i)
	{
		for (int j = 1; j <= i; ++j)
		{
			dp[i] = max(dp[i], dp[i - j] + card[j]);
		}
	}

	cout << dp[n];
}