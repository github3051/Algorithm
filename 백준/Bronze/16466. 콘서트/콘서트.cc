#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	cin >> n;

	set<int> ticket;

	int tmp;
	for (int i = 0; i < n; ++i)
	{
		cin >> tmp;
		ticket.insert(tmp);
	}

	//sort(ticket.begin(), ticket.end());

	int idx = 1;
	for (set<int>::iterator iter = ticket.begin(); iter != ticket.end(); ++iter)
	{
		if (*iter != idx)
		{
			cout << idx;
			return 0;
		}
		else
		{
			idx += 1;
		}
	}

	cout << idx;
}