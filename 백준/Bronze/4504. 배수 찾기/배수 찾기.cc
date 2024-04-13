#include <iostream>
using namespace std;

int main()
{
	int n, a;
	cin >> n;

	while (cin >> a)
	{
		if (a == 0)
		{
			break;
		}

		if (a % n == 0)
		{
			cout << a << " is a multiple of " << n << ".\n";
		}
		else
		{
			cout << a << " is NOT a multiple of " << n << ".\n";
		}
	}
}