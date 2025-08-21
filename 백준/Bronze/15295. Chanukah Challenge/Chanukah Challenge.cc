#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
	int t;
	cin >> t;
	while (t--)
	{
		int idx, k;
		cin >> idx >> k;
		cout << idx << ' ' << k * (k + 1) / 2 + k << '\n';
	}
}