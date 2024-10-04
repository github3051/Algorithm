#include <iostream>
using namespace std;

int main()
{
	while (true)
	{
		long long a, b;
		cin >> a >> b;
		if (a == 0 && b == 0)
		{
			break;
		}

		int ans = (2 * a - b > 2 * b - a ? 2 * b - a : 2 * a - b);

		cout << (ans > (a + b) / 2 ? (a + b) / 2 : ans);
		//if ((a + b) % 2 == 0)
		//{
		//}
		//else
		//{
		//	cout << ans;
		//}
		
		cout << '\n';
	}
}