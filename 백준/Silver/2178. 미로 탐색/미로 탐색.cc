#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int n, m;
int dy[] = { 0,1,0,-1 };
int dx[] = { 1,0,-1,0 };

int main()
{
	cin >> n >> m;

	vector<string> board(n);
	vector<vector<int>> visit(n, vector<int>(m, -1));

	for (int i = 0; i < n; ++i)
	{
		cin >> board[i];
	}


	queue<pair<int, int>> que;
	que.push({ 0,0 });
	visit[0][0] = 1;
	while (!que.empty())
	{
		pair<int, int> curr = que.front();
		que.pop();

		if (curr.first == n - 1 && curr.second == m - 1)
		{
			break;
		}

		for (int dir = 0; dir < 4; ++dir)
		{
			int nextY = curr.first + dy[dir];
			int nextX = curr.second + dx[dir];

			if (nextY < 0 || nextX < 0 || nextY >= n || nextX >= m) continue;
			if (board[nextY][nextX] == '0' || visit[nextY][nextX] != -1) continue;

			que.push({ nextY,nextX });
			visit[nextY][nextX] = visit[curr.first][curr.second] + 1;
		}
	}

	cout << visit[n - 1][m - 1];
}