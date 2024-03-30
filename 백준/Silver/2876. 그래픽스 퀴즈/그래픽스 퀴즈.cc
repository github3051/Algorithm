#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	cin >> n;

	vector<pair<int, int>> vec(n);
	vector<vector<int>> dp(n, vector<int>(6, 0)); // dp[a][b] a번째 책상부터 시작할 때 b그레이드의 갯수
	for (int i = 0; i < n; ++i)
	{
		cin >> vec[i].first >> vec[i].second;
		dp[i][vec[i].first] = 1;
		dp[i][vec[i].second] = 1;
	}

	for (int i = 1; i < n; ++i)
	{
		if (vec[i - 1].first == vec[i].first || vec[i - 1].first == vec[i].second)
		{
			dp[i][vec[i - 1].first] = dp[i-1][vec[i-1].first] + 1;
		}

		if (vec[i - 1].second == vec[i].first || vec[i - 1].second == vec[i].second)
		{
			dp[i][vec[i - 1].second] = dp[i-1][vec[i - 1].second] + 1;
		}
	}

	int ansMax = 0;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 1; j <= 5; ++j)
		{
			if (ansMax < dp[i][j])
			{
				ansMax = dp[i][j];
			}
		}
	}

	vector<int> ansGrade;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 1; j <= 5; ++j)
		{
			if (ansMax == dp[i][j])
			{
				ansGrade.emplace_back(j);
			}
		}
	}

	cout << ansMax << ' ' << *min_element(ansGrade.begin(), ansGrade.end());
}