#include <iostream>
#include <deque>
using namespace std;

int main()
{
	int n,t;
	cin >> n >> t;
	deque<int> deq(2*n);
	for (int i = 0; i < 2 * n; ++i)
	{
		cin >> deq[i];
	}
	while (t--)
	{
		int gyosunsNum;
		cin >> gyosunsNum;
		for (int i = 0; i < gyosunsNum-1; ++i)
		{
			deq.emplace_back(deq.front());
			deq.pop_front();
		}
		cout << deq[0] << ' ';
	}
}