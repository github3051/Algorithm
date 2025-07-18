#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n, first;
	cin >> n;
	vector<int> vec(n, 0);
	int ez = 1000, hard = 0;
	for (int i = 0; i < n; ++i)
	{
		cin >> vec[i];
		if (vec[i] < ez)
		{
			ez = vec[i];
		}

		if (vec[i] > hard)
		{
			hard = vec[i];
		}
	}

	if (vec[0] == ez)
	{
		// 가장 쉬울때 or 쉬운게 여러개일때
		for (int i = 1; i < n; ++i)
		{
			if (vec[i] == ez)
			{
				cout << '?';
				return 0;
			}
		}
		cout << "ez";
	}
	else if (vec[0] == hard)
	{
		for (int i = 1; i < n; ++i)
		{
			if (vec[i] == hard)
			{
				cout << '?';
				return 0;
			}
		}
		cout << "hard";
	}
	else
		// 둘 다 아닌경우
		cout << '?';
}