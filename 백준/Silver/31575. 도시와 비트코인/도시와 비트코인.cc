// visit은 어차피 필요없음. 동 남 쪽 밖에 못가서
#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int dy[] = {0,1};
int dx[] = {1,0};

int main()
{
	int row, col;
	cin >> col >> row;
	vector<vector<int>> board(row, vector<int>(col, false));
	for (int i = 0; i < row; ++i)
	{
		for (int j = 0; j < col; ++j)
		{
			cin >> board[i][j];
		}
	}

	queue<pair<int, int>> que;
	vector<vector<bool>> visit(row, vector<bool>(col, false));
	que.push({ 0,0 });
	visit[0][0] = true;
	while (!que.empty())
	{
		auto curr = que.front();
		que.pop();

		if (curr.first == row - 1 && curr.second == col - 1)
		{
			cout << "Yes";
			return 0;
		}

		for (int dir = 0; dir < 2; ++dir)
		{
			int ny = dy[dir] + curr.first;
			int nx = dx[dir] + curr.second;
			if (ny < 0 || nx < 0 || ny >= row || nx >= col) continue;
			if (visit[ny][nx] == true || board[ny][nx] == 0) continue;
			que.push({ ny,nx });
			visit[ny][nx] = true;
		}
	}
	cout << "No";
}