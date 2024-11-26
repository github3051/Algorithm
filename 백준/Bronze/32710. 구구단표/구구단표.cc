#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n;
	cin >> n;

	if (n == 1)
	{
		cout << 1;
		return 0;
	}

	for (int i = 2; i <= 9; ++i)
	{
		for (int j = 1; j <= 9; ++j)
		{
			if (i * j == n)
			{
				cout << 1;
				return 0;
			}
		}
	}
	cout << 0;
}