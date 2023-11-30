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

	vector<int> dp(n + 1, 0); // dp[i]는 i개의 카드를 뽑았을 때 최소 금액
	for (int i = 1; i <= n; ++i)
	{
		dp[i] = arr[i - 1];
		for (int j = 1; j <= i; ++j)
		{
			dp[i] = min(dp[i], dp[i - j] + arr[j - 1]);
		}
	}

	cout << dp[n];
}