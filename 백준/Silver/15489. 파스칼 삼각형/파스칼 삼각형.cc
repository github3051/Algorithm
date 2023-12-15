#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int r, c, w;
	cin >> r >> c >> w;
	vector<vector<int>> pascalTriangle(31, vector<int>(31, 1));
	for (int i = 2; i <= 30; ++i)
	{
		for (int j = 1; j < i; ++j)
		{
			pascalTriangle[i][j] = pascalTriangle[i - 1][j - 1] + pascalTriangle[i - 1][j];
		}
	}

	int ans = 0;
	for (int i = 0; i < w; ++i)
	{
		for (int j = 0; j <= i; ++j)
		{
			ans += pascalTriangle[r-1+i][c-1+j];
		}
	}

	cout << ans;
}