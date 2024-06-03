#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;

	int ans = 0;
	for (int i = 1; i <= n; ++i)
	{
		ans += 3 * i * (i + 1)/2;
	}
	cout << ans;
}