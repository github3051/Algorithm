#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int a, d, k;
	cin >> a >> d >> k;

	if ((k - a) % d == 0 && (k - a) / d >= 0)
	{
		cout << (k - a) / d + 1;
	}
	else
	{
		cout << 'X';
	}
}