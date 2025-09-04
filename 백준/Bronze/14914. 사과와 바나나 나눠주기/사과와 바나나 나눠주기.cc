#include <iostream>
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;

	int bigger = (a > b ? a : b);
	for (int i = 1; i <= bigger; ++i)
	{
		if (a % i == 0 && b % i == 0)
			cout << i << ' ' << a / i << ' ' << b / i << '\n';
	}
}