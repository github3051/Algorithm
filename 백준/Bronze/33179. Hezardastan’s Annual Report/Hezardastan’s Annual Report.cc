#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int ans = 0;
	for (int i = 0; i < n; ++i)
	{
		int tmp;
		cin >> tmp;
		if (tmp % 2 == 0)
		{
			ans += tmp;
		}
		else
		{
			ans += tmp + 1;
		}
	}
	cout << ans / 2;
}