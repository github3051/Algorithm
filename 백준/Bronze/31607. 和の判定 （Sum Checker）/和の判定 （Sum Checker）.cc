#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n = 3;
	vector<int> vec(n);
	for (int i = 0; i < n; ++i)
	{
		cin >> vec[i];
	}

	stable_sort(vec.begin(), vec.end());

	int sum = 0;
	for (int i = 0; i < n - 1; ++i)
	{
		sum += vec[i];
	}

	cout << (sum == vec[n - 1] ? 1 : 0);
}