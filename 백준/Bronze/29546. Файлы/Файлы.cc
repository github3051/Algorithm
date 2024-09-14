#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n;
	cin >> n;

	vector<string> sVec(n);
	for (int i = 0; i < n; ++i)
	{
		cin >> sVec[i];
	}

	int m;
	cin >> m;
	for (int i = 0; i < m; ++i)
	{
		int start, end;
		cin >> start >> end;
		for (int j = start-1; j <= end-1; ++j)
		{
			cout << sVec[j] << '\n';
		}
	}
}