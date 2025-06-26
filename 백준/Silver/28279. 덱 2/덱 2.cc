#include <iostream>
#include <deque>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
	int n;
	cin >> n;
	deque<int> deq;
	while (n--)
	{
		int command;
		cin >> command;
		if (command == 1)
		{
			int num;
			cin >> num;
			deq.emplace_front(num);
		}
		else if (command == 2)
		{
			int num;
			cin >> num;
			deq.emplace_back(num);
		}
		else if (command == 3)
		{
			if (!deq.empty())
			{
				cout << deq.front() << '\n';
				deq.pop_front();
			}
			else
				cout << -1 << '\n';
		}
		else if (command == 4)
		{

			if (!deq.empty())
			{
				cout << deq.back() << '\n';
				deq.pop_back();
			}
			else
				cout << -1 << '\n';
		}
		else if (command == 5)
		{
			cout << deq.size() << '\n';
		}
		else if (command == 6)
		{
			if (!deq.empty())
				cout << 0 << '\n';
			else
				cout << 1 << '\n';
		}
		else if (command == 7)
		{
			if (!deq.empty())
				cout << deq.front() << '\n';
			else
				cout << -1 << '\n';
		}
		else if (command == 8)
		{
			if (!deq.empty())
				cout << deq.back() << '\n';
			else
				cout << -1 << '\n';
		}
	}
}