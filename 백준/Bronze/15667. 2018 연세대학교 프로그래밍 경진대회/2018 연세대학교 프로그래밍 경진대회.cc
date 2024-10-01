#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int ans;
	for (int i = 1; i < 102; ++i)
	{
		if (i * (i + 1) == n - 1)
		{
			ans = i;
			break;
		}
	}
	cout << ans;
}