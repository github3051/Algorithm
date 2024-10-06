#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n, x;
	cin >> n >> x;
	vector<int> limit(n);
	for (int i = 0; i < n; ++i)
	{
		cin >> limit[i];
	}

	int idx = 0;
	while (true)
	{
		if (limit[idx] < x)
		{
			cout << idx + 1;
			return 0;
		}

		idx += 1;

		if (idx >= n)
		{
			idx = 0;
		}

		x += 1;
	}
}