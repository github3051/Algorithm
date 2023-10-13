#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n;
	cin >> n;

	int ans = 2;

	for (int i = 2; i <= n; ++i)
	{
		if (i % 2)
		{
			ans = 2*ans % 16769023;
		}
	}
	cout << ans;
}