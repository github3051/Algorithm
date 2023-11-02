#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int> arr(n);
	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}

	vector<int> dp(n);
	dp[0] = 0;
	int min = arr[0];
	for (int i = 1; i < n; ++i)
	{
		if (min > arr[i - 1])
		{
			min = arr[i - 1];
		}

		dp[i] = max(dp[i - 1], arr[i] - min);
	}

	cout << dp[n - 1];
}