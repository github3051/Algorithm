#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool Compare(const pair<int, int>& a, const pair<int, int>& b)
{
	return a.first < b.first;
}

int main()
{
	int n;
	cin >> n;
	vector<pair<int, int>> arrPair(n, { 0,0 });
	for (int i = 0; i < n; ++i)
	{
		cin >> arrPair[i].first >> arrPair[i].second;
	}
	sort(arrPair.begin(), arrPair.end(), Compare);

	vector<int> arrSingle;
	for (int i = 0; i < n; ++i)
	{
		arrSingle.emplace_back(arrPair[i].second);
	}

	vector<int> dp(n, 1);
	for (int i = 1; i < n; ++i)
	{
		for (int j = 0; j < i; ++j)
		{
			if (arrSingle[i] > arrSingle[j])
			{
				dp[i] = max(dp[i], dp[j] + 1);
			}
		}
	}

	cout << n - *max_element(dp.begin(), dp.end());
}