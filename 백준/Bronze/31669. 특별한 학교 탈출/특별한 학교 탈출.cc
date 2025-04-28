#include <iostream>
#include <vector>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n, m;
	cin >> n >> m;
	// n이 세로, m이 가로
	
	vector<string> sVec(n);
	for (int i = 0; i < n; ++i)
	{
		cin >> sVec[i];
	}

	for (int i = 0; i < m; ++i)
	{
		int exit = 0;
		for (int j = 0; j < n; ++j)
		{
			if (sVec[j][i] == 'X')
			{
				exit += 1;
			}
			else if(sVec[j][i] == 'O')
			{
				break;
			}
		}
		if (exit == n)
		{
			cout << i + 1;
			return 0;
		}
	}
	cout << "ESCAPE FAILED";
}
