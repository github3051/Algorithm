#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int tc;
	cin >> tc;

	vector<int> plan(tc);
	vector<int> real(tc);
	int ans = 0;
	for (int i = 0; i < tc; ++i)
	{
		cin >> plan[i];
	}
	for (int i = 0; i < tc; ++i)
	{
		cin >> real[i];
	}

	for (int i = 0; i < tc; ++i)
	{
		if (real[i] - plan[i] >= 0)
		{
			ans += 1;
		}
	}

	cout << ans;
}