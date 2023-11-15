#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// value = 페이지수, resource = 일수

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n, m;
	cin >> n >> m;
	vector<pair<int, int>> input(m + 1); // pair<일수,페이지수>
	for (int i = 1; i <= m; ++i)
	{
		cin >> input[i].first >> input[i].second;
	}

	vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0)); // 챕터 개수, 자원(일 수)
	for (int i = 1; i <= m; ++i)
	{
		for (int j = 1; j <= n; ++j)
		{
			if (j >= input[i].first)
			{
				dp[i][j] = max(dp[i - 1][j - input[i].first] + input[i].second, dp[i - 1][j]);
			}
			else
			{
				dp[i][j] = dp[i - 1][j];
			}
		}
	}

	cout << dp[m][n];
}

// 배낭 문제에서 value와 resource 2개(물건과 무게, 이 문제에서는 챕터와 일 수)는 무조건 나온다. 세로를 resource1(물건1,2,3 / 이 문제에서는 챕터1,2,3), 가로를 resource2(무게 / 이 문제에서는 일 수)로 놓고, 안에 값들에 value를 넣으면 된다.
// 패턴이 비슷해보이므로 잘 모르겠으면 그냥 암기해도 될듯?