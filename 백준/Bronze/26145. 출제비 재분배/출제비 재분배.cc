#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


int main()
{
	int n, m;
	cin >> n >> m;
	vector<int> pay(n+m, 0);
	for (int i = 0; i < n; ++i)
	{
		cin >> pay[i];
	}

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n + m; ++j)
		{
			int tmp;
			cin >> tmp;
			pay[i] -= tmp;
			pay[j] += tmp;
		}
	}

	for (const vector<int>::iterator::value_type& elem : pay)
	{
		cout << elem << ' ';
	}
}