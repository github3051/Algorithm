#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
	int t,a = 0,b = 0,c = 0;
	cin >> t;
	while (t--)
	{
		int ta, tb, tc;
		cin >> ta >>tb >> tc;
		a += ta;
		b += tb;
		c += tc;
		int mVal = min({ a,b,c });
		if (a / 30 == 0 || b / 30 == 0 || c / 30 == 0)
		{
			cout << "NO";
		}
		else
		{
			cout << mVal;
			a -= mVal;
			b -= mVal;
			c -= mVal;
		}
		cout << '\n';
	}
}