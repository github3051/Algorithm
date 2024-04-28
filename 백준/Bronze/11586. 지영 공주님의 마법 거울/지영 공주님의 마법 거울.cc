
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n;
	cin >> n;

	vector<string> vStr(n);
	for (int i = 0; i < n; ++i)
	{
		cin >> vStr[i];
	}

	int mNum;
	cin >> mNum;

	if (mNum == 1)
	{
		for (int i = 0; i < n; ++i)
		{
			cout << vStr[i] << '\n';
		}
	}
	else if (mNum == 2)
	{
		for (int i = 0; i < n; ++i)
		{
			for (int j = n - 1; j >= 0; --j)
			{
				cout << vStr[i][j];
			}
			cout << '\n';
		}
	}
	else if (mNum == 3)
	{
		for (int i = n - 1; i >= 0; --i)
		{
			cout << vStr[i] << '\n';
		}
	}
}