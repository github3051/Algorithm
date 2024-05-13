#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double n, b, m;
	
	while (cin >> n >> b >> m)
	{
		int ans = 0;
		while (true)
		{
			if (n > m)
			{
				cout << ans << '\n';
				break;
			}
			
			n = n + n * (b / 100);
			ans += 1;
		}
	}
}
