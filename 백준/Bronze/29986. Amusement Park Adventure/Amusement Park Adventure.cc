#include <iostream>
using namespace std;

int main()
{
	int n, height;
	cin >> n >> height;
	int ans = 0;
	for (int i = 0; i < n; ++i)
	{
		int standard;
		cin >> standard;
		if (standard <= height)
		{
			ans += 1;
		}
	}

	cout << ans;
}