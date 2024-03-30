#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	cin >> n;

	vector<int> grade(6, 0);
	int ansMax = 0;
	int ansIdx = 0;
	for (int i = 0; i < n; ++i)
	{
		int left, right;
		cin >> left >>  right;
		for (int j = 1; j <= 5; j++)
		{
			if (j == left || j == right)
			{
				grade[j] += 1;
			}
			else
			{
				grade[j] = 0;
			}

			if (grade[j] > ansMax)
			{
				ansMax = grade[j];
				ansIdx = j;
			}
		}
	}

	cout << ansMax << ' ' << ansIdx;
}