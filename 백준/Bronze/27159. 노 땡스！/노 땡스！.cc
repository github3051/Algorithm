#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;

	int ans = 0;
	int prev = 0;
	for (int i = 0; i < n; ++i)
	{
		int tmp;
		cin >> tmp;
		if (prev != tmp - 1)
		{
			ans += tmp;
		}
		prev = tmp;
	}
	cout << ans;
}