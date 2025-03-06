#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;

	int ans = n;
	for (int i = 1; i <= n/2; ++i)
	{
		if (n % i == 0)
		{
			ans += i;
		}
	}
	cout << ans;
}