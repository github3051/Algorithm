#include <iostream>
#include <queue>
using namespace std;

int main() {
	int n;
	cin >> n;

	queue<int> que;
	for (int i = 1; i <= n; ++i)
		que.push(i);

	while (true)
	{
		cout << que.front() << ' ';
		que.pop();

		if (que.empty())
			break;

		que.push(que.front());
		que.pop();
	}
}