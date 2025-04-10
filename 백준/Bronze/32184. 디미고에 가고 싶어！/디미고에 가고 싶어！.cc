#include <iostream>
using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;

	if (a % 2 == 1)
	{
		cout << (b - a + 1) / 2 + (b - a + 1) % 2;
	}
	else
	{
		cout << 1 + (b +1 - (a+1)) / 2 + (b + 1 - (a+1)) % 2;
	}
}