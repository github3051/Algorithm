#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n = 4;
	vector<int> vec(n);
	for (int i = 0; i < n; ++i)
	{
		cin >> vec[i];
	}

	sort(vec.begin(), vec.end());
	
	int ans = 0;
	for (int i = 1; i < n; ++i)
	{
		ans += vec[i];
	}

	cout << ans + 1;
}