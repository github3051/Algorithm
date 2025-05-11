#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct ribbon
{
	int x;
	int l;
	char color;
};

int main()
{
	int n;
	cin >> n;

	vector<ribbon> vecRibbon(n);
	for (int i = 0; i < n; ++i)
	{
		cin >> vecRibbon[i].x;
	}
	for (int i = 0; i < n; ++i)
	{
		cin >> vecRibbon[i].l;
	}
	for (int i = 0; i < n; ++i)
	{
		cin >> vecRibbon[i].color;
	}

	for (int i = 0; i < n-1; ++i)
	{
		for (int j = i + 1; j < n; ++j)
		{
			if (vecRibbon[i].color == vecRibbon[j].color)
			{
				continue;
			}
			else
			{
				if (abs(vecRibbon[i].x - vecRibbon[j].x) <= vecRibbon[i].l + vecRibbon[j].l)
				{

					cout << "YES\n" << i+1 << ' ' << j+1;
					return 0;
				}
			}
		}
	}
	cout << "NO";
}