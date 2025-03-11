#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	while (true)
	{
		int n;
		cin >> n;

		if (n == -1) { break; }

		int a, b;
		int prev = 0;

		int ans = 0;
		while (n--)
		{
			cin >> a >> b;
			ans += a * (b-prev);
			prev = b;
		}
		cout << ans <<" miles\n";
		
	}
}