#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main()
{
	int n;
	cin >> n;
	vector<int> vec(n);
	for (int i = 0; i < n; ++i)
	{
		int tmp;
		cin >> tmp >> tmp >> vec[i];
	}

	vector<vector<int>> dp(n, vector<int>(2, 0));
	dp[0][1] = vec[0];
	for (int i = 1; i < n; ++i)
	{
		dp[i][0] = max(dp[i - 1][0], dp[i - 1][1]);
		dp[i][1] = max(dp[i - 1][0] + vec[i], dp[i - 1][1]);
	}

	cout << max(dp[n-1][0], dp[n-1][1]);
	return 0;
}