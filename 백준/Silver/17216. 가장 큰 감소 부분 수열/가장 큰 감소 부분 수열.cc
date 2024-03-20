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
		cin >> vec[i];
	}

	vector<int> dp(n, 0);
	for (int i = 0; i < n; ++i)
	{
		dp[i] = vec[i];
		for (int j = 0; j < i; ++j)
		{
			if (vec[i] < vec[j])
			{
				dp[i] = max(dp[j] + vec[i], dp[i]);
			}
		}
	}

	cout << *max_element(dp.begin(), dp.end());
}