#include <iostream>
#include <vector>
using namespace std;


int main()
{
	int n;
	cin >> n;
	vector<vector<int>> board(n, vector<int>(n, 0));
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			cin >> board[i][j];
		}
	}

	vector<vector<long long>> dp(n,vector<long long>(n,0));
	dp[0][0] = 1;

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			if (dp[i][j] == 0 || (i == n-1 && j == n-1)) continue;

			int ny = i + board[i][j];
			int nx = j + board[i][j];

			if (0 < ny && ny < n)
			{
				dp[ny][j] += dp[i][j];
			}

			if (0 < nx && nx < n)
			{
				dp[i][nx] += dp[i][j];
			}
		}
	}

	cout << dp[n-1][n-1];
}

// dp사용하지 않고, bfs처럼 que에 넣고 이동하는 방식으로 코드를 만들면 메모리 초과가 뜸. que를 사용할것이라면 중간에 반복계산하지 않게 만들어줘야 될듯.