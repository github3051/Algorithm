#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n;
	cin >> n;

	vector<int> vec(n);
	for (int i = n - 1; i >= 0; --i)
	{
		cin >> vec[i];
	}

	vector<int> dp(n, 0);
	dp[0] = 1;

	for (int i = 1; i < n; ++i)
	{
		if (i - vec[i] - 1 < 0)
		{
			dp[i] = 1;
		}
		else
		{
			dp[i] = dp[i - vec[i] - 1] + 1;
		}
	}

	for (int i = n - 1; i >= 0; --i)
	{
		cout << dp[i] << ' ';
	}
}