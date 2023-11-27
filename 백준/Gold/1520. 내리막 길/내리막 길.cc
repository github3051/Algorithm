#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n, m;
int dy[] = { 0,1,0,-1 };
int dx[] = { 1,0,-1,0 };

int DFS(int y, int x, vector<vector<int>>& map, vector<vector<int>>& dp)
{
	if (y == n - 1 && x == m - 1)
	{
		return 1;
	}

	if (dp[y][x] != -1)
	{
		return dp[y][x];
	}
	dp[y][x] = 0;

	for (int dir = 0; dir < 4; ++dir)
	{
		int ny = y + dy[dir];
		int nx = x + dx[dir];

		if (ny < 0 || nx < 0 || ny >= n || nx >= m) continue;
		if (map[ny][nx] >= map[y][x]) continue;
		dp[y][x] += DFS(ny, nx, map, dp);
	}

	return dp[y][x];
}

int main()
{
	cin >> n >> m;

	vector<vector<int>> map(n, vector<int>(m, 0));

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			cin >> map[i][j];
		}
	}

	vector<vector<int>> dp(n, vector<int>(m, -1));
	cout << DFS(0, 0, map, dp);
}