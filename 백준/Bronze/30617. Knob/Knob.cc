#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
	int t, ans = 0;
	cin >> t;

	int prevL, prevR;
	cin >> prevL >> prevR;
	t -= 1;
	if (prevL == prevR && prevL != 0)
		ans += 1;

	while (t--)
	{
		int currL, currR;
		cin >> currL >> currR;

		if ((currL == prevL && prevL != 0))
			ans += 1;

		if ((currR == prevR && prevR != 0))
			ans += 1;

		if (currL == currR && currR != 0)
			ans += 1;

		prevL = currL;
		prevR = currR;
	}

	cout << ans;
}