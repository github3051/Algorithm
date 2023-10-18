#include <iostream>
#include <vector>
#include <queue>
#include <algorithm> // fill
using namespace std;

int n, m;
int dx[4] = {1,0,-1,0}; // 우하좌상
int dy[4] = {0,1,0,-1};

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	cin >> n >> m;
	vector<vector<int>> painting(n, vector<int>(m, 0));
	vector<vector<bool>> visit(n, vector<bool>(m, false));

	//fill(&painting[0][0], &painting[n-1][m-1], 1);

	for (int i = 0; i < n; ++i)
		for (int j = 0; j < m; ++j)
			cin >> painting[i][j];

	int ansNum = 0;
	int ansMax = 0;

	for (int i = 0; i < n; ++i)
		for (int j = 0; j < m; ++j)
			if (painting[i][j] == 1 && visit[i][j] == false)
			{
				queue<pair<int, int>> que;
				que.push({ i,j });
				visit[i][j] = true;
				ansNum += 1;
				int tmpMax = 0;
				while (!que.empty())
				{
					pair<int, int> curr = que.front();
					que.pop();
					tmpMax += 1;
					for (int dir = 0; dir < 4; ++dir)
					{
						int ny = curr.first + dy[dir];
						int nx = curr.second + dx[dir];
						if (ny < 0 || nx < 0 || ny >= n || nx >= m) continue;
						if (painting[ny][nx] == 0 || visit[ny][nx] == true) continue;
						que.push({ ny,nx });
						visit[ny][nx] = true;
					}
				}
				if (tmpMax > ansMax)
					ansMax = tmpMax;
			}

	cout << ansNum << '\n' << ansMax;


	return 0;
}