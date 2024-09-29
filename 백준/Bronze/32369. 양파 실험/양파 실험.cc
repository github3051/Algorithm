#include <iostream>
using namespace std;

int main()
{
	int n, ad, bd;
	cin >> n >> ad >> bd;
	int a = 1, b = 1;
	while (n--)
	{
		a += ad;
		b += bd;
		if (a == b)
		{
			b -= 1;
		}
		else if (a < b)
		{
			int tmp = b;
			b = a;
			a = tmp;
		}
	}

	cout << a << ' ' << b;
}