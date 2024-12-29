#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n, sRow, sCol; // startRow, startCol
	cin >> n >> sRow >> sCol;

	vector<vector<int>> charmTable(n, vector<int>(n, 0));
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			cin >> charmTable[i][j];
		}
	}

	for (int i = 0; i < n; ++i)
	{
		if (charmTable[i][sCol-1] > charmTable[sRow-1][sCol-1] || charmTable[sRow-1][i] > charmTable[sRow-1][sCol-1])
		{
			cout << "ANGRY";
			return 0;
		}
	}
	cout << "HAPPY";
}