#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <stack>
using namespace std;

int n, m, v; // 정점, 간선, 시작점

void BFS(const vector<int> adj[], const int& start)
{
	queue<int> que;
	que.push(start);
	bool visit[1001] = { false, };
	visit[start] = true;

	while (!que.empty())
	{
		auto curr = que.front();
		que.pop();
		cout << curr << ' ';

		for(auto next : adj[curr])
		{
			if (visit[next] == true) continue;

			que.push(next);
			visit[next] = true;
		}
	}
}

void DFS(const vector<int> adj[], const int& start)
{
	stack<int> stk;
	stk.push(start);
	bool visit[1001] = { false, };

	while (!stk.empty())
	{
		auto curr = stk.top();
		stk.pop();
		if (visit[curr] == true) continue;
		cout << curr << ' ';
		visit[curr] = true;
		
		int len = adj[curr].size();
		for (int i=0; i<len; ++i)
		{
			int next = adj[curr][len - 1 - i]; // 스택은 정점을 역순으로 넣어야됨
			if (visit[next] == true) continue;

			stk.push(next);
		}
	}
}

int main()
{
	cin >> n >> m >> v;

	vector<int> adj[1001];
	for (int i = 0; i < m; ++i)
	{
		int u, v;
		cin >> u >> v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}

	for (int i = 1; i <= n; ++i)
	{
		sort(adj[i].begin(), adj[i].end());
	}

	DFS(adj, v);	
	cout << '\n';
	BFS(adj, v);
}
