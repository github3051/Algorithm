#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int row, column;
	cin >> row >> column;

	vector<string> vec(row);
	vector<string> vec2 = vec;

	for (int i = 0; i < row; i++)
	{
		cin >> vec[i];
	}

	for (int i = 0; i < row; i++)
	{
		cin >> vec2[i];
	}

	int ans = 0;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < column; j++)
		{
			if (vec[i][j] == vec2[i][j])
			{
				ans += 1;
			}
		}
	}

	cout << ans;
}