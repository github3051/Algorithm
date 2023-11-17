#include <iostream>
#include <algorithm>
using namespace std;

int n;
int forest[501][501];
int dp[501][501];

int dx[] = { 1,0,-1,0 };
int dy[] = { 0,-1,0,1 };

int DFS(const int& y, const int& x)
{
	if (dp[y][x])
		return dp[y][x];

	dp[y][x] = 1;

	for (int dir = 0; dir < 4; ++dir)
	{
		int ny = y + dy[dir];
		int nx = x + dx[dir];

		//if (ny < 0 || nx < 0 || ny >= n || nx >= n) continue;
		if (forest[ny][nx] <= forest[y][x]) continue;

		dp[y][x] = max(dp[y][x], DFS(ny, nx) + 1);
	}

	return dp[y][x];
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n;
	cin >> n;
	for (int i = 0; i < n; ++i)
		for (int j = 0; j < n; ++j)
			cin >> forest[i][j];

	int ans = 0;

	for (int i = 0; i < n; ++i)
		for (int j = 0; j < n; ++j)
			ans = max(ans, DFS(i, j));

	cout << ans;
    
    return 0;
}