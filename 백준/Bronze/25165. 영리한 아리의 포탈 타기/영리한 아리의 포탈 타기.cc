#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int cols, rows, start, monsterX, monsterY;
	bool right;
	cin >> cols >> rows>> start >> right >> monsterY >> monsterX;

	vector<vector<bool>> vec(cols, vector<bool>(rows, false));
	vec[monsterY - 1][monsterX - 1] = true;

	int currY = 0, currX = start - 1;
	while (true)
	{
		if (currY == cols - 1 && currX == rows - 1)
		{
			cout << "YES!";
			return 0;
		}

		if (currY == monsterY - 1 && currX == monsterX - 1)
		{
			cout << "NO...";
			return 0;
		}

		if (right)
		{
			if (currX + 1 <= rows - 1)
			{
				currX += 1;
			}
			else
			{
				currY += 1;
				right = false;
			}
		}
		else
		{
			if (currX - 1 >= 0)
			{
				currX -= 1;
			}
			else
			{
				currY += 1;
				right = true;
			}
		}
	}
}