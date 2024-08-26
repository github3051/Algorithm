#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;

	vector<int> vec;
	for (int i = 0; i < m; ++i)
	{
		int a, b;
		cin >> a >> b;
		if (a - n < 0)
		{
			vec.emplace_back(a - n);
		}
	}

	stable_sort(vec.begin(), vec.end());
	int vSize = vec.size();
	int sum = 0;
	for (int i = 1; i < vSize; ++i)
	{
		sum += vec[i];
	}

	cout << sum * -1;
}