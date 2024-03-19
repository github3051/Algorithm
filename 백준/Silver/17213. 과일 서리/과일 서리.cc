#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	vector<vector<long long>> comb(m, vector<long long>(m, 1)); // combination
	for (int i = 2; i < m; ++i)
	{
		for (int j = 1; j < i; ++j)
		{
			comb[i][j] = comb[i - 1][j - 1] + comb[i - 1][j];
		}
	}

	cout << comb[m - 1][n - 1];
}