#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


int main()
{
	int n, l;
	cin >> n >> l;
	vector<int> line(n);
	int maxLine = 0;
	for (int i = 0; i < n; ++i)
	{
		string zibra;
		cin >> zibra;
		int tmpLine = 0;
		for (int j = 0; j < l;)
		{
			if (zibra[j] == '1')
			{
				while (zibra[j] == '1')
				{
					j += 1;
				}
				tmpLine += 1;
			}
			else
			{
				j += 1;
			}
		}
		line[i] = tmpLine;
		maxLine = (tmpLine > maxLine ? tmpLine : maxLine);
	}

	int nAns = 0;
	for (const auto& elem : line)
	{
		if (elem == maxLine)
		{
			nAns += 1;
		}
	}
	cout << maxLine << ' ' << nAns;
}