#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


int main()
{
	vector<vector<string>> board(10, vector<string>(10));
	for (int i = 0; i < 10; ++i)
	{
		for (int j = 0; j < 10; ++j)
		{
			cin >> board[i][j];
		}
	}

	for (int i = 0; i < 10; ++i)
	{
		string chkStrRows = board[i][0]; // 가로
		string chkStrCols = board[0][i]; // 세로

		int nRows = 0, nCols = 0;

		for (int j = 1; j < 10; ++j)
		{
			if(chkStrRows == board[i][j])
			{
				nRows += 1;
			}

			if (chkStrCols == board[j][i])
			{
				nCols += 1;
			}
		}

		if (nRows == 9 || nCols == 9)
		{
			cout << 1;
			return 0;
		}
	}
	cout << 0;
}