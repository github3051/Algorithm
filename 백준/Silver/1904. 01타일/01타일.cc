#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int arr[10001];
int n;

int main()
{
	cin >> n;

	vector<long long> dp(n + 1, 0);

	dp[1] = 1;
	dp[2] = 2;

	for (int i = 3; i <= n; ++i)
	{
		dp[i] = (dp[i - 2] + dp[i - 1]) % 15746;
	}

	cout << dp[n];
}