#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int InputToDP(vector<vector<int>>& dpParam, const int& a, const int& b, const int& nParam)
{
	if (a < 0 || b < 0 || a >= nParam || b >= nParam)
	{
		return 0;
	}
	return dpParam[a][b];
}

int main()
{
	int n;
	cin >> n;
	vector<vector<int>> vec(n, vector<int>(n,0));
	vector<vector<int>> dp(n, vector<int>(n,0));

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			string str;
			cin >> str;
			if (str[0] == 'A')
			{
				vec[i][j] = 1;
			}
			else if (str[0] == 'T')
			{
				vec[i][j] = 10;
			}
			else if (str[0] == 'J')
			{
				vec[i][j] = 11;
			}
			else if (str[0] == 'Q')
			{
				vec[i][j] = 12;
			}
			else if (str[0] == 'K')
			{
				vec[i][j] = 13;
			}
			else
			{
				vec[i][j] = str[0] - '0';
			}
		}
	}

	for (int i = n - 1; i >= 0; --i)
	{
		for (int j = 0; j < n; ++j)
		{
			dp[i][j] = max(InputToDP(dp, i + 1, j, n), InputToDP(dp, i, j - 1, n)) + vec[i][j];
		}
	}

	cout << dp[0][n - 1];
}