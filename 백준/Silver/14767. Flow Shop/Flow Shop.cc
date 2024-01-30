#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	vector<int> result(n, 0);
	vector<int> dp(m, 0);
	vector<vector<int>> sweater(n, vector<int>(m, 0));
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			cin >> sweater[i][j];
		}
	}

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			if (dp[j] > result[i])
			{
				dp[j] += sweater[i][j];
			}
			else
			{
				dp[j] = sweater[i][j] + result[i];
			}

			result[i] = dp[j];
		}
	}

	for (const int& elem : result)
	{
		cout << elem << ' ';
	}
}