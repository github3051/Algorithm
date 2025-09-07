#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	if (n <= 148)
		cout << 99;
	else
	{
		int small = n / 100 - 1;
		int big = n / 100;
		small = small * 100 + 99;
		big = big * 100 + 99;

		cout << (big - n <= n - small ? big : small);
	}
}