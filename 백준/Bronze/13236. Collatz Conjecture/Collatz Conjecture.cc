#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n;
	cin >> n;
	while (true)
	{

		cout << n << ' ';
		if (n == 1)
		{
			break;
		}
		else if (n % 2 == 1)
		{
			n = n * 3 + 1;
		}
		else if (n % 2 == 0)
		{
			n /= 2;
		}
	}
}