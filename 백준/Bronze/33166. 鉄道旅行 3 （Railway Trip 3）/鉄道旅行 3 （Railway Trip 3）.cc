#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int p, q, a, b;
	cin >> p >> q >> a >> b;

	if (q > p)
	{
		cout << a * p + b * (q - p);
	}
	else
	{
		cout << a * q;
	}
}