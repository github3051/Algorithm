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
		cout << "ez";
	}
	else if (vec[0] == hard)
	{
		cout << "hard";
	}
	else
		// 둘 다 아닌경우
		cout << '?';
}