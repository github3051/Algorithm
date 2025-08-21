#include <iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int idx, k;
		cin >> idx >> k;
		cout << idx << ' ' << k * (k + 1) / 2 + k << '\n';
	}
}