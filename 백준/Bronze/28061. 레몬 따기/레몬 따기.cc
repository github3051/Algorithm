#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;

	int ans = 0;
	for (int i = 0; i < n; ++i)
	{
		int nRemon;
		cin >> nRemon;
		ans = (ans < nRemon - (n - i) ? nRemon - (n - i) : ans);
	}
	cout << ans;
}