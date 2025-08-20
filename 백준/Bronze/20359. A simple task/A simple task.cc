#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int p = 0;
	while (n%2 == 0)
	{
		n /= 2;
		p += 1;
	}
	cout << n << ' ' << p;
}