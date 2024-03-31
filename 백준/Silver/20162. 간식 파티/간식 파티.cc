#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int> vec(n);
	vector<int> dp(n);
	for (int i = 0; i < n; ++i)
	{
		cin >> vec[i];
		dp[i] = vec[i];
	}

	for (int i = 1; i < n; ++i)
	{
		for (int j = 0; j < i; ++j)
		{
			if (vec[j] < vec[i])
			{
				dp[i] = max(dp[j] + vec[i], dp[i]);
			}
		}
	}

	cout << *max_element(dp.begin(), dp.end());
}