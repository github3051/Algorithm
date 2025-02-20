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
		int nAns = 0;
		// 가로
		string chkStrRows = board[i][0];
		for (int j = 1; j < 10; ++j)
		{
			if(chkStrRows == board[i][j])
			{
				nAns += 1;
			}
		}

		if (nAns == 9)
		{
			cout << 1;
			return 0;
		}

		// 세로
		string chkStrCols = board[0][i];
		nAns = 0;
		for (int j = 1; j < 10; ++j)
		{
			if (chkStrCols == board[j][i])
			{
				nAns += 1;
			}
		}

		if (nAns == 9)
		{
			cout << 1;
			return 0;
		}
	}

	cout << 0;
}