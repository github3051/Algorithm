#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	vector<int> vec(n + 1, 0);
	for (int i = 1; i <= n; ++i)
	{
		cin >> vec[i];
	}

	int curr = 1;
	int ans = 0;
	for (int i = 0; i < m; ++i)
	{
		int pip;
		cin >> pip;
		curr += pip;
		curr = (curr + vec[curr] < 1 ? 1 : curr + vec[curr]);
		ans += 1;

		if (curr >= n)
		{
			break;
		}
	}

	cout << ans;
}
