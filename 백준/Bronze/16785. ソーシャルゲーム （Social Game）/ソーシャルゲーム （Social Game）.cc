#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	
	int ans = 0;
	while (c > 0)
	{
		ans += 1;
		c -= a;
		if (ans % 7 == 0)
		{
			c -= b;
		}
	}
	cout << ans;
}