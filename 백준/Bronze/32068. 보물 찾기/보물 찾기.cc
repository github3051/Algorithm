#include <iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int l, r, s, ans = 1;
		cin >> l >> r >> s;

		cout << (r - s <= s - l ? 2*(r - s) : 2*(s - l) + 1) << '\n'; // 1 3 5 7 9, 2 4 6 8 10...
	}
}