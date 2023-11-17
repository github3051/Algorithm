
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n;
	cin >> n;
	vector<int> arr(n);
	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}

	vector<int> dp(n, 0);
	for (int i = 0; i < n; ++i)
	{
		dp[i] = arr[i];
		for (int j = 0; j < i; ++j)
		{
			if (arr[i] > arr[j])
			{
				dp[i] = max(dp[i], dp[j] + arr[i]);
			}
		}
	}

	cout << *max_element(dp.begin(), dp.end());

	return 0;

}